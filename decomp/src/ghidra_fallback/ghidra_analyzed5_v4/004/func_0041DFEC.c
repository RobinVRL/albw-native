#include "ghidra_types.h"

extern int func_004194F4(int *param_1);
extern undefined4 DAT_0041dff0;
extern int DAT_0041dff4;

// USA 0041DFEC <- EU 0041DFCC (Ghidra, non-matching)
// GLOBAL DAT_0041dff0 undefined4
// GLOBAL DAT_0041dff4 int

undefined4 * func_0041DFEC(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = DAT_0041dff0;
  piVar1 = func_004194F4(param_1 + 0x48);
  piVar1[-0x48] = DAT_0041dff4;
  *(undefined1 *)((int)piVar1 + -0x85) = 3;
  return piVar1 + -0x48;
}

