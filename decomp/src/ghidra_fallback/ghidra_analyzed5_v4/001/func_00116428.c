#include "ghidra_types.h"


// USA 00116428 <- EU 00116428 (Ghidra, non-matching)

undefined8 func_00116428(uint *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  undefined2 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  int *piVar21;
  
  uVar8 = (int)param_1 - (int)param_2;
  bVar19 = uVar8 == 0;
  if (param_2 <= param_1) {
    bVar19 = param_3 == uVar8;
  }
  if ((param_2 <= param_1 && uVar8 <= param_3) && !bVar19) {
    piVar2 = (int *)((int)param_1 + param_3);
    bVar19 = ((uint)piVar2 & 3) == 0;
    piVar5 = (int *)((int)param_2 + param_3);
    do {
      if (!bVar19) {
        param_3 = param_3 - 1;
        piVar5 = (int *)((int)piVar5 + -1);
        piVar2 = (int *)((int)piVar2 + -1);
        *(undefined1 *)piVar2 = *(undefined1 *)piVar5;
      }
      bVar19 = ((uint)piVar2 & 3) == 0;
    } while (!bVar19);
    while (uVar8 = param_3 - 0x10, 0xf < param_3) {
      piVar21 = piVar5 + -1;
      iVar18 = piVar5[-2];
      iVar11 = piVar5[-3];
      piVar5 = piVar5 + -4;
      iVar9 = *piVar5;
      piVar2[-1] = *piVar21;
      piVar2[-2] = iVar18;
      piVar2[-3] = iVar11;
      piVar2 = piVar2 + -4;
      *piVar2 = iVar9;
      param_3 = uVar8;
    }
    iVar9 = param_3 << 0x1d;
    bVar19 = iVar9 < 0;
    if ((bool)((byte)(uVar8 >> 3) & 1)) {
      piVar21 = piVar5 + -1;
      piVar5 = piVar5 + -2;
      iVar9 = *piVar5;
      piVar2[-1] = *piVar21;
      piVar2 = piVar2 + -2;
      *piVar2 = iVar9;
    }
    if (bVar19) {
      piVar5 = piVar5 + -1;
      iVar9 = *piVar5;
      piVar2 = piVar2 + -1;
      *piVar2 = iVar9;
    }
    uVar7 = (undefined2)iVar9;
    if ((uVar8 & 3) == 0) {
      return CONCAT44(piVar5,piVar2);
    }
    bVar20 = (bool)((byte)(uVar8 >> 1) & 1);
    uVar8 = param_3 << 0x1f;
    bVar19 = (int)uVar8 < 0;
    if (bVar20) {
      piVar5 = (int *)((int)piVar5 + -2);
      uVar7 = *(undefined2 *)piVar5;
    }
    if (bVar19) {
      uVar8 = (uint)*(byte *)((int)piVar5 + -1);
    }
    if (bVar20) {
      piVar2 = (int *)((int)piVar2 + -2);
      *(undefined2 *)piVar2 = uVar7;
    }
    if (bVar19) {
      *(char *)((int)piVar2 + -1) = (char)uVar8;
    }
    return CONCAT44(piVar5,piVar2);
  }
  uVar6 = param_3 - 0x20;
  if (0x1f < param_3) {
    uVar8 = *param_2;
    uVar10 = param_2[1];
    uVar12 = param_2[2];
    uVar13 = param_2[3];
    HintPreloadData(param_2 + 0x14);
    uVar14 = param_2[4];
    uVar15 = param_2[5];
    uVar16 = param_2[6];
    uVar17 = param_2[7];
    param_2 = param_2 + 8;
    while( true ) {
      *param_1 = uVar8;
      param_1[1] = uVar10;
      param_1[2] = uVar12;
      param_1[3] = uVar13;
      bVar19 = 0x1f < uVar6;
      uVar6 = uVar6 - 0x20;
      param_1[4] = uVar14;
      param_1[5] = uVar15;
      param_1[6] = uVar16;
      param_1[7] = uVar17;
      param_1 = param_1 + 8;
      if (bVar19) {
        uVar8 = *param_2;
        uVar10 = param_2[1];
        uVar12 = param_2[2];
        uVar13 = param_2[3];
        param_2 = param_2 + 4;
      }
      HintPreloadData(param_2 + 0x10);
      if (!bVar19) break;
      uVar14 = *param_2;
      uVar15 = param_2[1];
      uVar16 = param_2[2];
      uVar17 = param_2[3];
      param_2 = param_2 + 4;
    }
  }
  if ((bool)((byte)(uVar6 >> 4) & 1)) {
    uVar8 = *param_2;
    uVar10 = param_2[1];
    uVar12 = param_2[2];
    uVar13 = param_2[3];
    param_2 = param_2 + 4;
    *param_1 = uVar8;
    param_1[1] = uVar10;
    param_1[2] = uVar12;
    param_1[3] = uVar13;
    param_1 = param_1 + 4;
  }
  if ((int)(uVar6 << 0x1c) < 0) {
    uVar8 = *param_2;
    uVar10 = param_2[1];
    param_2 = param_2 + 2;
    *param_1 = uVar8;
    param_1[1] = uVar10;
    param_1 = param_1 + 2;
  }
  puVar1 = param_1;
  puVar4 = param_2;
  if ((bool)((byte)(uVar6 >> 2) & 1)) {
    puVar4 = param_2 + 1;
    uVar8 = *param_2;
    puVar1 = param_1 + 1;
    *param_1 = uVar8;
  }
  uVar7 = (undefined2)uVar8;
  if ((uVar6 & 3) == 0) {
    return CONCAT44(puVar4,puVar1);
  }
  bVar20 = (bool)((byte)(uVar6 >> 1) & 1);
  uVar6 = uVar6 << 0x1f;
  bVar19 = (int)uVar6 < 0;
  puVar3 = puVar4;
  if (bVar20) {
    puVar3 = (uint *)((int)puVar4 + 2);
    uVar7 = (undefined2)*puVar4;
  }
  puVar4 = puVar3;
  if (bVar19) {
    puVar4 = (uint *)((int)puVar3 + 1);
    uVar6 = (uint)(byte)*puVar3;
  }
  puVar3 = puVar1;
  if (bVar20) {
    puVar3 = (uint *)((int)puVar1 + 2);
    *(undefined2 *)puVar1 = uVar7;
  }
  puVar1 = puVar3;
  if (bVar19) {
    puVar1 = (uint *)((int)puVar3 + 1);
    *(char *)puVar3 = (char)uVar6;
  }
  return CONCAT44(puVar4,puVar1);
}

