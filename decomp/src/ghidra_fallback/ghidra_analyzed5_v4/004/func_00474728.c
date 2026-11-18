#include "ghidra_types.h"

extern int func_001B6A48(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_001B6C2C(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);

// USA 00474728 <- EU 00474700 (Ghidra, non-matching)

undefined4 func_00474728(int *param_1,int *param_2,int param_3,int param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int iVar1;
  
  iVar1 = *param_2;
  param_1[0x20] = iVar1;
  param_1[0x21] = param_2[1];
  param_1[0x22] = param_3;
  *(undefined1 *)(param_1 + 0x23) = 1;
  (**(code **)(*param_1 + 0x4c))(param_1);
  func_001B6C2C(param_1,extraout_r1,param_3,iVar1);
  if (param_4 == 0) {
    return func_001B6A48(param_1,extraout_r1_00,param_3,iVar1);
  }
  return 0;
}

