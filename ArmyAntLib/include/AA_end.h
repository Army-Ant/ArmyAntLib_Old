#ifndef A_A_END_2015_11_11
#define A_A_END_2015_11_11

#ifndef ARMYANTLIB_EXPORTS



#ifdef OS_WINDOWS


#ifdef NDEBUG

#ifdef _x86
#pragma comment(lib,"lib\\ArmyAntLib.lib")
#else
#pragma comment(lib,"lib\\ArmyAntLib_64.lib")
#endif

#else	// NDEBUG

#ifdef _x86
#pragma comment(lib,"lib\\ArmyAntLibd.lib")
#else
#pragma comment(lib,"lib\\ArmyAntLibd_64.lib")
#endif

#endif // NDEBUG


#else // OS_WINDOWS
namespace ArmyAnt{


#ifdef NDEBUG

#ifdef _x86
static auto&armyAnt = []() { class ArmyAnt { ArmyAnt() { ptr = dlopen("libArmyAnt.so"); } ~ArmyAnt() { dlclose(ptr); } char*ptr = nullptr; }; static ArmyAnt ret; return ret; };
#else
static auto&armyAnt = []() { class ArmyAnt { ArmyAnt() { ptr = dlopen("libArmyAnt_64.so"); } ~ArmyAnt() { dlclose(ptr); } char*ptr = nullptr; }; static ArmyAnt ret; return ret; };
#endif

#else // NDEBUG

#ifdef _x86
static auto&armyAnt = []() { class ArmyAnt { ArmyAnt() { ptr = dlopen("libArmyAntd.so"); } ~ArmyAnt() { dlclose(ptr); } char*ptr = nullptr; }; static ArmyAnt ret; return ret; };
#else
static auto&armyAnt = []() { class ArmyAnt { ArmyAnt() { ptr = dlopen("libArmyAntd_64.so"); } ~ArmyAnt() { dlclose(ptr); } char*ptr = nullptr; }; static ArmyAnt ret; return ret; };
#endif

#endif // NDEBUG


}
#endif // OS_WINDOWS



#endif // ARMYANTLIB_EXPORTS

#endif // A_A_END_2015_11_11