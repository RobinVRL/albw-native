#include "ghidra_types.h"

extern int func_00133C7C(int *param_1,uint param_2);
extern int DAT_001e1038;
extern int DAT_001e103c;

// USA 001E0EF8 <- EU 001E0EF8 (Ghidra, non-matching)
// GLOBAL DAT_001e1038 int
// GLOBAL DAT_001e103c int

undefined4 func_001E0EF8(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  bool bVar5;
  
  if (*(int *)(param_1 + 0x1fa4) < 1) {
    return 0;
  }
  (**(code **)(**(int **)(param_1 + 0x338) + 0x10))(*(int **)(param_1 + 0x338));
  uVar1 = 1;
  do {
    bVar5 = uVar1 < 7;
    puVar3 = (undefined4 *)(param_1 + 0x10);
    if (bVar5) {
      puVar3 = puVar3 + uVar1 * 0xca;
    }
    iVar2 = param_1 + 0x10;
    *puVar3 = 0;
    if (bVar5) {
      iVar2 = iVar2 + uVar1 * 0x328;
    }
    iVar4 = param_1 + 0x10;
    *(undefined4 *)(iVar2 + 4) = 0;
    if (bVar5) {
      iVar4 = iVar4 + uVar1 * 0x328;
    }
    iVar2 = param_1 + 0x10;
    *(undefined4 *)(iVar4 + 8) = 0;
    if (bVar5) {
      iVar2 = iVar2 + uVar1 * 0x328;
    }
    uVar1 = uVar1 + 1;
    *(undefined4 *)(iVar2 + 0xc) = 0;
  } while ((int)uVar1 < 7);
  *(int *)(param_1 + 0x1fa4) = 0;
  *(undefined4 *)(DAT_001e1038 + param_1) = *(undefined4 *)(param_1 + 0x10);
  *(int *)(DAT_001e103c + param_1) = param_1 + 0x1c;
  return func_00133C7C(*(int **)(param_1 + 0x1fb0),1);
}

