#include "ghidra_types.h"

extern int func_001E337C(int param_1);
extern int *DAT_00255c38;

// GLOBAL DAT_00255c38 int *
// USA 00255C58 <- EU 00255BF8 (Ghidra, function missing from the decomp table)

undefined4 func_00255C58(int param_1)

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

