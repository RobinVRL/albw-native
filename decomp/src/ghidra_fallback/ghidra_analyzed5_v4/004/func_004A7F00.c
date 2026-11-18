#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int *DAT_004a8000;
extern undefined4 DAT_004a8004;

// USA 004A7F00 <- EU 004A7ED8 (Ghidra, non-matching)
// GLOBAL DAT_004a8000 int *
// GLOBAL DAT_004a8004 undefined4

undefined4 func_004A7F00(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
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
    piVar2 = (int *)(param_1 + 0xc4);
    iVar3 = *(int *)(param_2 + 0x3c);
    if (param_3 < 6) {
      piVar2 = piVar2 + param_3 * 3;
    }
  }
  else {
    iVar3 = *(int *)(param_2 + 0x3c);
    iVar1 = *(int *)(*DAT_004a8000 + 0x38) + 0x183c +
            (int)*(short *)(param_2 + 0x2c) * (int)(short)DAT_004a8004 * 4;
    piVar2 = (int *)(iVar1 + 0x4b4);
    if (param_3 < 6) {
      piVar2 = (int *)(iVar1 + 0x4b4 + param_3 * 0xc);
    }
  }
  if (iVar3 != 0) {
    *(undefined4 *)(param_2 + 0x3c) = 0;
    func_0010F1F8((int *)(param_2 + 0x30),in_s0);
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + -1;
  }
  *(int **)(param_2 + 0x3c) = piVar2;
  func_0010F1DC(piVar2,(int *)(param_2 + 0x30));
  piVar2[2] = piVar2[2] + 1;
  return ALBW_AS_U32(in_s0);
}

