#include "ghidra_types.h"

extern int func_00150688(undefined4 param_1,int param_2,undefined2 *param_3);
extern undefined4 DAT_004fae48;
extern float DAT_004fae4c;

// USA 004FAD90 <- EU 004FAD68 (Ghidra, non-matching)
// GLOBAL DAT_004fae48 undefined4
// GLOBAL DAT_004fae4c float

float func_004FAD90(int param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  float in_s0;
  
  piVar6 = (int *)(param_1 + 0x420);
  func_00150688(param_1,*(int *)(param_1 + 0x420),*(undefined2 **)(param_1 + 0x3a0));
  iVar4 = *piVar6;
  if (iVar4 != 0) {
    uVar2 = *(undefined2 *)(iVar4 + 0x32);
    uVar1 = *(undefined1 *)(iVar4 + 0x20);
    *(undefined1 *)(iVar4 + 0x20) = 0;
    *(undefined1 *)(iVar4 + 0x21) = 0x1f;
    *(undefined1 *)(iVar4 + 0x22) = 0xff;
    uVar3 = DAT_004fae48;
    *(undefined1 *)(iVar4 + 0x23) = 0;
    *(undefined4 *)(iVar4 + 0x24) = uVar3;
    *(undefined4 *)(iVar4 + 0x28) = uVar3;
    *(undefined4 *)(iVar4 + 0x2c) = uVar3;
    in_s0 = DAT_004fae4c;
    *(undefined2 *)(iVar4 + 0x30) = 0;
    *(undefined2 *)(iVar4 + 0x32) = 0xffff;
    *(float *)(iVar4 + 0x34) = in_s0;
    *(undefined1 *)(*piVar6 + 0x20) = uVar1;
    *(undefined2 *)(*piVar6 + 0x32) = uVar2;
    iVar4 = *(int *)(param_1 + 0x428);
    if (iVar4 != 0) {
      iVar5 = *(int *)(param_1 + 0x420);
      *(undefined1 *)(iVar4 + 0x20) = *(undefined1 *)(iVar5 + 0x20);
      *(undefined1 *)(iVar4 + 0x21) = *(undefined1 *)(iVar5 + 0x21);
      *(undefined1 *)(iVar4 + 0x22) = *(undefined1 *)(iVar5 + 0x22);
      *(undefined1 *)(iVar4 + 0x23) = *(undefined1 *)(iVar5 + 0x23);
      *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(iVar5 + 0x24);
      *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)(iVar5 + 0x28);
      *(undefined4 *)(iVar4 + 0x2c) = *(undefined4 *)(iVar5 + 0x2c);
      *(undefined2 *)(iVar4 + 0x30) = *(undefined2 *)(iVar5 + 0x30);
      *(undefined2 *)(iVar4 + 0x32) = *(undefined2 *)(iVar5 + 0x32);
      *(undefined4 *)(iVar4 + 0x34) = *(undefined4 *)(iVar5 + 0x34);
    }
  }
  return in_s0;
}

