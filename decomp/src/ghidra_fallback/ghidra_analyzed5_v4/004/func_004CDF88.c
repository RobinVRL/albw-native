#include "ghidra_types.h"

extern int func_00120B44(int param_1);

// USA 004CDF88 <- EU 004CDF60 (Ghidra, non-matching)

undefined4 func_004CDF88(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = func_00120B44(param_2);
  uVar4 = (uint)uVar1;
  uVar1 = func_00120B44(param_3);
  uVar2 = (uint)uVar1;
  uVar3 = uVar2;
  if (uVar2 < uVar4) {
    uVar3 = uVar4;
    uVar4 = uVar2;
  }
  while( true ) {
    if (uVar3 + 1 <= uVar4) {
      return 0;
    }
    if ((*(uint *)(param_1 + 0x48 + (uVar4 >> 5) * 4) & 1 << (uVar4 & 0x1f)) != 0) break;
    uVar4 = uVar4 + 1 & 0xffff;
  }
  return 1;
}

