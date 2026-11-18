#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054b2a0;
extern undefined4 *DAT_0054b2a4;
extern undefined4 DAT_0054b2a8;

// USA 0054B278 <- EU 0054B250 (Ghidra, non-matching)
// GLOBAL DAT_0054b2a0 uint *
// GLOBAL DAT_0054b2a4 undefined4 *
// GLOBAL DAT_0054b2a8 undefined4

bool func_0054B278(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054b2a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054b2a0), iVar1 != 0)) {
    *DAT_0054b2a4 = DAT_0054b2a8;
  }
  return DAT_0054b2a4 == param_2;
}

