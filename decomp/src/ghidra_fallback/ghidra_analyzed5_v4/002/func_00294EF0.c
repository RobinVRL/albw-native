#include "ghidra_types.h"

extern int func_00258204(int param_1);

// USA 00294EF0 <- EU 00294F18 (Ghidra, non-matching)

byte func_00294EF0(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  
  bVar4 = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar3 = *(int *)(param_1 + 0x20);
    for (iVar2 = *(int *)(param_1 + 0x18) - iVar3; iVar2 != (param_1 + 0x14) - iVar3;
        iVar2 = *(int *)(iVar2 + iVar3 + 4) - iVar3) {
      bVar1 = func_00258204(iVar2);
      bVar4 = bVar4 | bVar1;
    }
  }
  return bVar4;
}

