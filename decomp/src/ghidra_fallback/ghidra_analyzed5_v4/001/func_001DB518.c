#include "ghidra_types.h"

extern int func_00255070(int *param_1);

// USA 001DB518 <- EU 001DB518 (Ghidra, non-matching)

void func_001DB518(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  func_00255070((int *)(iVar1 + 0x40c));
  *(undefined1 *)(*(int *)(iVar1 + 0x614) + 0x7c) = 0;
  return;
}

