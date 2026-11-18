#include "ghidra_types.h"

extern uint DAT_003d3720;
extern uint DAT_003d3724;

// USA 003D3690 <- EU 003D366C (Ghidra, non-matching)
// GLOBAL DAT_003d3720 uint
// GLOBAL DAT_003d3724 uint

undefined4 func_003D3690(uint *param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = param_2[1];
  uVar3 = param_2[1];
  lVar2 = (ulonglong)DAT_003d3720 * (ulonglong)uVar8 +
          CONCAT44(((int)uVar8 >> 0x1f) * DAT_003d3720,
                   (int)((ulonglong)DAT_003d3720 * (ulonglong)*param_2 >> 0x20));
  lVar1 = (ulonglong)DAT_003d3724 * (ulonglong)*param_2;
  uVar7 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar6 = (uint)((ulonglong)DAT_003d3724 * (ulonglong)uVar8);
  uVar4 = (int)((ulonglong)lVar1 >> 0x20) + (uint)CARRY4((uint)lVar1,(uint)lVar2);
  iVar5 = ((int)uVar4 >> 0x1f) + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar4,uVar7) +
          ((int)uVar8 >> 0x1f) * DAT_003d3724 +
          (int)((ulonglong)DAT_003d3724 * (ulonglong)uVar8 >> 0x20) +
          (uint)CARRY4(uVar4 + uVar7,uVar6);
  uVar4 = uVar4 + uVar7 + uVar6 >> 0x12 | iVar5 * 0x4000;
  uVar6 = uVar4 + -((int)uVar3 >> 0x1f);
  uVar7 = *param_1;
  *param_1 = uVar6 + uVar7;
  param_1[1] = (iVar5 >> 0x12) + (uint)CARRY4(uVar4,-((int)uVar3 >> 0x1f)) + param_1[1] +
               (uint)CARRY4(uVar6,uVar7);
  return (undefined4)param_1;
}

