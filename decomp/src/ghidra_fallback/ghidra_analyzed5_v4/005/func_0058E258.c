#include "ghidra_types.h"


// USA 0058E258 <- EU 0058E230 (Ghidra, non-matching)

byte func_0058E258(int param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0xf0) + 0xc4);
  bVar2 = bVar1 & 4;
  if ((bVar1 & 4) != 0) {
    bVar2 = 1;
  }
  return bVar2;
}

