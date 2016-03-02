package ArmyAnt;

import java.lang.String;

public class Java_AAFile{
	
	private long c_handle;
	
	public Java_AAFile()
	{
		c_handle = Native_Create();
	}
	
	Finalizer()
	{
		Native_Release(c_handle);
	}
	
	public boolean SetMode(boolean nocreate, boolean noexist)
	{
		return Native_SetMode(c_handle, nocreate, noexist);
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