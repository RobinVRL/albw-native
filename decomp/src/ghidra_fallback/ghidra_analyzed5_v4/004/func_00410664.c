#include "ghidra_types.h"

extern int func_0041C7DC(int *param_1);
extern undefined4 DAT_00410668;
extern int DAT_0041066c;

// USA 00410664 <- EU 00410644 (Ghidra, non-matching)
// GLOBAL DAT_00410668 undefined4
// GLOBAL DAT_0041066c int

undefined4 * func_00410664(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = DAT_00410668;
  piVar1 = func_0041C7DC(param_1 + 0x49);
  piVar1[-0x49] = DAT_0041066c;
  *(undefined1 *)((int)piVar1 + -0x89) = 3;
  return piVar1 + -0x49;
}

