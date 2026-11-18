#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0037E190(undefined4 *param_1,int param_2,uint *param_3);
extern int func_003A1FB0(undefined4 *param_1,int param_2,uint *param_3);

// USA 00394BC4 <- EU 00394BA0 (Ghidra, non-matching)

undefined4 func_00394BC4(int param_1,int param_2,uint *param_3)

{
  bool bVar1;
  bool bVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint unaff_r7;
  int *piVar11;
  int iVar12;
  
  puVar3 = (uint *)(param_1 + 0x10);
  uVar9 = *puVar3;
  uVar7 = 0;
  if (0 < (int)uVar9) {
    do {
      if (uVar7 < uVar9) {
        piVar11 = *(int **)(*(int *)(param_1 + 0x18) + uVar7 * 4);
      }
      else {
        piVar11 = (int *)0x0;
      }
      if (*(int *)(*piVar11 + 8) == (int)*(short *)(param_2 + 0x70)) {
        puVar10 = *(undefined4 **)(*(int *)(param_1 + 0x18) + uVar7 * 4);
        if (puVar10 != (undefined4 *)0x0) goto LAB_00394c4c;
        break;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)uVar9);
  }
  if ((int)uVar9 < *(int *)(param_1 + 0x14)) {
    puVar10 = *(undefined4 **)(param_1 + 0x1c);
    if (puVar10 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x1c) = *puVar10;
      *puVar10 = 0;
    }
    if ((int)*puVar3 < *(int *)(param_1 + 0x14)) {
      *(undefined4 **)(*(int *)(param_1 + 0x18) + *puVar3 * 4) = puVar10;
      *puVar3 = *puVar3 + 1;
    }
  }
  else {
    puVar10 = (undefined4 *)0x0;
  }
LAB_00394c4c:
  iVar12 = *(int *)(param_2 + 0x3f4);
  bVar2 = false;
  bVar1 = false;
  if (0 < iVar12) {
    unaff_r7 = *param_3;
  }
  iVar4 = 0;
  if (0 < iVar12) {
    do {
      uVar7 = *(uint *)(param_2 + 0x3d4 + iVar4 * 8);
      iVar4 = iVar4 + 1;
      if (uVar7 < unaff_r7) {
        iVar8 = *(int *)(param_3[2] + uVar7 * 4);
      }
      else {
        iVar8 = 0;
      }
      if (*(char *)(iVar8 + 4) == '\0') {
        bVar2 = true;
      }
      else {
        bVar1 = true;
      }
    } while (iVar4 < iVar12);
    if (bVar1) {
      puVar5 = (undefined4 *)func_0010BAB4(0x2c);
      puVar6 = (undefined4 *)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        puVar6 = func_003A1FB0(puVar5,param_2,param_3);
      }
    }
    else {
      if (!bVar2) goto LAB_00394cfc;
      puVar5 = (undefined4 *)func_0010BAB4(0x44);
      puVar6 = (undefined4 *)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        puVar6 = func_0037E190(puVar5,param_2,param_3);
      }
    }
    *puVar10 = puVar6;
  }
LAB_00394cfc:
  return *puVar10;
}

