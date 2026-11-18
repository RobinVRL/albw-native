#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_0011558C(float *param_1,float *param_2);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern float *DAT_0026ed50;
extern float DAT_0026ed54;
extern int *DAT_0026ed58;
extern int *DAT_0026ed5c;

// USA 0026EC7C <- EU 0026ECA4 (Ghidra, non-matching)
// GLOBAL DAT_0026ed50 float *
// GLOBAL DAT_0026ed54 float
// GLOBAL DAT_0026ed58 int *
// GLOBAL DAT_0026ed5c int *

undefined4 func_0026EC7C(int *param_1)

{
  int *piVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define iStack_14 (*(int *)(albw_frame + 0xc))
  #define iStack_10 (*(int *)(albw_frame + 0x10))
  func_00115D70(&local_18,DAT_0026ed50,DAT_0026ed54);
  param_1[0x11] = (int)ALBW_AS_U32(local_18);
  param_1[0x12] = iStack_14;
  param_1[0x13] = iStack_10;
  piVar1 = DAT_0026ed58;
  param_1[0x14] = *DAT_0026ed58;
  param_1[0x15] = piVar1[1];
  param_1[0x16] = piVar1[2];
  piVar1 = DAT_0026ed5c;
  param_1[0x17] = *DAT_0026ed5c;
  param_1[0x18] = piVar1[1];
  param_1[0x19] = piVar1[2];
  func_00115DC8((float *)(param_1 + 0x17));
  (**(code **)(param_1[4] + 0x10))(param_1 + 4,param_1 + 5);
  func_001151EC(param_1 + 0x71,param_1 + 5);
  func_0011558C((float *)(param_1 + 0x48),(float *)(param_1 + 5));
                    /* WARNING: Could not recover jumptable at 0x0026ed4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x28))(param_1);
}

