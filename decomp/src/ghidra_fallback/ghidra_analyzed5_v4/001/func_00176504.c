#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00325150(int *param_1);
extern int func_004CEAF0(int param_1);
extern float DAT_0017665c;
extern undefined4 DAT_00176660;

// USA 00176504 <- EU 00176504 (Ghidra, non-matching)
// GLOBAL DAT_0017665c float
// GLOBAL DAT_00176660 undefined4

undefined4 func_00176504(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  
  fVar4 = DAT_0017665c;
  iVar1 = *(int *)(param_1[0x14c] + 0x14);
  if (*(float *)(iVar1 + 8) != DAT_0017665c) {
    *(float *)(iVar1 + 8) = DAT_0017665c;
    *(undefined1 *)(iVar1 + 0x26) = 1;
  }
  uVar2 = *(undefined4 *)(param_1[0x14c] + 0xc);
  *(undefined4 *)(*(int *)(param_1[0x14c] + 0x14) + 0x10) = DAT_00176660;
  func_00169A80((int *)param_1[0x14c],uVar2,param_3,param_4);
  uVar2 = 0;
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
  if (*(float *)(iVar1 + 8) != fVar4) {
    *(float *)(iVar1 + 8) = fVar4;
    *(undefined1 *)(iVar1 + 0x26) = 1;
  }
  uVar3 = *(undefined4 *)(param_1[0x14c] + 0xc);
  *(float *)(*(int *)(param_1[0x14c] + 0x14) + 0x10) = fVar4;
  func_00169A80((int *)param_1[0x14c],uVar3,uVar2,param_4);
  func_00168E9C((int *)param_1[0x14c],param_1[0x14b],(int *)0x0);
  func_004CEAF0(param_1[0x14b]);
  param_1[0x150] = param_1[0x14d];
  param_1[0x151] = param_1[0x14e];
  param_1[0x152] = param_1[0x14f];
  param_1[0x14d] = param_1[0x147];
  param_1[0x14e] = param_1[0x148];
  param_1[0x14f] = param_1[0x149];
  return func_00325150(param_1);
}

