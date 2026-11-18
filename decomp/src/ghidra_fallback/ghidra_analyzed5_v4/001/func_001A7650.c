#include "ghidra_types.h"


// USA 001A7650 <- EU 001A7650 (Ghidra, non-matching)

void func_001A7650(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined1 *)(*(int *)(param_1 + 0x8e4) + 0x61) = 0;
  iVar2 = *(int *)(param_1 + 0x968);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x96c))) {
    iVar1 = *(int *)(iVar2 + 0x20);
    if ((iVar1 != 0) &&
       ((*(int *)(iVar2 + 0x24) == *(int *)(iVar1 + 0xc) && (0 < *(int *)(iVar1 + 4))))) {
      *(undefined1 *)(iVar1 + 0x280) = 1;
    }
    *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xfffffffb | 8;
  }
  return;
}

