// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"


// USA 002559D4 <- EU 002559FC (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)

bool func_002559D4(int param_1,uint param_2)

{
  byte bVar1;
  bool bVar2;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x10) + 0x509);
  bVar2 = param_2 <= bVar1;
  if (bVar2) {
    *(byte *)(*(int *)(param_1 + 0x10) + 0x509) = bVar1 - (char)param_2;
  }
  return bVar2;
}

