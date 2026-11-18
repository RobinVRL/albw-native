#include "ghidra_types.h"

extern int func_00110388(void *param_1);
extern undefined DAT_001161e4;

// USA 00115F34 <- EU 00115F34 (Ghidra, non-matching)
// GLOBAL DAT_001161e4 undefined

ulonglong func_00115F34(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  undefined4 extraout_r1;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  
  bVar12 = param_4 == 0;
  uVar10 = param_4;
  if (bVar12) {
    uVar10 = param_3;
  }
  uVar11 = LZCOUNT(uVar10);
  uVar10 = uVar10 << uVar11 + 1;
  uVar6 = 0;
  if (!bVar12) {
    uVar11 = 0x3f - uVar11;
    bVar12 = uVar11 == 0;
    uVar6 = uVar11;
  }
  if (bVar12) {
    uVar11 = 0x1f - uVar11;
    uVar6 = uVar11;
  }
  if ((int)uVar6 < 0) {
    pvVar4 = func_00110388(0);
    return CONCAT44(extraout_r1,pvVar4);
  }
  if (param_2 == 0) {
    iVar5 = LZCOUNT(param_1);
    bVar12 = true;
  }
  else {
    iVar5 = 0x3f - LZCOUNT(param_2);
    bVar12 = iVar5 == 0;
  }
  if (bVar12) {
    iVar5 = 0x1f - iVar5;
  }
  uVar6 = iVar5 - uVar11;
  if (-1 < (int)uVar6) {
    if (-1 < (int)(4 - uVar6)) {
      uVar7 = 0;
      uVar10 = param_4 << (uVar6 & 0xff) | param_3 >> (0x20 - uVar6 & 0xff);
      uVar11 = param_3 << (uVar6 & 0xff);
      while( true ) {
        bVar13 = uVar11 <= param_1;
        bVar12 = param_2 - uVar10 < (uint)bVar13;
        uVar7 = uVar7 * 2 + (uint)(uVar10 < param_2 || bVar12);
        if (uVar10 < param_2 || bVar12) {
          param_1 = param_1 - uVar11;
          param_2 = param_2 - (uVar10 + !bVar13);
        }
        bVar12 = uVar6 == 0;
        uVar6 = uVar6 - 1;
        if (bVar12) break;
        bVar2 = (byte)uVar10;
        uVar10 = uVar10 >> 1;
        uVar11 = (uint)(bVar2 & 1) << 0x1f | uVar11 >> 1;
      }
      return (ulonglong)uVar7;
    }
    if ((int)(uVar11 - 0x20) < 5) {
      uVar10 = uVar10 | param_3 >> (uVar11 - 0x20 & 0xff);
    }
    uVar6 = *(uint *)(&DAT_001161e4 + (uVar10 >> 0x1c) * 4);
    uVar10 = uVar11;
    if (0x1f < uVar11) {
      uVar10 = uVar11 - 0x20;
    }
    uVar7 = 0x20 - uVar10;
    if (uVar11 < 0x20) {
      uVar11 = (uint)((ulonglong)param_3 * (ulonglong)uVar6);
      uVar6 = uVar6 + (int)((ulonglong)
                            -(((int)((ulonglong)param_3 * (ulonglong)uVar6 >> 0x20) <<
                               (uVar7 & 0xff) | uVar11 >> (uVar10 & 0xff)) +
                             (uint)(uVar11 << (uVar7 & 0xff) != 0)) * (ulonglong)uVar6 >> 0x20);
      uVar11 = (uint)((ulonglong)param_3 * (ulonglong)uVar6);
      uVar6 = uVar6 + (int)((ulonglong)
                            -(((int)((ulonglong)param_3 * (ulonglong)uVar6 >> 0x20) <<
                               (uVar7 & 0xff) | uVar11 >> (uVar10 & 0xff)) +
                             (uint)(uVar11 << (uVar7 & 0xff) != 0)) * (ulonglong)uVar6 >> 0x20);
      if (param_2 != 0) {
        uVar11 = (uint)((ulonglong)param_3 * (ulonglong)uVar6);
        uVar6 = uVar6 + (int)((ulonglong)
                              -(((int)((ulonglong)param_3 * (ulonglong)uVar6 >> 0x20) <<
                                 (uVar7 & 0xff) | uVar11 >> (uVar10 & 0xff)) +
                               (uint)(uVar11 << (uVar7 & 0xff) != 0)) * (ulonglong)uVar6 >> 0x20);
      }
      lVar1 = (ulonglong)param_2 * (ulonglong)uVar6 +
              ((ulonglong)param_1 * (ulonglong)uVar6 >> 0x20);
      uVar11 = (uint)((ulonglong)lVar1 >> 0x20);
      uVar3 = (uint)lVar1 >> (uVar10 & 0xff) | uVar11 << (uVar7 & 0xff);
      uVar8 = (uint)((ulonglong)param_3 * (ulonglong)uVar3);
      uVar11 = uVar11 >> (uVar10 & 0xff);
      uVar7 = param_1 - uVar8;
      uVar8 = param_2 - (uVar11 * param_3 + (int)((ulonglong)param_3 * (ulonglong)uVar3 >> 0x20) +
                        (uint)(param_1 < uVar8));
      if (uVar8 == 0 && uVar7 < param_3) {
        return CONCAT44(uVar11,uVar3);
      }
      lVar1 = (ulonglong)uVar8 * (ulonglong)uVar6 + ((ulonglong)uVar7 * (ulonglong)uVar6 >> 0x20);
      uVar8 = (uint)((ulonglong)lVar1 >> 0x20);
      uVar9 = (uint)lVar1 >> (uVar10 & 0xff) | uVar8 << (0x20 - uVar10 & 0xff);
      uVar6 = uVar3 + uVar9;
      iVar5 = uVar11 + (uVar8 >> (uVar10 & 0xff)) + (uint)CARRY4(uVar3,uVar9);
      uVar7 = uVar7 - param_3 * uVar9;
      if (uVar7 < param_3) {
        return CONCAT44(iVar5,uVar6);
      }
      uVar7 = uVar7 - param_3;
      bVar12 = param_3 <= uVar7;
      if (bVar12) {
        uVar7 = uVar7 - param_3;
      }
      uVar10 = uVar6 + 1 + (uint)bVar12;
      return CONCAT44(iVar5 + (uint)(0xfffffffe < uVar6) + (uint)CARRY4(uVar6 + 1,(uint)bVar12) +
                      (uint)CARRY4(uVar10,(uint)(param_3 <= uVar7)),uVar10 + (param_3 <= uVar7));
    }
    lVar1 = (ulonglong)param_4 * (ulonglong)uVar6 + ((ulonglong)param_3 * (ulonglong)uVar6 >> 0x20);
    uVar11 = (uint)lVar1;
    uVar6 = uVar6 + (int)((ulonglong)
                          -(((int)((ulonglong)lVar1 >> 0x20) << (uVar7 & 0xff) |
                            uVar11 >> (uVar10 & 0xff)) + (uint)(uVar11 << (uVar7 & 0xff) != 0)) *
                          (ulonglong)uVar6 >> 0x20);
    lVar1 = (ulonglong)param_4 * (ulonglong)uVar6 + ((ulonglong)param_3 * (ulonglong)uVar6 >> 0x20);
    uVar11 = (uint)lVar1;
    uVar3 = (uVar6 + (int)((ulonglong)
                           -(((int)((ulonglong)lVar1 >> 0x20) << (uVar7 & 0xff) |
                             uVar11 >> (uVar10 & 0xff)) + (uint)(uVar11 << (uVar7 & 0xff) != 0)) *
                           (ulonglong)uVar6 >> 0x20)) - 1;
    uVar6 = (uint)((ulonglong)param_2 * (ulonglong)uVar3 +
                   ((ulonglong)param_1 * (ulonglong)uVar3 >> 0x20) >> 0x20) >> (uVar10 & 0xff);
    uVar7 = (uint)((ulonglong)param_3 * (ulonglong)uVar6);
    uVar11 = param_1 - uVar7;
    uVar7 = param_2 - (uVar6 * param_4 + (int)((ulonglong)param_3 * (ulonglong)uVar6 >> 0x20) +
                      (uint)(param_1 < uVar7));
    bVar12 = param_4 <= uVar7;
    if (uVar7 == param_4) {
      bVar12 = param_3 <= uVar11;
    }
    if (!bVar12) {
      return (ulonglong)uVar6;
    }
    uVar10 = (uint)((ulonglong)uVar7 * (ulonglong)uVar3 +
                    ((ulonglong)uVar11 * (ulonglong)uVar3 >> 0x20) >> 0x20) >> (uVar10 & 0xff);
    uVar3 = (uint)((ulonglong)param_3 * (ulonglong)uVar10);
    uVar7 = uVar7 - (uVar10 * param_4 + (int)((ulonglong)param_3 * (ulonglong)uVar10 >> 0x20) +
                    (uint)(uVar11 < uVar3));
    bVar12 = param_4 <= uVar7;
    if (uVar7 == param_4) {
      bVar12 = param_3 <= uVar11 - uVar3;
    }
    if (!bVar12) {
      return (ulonglong)(uVar6 + uVar10);
    }
    return (ulonglong)(uVar6 + uVar10 + 1);
  }
  return 0;
}

