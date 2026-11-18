#include "ghidra_types.h"

extern int func_0066D2AC(undefined4 *param_1,undefined1 param_2);

// USA 00455FE8 <- EU 00455FC0 (Ghidra, non-matching)

undefined4 func_00455FE8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  if (*(char *)(*(int *)(param_1 + 0xac) + 0x45) != '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0xac) + 0x45) = 0;
    *(byte *)(iVar2 + 0x70) = *(byte *)(iVar2 + 0x70) | 2;
  }
  uVar1 = func_0066D2AC((undefined4 *)(param_1 + 0x68),2);
  return uVar1;
}

