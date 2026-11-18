#include "ghidra_types.h"

extern int func_00133C7C(int *param_1,uint param_2);
extern int DAT_001e1038;
extern int DAT_001e103c;

// USA 001E0F00 <- EU 001E0F00 (Ghidra, non-matching)
// GLOBAL DAT_001e1038 int
// GLOBAL DAT_001e103c int

undefined4 func_001E0F00(int param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  if (((int)param_2 <= (int)*(uint *)(param_1 + 0x1fa4)) && (param_2 != 0)) {
    puVar1 = (undefined4 *)(param_1 + 0x10);
    if (param_2 < 7) {
      puVar1 = puVar1 + param_2 * 0xca;
    }
    (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1);
    for (uVar2 = param_2; (int)uVar2 < 7; uVar2 = uVar2 + 1) {
      bVar5 = uVar2 < 7;
      puVar1 = (undefined4 *)(param_1 + 0x10);
      if (bVar5) {
        puVar1 = puVar1 + uVar2 * 0xca;
      }
      iVar3 = param_1 + 0x10;
      *puVar1 = 0;
      if (bVar5) {
        iVar3 = iVar3 + uVar2 * 0x328;
      }
      iVar4 = param_1 + 0x10;
      *(undefined4 *)(iVar3 + 4) = 0;
      if (bVar5) {
        iVar4 = iVar4 + uVar2 * 0x328;
      }
      iVar3 = param_1 + 0x10;
      *(undefined4 *)(iVar4 + 8) = 0;
      if (bVar5) {
        iVar3 = iVar3 + uVar2 * 0x328;
      }
      *(undefined4 *)(iVar3 + 0xc) = 0;
    }
    uVar2 = param_2 - 1;
    puVar1 = (undefined4 *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x1fa4) = uVar2;
    if (uVar2 < 7) {
      puVar1 = puVar1 + uVar2 * 0xca;
    }
    *(undefined4 *)(DAT_001e1038 + param_1) = *puVar1;
    iVar3 = param_1 + 0x10;
    if (uVar2 < 7) {
      iVar3 = iVar3 + uVar2 * 0x328;
    }
    *(int *)(DAT_001e103c + param_1) = iVar3 + 0xc;
    return func_00133C7C(*(int **)(param_1 + 0x1fb0),param_2);
  }
  return 0;
}

