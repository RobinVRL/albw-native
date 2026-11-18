#include "ghidra_types.h"


// USA 004AB6A8 <- EU 004AB680 (Ghidra, non-matching)

void func_004AB6A8(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_1 + 0x76a0);
  if (*(uint *)(param_1 + 0x5b50) < *(uint *)(param_1 + 0x769c)) {
    iVar2 = iVar2 + *(uint *)(param_1 + 0x5b50) * 0x38;
  }
  puVar3 = (uint *)(iVar2 + (param_2 >> 5) * 4);
  uVar4 = *puVar3;
  uVar1 = 1 << (param_2 & 0x1f);
  if (param_3 == 0) {
    uVar4 = uVar4 & ~uVar1;
  }
  else {
    uVar4 = uVar4 | uVar1;
  }
  *puVar3 = uVar4;
  return;
}

