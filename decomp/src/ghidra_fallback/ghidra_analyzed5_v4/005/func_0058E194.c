#include "ghidra_types.h"


// USA 0058E194 <- EU 0058E16C (Ghidra, non-matching)

byte func_0058E194(int param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0xf0) + 0xc4);
  bVar2 = bVar1 & 0x20;
  if ((bVar1 & 0x20) != 0) {
    bVar2 = 1;
  }
  return bVar2;
}

