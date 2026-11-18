#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00580120;
extern undefined4 *DAT_00580124;
extern undefined4 DAT_00580128;
extern uint *DAT_0058012c;
extern undefined4 *DAT_00580130;
extern undefined4 DAT_00580134;

// USA 005800AC <- EU 00580084 (Ghidra, non-matching)
// GLOBAL DAT_00580120 uint *
// GLOBAL DAT_00580124 undefined4 *
// GLOBAL DAT_00580128 undefined4
// GLOBAL DAT_0058012c uint *
// GLOBAL DAT_00580130 undefined4 *
// GLOBAL DAT_00580134 undefined4

undefined4 func_005800AC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00580120 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00580120), iVar1 != 0)) {
    *DAT_00580124 = DAT_00580128;
  }
  if (DAT_00580124 != param_2) {
    if (((*DAT_0058012c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058012c), iVar1 != 0)) {
      *DAT_00580130 = DAT_00580134;
    }
    if (DAT_00580130 != param_2) {
      return 0;
    }
  }
  return 1;
}

