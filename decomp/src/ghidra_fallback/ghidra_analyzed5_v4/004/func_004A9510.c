#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_0049F6DC(int param_1,int *param_2);
extern int *DAT_004a9610;
extern undefined4 DAT_004a9614;

// USA 004A9510 <- EU 004A94E8 (Ghidra, non-matching)
// GLOBAL DAT_004a9610 int *
// GLOBAL DAT_004a9614 undefined4

void func_004A9510(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float in_s0;
  
  *(uint *)(param_2 + 0x1c) = param_3;
  iVar3 = *(int *)(param_2 + 0x10);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar3 + 4);
    *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(iVar3 + 8);
    *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(iVar3 + 0xc);
    *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar3 + 4);
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar3 + 8);
    *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(iVar3 + 0xc);
  }
  iVar3 = *(int *)(param_2 + 0x18);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar3 + 4);
    *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(iVar3 + 8);
    *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(iVar3 + 0xc);
    *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar3 + 4);
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar3 + 8);
    *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(iVar3 + 0xc);
  }
  if (*(short *)(param_2 + 0x2c) < 0) {
    iVar2 = param_1 + 0xc4;
    iVar3 = *(int *)(param_2 + 0x3c);
    if (param_3 < 6) {
      iVar2 = iVar2 + param_3 * 0xc;
    }
  }
  else {
    iVar3 = *(int *)(param_2 + 0x3c);
    iVar1 = *(int *)(*DAT_004a9610 + 0x38) + 0x183c +
            (int)*(short *)(param_2 + 0x2c) * (int)(short)DAT_004a9614 * 4;
    iVar2 = iVar1 + 0x4b4;
    if (param_3 < 6) {
      iVar2 = iVar1 + 0x4b4 + param_3 * 0xc;
    }
  }
  if (iVar3 != 0) {
    *(undefined4 *)(param_2 + 0x3c) = 0;
    func_0010F1F8((int *)(param_2 + 0x30),in_s0);
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + -1;
  }
  *(int *)(param_2 + 0x3c) = iVar2;
  func_0049F6DC(iVar2,(int *)(param_2 + 0x30));
  *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  return;
}

