#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_0025B66C(int param_1,float fparam_0);
extern int func_0025B874(undefined4 *param_1);
extern int func_00587EB4(int param_1,int param_2,undefined4 param_3,undefined4 *param_4);
extern int *DAT_00539a44;
extern float DAT_00539a48;

// USA 005399F8 <- EU 005399D0 (Ghidra, non-matching)
// GLOBAL DAT_00539a44 int *
// GLOBAL DAT_00539a48 float

undefined4 func_005399F8(int *param_1,int param_2,int param_3)

{
  _Alignas(8) unsigned char albw_frame[0x70];
  #define auStack_70 ((undefined4 *)(albw_frame + 0x0))
  if (param_2 != -1) {
    if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00539a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      return (**(code **)(*param_1 + 0x14))(param_1,param_2);
    }
    func_0010A464(auStack_70);
    func_00587EB4(*DAT_00539a44,param_2,param_3,auStack_70);
    func_0025B66C((int)auStack_70,DAT_00539a48);
    func_0025B874(auStack_70);
  }
  return 0;
}

