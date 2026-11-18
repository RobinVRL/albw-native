#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00580e10;
extern undefined4 *DAT_00580e14;
extern undefined4 DAT_00580e18;
extern uint *DAT_00580e1c;
extern undefined4 *DAT_00580e20;
extern undefined4 DAT_00580e24;
extern uint *DAT_00580e28;
extern undefined4 *DAT_00580e2c;
extern undefined4 DAT_00580e30;

// USA 00580D58 <- EU 00580D30 (Ghidra, non-matching)
// GLOBAL DAT_00580e10 uint *
// GLOBAL DAT_00580e14 undefined4 *
// GLOBAL DAT_00580e18 undefined4
// GLOBAL DAT_00580e1c uint *
// GLOBAL DAT_00580e20 undefined4 *
// GLOBAL DAT_00580e24 undefined4
// GLOBAL DAT_00580e28 uint *
// GLOBAL DAT_00580e2c undefined4 *
// GLOBAL DAT_00580e30 undefined4

undefined4 func_00580D58(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00580e10 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00580e10), iVar1 != 0)) {
    *DAT_00580e14 = DAT_00580e18;
  }
  if (DAT_00580e14 != param_2) {
    if (((*DAT_00580e1c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00580e1c), iVar1 != 0)) {
      *DAT_00580e20 = DAT_00580e24;
    }
    if (DAT_00580e20 != param_2) {
      if (((*DAT_00580e28 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00580e28), iVar1 != 0)) {
        *DAT_00580e2c = DAT_00580e30;
      }
      if (DAT_00580e2c != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

