#include "ghidra_types.h"


// USA 0058DD9C <- EU 0058DD74 (Ghidra, non-matching)

byte func_0058DD9C(int param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0xf0) + 0xc4);
  bVar2 = bVar1 & 2;
  if ((bVar1 & 2) != 0) {
    bVar2 = 1;
  }
  return bVar2;
}

