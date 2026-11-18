#include "ghidra_types.h"

extern int func_0036D0C8(int *param_1,int param_2);
extern undefined4 DAT_003aba4c;

// USA 003ABA3C <- EU 003ABA18 (Ghidra, non-matching)
// GLOBAL DAT_003aba4c undefined4

undefined4 * func_003ABA3C(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = DAT_003aba4c;
  param_1[1] = param_2;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 1;
  func_0036D0C8(param_1 + 2,0);
  return param_1;
}

