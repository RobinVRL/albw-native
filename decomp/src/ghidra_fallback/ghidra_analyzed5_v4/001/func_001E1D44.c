#include "ghidra_types.h"

extern int func_001339A4(int *param_1,int param_2);
extern int func_00133C7C(int *param_1,uint param_2);
extern int DAT_001e1e80;

// USA 001E1D44 <- EU 001E1D44 (Ghidra, non-matching)
// GLOBAL DAT_001e1e80 int

undefined4 func_001E1D44(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int *piVar8;
  
  iVar5 = *(int *)(param_1 + 0x1fa0);
  puVar6 = (uint *)(param_1 + 0x1fa4);
  iVar2 = -iVar5;
  uVar4 = iVar2 + 5;
  *(int *)(param_1 + 0x1fa0) = iVar2 + 1;
  puVar1 = (undefined4 *)(param_1 + 0x10);
  *puVar6 = uVar4;
  if (uVar4 < 7) {
    puVar1 = puVar1 + uVar4 * 0xca;
  }
  iVar2 = param_1 + 0x10;
  *(undefined4 *)(param_1 + 0x1fa8) = *puVar1;
  if (*puVar6 < 7) {
    iVar2 = iVar2 + *puVar6 * 0x328;
  }
  *(int *)(DAT_001e1e80 + param_1) = iVar2 + 0xc;
  iVar2 = param_1 + 0x10;
  if (*puVar6 < 7) {
    iVar2 = iVar2 + *puVar6 * 0x328;
  }
  uVar4 = iVar5 + 4;
  *(undefined4 *)(param_1 + 0x1fa8) = *(undefined4 *)(iVar2 + 4);
  iVar2 = param_1 + 0x10;
  if (uVar4 < 7) {
    iVar2 = iVar2 + uVar4 * 0x328;
  }
  piVar8 = *(int **)(param_1 + 0x1300);
  (**(code **)(*piVar8 + 0x28))(piVar8);
  uVar4 = *(uint *)(iVar2 + 0xc);
  uVar7 = 0;
  if (0 < (int)uVar4) {
    do {
      if (uVar7 < uVar4) {
        piVar3 = *(int **)(*(int *)(iVar2 + 0x14) + uVar7 * 4);
      }
      else {
        piVar3 = (int *)0x0;
      }
      (**(code **)(*piVar3 + 0x1c))(piVar3,piVar8);
      uVar4 = *(uint *)(iVar2 + 0xc);
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)uVar4);
  }
  func_00133C7C(*(int **)(param_1 + 0x1fb0),3);
  return func_001339A4(*(int **)(param_1 + 0x1fb0),3);
}

