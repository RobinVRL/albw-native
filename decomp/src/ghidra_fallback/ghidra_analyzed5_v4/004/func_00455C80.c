#include "ghidra_types.h"

extern int func_0066D2AC(undefined4 *param_1,undefined1 param_2);

// USA 00455C80 <- EU 00455C58 (Ghidra, non-matching)

undefined4 func_00455C80(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (*(char *)(*(int *)(param_1 + 0xa8) + 0x45) != '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0xa8) + 0x45) = 0;
    *(byte *)(iVar1 + 0x70) = *(byte *)(iVar1 + 0x70) | 2;
  }
  return func_0066D2AC((undefined4 *)(param_1 + 0x68),3);
}

