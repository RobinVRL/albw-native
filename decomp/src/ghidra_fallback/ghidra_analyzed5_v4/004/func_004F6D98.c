#include "ghidra_types.h"


// USA 004F6D98 <- EU 004F6D70 (Ghidra, non-matching)

void func_004F6D98(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x8f0) + 0x2c);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x61) = 0;
  }
  return;
}

