#include "ghidra_types.h"


// USA 004D02E8 <- EU 004D02C0 (Ghidra, non-matching)

void * func_004D02E8(int param_1,int param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  
  uVar2 = 0;
  if (*(int *)(*(int *)(param_1 + 0x20) + 4) != 0) {
    do {
      uVar3 = uVar2 + 1;
      puVar1 = (ushort *)(**(int **)(param_1 + 0x20) + uVar2 * 0x154);
      uVar4 = *puVar1;
      if (param_2 == 0) {
        uVar4 = uVar4 & 0xfbff;
      }
      else {
        uVar4 = uVar4 | 0x400;
      }
      *puVar1 = uVar4;
      uVar2 = uVar3;
    } while (uVar3 < *(uint *)(*(int *)(param_1 + 0x20) + 4));
  }
  return (void *)param_1;
}

