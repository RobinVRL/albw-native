#include "ghidra_types.h"

extern int func_0048C320(int *param_1,int param_2,int param_3);
extern int func_004B9528(int param_1,int param_2);

// USA 0014D02C <- EU 0014D02C (Ghidra, non-matching)

undefined4 func_0014D02C(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int in_r3;
  bool bVar5;
  
  uVar4 = *(uint *)(param_1 + 0x38);
  if ((int)uVar4 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = uVar4 & 1;
    if (uVar3 != 0) {
      in_r3 = *(int *)(param_1 + 0x40);
    }
    uVar1 = 0;
    if (uVar3 != 0) {
      do {
        if (*(int *)(in_r3 + uVar1 * 4) == param_2) goto LAB_0014d0ac;
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < (int)uVar3);
    }
  }
  uVar1 = uVar3;
  if ((int)uVar1 < (int)uVar4) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x40) + uVar1 * 4) == param_2) goto LAB_0014d0ac;
      if (*(int *)(*(int *)(param_1 + 0x40) + uVar1 * 4 + 4) == param_2) {
        uVar1 = uVar1 + 1;
        goto LAB_0014d0ac;
      }
      uVar1 = uVar1 + 2;
    } while ((int)uVar1 < (int)uVar4);
  }
LAB_0014d0c0:
  bVar5 = *(char *)(param_1 + 0xc4) != '\0';
  iVar2 = 0;
  if (bVar5) {
    iVar2 = *(int *)(param_1 + 0x10);
  }
  if (bVar5 && iVar2 != 0) {
    return func_004B9528(iVar2,param_2);
  }
  return 0;
LAB_0014d0ac:
  if (-1 < (int)uVar1) {
    func_0048C320((int *)(param_1 + 0x38),uVar1,1);
  }
  goto LAB_0014d0c0;
}

