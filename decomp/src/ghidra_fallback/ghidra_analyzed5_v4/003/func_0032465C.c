#include "ghidra_types.h"

extern int func_0032473C(uint *param_1);

// USA 0032465C <- EU 00324638 (Ghidra, non-matching)

undefined4 func_0032465C(short *param_1)

{
  short sVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  
  sVar1 = *param_1;
  bVar9 = sVar1 == 0x4259;
  if (bVar9) {
    sVar1 = param_1[1];
  }
  if (bVar9 && sVar1 == 1) {
    iVar7 = *(int *)(param_1 + 2);
    uVar8 = 0;
    if (iVar7 != 0) {
      puVar2 = (uint *)((int)param_1 + iVar7);
      iVar3 = func_0032473C(puVar2);
      if (iVar3 == 0) {
        return 0;
      }
      uVar8 = puVar2[(*puVar2 >> 8) + 1];
    }
    uVar6 = *(uint *)(param_1 + 4);
    uVar4 = 0;
    if (uVar6 != 0) {
      puVar2 = (uint *)((int)param_1 + uVar6);
      iVar3 = func_0032473C(puVar2);
      if (iVar3 == 0) {
        return 0;
      }
      uVar4 = puVar2[(*puVar2 >> 8) + 1];
    }
    uVar5 = *(uint *)(param_1 + 6);
    if (uVar5 == 0) {
      if (iVar7 == 0 && uVar6 == 0) {
        return 1;
      }
    }
    else if (((iVar7 == 0) || ((uVar6 == 0 || uVar8 <= uVar6 && (uVar8 <= uVar5)))) &&
            ((uVar6 == 0 || uVar5 == 0) || uVar4 <= uVar5)) {
      return 1;
    }
  }
  return 0;
}

