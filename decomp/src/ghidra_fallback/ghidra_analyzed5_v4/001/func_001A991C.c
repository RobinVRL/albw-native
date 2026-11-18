#include "ghidra_types.h"


// USA 001A991C <- EU 001A991C (Ghidra, non-matching)

bool func_001A991C(undefined4 param_1,int param_2)

{
  ushort uVar1;
  bool bVar2;
  
  uVar1 = *(ushort *)(param_2 + 0x20);
  bVar2 = (uVar1 & 0x7e0) == 0x180;
  if (bVar2) {
    uVar1 = uVar1 & 0x1f;
  }
  return bVar2 && uVar1 == 7;
}

