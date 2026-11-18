#include "ghidra_types.h"


// USA 00114C40 <- EU 00114C40 (Ghidra, non-matching)

void * func_00114C40(void *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint unaff_r4;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar4 = unaff_r4 >> 0x10;
  uVar5 = param_2 >> 0x10;
  uVar9 = unaff_r4 & ~(uVar4 << 0x10);
  uVar11 = param_2 & ~(uVar5 << 0x10);
  uVar7 = uVar11 * uVar9;
  uVar11 = uVar4 * uVar11;
  uVar1 = uVar9 * uVar5 * 0x10000;
  uVar8 = uVar7 + uVar1;
  uVar6 = param_3 >> 0x10;
  uVar2 = uVar11 * 0x10000;
  uVar12 = param_3 & ~(uVar6 << 0x10);
  uVar10 = uVar12 * uVar9;
  uVar12 = uVar4 * uVar12;
  uVar3 = uVar9 * uVar6 * 0x10000;
  if ((int)(uVar4 * uVar5 + (uVar9 * uVar5 >> 0x10) + (uint)CARRY4(uVar7,uVar1) + (uVar11 >> 0x10) +
            (uint)CARRY4(uVar8,uVar2) +
           (uint)CARRY4(uVar4 * uVar6 + (uVar9 * uVar6 >> 0x10) + (uint)CARRY4(uVar10,uVar3) +
                        (uVar12 >> 0x10) + (uint)CARRY4(uVar10 + uVar3,uVar12 * 0x10000),
                        uVar8 + uVar2)) < 0) {
    return param_1;
  }
  return param_1;
}

