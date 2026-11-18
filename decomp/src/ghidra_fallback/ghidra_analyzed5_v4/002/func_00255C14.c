// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"


// USA 00255C14 <- EU 00255C3C (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)

bool func_00255C14(int param_1,int param_2)

{
  bool bVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(*(int *)(param_1 + 0x10) + 0x505);
  bVar1 = param_2 <= (int)(uint)bVar2;
  if (bVar1) {
    *(byte *)(*(int *)(param_1 + 0x10) + 0x505) = bVar2 - (char)param_2;
  }
  return bVar1;
}

