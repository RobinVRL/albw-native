#include "ghidra_types.h"


// USA 001BAD00 <- EU 001BAD00 (Ghidra, non-matching)

void func_001BAD00(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + 0x15c + (param_2 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << (param_2 & 0x1f);
  uVar2 = (uint)*(short *)(param_1 + param_2 * 2 + 0x1c);
  piVar1 = *(int **)(param_1 + 0x18);
  if (uVar2 < *(uint *)(param_1 + 0x14)) {
    piVar1 = piVar1 + uVar2;
  }
  *piVar1 = *piVar1 + -1;
  return;
}

