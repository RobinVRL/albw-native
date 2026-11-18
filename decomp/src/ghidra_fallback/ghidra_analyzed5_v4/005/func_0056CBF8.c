#include "ghidra_types.h"


// USA 0056CBF8 <- EU 0056CBD0 (Ghidra, non-matching)

undefined4 func_0056CBF8(int param_1,uint param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x3c);
  uVar5 = 0xffffffff;
  switch(param_2 >> 0x18) {
  default:
    goto switchD_0056afc4_caseD_0;
  case 1:
    if (param_2 >> 0x18 != 1) {
      return 0xffffffff;
    }
    puVar1 = (uint *)(iVar3 + *(int *)(iVar3 + 4));
    if (*puVar1 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    puVar2 = (undefined4 *)((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2]);
    goto joined_r0x0056b0c8;
  case 2:
    if (param_2 >> 0x18 != 2) {
      return 0xffffffff;
    }
    puVar1 = (uint *)(*(int *)(iVar3 + 0xc) + iVar3);
    if (*puVar1 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    if ((uint *)((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2]) == (uint *)0x0) {
      return 0xffffffff;
    }
    uVar4 = *(uint *)((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2]);
    if (uVar4 >> 0x18 != 1) {
      return 0xffffffff;
    }
    uVar4 = uVar4 & 0xffffff;
    puVar1 = (uint *)(iVar3 + *(int *)(iVar3 + 4));
    if (*puVar1 <= uVar4) {
      return 0xffffffff;
    }
    puVar2 = (undefined4 *)((int)puVar1 + puVar1[uVar4 * 2 + 2]);
    break;
  case 3:
    if (param_2 >> 0x18 != 3) {
      return 0xffffffff;
    }
    puVar1 = (uint *)(iVar3 + *(int *)(iVar3 + 0x14));
    if (*puVar1 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    puVar2 = (undefined4 *)((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2]);
    break;
  case 5:
    if (param_2 >> 0x18 != 5) {
      return 0xffffffff;
    }
    puVar1 = (uint *)(iVar3 + *(int *)(iVar3 + 0x1c));
    if (*puVar1 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    puVar2 = (undefined4 *)((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2]);
    break;
  case 6:
    if (param_2 >> 0x18 != 6) {
      return 0xffffffff;
    }
    puVar1 = (uint *)(iVar3 + *(int *)(iVar3 + 0x24));
    if (*puVar1 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    puVar2 = (undefined4 *)((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2]);
joined_r0x0056b0c8:
    if (puVar2 == (undefined4 *)0x0) {
      return 0xffffffff;
    }
    goto LAB_0056b018;
  }
  if (puVar2 != (undefined4 *)0x0) {
LAB_0056b018:
    uVar5 = *puVar2;
  }
switchD_0056afc4_caseD_0:
  return uVar5;
}

