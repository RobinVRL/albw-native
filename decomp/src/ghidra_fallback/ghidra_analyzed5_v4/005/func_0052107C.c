#include "ghidra_types.h"


// USA 0052107C <- EU 0052103C (Ghidra, function missing from the decomp table)

bool func_0052107C(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x39c) & 7;
  uVar1 = (undefined1)uVar2;
  if (uVar2 != 0) {
    uVar1 = 1;
  }
  return (bool)uVar1;
}

