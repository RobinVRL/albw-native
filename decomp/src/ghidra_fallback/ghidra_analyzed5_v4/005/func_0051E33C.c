#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0051e364;
extern undefined4 *DAT_0051e368;
extern undefined4 DAT_0051e36c;

// USA 0051E33C <- EU 0051E314 (Ghidra, non-matching)
// GLOBAL DAT_0051e364 uint *
// GLOBAL DAT_0051e368 undefined4 *
// GLOBAL DAT_0051e36c undefined4

bool func_0051E33C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0051e364 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051e364), iVar1 != 0)) {
    *DAT_0051e368 = DAT_0051e36c;
  }
  return DAT_0051e368 == param_2;
}

