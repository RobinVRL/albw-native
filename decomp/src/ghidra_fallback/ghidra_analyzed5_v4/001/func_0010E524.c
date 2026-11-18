#include "ghidra_types.h"


// USA 0010E524 <- EU 0010E524 (Ghidra, non-matching)

undefined8 func_0010E524(uint param_1,uint *param_2,int param_3,uint param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint *puVar3;
  uint *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  bool bVar20;
  
  puVar3 = (uint *)(param_1 & 0xfffffffc);
  if (param_4 == 2) {
    uVar9 = *puVar3 & 0xffff;
    bVar20 = SBORROW4(param_3,0x20);
    iVar8 = param_3 + -0x20;
    bVar19 = iVar8 < 0;
    if (0x1f < param_3) {
      do {
        if (bVar19 == bVar20) {
          uVar10 = *param_2;
          uVar12 = param_2[1];
          uVar13 = param_2[2];
          uVar14 = param_2[3];
          uVar15 = param_2[4];
          uVar16 = param_2[5];
          uVar17 = param_2[6];
          uVar18 = param_2[7];
          param_2 = param_2 + 8;
          uVar11 = uVar9 | uVar10 << 0x10;
          uVar9 = uVar18 >> 0x10;
          *puVar3 = uVar11;
          puVar3[1] = uVar10 >> 0x10 | uVar12 << 0x10;
          puVar3[2] = uVar12 >> 0x10 | uVar13 << 0x10;
          puVar3[3] = uVar13 >> 0x10 | uVar14 << 0x10;
          puVar3[4] = uVar14 >> 0x10 | uVar15 << 0x10;
          puVar3[5] = uVar15 >> 0x10 | uVar16 << 0x10;
          puVar3[6] = uVar16 >> 0x10 | uVar17 << 0x10;
          puVar3[7] = uVar17 >> 0x10 | uVar18 << 0x10;
          puVar3 = puVar3 + 8;
          bVar20 = SBORROW4(iVar8,0x20);
          iVar8 = iVar8 + -0x20;
          bVar19 = iVar8 < 0;
        }
      } while (bVar19 == bVar20);
    }
    bVar20 = SBORROW4(iVar8 + 0x20,4);
    iVar8 = iVar8 + 0x1c;
    bVar19 = iVar8 < 0;
    do {
      if (bVar19 == bVar20) {
        uVar10 = *param_2;
        *puVar3 = uVar9 | uVar10 << 0x10;
        uVar9 = uVar10 >> 0x10;
        bVar20 = SBORROW4(iVar8,4);
        iVar8 = iVar8 + -4;
        bVar19 = iVar8 < 0;
        puVar3 = puVar3 + 1;
        param_2 = param_2 + 1;
      }
    } while (bVar19 == bVar20);
    puVar5 = (undefined1 *)((int)param_2 + -2);
    uVar9 = iVar8 + 6;
  }
  else if (param_4 < 3) {
    uVar9 = *puVar3 & 0xff;
    bVar20 = SBORROW4(param_3,0x20);
    iVar8 = param_3 + -0x20;
    bVar19 = iVar8 < 0;
    if (0x1f < param_3) {
      do {
        if (bVar19 == bVar20) {
          uVar10 = *param_2;
          uVar12 = param_2[1];
          uVar13 = param_2[2];
          uVar14 = param_2[3];
          uVar15 = param_2[4];
          uVar16 = param_2[5];
          uVar17 = param_2[6];
          uVar18 = param_2[7];
          param_2 = param_2 + 8;
          uVar11 = uVar9 | uVar10 << 8;
          uVar9 = uVar18 >> 0x18;
          *puVar3 = uVar11;
          puVar3[1] = uVar10 >> 0x18 | uVar12 << 8;
          puVar3[2] = uVar12 >> 0x18 | uVar13 << 8;
          puVar3[3] = uVar13 >> 0x18 | uVar14 << 8;
          puVar3[4] = uVar14 >> 0x18 | uVar15 << 8;
          puVar3[5] = uVar15 >> 0x18 | uVar16 << 8;
          puVar3[6] = uVar16 >> 0x18 | uVar17 << 8;
          puVar3[7] = uVar17 >> 0x18 | uVar18 << 8;
          puVar3 = puVar3 + 8;
          bVar20 = SBORROW4(iVar8,0x20);
          iVar8 = iVar8 + -0x20;
          bVar19 = iVar8 < 0;
        }
      } while (bVar19 == bVar20);
    }
    bVar20 = SBORROW4(iVar8 + 0x20,4);
    iVar8 = iVar8 + 0x1c;
    bVar19 = iVar8 < 0;
    do {
      if (bVar19 == bVar20) {
        uVar10 = *param_2;
        *puVar3 = uVar9 | uVar10 << 8;
        uVar9 = uVar10 >> 0x18;
        bVar20 = SBORROW4(iVar8,4);
        iVar8 = iVar8 + -4;
        bVar19 = iVar8 < 0;
        puVar3 = puVar3 + 1;
        param_2 = param_2 + 1;
      }
    } while (bVar19 == bVar20);
    puVar5 = (undefined1 *)((int)param_2 + -1);
    uVar9 = iVar8 + 5;
  }
  else {
    uVar9 = *puVar3 & 0xffffff;
    bVar20 = SBORROW4(param_3,0x20);
    iVar8 = param_3 + -0x20;
    bVar19 = iVar8 < 0;
    if (0x1f < param_3) {
      do {
        if (bVar19 == bVar20) {
          uVar10 = *param_2;
          uVar12 = param_2[1];
          uVar13 = param_2[2];
          uVar14 = param_2[3];
          uVar15 = param_2[4];
          uVar16 = param_2[5];
          uVar17 = param_2[6];
          uVar18 = param_2[7];
          param_2 = param_2 + 8;
          uVar11 = uVar9 | uVar10 << 0x18;
          uVar9 = uVar18 >> 8;
          *puVar3 = uVar11;
          puVar3[1] = uVar10 >> 8 | uVar12 << 0x18;
          puVar3[2] = uVar12 >> 8 | uVar13 << 0x18;
          puVar3[3] = uVar13 >> 8 | uVar14 << 0x18;
          puVar3[4] = uVar14 >> 8 | uVar15 << 0x18;
          puVar3[5] = uVar15 >> 8 | uVar16 << 0x18;
          puVar3[6] = uVar16 >> 8 | uVar17 << 0x18;
          puVar3[7] = uVar17 >> 8 | uVar18 << 0x18;
          puVar3 = puVar3 + 8;
          bVar20 = SBORROW4(iVar8,0x20);
          iVar8 = iVar8 + -0x20;
          bVar19 = iVar8 < 0;
        }
      } while (bVar19 == bVar20);
    }
    bVar20 = SBORROW4(iVar8 + 0x20,4);
    iVar8 = iVar8 + 0x1c;
    bVar19 = iVar8 < 0;
    do {
      if (bVar19 == bVar20) {
        uVar10 = *param_2;
        *puVar3 = uVar9 | uVar10 << 0x18;
        uVar9 = uVar10 >> 8;
        bVar20 = SBORROW4(iVar8,4);
        iVar8 = iVar8 + -4;
        bVar19 = iVar8 < 0;
        puVar3 = puVar3 + 1;
        param_2 = param_2 + 1;
      }
    } while (bVar19 == bVar20);
    puVar5 = (undefined1 *)((int)param_2 + -3);
    uVar9 = iVar8 + 7;
  }
  if ((uVar9 & 4) != 0) {
    puVar6 = puVar5 + 2;
    uVar1 = puVar5[1];
    *(undefined1 *)puVar3 = *puVar5;
    *(undefined1 *)((int)puVar3 + 1) = uVar1;
    puVar7 = puVar5 + 3;
    puVar5 = puVar5 + 4;
    uVar1 = *puVar7;
    puVar7 = (undefined1 *)((int)puVar3 + 3);
    *(undefined1 *)((int)puVar3 + 2) = *puVar6;
    puVar3 = puVar3 + 1;
    *puVar7 = uVar1;
  }
  if ((uVar9 & 2) != 0) {
    puVar7 = puVar5 + 1;
    uVar1 = *puVar5;
    puVar5 = puVar5 + 2;
    uVar2 = *puVar7;
    puVar7 = (undefined1 *)((int)puVar3 + 1);
    *(undefined1 *)puVar3 = uVar1;
    puVar3 = (uint *)((int)puVar3 + 2);
    *puVar7 = uVar2;
  }
  puVar4 = puVar3;
  puVar7 = puVar5;
  if ((uVar9 & 1) != 0) {
    puVar7 = puVar5 + 1;
    puVar4 = (uint *)((int)puVar3 + 1);
    *(undefined1 *)puVar3 = *puVar5;
  }
  return CONCAT44(puVar7,puVar4);
}

