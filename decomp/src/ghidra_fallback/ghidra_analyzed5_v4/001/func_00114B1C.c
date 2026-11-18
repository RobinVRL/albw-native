#include "ghidra_types.h"


// USA 00114B1C <- EU 00114B1C (Ghidra, non-matching)

ulonglong func_00114B1C(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_r4;
  uint unaff_r5;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
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
  
  uVar1 = param_1 ^ param_4;
  if (param_3 == 0) {
    if (unaff_r5 == 0) {
      uVar14 = unaff_r4 >> 0x10;
      uVar13 = param_2 >> 0x10;
      uVar15 = unaff_r4 & ~(uVar14 << 0x10);
      uVar5 = param_2 & ~(uVar13 << 0x10);
      uVar4 = uVar15 * uVar13;
      uVar15 = uVar5 * uVar15;
      uVar5 = uVar14 * uVar5;
      uVar3 = uVar4 * 0x10000;
      uVar12 = uVar15 + uVar3;
      uVar2 = uVar5 * 0x10000;
      uVar16 = uVar12 + uVar2;
      iVar6 = uVar14 * uVar13 + (uVar4 >> 0x10) + (uint)CARRY4(uVar15,uVar3) + (uVar5 >> 0x10) +
              (uint)CARRY4(uVar12,uVar2);
      if (-1 < iVar6) {
        return CONCAT44(iVar6 * 2 + (uint)CARRY4(uVar16,uVar16),uVar1) & 0xffffffff80000000;
      }
      return CONCAT44(iVar6,uVar1) & 0xffffffff80000000;
    }
    uVar15 = param_2 >> 0x10;
    uVar12 = unaff_r4 >> 0x10;
    uVar8 = param_2 & ~(uVar15 << 0x10);
    uVar17 = unaff_r4 & ~(uVar12 << 0x10);
    uVar4 = uVar17 * uVar8;
    uVar17 = uVar15 * uVar17;
    uVar3 = uVar8 * uVar12 * 0x10000;
    uVar5 = uVar4 + uVar3;
    uVar16 = unaff_r5 >> 0x10;
    uVar2 = uVar17 * 0x10000;
    uVar7 = uVar5 + uVar2;
    uVar18 = unaff_r5 & ~(uVar16 << 0x10);
    uVar9 = uVar18 * uVar8;
    uVar18 = uVar15 * uVar18;
    uVar14 = uVar8 * uVar16 * 0x10000;
    uVar10 = uVar9 + uVar14;
    uVar13 = uVar18 * 0x10000;
    uVar11 = uVar10 + uVar13;
    uVar14 = uVar15 * uVar16 + (uVar8 * uVar16 >> 0x10) + (uint)CARRY4(uVar9,uVar14) +
             (uVar18 >> 0x10) + (uint)CARRY4(uVar10,uVar13);
    uVar13 = uVar14 + uVar7;
    iVar6 = uVar15 * uVar12 + (uVar8 * uVar12 >> 0x10) + (uint)CARRY4(uVar4,uVar3) +
            (uVar17 >> 0x10) + (uint)CARRY4(uVar5,uVar2) + (uint)CARRY4(uVar14,uVar7);
    if (-1 < iVar6) {
      return CONCAT44(iVar6 * 2 +
                      (uint)(CARRY4(uVar13,uVar13) || CARRY4(uVar13 * 2,(uint)CARRY4(uVar11,uVar11))
                            ),uVar1) & 0xffffffff80000000;
    }
    return CONCAT44(iVar6,uVar1) & 0xffffffff80000000;
  }
  if (unaff_r5 == 0) {
    uVar15 = unaff_r4 >> 0x10;
    uVar12 = param_2 >> 0x10;
    uVar8 = unaff_r4 & ~(uVar15 << 0x10);
    uVar17 = param_2 & ~(uVar12 << 0x10);
    uVar4 = uVar17 * uVar8;
    uVar17 = uVar15 * uVar17;
    uVar3 = uVar8 * uVar12 * 0x10000;
    uVar5 = uVar4 + uVar3;
    uVar16 = param_3 >> 0x10;
    uVar2 = uVar17 * 0x10000;
    uVar7 = uVar5 + uVar2;
    uVar18 = param_3 & ~(uVar16 << 0x10);
    uVar9 = uVar18 * uVar8;
    uVar18 = uVar15 * uVar18;
    uVar14 = uVar8 * uVar16 * 0x10000;
    uVar10 = uVar9 + uVar14;
    uVar13 = uVar18 * 0x10000;
    uVar11 = uVar10 + uVar13;
    uVar13 = uVar15 * uVar16 + (uVar8 * uVar16 >> 0x10) + (uint)CARRY4(uVar9,uVar14) +
             (uVar18 >> 0x10) + (uint)CARRY4(uVar10,uVar13);
    uVar14 = uVar13 + uVar7;
    iVar6 = uVar15 * uVar12 + (uVar8 * uVar12 >> 0x10) + (uint)CARRY4(uVar4,uVar3) +
            (uVar17 >> 0x10) + (uint)CARRY4(uVar5,uVar2) + (uint)CARRY4(uVar13,uVar7);
    if (-1 < iVar6) {
      return CONCAT44(iVar6 * 2 +
                      (uint)(CARRY4(uVar14,uVar14) || CARRY4(uVar14 * 2,(uint)CARRY4(uVar11,uVar11))
                            ),uVar1) & 0xffffffff80000000;
    }
    return CONCAT44(iVar6,uVar1) & 0xffffffff80000000;
  }
  uVar13 = param_2 >> 0x10;
  uVar15 = unaff_r4 >> 0x10;
  uVar9 = param_2 & ~(uVar13 << 0x10);
  uVar7 = unaff_r4 & ~(uVar15 << 0x10);
  uVar4 = uVar9 * uVar15;
  uVar9 = uVar7 * uVar9;
  uVar7 = uVar13 * uVar7;
  uVar3 = uVar4 * 0x10000;
  uVar10 = uVar9 + uVar3;
  uVar12 = param_3 >> 0x10;
  uVar2 = uVar7 * 0x10000;
  uVar11 = uVar10 + uVar2;
  uVar16 = unaff_r5 >> 0x10;
  uVar17 = param_3 & ~(uVar12 << 0x10);
  uVar8 = unaff_r5 & ~(uVar16 << 0x10);
  uVar5 = uVar17 * uVar16;
  uVar17 = uVar8 * uVar17;
  uVar8 = uVar12 * uVar8;
  uVar14 = uVar5 * 0x10000;
  uVar18 = uVar17 + uVar14;
  uVar16 = uVar12 * uVar16 + (uVar5 >> 0x10) + (uint)CARRY4(uVar17,uVar14);
  iVar6 = 0;
  uVar14 = uVar8 * 0x10000;
  uVar5 = uVar18 + uVar14;
  uVar14 = uVar16 + (uVar8 >> 0x10) + (uint)CARRY4(uVar18,uVar14);
  uVar12 = uVar11 + uVar14;
  uVar2 = uVar13 * uVar15 + (uVar4 >> 0x10) + (uint)CARRY4(uVar9,uVar3) + (uVar7 >> 0x10) +
          (uint)CARRY4(uVar10,uVar2) + (uint)CARRY4(uVar11,uVar14);
  uVar15 = uVar12 + uVar5;
  uVar13 = uVar12 + uVar2 + (uint)CARRY4(uVar12,uVar5);
  bVar20 = param_3 <= param_2;
  uVar14 = param_2 - param_3;
  bVar19 = uVar14 == 0;
  uVar3 = 0;
  if (!bVar20) {
    uVar3 = 0xffffffff;
    iVar6 = unaff_r4 - unaff_r5;
  }
  if (!bVar19) {
    bVar20 = unaff_r4 <= unaff_r5;
    uVar16 = unaff_r5 - unaff_r4;
    bVar19 = uVar16 == 0;
  }
  uVar4 = uVar14 >> 0x10;
  if (bVar19) {
    uVar3 = 0;
  }
  if (!bVar20) {
    iVar6 = iVar6 - uVar14;
  }
  uVar14 = uVar14 & ~(uVar4 << 0x10);
  uVar7 = uVar16 >> 0x10;
  if (!bVar20) {
    uVar3 = ~uVar3;
  }
  uVar16 = uVar16 & ~(uVar7 << 0x10);
  uVar17 = uVar14 * uVar7;
  uVar14 = uVar16 * uVar14;
  uVar16 = uVar4 * uVar16;
  uVar8 = uVar17 * 0x10000;
  uVar10 = uVar14 + uVar8;
  uVar9 = uVar16 * 0x10000;
  uVar11 = uVar10 + uVar9;
  uVar14 = uVar4 * uVar7 + iVar6 + (uVar17 >> 0x10) + (uint)CARRY4(uVar14,uVar8) + (uVar16 >> 0x10)
           + (uint)CARRY4(uVar10,uVar9);
  uVar16 = uVar13 + uVar14 + (uint)CARRY4(uVar15,uVar11);
  iVar6 = uVar2 + (CARRY4(uVar12,uVar2) || CARRY4(uVar12 + uVar2,(uint)CARRY4(uVar12,uVar5))) +
          uVar3 + (uint)(CARRY4(uVar13,uVar14) ||
                        CARRY4(uVar13 + uVar14,(uint)CARRY4(uVar15,uVar11)));
  uVar3 = uVar15 + uVar11 | (uVar5 | uVar5 * 4) >> 2;
  if (-1 < iVar6) {
    return CONCAT44(iVar6 * 2 +
                    (uint)(CARRY4(uVar16,uVar16) || CARRY4(uVar16 * 2,(uint)CARRY4(uVar3,uVar3))),
                    uVar1) & 0xffffffff80000000;
  }
  return CONCAT44(iVar6,uVar1) & 0xffffffff80000000;
}

