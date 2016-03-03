package ArmyAnt;

import java.lang.String;

public class Java_AANeuron{

	private long c_handle;

	public interface INeuronActive
	{
		public double ActiveFunc(double input);
	}

	public Java_AANeuron(INeuronActive funcInterface, double threshold)
	{
		c_handle = Native_Create(funcInterface, threshold);
	}

	public Java_AANeuron(Java_AANeuron cloner)
	{
		c_handle = Native_Clone(cloner.c_handle);
	}

	protected void finalize()
	{
		Native_Release(c_handle);
	}

	public boolean JoinActive(double input, double weight)
	{
		return Native_JoinActive(c_handle, input, weight);
	}

	public boolean LeaveActive(double input, double weight)
	{
		return Native_LeaveActive(c_handle, input, weight);
	}

	public boolean ClearActive()
	{
		return Native_ClearActive(c_handle);
	}

	public double GetOutput()
	{
		return Native_GetOutput(c_handle);
	}

	public double GetAllActive()
	{
		return Native_GetAllActive(c_handle);
	}

	public boolean SetActiveInterface(INeuronActive funcInterface)
	{
		return Native_SetActiveInterface(c_handle, funcInterface);
	}

	public double GetThreshold()
	{
		return Native_GetThreshold(c_handle);
	}

	public boolean SetThreshold(double threshold)
	{
		return Native_SetThreshold(c_handle, threshold);
	}

	public native static double Liner(double input, double slope, double bias);
	public native static double Ramp(double input, double width, double height);
	public native static double Threshold(double input, double amplitude, double threshold);
	public native static double Sigmoid(double input, double coef);
	public native static double DoubleSigmoid(double input, double coef);

	private native static long Native_Create(INeuronActive funcInterface, double threshold);
	private native static long Native_Clone(long value);
	private native static void Native_Release(long value);

	private native static boolean Native_JoinActive(long value, double input, double weight);
	private native static boolean Native_LeaveActive(long value, double input, double weight);
	private native static boolean Native_ClearActive(long value);
	private native static double Native_GetOutput(long value);
	private native static double Native_GetAllActive(long value);

	private native static boolean Native_SetActiveInterface(long value, INeuronActive funcInterface);
	private native static double Native_GetThreshold(long value);
	private native static boolean Native_SetThreshold(long value, double threshold);

}