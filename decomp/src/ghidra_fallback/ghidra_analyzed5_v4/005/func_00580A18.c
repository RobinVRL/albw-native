#include "ghidra_types.h"


// USA 00580A18 <- EU 005809F0 (Ghidra, non-matching)

uint func_00580A18(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar2 = *(uint *)(param_1 + 0x78);
  uVar3 = *(int *)(param_1 + 0x7c) + uVar2;
  bVar4 = uVar2 <= param_2;
  uVar1 = uVar2;
  if (bVar4) {
    uVar1 = uVar3;
  }
  if ((!bVar4 || uVar3 < param_2) || param_2 == uVar1) {
    uVar2 = 0;
  }
  if ((bVar4 && uVar3 >= param_2) && param_2 != uVar1) {
    uVar2 = 1;
  }
  return uVar2;
}

