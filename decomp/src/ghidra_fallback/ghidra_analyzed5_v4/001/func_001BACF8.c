#include "ghidra_types.h"


// USA 001BACF8 <- EU 001BACF8 (Ghidra, non-matching)

void func_001BACF8(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  
  iVar1 = *(int *)(param_1 + 0x40);
  puVar4 = (uint *)(iVar1 + 0x15c + (param_2 >> 5) * 4);
  *puVar4 = *puVar4 | 1 << (param_2 & 0x1f);
  uVar3 = (uint)*(short *)(iVar1 + param_2 * 2 + 0x1c);
  piVar2 = *(int **)(iVar1 + 0x18);
  if (uVar3 < *(uint *)(iVar1 + 0x14)) {
    piVar2 = piVar2 + uVar3;
  }
  *piVar2 = *piVar2 + -1;
  return;
}

