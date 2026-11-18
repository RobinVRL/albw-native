#include "ghidra_types.h"


// USA 0010FC34 <- EU 0010FC34 (Ghidra, non-matching)

int func_0010FC34(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  do {
    pbVar1 = param_1 + 1;
    uVar3 = (uint)*param_1;
    pbVar2 = param_2 + 1;
    uVar4 = (uint)*param_2;
    bVar5 = uVar3 == 1;
    if (uVar3 != 0) {
      bVar5 = uVar3 == uVar4;
    }
    if (!bVar5) break;
    param_1 = param_1 + 2;
    uVar3 = (uint)*pbVar1;
    param_2 = param_2 + 2;
    uVar4 = (uint)*pbVar2;
    bVar5 = uVar3 == 1;
    if (uVar3 != 0) {
      bVar5 = uVar3 == uVar4;
    }
  } while (bVar5);
  return uVar3 - uVar4;
}

