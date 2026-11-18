#include "ghidra_types.h"

extern int func_0010CE7C(undefined4 *param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined4 DAT_0048c8f0;

// USA 0048C7F8 <- EU 0048C7D0 (Ghidra, non-matching)
// GLOBAL DAT_0048c8f0 undefined4

undefined4 func_0048C7F8(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x1c))(*(int **)(param_1 + 4));
    (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),uVar1);
    puVar2 = (undefined4 *)func_0010CF28(0x1c,*(int **)(param_1 + 0xc),4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      uVar7 = *(undefined4 *)(param_1 + 0xc);
      puVar3 = func_0010CE7C(puVar2);
      uVar1 = DAT_0048c8f0;
      puVar3[4] = 0;
      *puVar3 = uVar1;
      puVar3[6] = uVar7;
      puVar3[5] = 0;
    }
    *(undefined4 **)(param_1 + 8) = puVar3;
    uVar4 = (**(code **)(**(int **)(param_1 + 4) + 0xc))(*(int **)(param_1 + 4));
    iVar8 = *(int *)(param_1 + 8);
    if (uVar4 == 0) {
      uVar4 = 1;
    }
    uVar5 = (**(code **)(**(int **)(iVar8 + 0x18) + 0x3c))(*(int **)(iVar8 + 0x18),0x20);
    if (uVar4 <= uVar5) {
      if ((0 < (int)uVar4) &&
         (iVar6 = func_0010CEE0(uVar4,*(int **)(iVar8 + 0x18),0x20), iVar6 != 0)) {
        *(uint *)(iVar8 + 0x10) = uVar4;
        *(int *)(iVar8 + 0x14) = iVar6;
      }
      (**(code **)(**(int **)(param_1 + 4) + 0x10))
                (*(int **)(param_1 + 4),*(undefined4 *)(*(int *)(param_1 + 8) + 0x14),
                 *(undefined4 *)(*(int *)(param_1 + 8) + 0x10));
      return 1;
    }
    if (*(int **)(param_1 + 8) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 8) + 4))(*(int **)(param_1 + 8));
    }
    uVar1 = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

