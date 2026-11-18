#include "ghidra_types.h"


// USA 0016C42C <- EU 0016C42C (Ghidra, non-matching)

void func_0016C42C(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar1 = param_2 + 3;
  piVar2 = (int *)(*(int *)(param_1 + 0xf74) + 8);
  if (uVar1 < 6) {
    piVar2 = piVar2 + uVar1;
  }
  if (*piVar2 != 0) {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0xf74) + 8);
    if (uVar1 < 6) {
      puVar3 = puVar3 + uVar1;
    }
    piVar2 = *(int **)*puVar3;
    if (piVar2 != (int *)0x0) {
      iVar4 = *piVar2;
      if (iVar4 != 0) {
        piVar2 = (int *)piVar2[2];
      }
      uVar5 = *param_3;
      uVar6 = param_3[1];
      if (iVar4 != 0) {
        iVar4 = *piVar2;
      }
      else {
        iVar4 = 0;
      }
      *(undefined4 *)(iVar4 + 0x48) = param_3[2];
      *(undefined4 *)(iVar4 + 0x40) = uVar5;
      *(undefined4 *)(iVar4 + 0x44) = uVar6;
    }
  }
  return;
}

