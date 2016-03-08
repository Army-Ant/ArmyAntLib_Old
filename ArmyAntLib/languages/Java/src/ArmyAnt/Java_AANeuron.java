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

public class Java_AANeuron {

	static {
		if (java.lang.System.getProperty("os.name").indexOf("windows")>=0||java.lang.System.getProperty("os.name").indexOf("Windows")>=0)  {
			if (java.lang.System.getProperty("os.arch") == "x86")
				java.lang.System.loadLibrary("ArmyAntLibd");
			else
				java.lang.System.loadLibrary("ArmyAntLibd_64");
		}
		else{
			if (java.lang.System.getProperty("os.arch") == "x86")
				java.lang.System.loadLibrary("ArmyAntd");
			else
				java.lang.System.loadLibrary("ArmyAntd_64");
		}
	}

	private long c_handle;

	/**
	 * The interface for neuron activation function <br>
	 * 神经元数据的激活函数所需接口<br>
	 */
	public interface INeuronActive {
		double ActiveFunc(double input);
	}

	/**
	 * Constructor for class Java_AANeuron	本类的构造函数
	 * @param funcInterface The activation function interface object.	包含激活函数的接口
	 * @param threshold The active threshold.		激活阀值
     */
	public Java_AANeuron(INeuronActive funcInterface, double threshold) {
		c_handle = Native_Create(funcInterface, threshold);
	}

	/**
	 * Clone constructor.	本类的拷贝构造函数
	 * @param cloner Target object to be cloned.		要拷贝的目标
     */
	public Java_AANeuron(Java_AANeuron cloner) {
		c_handle = Native_Clone(cloner.c_handle);
	}

	/**
	 * Destructor. Used to clean core memories.		析构函数,用于释放内核句柄及内存
	 */
	protected void finalize() throws Throwable {
		Native_Release(c_handle);
		super.finalize();
	}

	/**
	 * Input an activation.	传入激活信号
	 * @param input
	 * @param weight
     * @return Returns true if succeed
     */
	public boolean JoinActive(double input, double weight) {
		return Native_JoinActive(c_handle, input, weight);
	}

	/**
	 * Cancel an activation.	撤除激活信号
	 * @param input
	 * @param weight
     * @return Returns true if succeed
     */
	public boolean LeaveActive(double input, double weight) {
		return Native_LeaveActive(c_handle, input, weight);
	}

	/**
	 * Cancel all activations.	清空所有信号
	 * @return Returns true if succeed
     */
	public boolean ClearActive() {
		return Native_ClearActive(c_handle);
	}

	/**
	 * Get the result output.	计算激活输出
	 * @return
     */
	public double GetOutput() {
		return Native_GetOutput(c_handle);
	}

	/**
	 * Get the total input value.	计算传入信号的权值数总和
	 * @return
     */
	public double GetAllActive() {
		return Native_GetAllActive(c_handle);
	}

	/**
	 * Set new activation function.	更改激活函数(接口)
	 * @param funcInterface
	 * @return Returns true if succeed
     */
	public boolean SetActiveInterface(INeuronActive funcInterface) {
		return Native_SetActiveInterface(c_handle, funcInterface);
	}

	/**
	 * Get the activation threshold.	查看激活阀值
	 * @return
     */
	public double GetThreshold() {
		return Native_GetThreshold(c_handle);
	}

	/**
	 * Set the activation threshold.	更改激活阀值
	 * @param threshold
	 * @return Returns true if succeed
     */
	public boolean SetThreshold(double threshold) {
		return Native_SetThreshold(c_handle, threshold);
	}

	/**
	 * Liner function.	线性函数	return = input * slope + bias
	 * @param input 输入值
	 * @param slope 斜率
	 * @param bias 偏置
     * @return
     */
	public native static double Liner(double input, double slope, double bias);

	/**
	 * Ramp function.	斜坡函数
	 * @param input 输入值
	 * @param width 斜坡宽度
	 * @param height 斜坡高度
     * @return
     */
	public native static double Ramp(double input, double width, double height);

	/**
	 * Step function(THreshold function).	阶跃函数(阀值函数)
	 * @param input 输入值
	 * @param amplitude 阶跃高度
	 * @param threshold 阶跃点
     * @return
     */
	public native static double Threshold(double input, double amplitude, double threshold);

	/**
	 * Sigmoid function.	S形函数
	 * @param input 输入值
	 * @param coef S形系数
     * @return
     */
	public native static double Sigmoid(double input, double coef);

	/**
	 * Double sigmoid function.	双S形函数
	 * @param input 输入值
	 * @param coef S形系数
     * @return
     */
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