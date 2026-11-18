#include "ghidra_types.h"

extern int func_001712B4(undefined4 *param_1,int param_2,ushort *param_3);
extern undefined4 DAT_00330f48;

// USA 00330D98 <- EU 00330D74 (Ghidra, non-matching)
// GLOBAL DAT_00330f48 undefined4

undefined4 * func_00330D98(undefined4 *param_1,int param_2,ushort *param_3)

{
  bool bVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint unaff_r4;
  uint *unaff_r5;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  
  puVar3 = func_001712B4(param_1,param_2,param_3);
  *puVar3 = DAT_00330f48;
  puVar3[0x2b] = 0;
  *(undefined1 *)(puVar3 + 0x2c) = 0;
  puVar4 = *(undefined1 **)(*(int *)(puVar3[0x23] + 0x50) + 0xc0);
  if ((uint)*(ushort *)puVar3[0x24] < *(uint *)(*(int *)(puVar3[0x23] + 0x50) + 0xbc)) {
    puVar4 = puVar4 + *(ushort *)puVar3[0x24];
  }
  *(undefined1 *)((int)puVar3 + 0xb1) = *puVar4;
  iVar9 = *(int *)(*(int *)puVar3[0x25] + 0xcc);
  puVar5 = *(uint **)(*(int *)puVar3[0x25] + 0xd0);
  puVar8 = puVar5 + iVar9;
  if (puVar5 == puVar8) {
    bVar2 = false;
    puVar6 = puVar5;
  }
  else {
    unaff_r4 = puVar5[1] & 0xffff;
    bVar2 = true;
    puVar6 = puVar5 + ((puVar5[1] << 4) >> 0x18) + 2;
    if (puVar8 <= puVar5 + ((puVar5[1] << 4) >> 0x18) + 2) {
      puVar6 = puVar8;
    }
    unaff_r5 = puVar5;
    if ((puVar6 != puVar8) && (((int)puVar6 - (int)puVar5) * 0x20000000 < 0)) {
      puVar6 = puVar6 + 1;
    }
  }
  bVar1 = false;
  while ((puVar8 = puVar6, bVar2 && (!bVar1))) {
    if (((unaff_r4 & 0xffff) == 0x107) && (bVar1 = true, (*unaff_r5 & 0x1000) == 0)) {
      *(undefined1 *)(puVar3 + 0x2c) = 1;
    }
    puVar7 = puVar5 + iVar9;
    if (puVar8 == puVar7) {
      bVar2 = false;
      puVar6 = puVar8;
    }
    else {
      unaff_r4 = puVar8[1] & 0xffff;
      bVar2 = true;
      puVar6 = puVar8 + ((puVar8[1] << 4) >> 0x18) + 2;
      if (puVar7 <= puVar8 + ((puVar8[1] << 4) >> 0x18) + 2) {
        puVar6 = puVar7;
      }
      unaff_r5 = puVar8;
      if ((puVar6 != puVar7) && (((int)puVar6 - (int)puVar5) * 0x20000000 < 0)) {
        puVar6 = puVar6 + 1;
      }
    }
  }
  return puVar3;
}

