#include "ghidra_types.h"

extern int func_0010FBAC(uint *param_1,uint *param_2);

// USA 003FDB08 <- EU 003FDAE8 (Ghidra, non-matching)

uint func_003FDB08(int param_1,uint *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar9 = 0;
  iVar3 = 0;
  cVar2 = (char)*param_2;
  while (cVar2 != '\0') {
    pcVar1 = (char *)((int)param_2 + iVar3);
    iVar3 = iVar3 + 1;
    uVar9 = uVar9 * *(int *)(*(int *)(param_1 + 4) + 8) + (int)*pcVar1;
    cVar2 = *(char *)((int)param_2 + iVar3);
  }
  uVar10 = *(uint *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 0x10);
  uVar6 = uVar10;
  uVar7 = 0;
  while( true ) {
    uVar4 = (int)(uVar7 + uVar6) / 2;
    uVar8 = *(uint *)(iVar3 + uVar4 * 0x10);
    if (uVar8 == uVar9) break;
    if (uVar8 < uVar9) {
      bVar11 = uVar7 == uVar4;
      uVar7 = uVar4;
      if (bVar11) {
        return 0xffffffff;
      }
    }
    else {
      bVar11 = uVar6 == uVar4;
      uVar6 = uVar4;
      if (bVar11) {
        return 0xffffffff;
      }
    }
  }
  if (uVar4 == 0xffffffff) {
    return 0xffffffff;
  }
  if (uVar4 < uVar10) {
    iVar3 = iVar3 + uVar4 * 0x10;
  }
  if (*(uint *)(iVar3 + 4) != 0) {
    uVar4 = uVar4 - (*(uint *)(iVar3 + 4) >> 0x18);
    do {
      uVar4 = uVar4 + 1;
      if ((int)uVar10 <= (int)uVar4) {
        return uVar4;
      }
      if (uVar4 < *(uint *)(param_1 + 0xc)) {
        puVar5 = (uint *)(*(int *)(param_1 + 0x10) + uVar4 * 0x10);
      }
      else {
        puVar5 = (uint *)0x0;
      }
      if (*puVar5 != uVar9) {
        return 0xffffffff;
      }
      if (*(uint *)(param_1 + 0x14) < *(int *)(param_1 + 8) + (puVar5[1] & 0xffffff)) {
        return 0xffffffff;
      }
      uVar6 = func_0010FBAC(param_2,(uint *)(*(int *)(param_1 + 8) + (puVar5[1] & 0xffffff) * 4));
    } while (uVar6 != 0);
    return uVar4;
  }
  return uVar4;
}

