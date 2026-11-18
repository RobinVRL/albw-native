#include "ghidra_types.h"


// USA 005819C8 <- EU 005819A0 (Ghidra, non-matching)

uint func_005819C8(int param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\x01') {
    return (uint)(*(char *)(*(int *)(param_1 + 4) + 0x41) != '\0');
  }
  if (cVar1 == '\x02' || cVar1 == '\x03') {
    uVar2 = (*(ushort *)(*(int *)(param_1 + 8) + 0x18) & 4) >> 2;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

