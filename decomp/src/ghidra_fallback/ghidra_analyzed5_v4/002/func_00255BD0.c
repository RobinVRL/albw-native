// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_001E337C(int param_1);
extern int *DAT_00255c38;

// USA 00255BD0 <- EU 00255BF8 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_00255c38 int *

undefined4 func_00255BD0(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  func_001E337C(*(int *)(*DAT_00255c38 + 0x130));
  bVar1 = *(byte *)(iVar2 + 0x505);
  if (bVar1 < 99) {
    *(byte *)(iVar2 + 0x505) = bVar1 + 1;
  }
  return 1;
}

