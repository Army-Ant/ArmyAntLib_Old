package ArmyAnt;

import java.lang.String;

public class Java_AANeuron{

public interface INeuronActive{
public double ActiveFunc(double input);
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