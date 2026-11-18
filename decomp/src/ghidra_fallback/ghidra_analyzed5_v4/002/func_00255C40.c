// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_001E337C(int param_1);
extern int *DAT_00255ca8;

// USA 00255C40 <- EU 00255C68 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_00255ca8 int *

undefined4 func_00255C40(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  func_001E337C(*(int *)(*DAT_00255ca8 + 0x130));
  bVar1 = *(byte *)(iVar2 + 0x506);
  if (bVar1 < 99) {
    *(byte *)(iVar2 + 0x506) = bVar1 + 1;
  }
  return 1;
}

