#include "ghidra_types.h"


// USA 00456024 <- EU 00455FFC (Ghidra, non-matching)

void func_00456024(int param_1)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 4;
  iVar1 = *(int *)(param_1 + 0x1c);
  if (*(char *)(*(int *)(param_1 + 0xac) + 0x45) != '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0xac) + 0x45) = 0;
    *(byte *)(iVar1 + 0x70) = *(byte *)(iVar1 + 0x70) | 2;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (*(char *)(*(int *)(param_1 + 0xa8) + 0x45) != '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0xa8) + 0x45) = 0;
    *(byte *)(iVar1 + 0x70) = *(byte *)(iVar1 + 0x70) | 2;
  }
  return;
}

