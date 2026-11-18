#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_003249B4(int param_1);
extern int func_00325150(int *param_1);
extern int func_004CEAF0(int param_1);
extern undefined4 DAT_001764fc;
extern undefined4 DAT_00176500;

// USA 00176418 <- EU 00176418 (Ghidra, non-matching)
// GLOBAL DAT_001764fc undefined4
// GLOBAL DAT_00176500 undefined4

void func_00176418(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1[0x14c] + 0x14);
  if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) {
    *(float *)(iVar1 + 8) = *(float *)(iVar1 + 0x14);
    *(undefined1 *)(iVar1 + 0x26) = 1;
  }
  uVar2 = *(undefined4 *)(param_1[0x14c] + 0xc);
  *(undefined4 *)(*(int *)(param_1[0x14c] + 0x14) + 0x10) = DAT_001764fc;
  func_00169A80((int *)param_1[0x14c],uVar2,param_3,param_4);
  func_00168E9C((int *)param_1[0x14c],param_1[0x14b],(int *)0x0);
  func_004CEAF0(param_1[0x14b]);
  param_1[0x150] = param_1[0x14d];
  param_1[0x151] = param_1[0x14e];
  param_1[0x152] = param_1[0x14f];
  param_1[0x14d] = param_1[0x147];
  param_1[0x14e] = param_1[0x148];
  param_1[0x14f] = param_1[0x149];
  func_00325150(param_1);
  func_003249B4((int)param_1);
  iVar1 = *(int *)(param_1[0x14c] + 0x14);
  if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) {
    *(float *)(iVar1 + 8) = *(float *)(iVar1 + 0x14);
    *(undefined1 *)(iVar1 + 0x26) = 1;
  }
  *(undefined4 *)(*(int *)(param_1[0x14c] + 0x14) + 0x10) = DAT_00176500;
  *(undefined1 *)(param_1 + 0x133) = 1;
  return;
}

