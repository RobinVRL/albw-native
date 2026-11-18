#include "ghidra_types.h"


// USA 002919E8 <- EU 00291A10 (Ghidra, non-matching)

void func_002919E8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  *(char *)(iVar1 + 0xc3) = (char)param_2;
  if (param_2 != 0) {
    *(undefined1 *)(iVar1 + 0x84) = 0;
  }
  return;
}

