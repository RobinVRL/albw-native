// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int *DAT_00556d94;

// USA 00556D7C <- EU 00556D54 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_00556d94 int *

undefined4 func_00556D7C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x70);
  if (((*(int *)(*DAT_00556d94 + 0x44) == 0) || (*(int *)(*DAT_00556d94 + 0x44) != iVar1)) ||
     (*(char *)(iVar1 + 0x7c) != '\x03')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

