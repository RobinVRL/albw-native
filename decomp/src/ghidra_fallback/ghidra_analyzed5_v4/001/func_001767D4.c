#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00325150(int *param_1);
extern int func_004CEAF0(int param_1);
extern int func_00658EE0(undefined4 *param_1,undefined1 param_2);
extern float DAT_0017689c;

// USA 001767D4 <- EU 001767D4 (Ghidra, non-matching)
// GLOBAL DAT_0017689c float

void func_001767D4(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  func_00169A80((int *)param_1[0x14c],param_2,param_3,param_4);
  func_00168E9C((int *)param_1[0x14c],param_1[0x14b],(int *)0x0);
  func_004CEAF0(param_1[0x14b]);
  param_1[0x150] = param_1[0x14d];
  param_1[0x151] = param_1[0x14e];
  param_1[0x152] = param_1[0x14f];
  param_1[0x14d] = param_1[0x147];
  param_1[0x14e] = param_1[0x148];
  param_1[0x14f] = param_1[0x149];
  func_00325150(param_1);
  iVar1 = *(int *)(param_1[0x14c] + 0x14);
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    if (*(float *)(iVar1 + 0x10) < DAT_0017689c) {
      if (DAT_0017689c < *(float *)(iVar1 + 8)) {
        return;
      }
    }
    else if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) {
      return;
    }
    func_00658EE0(param_1 + 0x13c,2);
  }
  return;
}

