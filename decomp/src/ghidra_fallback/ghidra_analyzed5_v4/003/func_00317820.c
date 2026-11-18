#include "ghidra_types.h"


// USA 00317820 <- EU 003177FC (Ghidra, non-matching)

void func_00317820(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x430);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x434))) &&
     (((*(uint *)(iVar2 + 0x3c) & 4) != 0 || (*(uint *)(iVar2 + 0x3c) & 0x40) != 0 ||
      (((iVar1 = *(int *)(iVar2 + 0x20), iVar1 != 0 &&
        (*(int *)(iVar2 + 0x24) == *(int *)(iVar1 + 0xc))) && (0 < *(int *)(iVar1 + 4))))))) {
    iVar1 = *(int *)(iVar2 + 0x20);
    if (((iVar1 != 0) && (*(int *)(iVar2 + 0x24) == *(int *)(iVar1 + 0xc))) &&
       (0 < *(int *)(iVar1 + 4))) {
      *(undefined1 *)(iVar1 + 0x280) = 1;
    }
    *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xfffffffb | 8;
  }
  return;
}

