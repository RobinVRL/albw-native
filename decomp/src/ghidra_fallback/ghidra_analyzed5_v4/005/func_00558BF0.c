#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0062C884(undefined4 *param_1);
extern uint *DAT_00558c1c;
extern undefined4 *DAT_00558c20;
extern undefined4 DAT_00558c24;

// USA 00558BF0 <- EU 00558BC8 (Ghidra, non-matching)
// GLOBAL DAT_00558c1c uint *
// GLOBAL DAT_00558c20 undefined4 *
// GLOBAL DAT_00558c24 undefined4

void func_00558BF0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00558c1c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00558c1c), iVar1 != 0)) {
    *DAT_00558c20 = DAT_00558c24;
  }
  if (DAT_00558c20 != param_2) {
    func_0062C884(param_2);
  }
  return;
}

