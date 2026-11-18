#include "ghidra_types.h"

extern int func_0037D414(int param_1);
extern int DAT_001cd200;

// USA 001CD1D4 <- EU 001CD1D4 (Ghidra, non-matching)
// GLOBAL DAT_001cd200 int

void func_001CD1D4(int param_1)

{
  int iVar1;
  
  func_0037D414(param_1);
  *(undefined1 *)(param_1 + 0x425) = 1;
  iVar1 = DAT_001cd200;
  *(undefined1 *)(param_1 + 0x426) = 0;
  *(undefined2 *)(iVar1 + param_1) = 2;
  return;
}

