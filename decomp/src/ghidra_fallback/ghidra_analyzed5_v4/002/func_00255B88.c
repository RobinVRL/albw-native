// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"


// USA 00255B88 <- EU 00255BB0 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)

void func_00255B88(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(iVar1 + 0x500) = 0;
  *(undefined1 *)(iVar1 + 0x504) = 1;
  return;
}

