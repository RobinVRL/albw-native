#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00570ccc;
extern undefined4 *DAT_00570cd0;
extern undefined4 DAT_00570cd4;

// USA 00570CA4 <- EU 00570C7C (Ghidra, non-matching)
// GLOBAL DAT_00570ccc uint *
// GLOBAL DAT_00570cd0 undefined4 *
// GLOBAL DAT_00570cd4 undefined4

bool func_00570CA4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00570ccc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00570ccc), iVar1 != 0)) {
    *DAT_00570cd0 = DAT_00570cd4;
  }
  return DAT_00570cd0 == param_2;
}

