#include "ghidra_types.h"


// USA 0016B6A4 <- EU 0016B6A4 (Ghidra, non-matching)

void func_0016B6A4(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x74);
  uVar2 = *(int *)(iVar1 + 0x48) + 1;
  *(uint *)(iVar1 + 0x48) = uVar2;
  if (1 < uVar2) {
    *(undefined4 *)(iVar1 + 0x48) = 0;
  }
  *(undefined1 *)(iVar1 + *(int *)(iVar1 + 0x48) * 0x20 + 0x24) = 0;
  *(undefined4 *)(iVar1 + *(int *)(iVar1 + 0x48) * 0x20 + 0x18) = 0;
  *(undefined4 *)(iVar1 + *(int *)(iVar1 + 0x48) * 0x20 + 0x1c) = 0;
  return;
}

