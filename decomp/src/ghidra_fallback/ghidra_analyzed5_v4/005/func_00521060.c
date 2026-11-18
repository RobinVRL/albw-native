// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"


// USA 00521060 <- EU 00521038 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)

bool func_00521060(int param_1)

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

