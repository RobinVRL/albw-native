#include "ghidra_types.h"


// USA 00521078 <- EU 00521038 (Ghidra, function missing from the decomp table)

bool func_00521078(int param_1)

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

