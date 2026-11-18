#include "ghidra_types.h"

extern int func_00120B44(int param_1);

// USA 004CDF40 <- EU 004CDF18 (Ghidra, non-matching)

void func_004CDF40(int param_1,int param_2,int param_3)

{
  uint uVar1;
  ushort uVar2;
  uint *puVar3;
  uint uVar4;
  
  uVar2 = func_00120B44(param_2);
  if (uVar2 != 0) {
    puVar3 = (uint *)(param_1 + 0x48 + (uint)(uVar2 >> 5) * 4);
    uVar4 = *puVar3;
    uVar1 = 1 << (uVar2 & 0x1f);
    if (param_3 == 0) {
      uVar4 = uVar4 & ~uVar1;
    }
    else {
      uVar4 = uVar1 | uVar4;
    }
    *puVar3 = uVar4;
  }
  return;
}

