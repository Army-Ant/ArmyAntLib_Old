import platform
from ctypes import *

if platform.system() == "Windows":
	try:
		ArmyAnt = windll.LoadLibrary("ArmyAntLibd.dll")
	except:
		ArmyAnt = windll.LoadLibrary("ArmyAntLib.dll")
else:
	try:
		ArmyAnt = windll.LoadLibrary("libArmyAntd.so")
	except:
		ArmyAnt = windll.LoadLibrary("libArmyAnt.so")

