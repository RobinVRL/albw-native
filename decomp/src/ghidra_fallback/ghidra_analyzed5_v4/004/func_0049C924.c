#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_0049F434(int *param_1,int param_2,undefined *param_3);
extern undefined *DAT_0049cacc;

// USA 0049C924 <- EU 0049C8FC (Ghidra, non-matching)
// GLOBAL DAT_0049cacc undefined *

int func_0049C924(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float in_s0;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return *(int *)(param_1 + 0x20);
  }
  iVar4 = 0;
  if ((*(uint *)(param_1 + 0x70) & 1) != 0) {
    func_0010C0B8(param_1 + 0x54);
    iVar4 = param_1 + 0x54;
  }
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0049F434((int *)(param_1 + 0x88),*(int *)(param_1 + 0x94),DAT_0049cacc);
    if ((*(int *)(param_1 + 0x80) < 1) || (*(int *)(param_1 + 0x78) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x84);
    }
    if ((*(int *)(param_1 + 0x90) < 1) || (*(int *)(param_1 + 0x88) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x94);
    }
    if ((uVar3 < uVar1) && (uVar1 != 0)) {
      iVar5 = uVar1 - *(int *)(param_1 + 0x1c);
      func_0010F1F8((int *)(uVar1 + *(int *)(param_1 + 0x84)),in_s0);
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
      iVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 0x24))
                        (*(int **)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x1c),iVar5);
      if (iVar2 != 0) {
        *(int *)(param_1 + 0x20) = iVar5;
        goto LAB_0049cab0;
      }
    }
  }
  else {
    func_0049F434((int *)(param_1 + 0x88),*(int *)(param_1 + 0x94),DAT_0049cacc);
    if ((*(int *)(param_1 + 0x80) < 1) || (*(int *)(param_1 + 0x7c) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x84);
    }
    if ((*(int *)(param_1 + 0x90) < 1) || (*(int *)(param_1 + 0x8c) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x94);
    }
    if ((uVar1 < uVar3) && (uVar1 != 0)) {
      iVar5 = (*(int *)(param_1 + 0x20) - (*(int *)(uVar1 + 0xc) + *(int *)(uVar1 + 8))) + -0x10;
      func_0010F1F8((int *)(uVar1 + *(int *)(param_1 + 0x84)),in_s0);
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
      iVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 0x20))
                        (*(int **)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x1c),iVar5);
      if (iVar2 != 0) {
        *(int *)(param_1 + 0x1c) = iVar2;
        *(int *)(param_1 + 0x20) = iVar5;
        goto LAB_0049cab0;
      }
    }
  }
  iVar5 = *(int *)(param_1 + 0x20);
LAB_0049cab0:
  if (iVar4 != 0) {
    func_0010EEE0(iVar4);
  }
  return iVar5;
}

