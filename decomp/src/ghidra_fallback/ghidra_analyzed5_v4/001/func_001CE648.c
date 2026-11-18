#include "ghidra_types.h"

extern int func_001507A8(int param_1,int param_2);

// USA 001CE648 <- EU 001CE648 (Ghidra, non-matching)

undefined4 func_001CE648(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = func_001507A8(param_1,param_2);
  if ((bVar1) && ((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 0x60U) == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

