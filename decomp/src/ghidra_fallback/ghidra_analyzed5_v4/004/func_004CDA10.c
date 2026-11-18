#include "ghidra_types.h"


// USA 004CDA10 <- EU 004CD9E8 (Ghidra, non-matching)

void func_004CDA10(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    puVar2 = (uint *)(param_1 + 0x48 + (param_2 >> 5) * 4);
    uVar3 = *puVar2;
    uVar1 = 1 << (param_2 & 0x1f);
    if (param_3 == 0) {
      uVar3 = uVar3 & ~uVar1;
    }
    else {
      uVar3 = uVar1 | uVar3;
    }
    *puVar2 = uVar3;
  }
  return;
}

