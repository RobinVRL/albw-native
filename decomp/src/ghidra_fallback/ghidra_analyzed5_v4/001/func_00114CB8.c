#include "ghidra_types.h"


// USA 00114CB8 <- EU 00114CB8 (Ghidra, non-matching)

void * func_00114CB8(void *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_r4;
  uint uVar4;
  uint uVar5;
  uint unaff_r5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  if (unaff_r5 == 0) {
    uVar2 = unaff_r4 >> 0x10;
    uVar3 = param_2 >> 0x10;
    uVar8 = unaff_r4 & ~(uVar2 << 0x10);
    uVar12 = param_2 & ~(uVar3 << 0x10);
    uVar9 = uVar8 * uVar3;
    uVar8 = uVar12 * uVar8;
    uVar12 = uVar2 * uVar12;
    uVar1 = uVar9 * 0x10000;
    if ((int)(uVar2 * uVar3 + (uVar9 >> 0x10) + (uint)CARRY4(uVar8,uVar1) + (uVar12 >> 0x10) +
             (uint)CARRY4(uVar8 + uVar1,uVar12 * 0x10000)) < 0) {
      return param_1;
    }
    return param_1;
  }
  uVar8 = param_2 >> 0x10;
  uVar9 = unaff_r4 >> 0x10;
  uVar6 = param_2 & ~(uVar8 << 0x10);
  uVar10 = unaff_r4 & ~(uVar9 << 0x10);
  uVar4 = uVar10 * uVar6;
  uVar10 = uVar8 * uVar10;
  uVar1 = uVar6 * uVar9 * 0x10000;
  uVar5 = uVar4 + uVar1;
  uVar12 = unaff_r5 >> 0x10;
  uVar2 = uVar10 * 0x10000;
  uVar11 = unaff_r5 & ~(uVar12 << 0x10);
  uVar7 = uVar11 * uVar6;
  uVar11 = uVar8 * uVar11;
  uVar3 = uVar6 * uVar12 * 0x10000;
  if ((int)(uVar8 * uVar9 + (uVar6 * uVar9 >> 0x10) + (uint)CARRY4(uVar4,uVar1) + (uVar10 >> 0x10) +
            (uint)CARRY4(uVar5,uVar2) +
           (uint)CARRY4(uVar8 * uVar12 + (uVar6 * uVar12 >> 0x10) + (uint)CARRY4(uVar7,uVar3) +
                        (uVar11 >> 0x10) + (uint)CARRY4(uVar7 + uVar3,uVar11 * 0x10000),
                        uVar5 + uVar2)) < 0) {
    return param_1;
  }
  return param_1;
}

