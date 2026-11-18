#include "ghidra_types.h"


// USA 0010E3C4 <- EU 0010E3C4 (Ghidra, non-matching)

undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  undefined2 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  bool bVar24;
  
  if (8 < param_3) {
    puVar7 = param_1;
    puVar4 = param_2;
    if (((uint)param_2 & 1) != 0) {
      param_3 = param_3 - 1;
      puVar4 = (uint *)((int)param_2 + 1);
      puVar7 = (uint *)((int)param_1 + 1);
      *(char *)param_1 = (char)*param_2;
    }
    if (((uint)puVar4 & 2) != 0) {
      param_3 = param_3 - 2;
      pbVar8 = (byte *)((int)puVar4 + 1);
      uVar13 = *puVar4;
      puVar4 = (uint *)((int)puVar4 + 2);
      bVar2 = *pbVar8;
      pbVar8 = (byte *)((int)puVar7 + 1);
      *(byte *)puVar7 = (byte)uVar13;
      puVar7 = (uint *)((int)puVar7 + 2);
      *pbVar8 = bVar2;
    }
    uVar13 = (uint)puVar7 & 3;
    if (uVar13 != 0) {
      puVar7 = (uint *)((uint)puVar7 & 0xfffffffc);
      if (uVar13 == 2) {
        uVar13 = *puVar7 & 0xffff;
        bVar24 = SBORROW4(param_3,0x20);
        iVar11 = param_3 - 0x20;
        bVar23 = iVar11 < 0;
        if (0x1f < (int)param_3) {
          do {
            if (bVar23 == bVar24) {
              uVar14 = *puVar4;
              uVar16 = puVar4[1];
              uVar17 = puVar4[2];
              uVar18 = puVar4[3];
              uVar19 = puVar4[4];
              uVar21 = puVar4[5];
              uVar20 = puVar4[6];
              uVar22 = puVar4[7];
              puVar4 = puVar4 + 8;
              uVar15 = uVar13 | uVar14 << 0x10;
              uVar13 = uVar22 >> 0x10;
              *puVar7 = uVar15;
              puVar7[1] = uVar14 >> 0x10 | uVar16 << 0x10;
              puVar7[2] = uVar16 >> 0x10 | uVar17 << 0x10;
              puVar7[3] = uVar17 >> 0x10 | uVar18 << 0x10;
              puVar7[4] = uVar18 >> 0x10 | uVar19 << 0x10;
              puVar7[5] = uVar19 >> 0x10 | uVar21 << 0x10;
              puVar7[6] = uVar21 >> 0x10 | uVar20 << 0x10;
              puVar7[7] = uVar20 >> 0x10 | uVar22 << 0x10;
              puVar7 = puVar7 + 8;
              bVar24 = SBORROW4(iVar11,0x20);
              iVar11 = iVar11 + -0x20;
              bVar23 = iVar11 < 0;
            }
          } while (bVar23 == bVar24);
        }
        bVar24 = SBORROW4(iVar11 + 0x20,4);
        iVar11 = iVar11 + 0x1c;
        bVar23 = iVar11 < 0;
        do {
          if (bVar23 == bVar24) {
            uVar14 = *puVar4;
            *puVar7 = uVar13 | uVar14 << 0x10;
            uVar13 = uVar14 >> 0x10;
            bVar24 = SBORROW4(iVar11,4);
            iVar11 = iVar11 + -4;
            bVar23 = iVar11 < 0;
            puVar7 = puVar7 + 1;
            puVar4 = puVar4 + 1;
          }
        } while (bVar23 == bVar24);
        pbVar8 = (byte *)((int)puVar4 + -2);
        uVar13 = iVar11 + 6;
      }
      else if (uVar13 < 3) {
        uVar13 = *puVar7 & 0xff;
        bVar24 = SBORROW4(param_3,0x20);
        iVar11 = param_3 - 0x20;
        bVar23 = iVar11 < 0;
        if (0x1f < (int)param_3) {
          do {
            if (bVar23 == bVar24) {
              uVar14 = *puVar4;
              uVar16 = puVar4[1];
              uVar17 = puVar4[2];
              uVar18 = puVar4[3];
              uVar19 = puVar4[4];
              uVar21 = puVar4[5];
              uVar20 = puVar4[6];
              uVar22 = puVar4[7];
              puVar4 = puVar4 + 8;
              uVar15 = uVar13 | uVar14 << 8;
              uVar13 = uVar22 >> 0x18;
              *puVar7 = uVar15;
              puVar7[1] = uVar14 >> 0x18 | uVar16 << 8;
              puVar7[2] = uVar16 >> 0x18 | uVar17 << 8;
              puVar7[3] = uVar17 >> 0x18 | uVar18 << 8;
              puVar7[4] = uVar18 >> 0x18 | uVar19 << 8;
              puVar7[5] = uVar19 >> 0x18 | uVar21 << 8;
              puVar7[6] = uVar21 >> 0x18 | uVar20 << 8;
              puVar7[7] = uVar20 >> 0x18 | uVar22 << 8;
              puVar7 = puVar7 + 8;
              bVar24 = SBORROW4(iVar11,0x20);
              iVar11 = iVar11 + -0x20;
              bVar23 = iVar11 < 0;
            }
          } while (bVar23 == bVar24);
        }
        bVar24 = SBORROW4(iVar11 + 0x20,4);
        iVar11 = iVar11 + 0x1c;
        bVar23 = iVar11 < 0;
        do {
          if (bVar23 == bVar24) {
            uVar14 = *puVar4;
            *puVar7 = uVar13 | uVar14 << 8;
            uVar13 = uVar14 >> 0x18;
            bVar24 = SBORROW4(iVar11,4);
            iVar11 = iVar11 + -4;
            bVar23 = iVar11 < 0;
            puVar7 = puVar7 + 1;
            puVar4 = puVar4 + 1;
          }
        } while (bVar23 == bVar24);
        pbVar8 = (byte *)((int)puVar4 + -1);
        uVar13 = iVar11 + 5;
      }
      else {
        uVar13 = *puVar7 & 0xffffff;
        bVar24 = SBORROW4(param_3,0x20);
        iVar11 = param_3 - 0x20;
        bVar23 = iVar11 < 0;
        if (0x1f < (int)param_3) {
          do {
            if (bVar23 == bVar24) {
              uVar14 = *puVar4;
              uVar16 = puVar4[1];
              uVar17 = puVar4[2];
              uVar18 = puVar4[3];
              uVar19 = puVar4[4];
              uVar21 = puVar4[5];
              uVar20 = puVar4[6];
              uVar22 = puVar4[7];
              puVar4 = puVar4 + 8;
              uVar15 = uVar13 | uVar14 << 0x18;
              uVar13 = uVar22 >> 8;
              *puVar7 = uVar15;
              puVar7[1] = uVar14 >> 8 | uVar16 << 0x18;
              puVar7[2] = uVar16 >> 8 | uVar17 << 0x18;
              puVar7[3] = uVar17 >> 8 | uVar18 << 0x18;
              puVar7[4] = uVar18 >> 8 | uVar19 << 0x18;
              puVar7[5] = uVar19 >> 8 | uVar21 << 0x18;
              puVar7[6] = uVar21 >> 8 | uVar20 << 0x18;
              puVar7[7] = uVar20 >> 8 | uVar22 << 0x18;
              puVar7 = puVar7 + 8;
              bVar24 = SBORROW4(iVar11,0x20);
              iVar11 = iVar11 + -0x20;
              bVar23 = iVar11 < 0;
            }
          } while (bVar23 == bVar24);
        }
        bVar24 = SBORROW4(iVar11 + 0x20,4);
        iVar11 = iVar11 + 0x1c;
        bVar23 = iVar11 < 0;
        do {
          if (bVar23 == bVar24) {
            uVar14 = *puVar4;
            *puVar7 = uVar13 | uVar14 << 0x18;
            uVar13 = uVar14 >> 8;
            bVar24 = SBORROW4(iVar11,4);
            iVar11 = iVar11 + -4;
            bVar23 = iVar11 < 0;
            puVar7 = puVar7 + 1;
            puVar4 = puVar4 + 1;
          }
        } while (bVar23 == bVar24);
        pbVar8 = (byte *)((int)puVar4 + -3);
        uVar13 = iVar11 + 7;
      }
      if ((uVar13 & 4) != 0) {
        pbVar9 = pbVar8 + 2;
        bVar2 = pbVar8[1];
        *(byte *)puVar7 = *pbVar8;
        *(byte *)((int)puVar7 + 1) = bVar2;
        pbVar10 = pbVar8 + 3;
        pbVar8 = pbVar8 + 4;
        bVar2 = *pbVar10;
        pbVar10 = (byte *)((int)puVar7 + 3);
        *(byte *)((int)puVar7 + 2) = *pbVar9;
        puVar7 = puVar7 + 1;
        *pbVar10 = bVar2;
      }
      if ((uVar13 & 2) != 0) {
        pbVar10 = pbVar8 + 1;
        bVar2 = *pbVar8;
        pbVar8 = pbVar8 + 2;
        bVar3 = *pbVar10;
        pbVar10 = (byte *)((int)puVar7 + 1);
        *(byte *)puVar7 = bVar2;
        puVar7 = (uint *)((int)puVar7 + 2);
        *pbVar10 = bVar3;
      }
      puVar4 = puVar7;
      pbVar10 = pbVar8;
      if ((uVar13 & 1) != 0) {
        pbVar10 = pbVar8 + 1;
        puVar4 = (uint *)((int)puVar7 + 1);
        *(byte *)puVar7 = *pbVar8;
      }
      return CONCAT44(pbVar10,puVar4);
    }
    while (uVar13 = param_3 - 0x20, 0x1f < param_3) {
      uVar14 = puVar4[1];
      uVar15 = puVar4[2];
      uVar16 = puVar4[3];
      uVar17 = puVar4[4];
      uVar18 = puVar4[5];
      uVar19 = puVar4[6];
      uVar21 = puVar4[7];
      HintPreloadData(puVar4 + 0x18);
      *puVar7 = *puVar4;
      puVar7[1] = uVar14;
      puVar7[2] = uVar15;
      puVar7[3] = uVar16;
      puVar7[4] = uVar17;
      puVar7[5] = uVar18;
      puVar7[6] = uVar19;
      puVar7[7] = uVar21;
      puVar7 = puVar7 + 8;
      puVar4 = puVar4 + 8;
      param_3 = uVar13;
    }
    uVar14 = 0;
    if ((bool)((byte)(uVar13 >> 4) & 1)) {
      uVar14 = *puVar4;
      uVar15 = puVar4[1];
      uVar16 = puVar4[2];
      uVar17 = puVar4[3];
      puVar4 = puVar4 + 4;
      *puVar7 = uVar14;
      puVar7[1] = uVar15;
      puVar7[2] = uVar16;
      puVar7[3] = uVar17;
      puVar7 = puVar7 + 4;
    }
    if ((int)(param_3 << 0x1c) < 0) {
      uVar14 = *puVar4;
      uVar15 = puVar4[1];
      puVar4 = puVar4 + 2;
      *puVar7 = uVar14;
      puVar7[1] = uVar15;
      puVar7 = puVar7 + 2;
    }
    puVar5 = puVar7;
    puVar6 = puVar4;
    if ((bool)((byte)(uVar13 >> 2) & 1)) {
      puVar6 = puVar4 + 1;
      uVar14 = *puVar4;
      puVar5 = puVar7 + 1;
      *puVar7 = uVar14;
    }
    uVar12 = (undefined2)uVar14;
    if ((uVar13 & 3) != 0) {
      bVar24 = (bool)((byte)(uVar13 >> 1) & 1);
      uVar13 = param_3 << 0x1f;
      bVar23 = (int)uVar13 < 0;
      puVar4 = puVar6;
      if (bVar24) {
        puVar4 = (uint *)((int)puVar6 + 2);
        uVar12 = (undefined2)*puVar6;
      }
      puVar7 = puVar4;
      if (bVar23) {
        puVar7 = (uint *)((int)puVar4 + 1);
        uVar13 = (uint)(byte)*puVar4;
      }
      puVar4 = puVar5;
      if (bVar24) {
        puVar4 = (uint *)((int)puVar5 + 2);
        *(undefined2 *)puVar5 = uVar12;
      }
      puVar6 = puVar4;
      if (bVar23) {
        puVar6 = (uint *)((int)puVar4 + 1);
        *(byte *)puVar4 = (byte)uVar13;
      }
      return CONCAT44(puVar7,puVar6);
    }
    return CONCAT44(puVar6,puVar5);
  }
  if (param_3 == 8) {
    uVar13 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar13;
    return CONCAT44(param_2 + 2,param_1 + 2);
  }
  if (4 < param_3) {
    if (param_3 == 6) {
      uVar13 = param_2[1];
      *param_1 = *param_2;
      *(short *)(param_1 + 1) = (short)uVar13;
      return CONCAT44((int)param_2 + 6,(int)param_1 + 6);
    }
    if (param_3 < 6) {
      uVar13 = param_2[1];
      *param_1 = *param_2;
      *(char *)(param_1 + 1) = (char)uVar13;
      return CONCAT44((int)param_2 + 5,(int)param_1 + 5);
    }
    uVar13 = param_2[1];
    *param_1 = *param_2;
    uVar1 = *(undefined1 *)((int)param_2 + 6);
    *(short *)(param_1 + 1) = (short)uVar13;
    *(undefined1 *)((int)param_1 + 6) = uVar1;
    return CONCAT44((int)param_2 + 7,(int)param_1 + 7);
  }
  if (param_3 == 4) {
    *param_1 = *param_2;
    return CONCAT44(param_2 + 1,param_1 + 1);
  }
  if (param_3 < 2) {
    puVar4 = param_1;
    puVar7 = param_2;
    if (param_3 != 0) {
      puVar7 = (uint *)((int)param_2 + 1);
      puVar4 = (uint *)((int)param_1 + 1);
      *(char *)param_1 = (char)*param_2;
    }
    return CONCAT44(puVar7,puVar4);
  }
  if (param_3 == 2) {
    *(short *)param_1 = (short)*param_2;
    return CONCAT44((int)param_2 + 2,(int)param_1 + 2);
  }
  uVar1 = *(undefined1 *)((int)param_2 + 2);
  *(short *)param_1 = (short)*param_2;
  *(undefined1 *)((int)param_1 + 2) = uVar1;
  return CONCAT44((int)param_2 + 3,(int)param_1 + 3);
}

