import platform
from ctypes import *

#ArmyAnt.py

print(platform.architecture()[0])
if platform.architecture()[0]=="32bit":
	if platform.system() == "Windows":
		try:
			lib = cdll.LoadLibrary("ArmyAntLibd.dll")
		except:
			lib = cdll.LoadLibrary("ArmyAntLib.dll")
	else:
		try:
			lib = cdll.LoadLibrary("libArmyAntd.so")
		except:
			lib = cdll.LoadLibrary("libArmyAnt.so")
else:
	if platform.system() == "Windows":
		try:
			lib = cdll.LoadLibrary("ArmyAntLibd_64.dll")
		except:
			lib = cdll.LoadLibrary("ArmyAntLib_64.dll")
	else:
		try:
			lib = cdll.LoadLibrary("libArmyAntd_64.so")
		except:
			lib = cdll.LoadLibrary("libArmyAnt_64.so")


