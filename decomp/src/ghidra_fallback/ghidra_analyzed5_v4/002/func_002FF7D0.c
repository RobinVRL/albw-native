#include "ghidra_types.h"

extern int func_0048C320(int *param_1,int param_2,int param_3);

// USA 002FF7D0 <- EU 002FF7AC (Ghidra, non-matching)

/* WARNING: Removing unreachable block (ram,0x002ff860) */

void func_002FF7D0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int in_r3;
  
  uVar4 = *(uint *)(param_1 + 0x178);
  if ((int)uVar4 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = uVar4 & 1;
    if (uVar3 != 0) {
      in_r3 = *(int *)(param_1 + 0x180);
    }
    uVar1 = 0;
    if (uVar3 != 0) {
      do {
        if (*(int *)(in_r3 + uVar1 * 4) == param_2) goto LAB_002ff82c;
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < (int)uVar3);
    }
  }
  uVar1 = uVar3;
  if ((int)uVar1 < (int)uVar4) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x180) + uVar1 * 4) == param_2) goto LAB_002ff82c;
      if (*(int *)(*(int *)(param_1 + 0x180) + uVar1 * 4 + 4) == param_2) {
        uVar1 = uVar1 + 1;
        goto LAB_002ff82c;
      }
      uVar1 = uVar1 + 2;
    } while ((int)uVar1 < (int)uVar4);
  }
LAB_002ff844:
  if (*(int *)(param_1 + 0x184) == param_2) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x178) != 0) {
      uVar2 = **(undefined4 **)(param_1 + 0x180);
    }
    *(undefined4 *)(param_1 + 0x184) = uVar2;
  }
  return;
LAB_002ff82c:
  if (-1 < (int)uVar1 && (int)uVar1 <= (int)uVar4) {
    func_0048C320((int *)(param_1 + 0x178),uVar1,1);
  }
  goto LAB_002ff844;
}

