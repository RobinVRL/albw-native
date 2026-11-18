#include "ghidra_types.h"


// USA 0010E74C <- EU 0010E74C (Ghidra, non-matching)

float func_0010E74C(uint *param_1,uint *param_2,uint param_3,float fparam_0)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  uint *puVar4;
  uint *puVar5;
  byte *pbVar6;
  uint *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint *puVar10;
  undefined1 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined2 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  bool bVar26;
  
  bVar25 = param_1 == param_2;
  if (param_1 >= param_2) {
    bVar25 = param_3 == (int)param_1 - (int)param_2;
  }
  if ((param_1 < param_2 || param_3 < (uint)((int)param_1 - (int)param_2)) || bVar25) {
    if (8 < param_3) {
      puVar5 = param_1;
      puVar10 = param_2;
      if (((uint)param_2 & 1) != 0) {
        param_3 = param_3 - 1;
        puVar10 = (uint *)((int)param_2 + 1);
        puVar5 = (uint *)((int)param_1 + 1);
        *(char *)param_1 = (char)*param_2;
      }
      if (((uint)puVar10 & 2) != 0) {
        param_3 = param_3 - 2;
        pbVar6 = (byte *)((int)puVar10 + 1);
        uVar15 = *puVar10;
        puVar10 = (uint *)((int)puVar10 + 2);
        bVar1 = *pbVar6;
        pbVar6 = (byte *)((int)puVar5 + 1);
        *(byte *)puVar5 = (byte)uVar15;
        puVar5 = (uint *)((int)puVar5 + 2);
        *pbVar6 = bVar1;
      }
      uVar15 = (uint)puVar5 & 3;
      if (uVar15 != 0) {
        puVar5 = (uint *)((uint)puVar5 & 0xfffffffc);
        if (uVar15 == 2) {
          uVar15 = *puVar5 & 0xffff;
          bVar26 = SBORROW4(param_3,0x20);
          iVar13 = param_3 - 0x20;
          bVar25 = iVar13 < 0;
          if (0x1f < (int)param_3) {
            do {
              if (bVar25 == bVar26) {
                uVar16 = *puVar10;
                uVar18 = puVar10[1];
                uVar19 = puVar10[2];
                uVar20 = puVar10[3];
                uVar21 = puVar10[4];
                uVar22 = puVar10[5];
                uVar23 = puVar10[6];
                uVar24 = puVar10[7];
                puVar10 = puVar10 + 8;
                uVar17 = uVar15 | uVar16 << 0x10;
                uVar15 = uVar24 >> 0x10;
                *puVar5 = uVar17;
                puVar5[1] = uVar16 >> 0x10 | uVar18 << 0x10;
                puVar5[2] = uVar18 >> 0x10 | uVar19 << 0x10;
                puVar5[3] = uVar19 >> 0x10 | uVar20 << 0x10;
                puVar5[4] = uVar20 >> 0x10 | uVar21 << 0x10;
                puVar5[5] = uVar21 >> 0x10 | uVar22 << 0x10;
                puVar5[6] = uVar22 >> 0x10 | uVar23 << 0x10;
                puVar5[7] = uVar23 >> 0x10 | uVar24 << 0x10;
                puVar5 = puVar5 + 8;
                bVar26 = SBORROW4(iVar13,0x20);
                iVar13 = iVar13 + -0x20;
                bVar25 = iVar13 < 0;
              }
            } while (bVar25 == bVar26);
          }
          bVar26 = SBORROW4(iVar13 + 0x20,4);
          iVar13 = iVar13 + 0x1c;
          bVar25 = iVar13 < 0;
          do {
            if (bVar25 == bVar26) {
              uVar16 = *puVar10;
              *puVar5 = uVar15 | uVar16 << 0x10;
              uVar15 = uVar16 >> 0x10;
              bVar26 = SBORROW4(iVar13,4);
              iVar13 = iVar13 + -4;
              bVar25 = iVar13 < 0;
              puVar5 = puVar5 + 1;
              puVar10 = puVar10 + 1;
            }
          } while (bVar25 == bVar26);
          pbVar6 = (byte *)((int)puVar10 + -2);
          uVar15 = iVar13 + 6;
        }
        else if (uVar15 < 3) {
          uVar15 = *puVar5 & 0xff;
          bVar26 = SBORROW4(param_3,0x20);
          iVar13 = param_3 - 0x20;
          bVar25 = iVar13 < 0;
          if (0x1f < (int)param_3) {
            do {
              if (bVar25 == bVar26) {
                uVar16 = *puVar10;
                uVar18 = puVar10[1];
                uVar19 = puVar10[2];
                uVar20 = puVar10[3];
                uVar21 = puVar10[4];
                uVar22 = puVar10[5];
                uVar23 = puVar10[6];
                uVar24 = puVar10[7];
                puVar10 = puVar10 + 8;
                uVar17 = uVar15 | uVar16 << 8;
                uVar15 = uVar24 >> 0x18;
                *puVar5 = uVar17;
                puVar5[1] = uVar16 >> 0x18 | uVar18 << 8;
                puVar5[2] = uVar18 >> 0x18 | uVar19 << 8;
                puVar5[3] = uVar19 >> 0x18 | uVar20 << 8;
                puVar5[4] = uVar20 >> 0x18 | uVar21 << 8;
                puVar5[5] = uVar21 >> 0x18 | uVar22 << 8;
                puVar5[6] = uVar22 >> 0x18 | uVar23 << 8;
                puVar5[7] = uVar23 >> 0x18 | uVar24 << 8;
                puVar5 = puVar5 + 8;
                bVar26 = SBORROW4(iVar13,0x20);
                iVar13 = iVar13 + -0x20;
                bVar25 = iVar13 < 0;
              }
            } while (bVar25 == bVar26);
          }
          bVar26 = SBORROW4(iVar13 + 0x20,4);
          iVar13 = iVar13 + 0x1c;
          bVar25 = iVar13 < 0;
          do {
            if (bVar25 == bVar26) {
              uVar16 = *puVar10;
              *puVar5 = uVar15 | uVar16 << 8;
              uVar15 = uVar16 >> 0x18;
              bVar26 = SBORROW4(iVar13,4);
              iVar13 = iVar13 + -4;
              bVar25 = iVar13 < 0;
              puVar5 = puVar5 + 1;
              puVar10 = puVar10 + 1;
            }
          } while (bVar25 == bVar26);
          pbVar6 = (byte *)((int)puVar10 + -1);
          uVar15 = iVar13 + 5;
        }
        else {
          uVar15 = *puVar5 & 0xffffff;
          bVar26 = SBORROW4(param_3,0x20);
          iVar13 = param_3 - 0x20;
          bVar25 = iVar13 < 0;
          if (0x1f < (int)param_3) {
            do {
              if (bVar25 == bVar26) {
                uVar16 = *puVar10;
                uVar18 = puVar10[1];
                uVar19 = puVar10[2];
                uVar20 = puVar10[3];
                uVar21 = puVar10[4];
                uVar22 = puVar10[5];
                uVar23 = puVar10[6];
                uVar24 = puVar10[7];
                puVar10 = puVar10 + 8;
                uVar17 = uVar15 | uVar16 << 0x18;
                uVar15 = uVar24 >> 8;
                *puVar5 = uVar17;
                puVar5[1] = uVar16 >> 8 | uVar18 << 0x18;
                puVar5[2] = uVar18 >> 8 | uVar19 << 0x18;
                puVar5[3] = uVar19 >> 8 | uVar20 << 0x18;
                puVar5[4] = uVar20 >> 8 | uVar21 << 0x18;
                puVar5[5] = uVar21 >> 8 | uVar22 << 0x18;
                puVar5[6] = uVar22 >> 8 | uVar23 << 0x18;
                puVar5[7] = uVar23 >> 8 | uVar24 << 0x18;
                puVar5 = puVar5 + 8;
                bVar26 = SBORROW4(iVar13,0x20);
                iVar13 = iVar13 + -0x20;
                bVar25 = iVar13 < 0;
              }
            } while (bVar25 == bVar26);
          }
          bVar26 = SBORROW4(iVar13 + 0x20,4);
          iVar13 = iVar13 + 0x1c;
          bVar25 = iVar13 < 0;
          do {
            if (bVar25 == bVar26) {
              uVar16 = *puVar10;
              *puVar5 = uVar15 | uVar16 << 0x18;
              uVar15 = uVar16 >> 8;
              bVar26 = SBORROW4(iVar13,4);
              iVar13 = iVar13 + -4;
              bVar25 = iVar13 < 0;
              puVar5 = puVar5 + 1;
              puVar10 = puVar10 + 1;
            }
          } while (bVar25 == bVar26);
          pbVar6 = (byte *)((int)puVar10 + -3);
          uVar15 = iVar13 + 7;
        }
        if ((uVar15 & 4) != 0) {
          pbVar8 = pbVar6 + 2;
          bVar1 = pbVar6[1];
          *(byte *)puVar5 = *pbVar6;
          *(byte *)((int)puVar5 + 1) = bVar1;
          pbVar9 = pbVar6 + 3;
          pbVar6 = pbVar6 + 4;
          bVar1 = *pbVar9;
          pbVar9 = (byte *)((int)puVar5 + 3);
          *(byte *)((int)puVar5 + 2) = *pbVar8;
          puVar5 = puVar5 + 1;
          *pbVar9 = bVar1;
        }
        if ((uVar15 & 2) != 0) {
          pbVar9 = pbVar6 + 1;
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 2;
          bVar2 = *pbVar9;
          pbVar9 = (byte *)((int)puVar5 + 1);
          *(byte *)puVar5 = bVar1;
          puVar5 = (uint *)((int)puVar5 + 2);
          *pbVar9 = bVar2;
        }
        if ((uVar15 & 1) != 0) {
          *(byte *)puVar5 = *pbVar6;
        }
        return fparam_0;
      }
      while (uVar15 = param_3 - 0x20, 0x1f < param_3) {
        uVar16 = puVar10[1];
        uVar17 = puVar10[2];
        uVar18 = puVar10[3];
        uVar19 = puVar10[4];
        uVar20 = puVar10[5];
        uVar21 = puVar10[6];
        uVar22 = puVar10[7];
        HintPreloadData(puVar10 + 0x18);
        *puVar5 = *puVar10;
        puVar5[1] = uVar16;
        puVar5[2] = uVar17;
        puVar5[3] = uVar18;
        puVar5[4] = uVar19;
        puVar5[5] = uVar20;
        puVar5[6] = uVar21;
        puVar5[7] = uVar22;
        puVar5 = puVar5 + 8;
        puVar10 = puVar10 + 8;
        param_3 = uVar15;
      }
      uVar16 = 0;
      if ((bool)((byte)(uVar15 >> 4) & 1)) {
        uVar16 = *puVar10;
        uVar17 = puVar10[1];
        uVar18 = puVar10[2];
        uVar19 = puVar10[3];
        puVar10 = puVar10 + 4;
        *puVar5 = uVar16;
        puVar5[1] = uVar17;
        puVar5[2] = uVar18;
        puVar5[3] = uVar19;
        puVar5 = puVar5 + 4;
      }
      if ((int)(param_3 << 0x1c) < 0) {
        uVar16 = *puVar10;
        uVar17 = puVar10[1];
        puVar10 = puVar10 + 2;
        *puVar5 = uVar16;
        puVar5[1] = uVar17;
        puVar5 = puVar5 + 2;
      }
      puVar4 = puVar5;
      puVar7 = puVar10;
      if ((bool)((byte)(uVar15 >> 2) & 1)) {
        puVar7 = puVar10 + 1;
        uVar16 = *puVar10;
        puVar4 = puVar5 + 1;
        *puVar5 = uVar16;
      }
      uVar14 = (undefined2)uVar16;
      if ((uVar15 & 3) != 0) {
        bVar26 = (bool)((byte)(uVar15 >> 1) & 1);
        uVar15 = param_3 << 0x1f;
        bVar25 = (int)uVar15 < 0;
        puVar10 = puVar7;
        if (bVar26) {
          puVar10 = (uint *)((int)puVar7 + 2);
          uVar14 = (undefined2)*puVar7;
        }
        if (bVar25) {
          uVar15 = (uint)(byte)*puVar10;
        }
        puVar10 = puVar4;
        if (bVar26) {
          puVar10 = (uint *)((int)puVar4 + 2);
          *(undefined2 *)puVar4 = uVar14;
        }
        if (bVar25) {
          *(byte *)puVar10 = (byte)uVar15;
        }
        return fparam_0;
      }
      return fparam_0;
    }
    if (param_3 == 8) {
      uVar15 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar15;
      return fparam_0;
    }
    if (4 < param_3) {
      if (param_3 == 6) {
        uVar15 = param_2[1];
        *param_1 = *param_2;
        *(short *)(param_1 + 1) = (short)uVar15;
        return fparam_0;
      }
      if (param_3 < 6) {
        uVar15 = param_2[1];
        *param_1 = *param_2;
        *(char *)(param_1 + 1) = (char)uVar15;
        return fparam_0;
      }
      uVar15 = param_2[1];
      *param_1 = *param_2;
      uVar3 = *(undefined1 *)((int)param_2 + 6);
      *(short *)(param_1 + 1) = (short)uVar15;
      *(undefined1 *)((int)param_1 + 6) = uVar3;
      return fparam_0;
    }
    if (param_3 == 4) {
      *param_1 = *param_2;
      return fparam_0;
    }
    if (param_3 < 2) {
      if (param_3 != 0) {
        *(char *)param_1 = (char)*param_2;
      }
      return fparam_0;
    }
    if (param_3 == 2) {
      *(short *)param_1 = (short)*param_2;
      return fparam_0;
    }
    uVar3 = *(undefined1 *)((int)param_2 + 2);
    *(short *)param_1 = (short)*param_2;
    *(undefined1 *)((int)param_1 + 2) = uVar3;
    return fparam_0;
  }
  puVar5 = (uint *)((int)param_1 + param_3);
  puVar10 = (uint *)((int)param_2 + param_3);
  if (8 < param_3) {
    if (((uint)puVar10 & 2) != 0) {
      param_3 = param_3 - 2;
      puVar11 = (undefined1 *)((int)puVar10 + -1);
      puVar10 = (uint *)((int)puVar10 + -2);
      uVar3 = *(undefined1 *)puVar10;
      *(undefined1 *)((int)puVar5 + -1) = *puVar11;
      puVar5 = (uint *)((int)puVar5 + -2);
      *(undefined1 *)puVar5 = uVar3;
    }
    if (((uint)puVar10 & 1) != 0) {
      param_3 = param_3 - 1;
      puVar10 = (uint *)((int)puVar10 + -1);
      puVar5 = (uint *)((int)puVar5 + -1);
      *(undefined1 *)puVar5 = *(undefined1 *)puVar10;
    }
    uVar15 = (uint)puVar5 & 3;
    if (uVar15 != 0) {
      puVar5 = (uint *)((uint)puVar5 & 0xfffffffc);
      if (uVar15 == 2) {
        uVar15 = *puVar5 & 0xffff0000;
        bVar26 = SBORROW4(param_3,0x20);
        iVar13 = param_3 - 0x20;
        bVar25 = iVar13 < 0;
        do {
          if (bVar25 == bVar26) {
            uVar23 = puVar10[-1];
            uVar22 = puVar10[-2];
            uVar21 = puVar10[-3];
            uVar20 = puVar10[-4];
            uVar19 = puVar10[-5];
            uVar18 = puVar10[-6];
            uVar17 = puVar10[-7];
            puVar10 = puVar10 + -8;
            uVar16 = *puVar10;
            uVar24 = uVar15 | uVar23 >> 0x10;
            uVar15 = uVar16 << 0x10;
            *puVar5 = uVar24;
            puVar5[-1] = uVar23 << 0x10 | uVar22 >> 0x10;
            puVar5[-2] = uVar22 << 0x10 | uVar21 >> 0x10;
            puVar5[-3] = uVar21 << 0x10 | uVar20 >> 0x10;
            puVar5[-4] = uVar20 << 0x10 | uVar19 >> 0x10;
            puVar5[-5] = uVar19 << 0x10 | uVar18 >> 0x10;
            puVar5[-6] = uVar18 << 0x10 | uVar17 >> 0x10;
            puVar5[-7] = uVar17 << 0x10 | uVar16 >> 0x10;
            puVar5 = puVar5 + -8;
            bVar26 = SBORROW4(iVar13,0x20);
            iVar13 = iVar13 + -0x20;
            bVar25 = iVar13 < 0;
          }
        } while (bVar25 == bVar26);
        bVar26 = SBORROW4(iVar13 + 0x20,4);
        iVar13 = iVar13 + 0x1c;
        bVar25 = iVar13 < 0;
        do {
          if (bVar25 == bVar26) {
            puVar10 = puVar10 + -1;
            uVar16 = *puVar10;
            *puVar5 = uVar15 | uVar16 >> 0x10;
            uVar15 = uVar16 << 0x10;
            bVar26 = SBORROW4(iVar13,4);
            iVar13 = iVar13 + -4;
            bVar25 = iVar13 < 0;
            puVar5 = puVar5 + -1;
          }
        } while (bVar25 == bVar26);
        puVar5 = puVar5 + 1;
        puVar12 = (undefined2 *)((int)puVar10 + 2);
        uVar15 = iVar13 + 6;
      }
      else if (uVar15 < 3) {
        uVar15 = *puVar5 & 0xffffff00;
        bVar26 = SBORROW4(param_3,0x20);
        iVar13 = param_3 - 0x20;
        bVar25 = iVar13 < 0;
        do {
          if (bVar25 == bVar26) {
            uVar23 = puVar10[-1];
            uVar22 = puVar10[-2];
            uVar21 = puVar10[-3];
            uVar20 = puVar10[-4];
            uVar19 = puVar10[-5];
            uVar18 = puVar10[-6];
            uVar17 = puVar10[-7];
            puVar10 = puVar10 + -8;
            uVar16 = *puVar10;
            uVar24 = uVar15 | uVar23 >> 0x18;
            uVar15 = uVar16 << 8;
            *puVar5 = uVar24;
            puVar5[-1] = uVar23 << 8 | uVar22 >> 0x18;
            puVar5[-2] = uVar22 << 8 | uVar21 >> 0x18;
            puVar5[-3] = uVar21 << 8 | uVar20 >> 0x18;
            puVar5[-4] = uVar20 << 8 | uVar19 >> 0x18;
            puVar5[-5] = uVar19 << 8 | uVar18 >> 0x18;
            puVar5[-6] = uVar18 << 8 | uVar17 >> 0x18;
            puVar5[-7] = uVar17 << 8 | uVar16 >> 0x18;
            puVar5 = puVar5 + -8;
            bVar26 = SBORROW4(iVar13,0x20);
            iVar13 = iVar13 + -0x20;
            bVar25 = iVar13 < 0;
          }
        } while (bVar25 == bVar26);
        bVar26 = SBORROW4(iVar13 + 0x20,4);
        iVar13 = iVar13 + 0x1c;
        bVar25 = iVar13 < 0;
        do {
          if (bVar25 == bVar26) {
            puVar10 = puVar10 + -1;
            uVar16 = *puVar10;
            *puVar5 = uVar15 | uVar16 >> 0x18;
            uVar15 = uVar16 << 8;
            bVar26 = SBORROW4(iVar13,4);
            iVar13 = iVar13 + -4;
            bVar25 = iVar13 < 0;
            puVar5 = puVar5 + -1;
          }
        } while (bVar25 == bVar26);
        puVar5 = puVar5 + 1;
        puVar12 = (undefined2 *)((int)puVar10 + 3);
        uVar15 = iVar13 + 7;
      }
      else {
        uVar15 = *puVar5 & 0xff000000;
        bVar26 = SBORROW4(param_3,0x20);
        iVar13 = param_3 - 0x20;
        bVar25 = iVar13 < 0;
        do {
          if (bVar25 == bVar26) {
            uVar23 = puVar10[-1];
            uVar22 = puVar10[-2];
            uVar21 = puVar10[-3];
            uVar20 = puVar10[-4];
            uVar19 = puVar10[-5];
            uVar18 = puVar10[-6];
            uVar17 = puVar10[-7];
            puVar10 = puVar10 + -8;
            uVar16 = *puVar10;
            uVar24 = uVar15 | uVar23 >> 8;
            uVar15 = uVar16 << 0x18;
            *puVar5 = uVar24;
            puVar5[-1] = uVar23 << 0x18 | uVar22 >> 8;
            puVar5[-2] = uVar22 << 0x18 | uVar21 >> 8;
            puVar5[-3] = uVar21 << 0x18 | uVar20 >> 8;
            puVar5[-4] = uVar20 << 0x18 | uVar19 >> 8;
            puVar5[-5] = uVar19 << 0x18 | uVar18 >> 8;
            puVar5[-6] = uVar18 << 0x18 | uVar17 >> 8;
            puVar5[-7] = uVar17 << 0x18 | uVar16 >> 8;
            puVar5 = puVar5 + -8;
            bVar26 = SBORROW4(iVar13,0x20);
            iVar13 = iVar13 + -0x20;
            bVar25 = iVar13 < 0;
          }
        } while (bVar25 == bVar26);
        bVar26 = SBORROW4(iVar13 + 0x20,4);
        iVar13 = iVar13 + 0x1c;
        bVar25 = iVar13 < 0;
        do {
          if (bVar25 == bVar26) {
            puVar10 = puVar10 + -1;
            uVar16 = *puVar10;
            *puVar5 = uVar15 | uVar16 >> 8;
            uVar15 = uVar16 << 0x18;
            bVar26 = SBORROW4(iVar13,4);
            iVar13 = iVar13 + -4;
            bVar25 = iVar13 < 0;
            puVar5 = puVar5 + -1;
          }
        } while (bVar25 == bVar26);
        puVar5 = puVar5 + 1;
        puVar12 = (undefined2 *)((int)puVar10 + 1);
        uVar15 = iVar13 + 5;
      }
      if ((uVar15 & 4) != 0) {
        uVar3 = *(undefined1 *)(puVar12 + -1);
        *(undefined1 *)((int)puVar5 + -1) = *(undefined1 *)((int)puVar12 + -1);
        *(undefined1 *)((int)puVar5 + -2) = uVar3;
        puVar11 = (undefined1 *)((int)puVar12 + -3);
        puVar12 = puVar12 + -2;
        uVar3 = *(undefined1 *)puVar12;
        *(undefined1 *)((int)puVar5 + -3) = *puVar11;
        puVar5 = puVar5 + -1;
        *(undefined1 *)puVar5 = uVar3;
      }
      if ((uVar15 & 2) != 0) {
        puVar11 = (undefined1 *)((int)puVar12 + -1);
        puVar12 = puVar12 + -1;
        uVar3 = *(undefined1 *)puVar12;
        *(undefined1 *)((int)puVar5 + -1) = *puVar11;
        puVar5 = (uint *)((int)puVar5 + -2);
        *(undefined1 *)puVar5 = uVar3;
      }
      if ((uVar15 & 1) != 0) {
        *(undefined1 *)((int)puVar5 + -1) = *(undefined1 *)((int)puVar12 + -1);
      }
      return fparam_0;
    }
    while (uVar15 = param_3 - 0x20, 0x1f < param_3) {
      uVar18 = puVar10[-2];
      uVar17 = puVar10[-3];
      uVar16 = puVar10[-4];
      uVar22 = puVar10[-5];
      uVar21 = puVar10[-6];
      uVar20 = puVar10[-7];
      uVar19 = puVar10[-8];
      HintPreloadData(puVar10 + -0x18);
      puVar5[-1] = puVar10[-1];
      puVar5[-2] = uVar18;
      puVar5[-3] = uVar17;
      puVar5[-4] = uVar16;
      puVar5[-5] = uVar22;
      puVar5[-6] = uVar21;
      puVar5[-7] = uVar20;
      puVar5 = puVar5 + -8;
      *puVar5 = uVar19;
      puVar10 = puVar10 + -8;
      param_3 = uVar15;
    }
    uVar16 = 0;
    if ((bool)((byte)(uVar15 >> 4) & 1)) {
      puVar7 = puVar10 + -1;
      uVar18 = puVar10[-2];
      uVar17 = puVar10[-3];
      puVar10 = puVar10 + -4;
      uVar16 = *puVar10;
      puVar5[-1] = *puVar7;
      puVar5[-2] = uVar18;
      puVar5[-3] = uVar17;
      puVar5 = puVar5 + -4;
      *puVar5 = uVar16;
    }
    if ((int)(param_3 << 0x1c) < 0) {
      puVar7 = puVar10 + -1;
      puVar10 = puVar10 + -2;
      uVar16 = *puVar10;
      puVar5[-1] = *puVar7;
      puVar5 = puVar5 + -2;
      *puVar5 = uVar16;
    }
    if ((bool)((byte)(uVar15 >> 2) & 1)) {
      puVar10 = puVar10 + -1;
      uVar16 = *puVar10;
      puVar5 = puVar5 + -1;
      *puVar5 = uVar16;
    }
    uVar14 = (undefined2)uVar16;
    if ((uVar15 & 3) != 0) {
      bVar26 = (bool)((byte)(uVar15 >> 1) & 1);
      uVar15 = param_3 << 0x1f;
      bVar25 = (int)uVar15 < 0;
      if (bVar26) {
        puVar10 = (uint *)((int)puVar10 + -2);
        uVar14 = *(undefined2 *)puVar10;
      }
      if (bVar25) {
        uVar15 = (uint)*(byte *)((int)puVar10 + -1);
      }
      if (bVar26) {
        puVar5 = (uint *)((int)puVar5 + -2);
        *(undefined2 *)puVar5 = uVar14;
      }
      if (bVar25) {
        *(char *)((int)puVar5 + -1) = (char)uVar15;
      }
      return fparam_0;
    }
    return fparam_0;
  }
  if (param_3 == 8) {
    uVar15 = puVar10[-2];
    puVar5[-1] = puVar10[-1];
    puVar5[-2] = uVar15;
    return fparam_0;
  }
  if (4 < param_3) {
    if (param_3 == 6) {
      uVar14 = *(undefined2 *)((int)puVar10 + -6);
      puVar5[-1] = puVar10[-1];
      *(undefined2 *)((int)puVar5 + -6) = uVar14;
      return fparam_0;
    }
    if (param_3 < 6) {
      uVar3 = *(undefined1 *)((int)puVar10 + -5);
      puVar5[-1] = puVar10[-1];
      *(undefined1 *)((int)puVar5 + -5) = uVar3;
      return fparam_0;
    }
    uVar14 = *(undefined2 *)((int)puVar10 + -6);
    puVar5[-1] = puVar10[-1];
    uVar3 = *(undefined1 *)((int)puVar10 + -7);
    *(undefined2 *)((int)puVar5 + -6) = uVar14;
    *(undefined1 *)((int)puVar5 + -7) = uVar3;
    return fparam_0;
  }
  if (param_3 == 4) {
    puVar5[-1] = puVar10[-1];
    return fparam_0;
  }
  if (param_3 < 2) {
    if (param_3 != 0) {
      *(undefined1 *)((int)puVar5 + -1) = *(undefined1 *)((int)puVar10 + -1);
    }
    return fparam_0;
  }
  if (param_3 == 2) {
    *(undefined2 *)((int)puVar5 + -2) = *(undefined2 *)((int)puVar10 + -2);
    return fparam_0;
  }
  uVar3 = *(undefined1 *)((int)puVar10 + -3);
  *(undefined2 *)((int)puVar5 + -2) = *(undefined2 *)((int)puVar10 + -2);
  *(undefined1 *)((int)puVar5 + -3) = uVar3;
  return fparam_0;
}

