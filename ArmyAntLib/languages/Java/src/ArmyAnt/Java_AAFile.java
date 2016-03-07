/*  
 * Copyright (c) 2015 ArmyAnt
 * 版权所有 (c) 2015 ArmyAnt
 *
 * Licensed under the BSD License, Version 2.0 (the License); 
 * 本软件使用BSD协议保护, 协议版本:2.0
 * you may not use this file except in compliance with the License. 
 * 使用本开源代码文件的内容, 视为同意协议
 * You can read the license content in the file "ARMYANT.COPYRIGHT.BSD_LICENSE.MD" at the root of this project
 * 您可以在本项目的根目录找到名为"ARMYANT.COPYRIGHT.BSD_LICENSE.MD"的文件, 来阅读协议内容
 * You may also obtain a copy of the License at 
 * 您也可以在此处获得协议的副本:
 * 
 *     http://en.wikipedia.org/wiki/BSD_licenses
 * 
 * Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an AS IS BASIS, 
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
 * 除非法律要求或者版权所有者书面同意,本软件在本协议基础上的发布没有任何形式的条件和担保,无论明示的或默许的.
 * See the License for the specific language governing permissions and limitations under the License. 
 * 请在特定限制或语言管理权限下阅读协议
 * This file is the internal source file of this project, is not contained by the closed source release part of this software
 * 本文件为内部源码文件, 不会包含在闭源发布的本软件中
 */

/**
 * Created by Jason Zhao in Mar 2nd, 2016
 * @author Jason Zhao
 */
package ArmyAnt;

import java.lang.String;

public class Java_AAFile {

	static {
		if (java.lang.System.getProperty("os.arch") == "x86")
			java.lang.System.loadLibrary("ArmyAnt");
		else
			java.lang.System.loadLibrary("ArmyAnt_64");
	}

	private long c_handle;

	/**
	 * The enumeration about stream type
	 */
	public enum StreamType {
		None,
		File,
		Memory,
		NamePipe,
		ComData,
		Network
	}

	/**
	 * Constructor
	 */
	public Java_AAFile() {
		c_handle = Native_Create();
	}

	/**
	 * Destructor. Used to clean core memories.		析构函数,用于释放内核句柄及内存
	 */
	protected void finalize() {
		Native_Release(c_handle);
	}

	/**
	 * Set open rules. You should call this before opening. The two items cannot be both true. For memory, com or network, this function is useless, "nocreate" is always true<br>
	 * 设定打开规则,必须在打开前调用才能生效. 两项不可以同时为true,串口,网络,内存此项函数不起作用, nocreate恒为true
	 * @param nocreate 是否禁止创建新流(新文件,新命名管道), 若此项设为true, 则目标不存在时, 报错.
	 * @param noexist 是否禁止已存在的流(禁止覆盖),若此项为true, 则目标已存在时,报错.
     * @return
     */
	public boolean SetMode(boolean nocreate, boolean noexist) {
		return Native_SetMode(c_handle, nocreate, noexist);
	}

	public boolean IsOpened() {
		return Native_IsOpened(c_handle);
	}

	public StreamType NowType() {
		return StreamType.values()[(int) Native_NowType(c_handle)];
	}

	public boolean Open(String filename) {
		return Native_OpenFile(c_handle, filename);
	}

	public boolean Open(long memaddr, int len) {
		return Native_OpenMemoryByAddr(c_handle, memaddr, len);
	}

	public boolean Open(String pipename, String pipepath, String pipeserver) {
		return Native_OpenNamePipe(c_handle, pipename, pipepath, pipeserver);
	}

	public boolean Open(short comNum) {
		return Native_OpenCom(c_handle, comNum);
	}

	public boolean Open(String netAddr, short protocol) {
		return Native_OpenNetWithName(c_handle, netAddr, protocol);
	}

	public boolean Open(long netIp, int port, short protocol) {
		return Native_OpenNetWithAddr(c_handle, netIp, port, protocol);
	}

	public boolean Close() {
		return Native_Close(c_handle);
	}

	public long GetLength() {
		return Native_GetLength(c_handle);
	}

	public long GetPos() {
		return Native_GetPos(c_handle);
	}

	public boolean IsEndPos() {
		return Native_IsEndPos(c_handle);
	}

	public boolean MovePos(long targetPos) {
		return Native_MovePos(c_handle, targetPos);
	}

	public String GetStringName() {
		return Native_GetStreamName(c_handle);
	}

	public long Read(byte[] buffer, long pos, long len) {
		return Native_ReadSome(c_handle, buffer, pos, len);
	}

	public long Read(byte[] buffer, short endtag) {
		return Native_ReadTo(c_handle, buffer, endtag, 0xffffffff);
	}

	public long Write(byte[] buffer, long len) {
		return Native_Write(c_handle, buffer, len);
	}

	private native static long Native_Create();

	private native static void Native_Release(long stream);

	private native static boolean Native_SetMode(long stream, boolean nocreate, boolean noexist);

	private native static boolean Native_OpenFile(long stream, String filename);

	private native static boolean Native_OpenMemoryByAddr(long stream, long memaddr, int len);

	private native static boolean Native_OpenNamePipe(long stream, String pipename, String pipepath, String pipeserver);

	private native static boolean Native_OpenCom(long stream, short comNum);

	private native static boolean Native_OpenNetWithName(long stream, String netAddr, short protocol);

	private native static boolean Native_OpenNetWithAddr(long stream, long netIp, int port, short protocol);

	private native static boolean Native_Close(long stream);

	private native static boolean Native_IsOpened(long stream);

	private native static long Native_NowType(long stream);

	private native static long Native_GetLength(long stream);

	private native static long Native_GetPos(long stream);

	private native static boolean Native_IsEndPos(long stream);

	private native static boolean Native_MovePos(long stream, long pos);

	private native static String Native_GetStreamName(long stream);

	private native static long Native_ReadSome(long stream, byte[] buffer, long pos, long len);

	private native static long Native_ReadTo(long stream, byte[] buffer, short endtag, long maxlen);

	private native static long Native_Write(long stream, byte[] buffer, long len);

	private native static boolean Native_CopyFile(String srcPath, String dstPath);

	private native static boolean Native_MoveOrRenameFile(String srcPath, String dstPath);

	private native static boolean Native_DeleteFile(String path);

	private native static boolean Native_IsFileExist(String path);

}