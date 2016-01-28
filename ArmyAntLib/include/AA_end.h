#ifndef A_A_END_2015_11_11
#define A_A_END_2015_11_11

#ifndef ARMYANTLIB_EXPORTS
#ifdef OS_WINDOWS
#ifdef NDEBUG
#pragma comment(lib,"lib\\ArmyAntLib.lib")
#else	// NDEBUG
#pragma comment(lib,"lib\\ArmyAntLibd.lib")
#endif // NDEBUG
#else // OS_WINDOWS
namespace ArmyAnt{
#ifdef NDEBUG
static auto&armyAnt = [](){class ArmyAnt{ArmyAnt(){ptr = dlopen("libArmyAnt.so");} ~ArmyAnt(){dlclose(ptr);} char*ptr = nullptr;}; static ArmyAnt ret; return ret;};
#else // NDEBUG
static auto&armyAnt = [](){class ArmyAnt{ArmyAnt(){ptr = dlopen("libArmyAntd.so");} ~ArmyAnt(){dlclose(ptr);} char*ptr = nullptr;}; static ArmyAnt ret; return ret;};
#endif // NDEBUG
}
#endif // OS_WINDOWS
#endif // ARMYANTLIB_EXPORTS

#endif // A_A_END_2015_11_11