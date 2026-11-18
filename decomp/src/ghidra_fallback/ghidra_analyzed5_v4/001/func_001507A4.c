#include "ghidra_types.h"

extern int func_0014D9D8(int param_1,uint *param_2,int param_3);

// USA 001507A4 <- EU 001507A4 (Ghidra, non-matching)

bool func_001507A4(int param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  
  func_0014D9D8(param_1,(uint *)(param_1 + 0x39c),param_2);
  uVar2 = 1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 0x5f;
  uVar1 = (undefined1)uVar2;
  if (uVar2 != 0) {
    uVar1 = 1;
  }
  return (bool)uVar1;
}

