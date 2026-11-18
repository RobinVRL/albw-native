#include "ghidra_types.h"

extern int func_003F7BE8(int param_1,int param_2);

// USA 003EA524 <- EU 003EA504 (Ghidra, non-matching)

undefined4 func_003EA524(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_r12;
  
  uVar4 = *(undefined4 *)(param_1 + 0x140);
  iVar1 = *(int *)(param_1 + 0x144);
  if (*(int *)(param_1 + 0x14c) == 2) {
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + -1;
    iVar3 = *(int *)(param_1 + 0x13c);
    if (iVar3 != 0) {
      in_r12 = *(int *)(param_1 + 0x140);
    }
    if (iVar3 == 0 || in_r12 == 0) {
      if (*(int *)(iVar1 + 0xe0) != param_1) {
        if (*(int *)(iVar1 + 0xe8) != param_1) goto LAB_003ea61c;
        *(int *)(iVar1 + 0xe8) = iVar3;
        iVar3 = *(int *)(param_1 + 0x13c);
        if (iVar3 == 0) {
          *(undefined4 *)(iVar1 + 0xe0) = 0;
          goto LAB_003ea61c;
        }
        goto LAB_003ea614;
      }
      *(undefined4 *)(iVar1 + 0xe0) = *(undefined4 *)(param_1 + 0x140);
      iVar3 = *(int *)(param_1 + 0x140);
      if (iVar3 == 0) {
        *(undefined4 *)(iVar1 + 0xe8) = 0;
        goto LAB_003ea61c;
      }
      goto LAB_003ea5ec;
    }
LAB_003ea544:
    *(int *)(iVar3 + 0x140) = in_r12;
    uVar2 = *(undefined4 *)(param_1 + 0x13c);
    iVar3 = *(int *)(param_1 + 0x140);
  }
  else {
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
    iVar3 = *(int *)(param_1 + 0x13c);
    if (iVar3 != 0) {
      in_r12 = *(int *)(param_1 + 0x140);
    }
    if (iVar3 != 0 && in_r12 != 0) goto LAB_003ea544;
    if (*(int *)(iVar1 + 0xdc) != param_1) {
      if (*(int *)(iVar1 + 0xe4) != param_1) goto LAB_003ea61c;
      *(int *)(iVar1 + 0xe4) = iVar3;
      iVar3 = *(int *)(param_1 + 0x13c);
      if (iVar3 == 0) {
        *(undefined4 *)(iVar1 + 0xdc) = 0;
        goto LAB_003ea61c;
      }
LAB_003ea614:
      *(undefined4 *)(iVar3 + 0x140) = *(undefined4 *)(param_1 + 0x140);
      goto LAB_003ea61c;
    }
    *(undefined4 *)(iVar1 + 0xdc) = *(undefined4 *)(param_1 + 0x140);
    iVar3 = *(int *)(param_1 + 0x140);
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + 0xe4) = 0;
      goto LAB_003ea61c;
    }
LAB_003ea5ec:
    uVar2 = *(undefined4 *)(param_1 + 0x13c);
  }
  *(undefined4 *)(iVar3 + 0x13c) = uVar2;
LAB_003ea61c:
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(int *)(param_1 + 0x148) != 0) {
    func_003F7BE8(**(int **)(*(int *)(param_1 + 0x144) + 0x18),*(int *)(param_1 + 0x148));
  }
  return uVar4;
}

