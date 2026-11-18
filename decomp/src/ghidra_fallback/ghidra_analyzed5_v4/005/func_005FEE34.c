#include "ghidra_types.h"

extern int DAT_005fee80;

// USA 005FEE34 <- EU 005FEE0C (Ghidra, non-matching)
// GLOBAL DAT_005fee80 int

uint func_005FEE34(byte *param_1,uint param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0xffffffff;
  if (param_2 != 0) {
    pbVar2 = param_1 + -1;
    if ((param_2 & 1) != 0) {
      uVar4 = *(uint *)(DAT_005fee80 + (*param_1 ^ 0xff) * 4) ^ 0xffffff;
      pbVar2 = param_1;
    }
    for (uVar3 = param_2 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
      pbVar1 = pbVar2 + 1;
      pbVar2 = pbVar2 + 2;
      uVar4 = *(uint *)(DAT_005fee80 + ((uint)*pbVar1 ^ uVar4 & 0xff) * 4) ^ uVar4 >> 8;
      uVar4 = *(uint *)(DAT_005fee80 + ((uint)*pbVar2 ^ uVar4 & 0xff) * 4) ^ uVar4 >> 8;
    }
  }
  return ~uVar4;
}

