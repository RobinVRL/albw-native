// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"


// USA 00255CC8 <- EU 00255CF0 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)

bool func_00255CC8(int param_1,int param_2)

{
  bool bVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(*(int *)(param_1 + 0x10) + 0x506);
  bVar1 = param_2 <= (int)(uint)bVar2;
  if (bVar1) {
    *(byte *)(*(int *)(param_1 + 0x10) + 0x506) = bVar2 - (char)param_2;
  }
  return bVar1;
}

