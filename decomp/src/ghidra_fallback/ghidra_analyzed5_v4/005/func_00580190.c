#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005801b8;
extern undefined4 *DAT_005801bc;
extern undefined4 DAT_005801c0;

// USA 00580190 <- EU 00580168 (Ghidra, non-matching)
// GLOBAL DAT_005801b8 uint *
// GLOBAL DAT_005801bc undefined4 *
// GLOBAL DAT_005801c0 undefined4

bool func_00580190(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005801b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005801b8), iVar1 != 0)) {
    *DAT_005801bc = DAT_005801c0;
  }
  return DAT_005801bc == param_2;
}

