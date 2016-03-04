package ArmyAnt;

import java.lang.String;

public class Java_AAFile{
	
	private long c_handle;

	public enum StreamType
	{
		None,
		File,
		Memory,
		NamePipe,
		ComData,
		Network
	}
	
	public Java_AAFile()
	{
		c_handle = Native_Create();
	}
	
	protected void finalize()
	{
		Native_Release(c_handle);
	}
	
	public boolean SetMode(boolean nocreate, boolean noexist)
	{
		return Native_SetMode(c_handle, nocreate, noexist);
	}

	public boolean IsOpened()
	{
		return Native_IsOpened(c_handle);
	}

	public StreamType NowType()
	{
		return StreamType.values()[(int)Native_NowType(c_handle)];
	}

	public boolean Open(String filename)
	{
		return Native_OpenFile(c_handle, filename);
	}

	public boolean Open(long memaddr, int len)
	{
		return Native_OpenMemoryByAddr(c_handle, memaddr, len);
	}

	public boolean Open(String pipename, String pipepath, String pipeserver)
	{
		return Native_OpenNamePipe(c_handle, pipename, pipepath, pipeserver);
	}

	public boolean Open(short comNum)
	{
		return Native_OpenCom(c_handle, comNum);
	}

	public boolean Open(String netAddr,short protocol)
	{
		return Native_OpenNetWithName(c_handle, netAddr, protocol);
	}

	public boolean Open(long netIp, int port, short protocol)
	{
		return Native_OpenNetWithAddr(c_handle, netIp, port, protocol);
	}

	public boolean Close()
	{
		return Native_Close(c_handle);
	}

	public long GetLength()
	{
		return Native_GetLength(c_handle);
	}

	public long GetPos()
	{
		return Native_GetPos(c_handle);
	}

	public boolean IsEndPos()
	{
		return Native_IsEndPos(c_handle);
	}

	public boolean MovePos(long targetPos)
	{
		return Native_MovePos(c_handle, targetPos);
	}

	public String GetStringName()
	{
		return Native_GetStreamName(c_handle);
	}

	public long Read(byte[]buffer, long pos, long len)
	{
		return Native_ReadSome(c_handle, buffer, pos, len);
	}

	public long Read(byte[] buffer, short endtag)
	{
		return Native_ReadTo(c_handle, buffer, endtag, 0xffffffff);
	}

	public long Write(byte[] buffer, long len)
	{
		return Native_Write(c_handle, buffer, len);
	}
	
	private native static long Native_Create();
	private native static void Native_Release(long stream);
	private native static boolean Native_SetMode(long stream, boolean nocreate, boolean noexist);

	private native static boolean Native_OpenFile(long stream, String filename);
	private native static boolean Native_OpenMemoryByAddr(long stream,long memaddr,int len);
	private native static boolean Native_OpenNamePipe(long stream,String pipename,String pipepath,String pipeserver);
	private native static boolean Native_OpenCom(long stream,short comNum);
	private native static boolean Native_OpenNetWithName(long stream,String netAddr,short protocol);
	private native static boolean Native_OpenNetWithAddr(long stream,long netIp, int port, short protocol);
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