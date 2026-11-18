#include "ghidra_types.h"

extern int func_0054CE64(int param_1,int param_2);

// USA 0054CA0C <- EU 0054C9E4 (Ghidra, non-matching)

undefined4 func_0054CA0C(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = func_0054CE64(param_1,1);
  if ((uVar1 | 0x4000) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if ((**(uint **)(param_1 + 0x14) & (uVar1 | 0x4000)) != 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

