#include "ghidra_types.h"


// USA 004929F0 <- EU 004929C8 (Ghidra, non-matching)

uint func_004929F0(undefined4 *param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  char cVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  
  if (*(char *)((int)param_1 + 0x12) != '\0') {
    uVar12 = 0;
    pbVar5 = param_2;
    uVar7 = param_3;
    do {
      bVar2 = *(char *)((int)param_1 + 0x12) - 1;
      *(byte *)((int)param_1 + 0x12) = bVar2;
      if (bVar2 == 0xf) {
        if (*pbVar5 != 0x59) {
          return 0xffffffff;
        }
      }
      else if (bVar2 == 0xe) {
        if (*pbVar5 != 0x61) {
          return 0xffffffff;
        }
      }
      else if (bVar2 == 0xd) {
        if (*pbVar5 != 0x7a) {
          return 0xffffffff;
        }
      }
      else if (bVar2 == 0xc) {
        if (*pbVar5 != 0x30) {
          return 0xffffffff;
        }
      }
      else if (7 < bVar2) {
        param_1[1] = param_1[1] | (uint)*pbVar5 << (uint)(byte)(bVar2 * '\b' - 0x40);
      }
      uVar7 = uVar7 - 1;
      pbVar5 = pbVar5 + 1;
      uVar12 = uVar12 + 1;
      if (uVar7 == 0) {
        if (*(char *)((int)param_1 + 0x12) != '\0') goto LAB_00492a64;
        break;
      }
    } while (bVar2 != 0);
    pbVar3 = (byte *)param_1[2];
    bVar15 = pbVar3 == (byte *)0x0;
    pbVar1 = pbVar3;
    if (0 < (int)pbVar3) {
      pbVar5 = (byte *)param_1[1];
      pbVar1 = pbVar5 + -(int)pbVar3;
      bVar15 = pbVar5 == pbVar3;
    }
    if (!bVar15 && (int)pbVar1 < 0 == (0 < (int)pbVar3 && SBORROW4((int)pbVar5,(int)pbVar3))) {
      param_1[1] = pbVar3;
    }
LAB_00492a64:
    if ((int)uVar12 < 0) {
      return uVar12;
    }
    param_3 = param_3 - uVar12;
    param_2 = param_2 + uVar12;
    if (param_3 == 0) {
      if (*(char *)((int)param_1 + 0x12) != '\0') {
        return 0xffffffff;
      }
      return param_1[1];
    }
  }
  uVar9 = param_1[1];
  cVar4 = *(char *)((int)param_1 + 0xf);
  pbVar5 = (byte *)*param_1;
  uVar13 = (uint)*(ushort *)(param_1 + 4);
  uVar7 = (uint)*(byte *)(param_1 + 3);
  bVar2 = *(byte *)((int)param_1 + 0xd);
  uVar14 = (uint)bVar2;
  uVar10 = (uint)*(byte *)((int)param_1 + 0xe);
  uVar12 = param_3;
  if (0 < (int)uVar9) {
    do {
      if (cVar4 == '\x02') {
        uVar11 = *param_2 + 0x12;
        if (uVar9 < uVar11) {
          if (param_1[2] == 0) {
            return 0xfffffffe;
          }
          uVar11 = uVar9 & 0xffff;
        }
        uVar9 = uVar9 - uVar11;
        pbVar1 = pbVar5;
        if (uVar11 < 0x80000000) {
          if (uVar11 < 2) {
            uVar11 = 1;
          }
          pbVar6 = pbVar5 + -uVar13;
          pbVar1 = pbVar6 + -1;
          pbVar3 = pbVar5 + -1;
          if ((uVar11 & 1) != 0) {
            *pbVar5 = *pbVar6;
            pbVar1 = pbVar6;
            pbVar3 = pbVar5;
          }
          for (iVar8 = (int)uVar11 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
            pbVar3[1] = pbVar1[1];
            pbVar1 = pbVar1 + 2;
            pbVar3 = pbVar3 + 2;
            *pbVar3 = *pbVar1;
          }
          pbVar5 = pbVar5 + uVar11;
        }
        else {
          do {
            uVar11 = uVar11 - 1;
            pbVar5 = pbVar1 + 1;
            *pbVar1 = pbVar1[-uVar13];
            pbVar1 = pbVar5;
          } while (uVar11 != 0);
        }
LAB_00492c70:
        param_3 = uVar12 - 1;
        pbVar1 = param_2 + 1;
        cVar4 = '\0';
      }
      else if (cVar4 == '\x01') {
        pbVar1 = param_2 + 1;
        param_3 = uVar12 - 1;
        uVar11 = (uVar10 << 8) >> 0xc;
        uVar13 = ((uint)*param_2 | uVar10 << 8 & 0xffff0fff) + 1;
        if (uVar11 != 0) {
          uVar11 = uVar11 + 2;
          if (uVar9 < uVar11) {
            if (param_1[2] == 0) {
              return 0xfffffffe;
            }
            uVar11 = uVar9 & 0xffff;
          }
          uVar9 = uVar9 - uVar11;
          pbVar1 = pbVar5;
          if (uVar11 < 0x80000000) {
            if (uVar11 < 2) {
              uVar11 = 1;
            }
            pbVar6 = pbVar5 + -uVar13;
            pbVar1 = pbVar6 + -1;
            pbVar3 = pbVar5 + -1;
            if ((uVar11 & 1) != 0) {
              *pbVar5 = *pbVar6;
              pbVar1 = pbVar6;
              pbVar3 = pbVar5;
            }
            for (iVar8 = (int)uVar11 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
              pbVar3[1] = pbVar1[1];
              pbVar1 = pbVar1 + 2;
              pbVar3 = pbVar3 + 2;
              *pbVar3 = *pbVar1;
            }
            pbVar5 = pbVar5 + uVar11;
          }
          else {
            do {
              uVar11 = uVar11 - 1;
              pbVar5 = pbVar1 + 1;
              *pbVar1 = pbVar1[-uVar13];
              pbVar1 = pbVar5;
            } while (uVar11 != 0);
          }
          goto LAB_00492c70;
        }
        cVar4 = '\x02';
      }
      else {
        if (uVar7 == 0) {
          bVar2 = *param_2;
          uVar14 = (uint)bVar2;
          uVar12 = uVar12 - 1;
          uVar7 = 0x80;
          param_3 = 0;
          param_2 = param_2 + 1;
          if (uVar12 == 0) break;
        }
        if ((uVar14 & uVar7) == 0) {
          uVar10 = (uint)*param_2;
          cVar4 = '\x01';
        }
        else {
          uVar9 = uVar9 - 1;
          *pbVar5 = *param_2;
          pbVar5 = pbVar5 + 1;
        }
        pbVar1 = param_2 + 1;
        param_3 = uVar12 - 1;
        uVar7 = uVar7 >> 1;
      }
      bVar2 = (byte)uVar14;
      uVar11 = 0;
      if (param_3 != 0) {
        uVar11 = uVar9;
      }
      param_2 = pbVar1;
      uVar12 = param_3;
    } while ((param_3 != 0 && uVar9 != 0) && -1 < (int)uVar11);
  }
  param_1[1] = uVar9;
  *(short *)(param_1 + 4) = (short)uVar13;
  *(char *)((int)param_1 + 0xf) = cVar4;
  *param_1 = pbVar5;
  *(char *)(param_1 + 3) = (char)uVar7;
  *(byte *)((int)param_1 + 0xd) = bVar2;
  *(char *)((int)param_1 + 0xe) = (char)uVar10;
  if (uVar9 == 0) {
    param_1 = (undefined4 *)param_1[2];
  }
  if ((uVar9 == 0 && param_1 == (undefined4 *)0x0) && (0x20 < param_3)) {
    return 0xffffffff;
  }
  return uVar9;
}

