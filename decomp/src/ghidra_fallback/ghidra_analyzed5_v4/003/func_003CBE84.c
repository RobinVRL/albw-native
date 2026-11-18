#include "ghidra_types.h"

extern uint DAT_003cbf1c;

// USA 003CBE84 <- EU 003CBE60 (Ghidra, non-matching)
// GLOBAL DAT_003cbf1c uint

uint * func_003CBE84(uint *param_1,uint param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  
  uVar1 = DAT_003cbf1c;
  *param_1 = param_2 | 0x80000000;
  param_1[1] = uVar1;
  param_1[2] = param_3[3];
  param_1[3] = uVar1 | (int)uVar1 >> 0x13 | param_4 * 0x400000 - 0x100000U;
  param_1[4] = param_3[2];
  param_1[5] = param_3[1];
  puVar2 = param_1 + 7;
  param_1[6] = *param_3;
  iVar3 = param_4 + -1;
  if (0 < iVar3) {
    puVar5 = param_3 + 7;
    puVar6 = param_3 + 6;
    puVar4 = param_3 + 5;
    puVar7 = puVar2;
    do {
      param_3 = param_3 + 4;
      iVar3 = iVar3 + -1;
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 4;
      puVar7[1] = *puVar6;
      puVar6 = puVar6 + 4;
      puVar7[2] = *puVar4;
      puVar4 = puVar4 + 4;
      puVar7[3] = *param_3;
      puVar7 = puVar7 + 4;
    } while (iVar3 != 0);
    puVar2 = puVar2 + param_4 * 4 + -4;
  }
  *puVar2 = 0;
  return puVar2 + 1;
}

