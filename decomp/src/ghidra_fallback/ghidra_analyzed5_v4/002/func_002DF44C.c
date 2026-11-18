#include "ghidra_types.h"

extern int func_0048C320(int *param_1,int param_2,int param_3);

// USA 002DF44C <- EU 002DF428 (Ghidra, non-matching)

void func_002DF44C(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int in_r12;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  if ((int)uVar3 < 1) {
    uVar2 = 0;
  }
  else {
    uVar1 = uVar3 & 1;
    if (uVar1 != 0) {
      in_r12 = *(int *)(param_1 + 0x20);
    }
    uVar2 = uVar1;
    uVar4 = 0;
    if (uVar1 != 0) {
      do {
        uVar2 = uVar4;
        if (*(int *)(in_r12 + uVar2 * 4) == param_2) goto LAB_002df4a8;
        uVar4 = uVar2 + 1;
        uVar2 = uVar1;
      } while ((int)uVar4 < (int)uVar1);
    }
  }
  if ((int)uVar2 < (int)uVar3) {
    while (*(int *)(*(int *)(param_1 + 0x20) + uVar2 * 4) != param_2) {
      if (*(int *)(*(int *)(param_1 + 0x20) + uVar2 * 4 + 4) == param_2) {
        uVar2 = uVar2 + 1;
        break;
      }
      uVar2 = uVar2 + 2;
      if ((int)uVar3 <= (int)uVar2) {
        return;
      }
    }
LAB_002df4a8:
    if (-1 < (int)uVar2) {
      func_0048C320((int *)(param_1 + 0x18),uVar2,1);
      *(bool *)(param_1 + 0x14) = *(int *)(param_1 + 0x18) != 0;
    }
  }
  return;
}

