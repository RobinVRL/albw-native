#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00543fa4;
extern undefined4 *DAT_00543fa8;
extern undefined4 DAT_00543fac;
extern uint *DAT_00543fb0;
extern undefined4 *DAT_00543fb4;
extern undefined4 DAT_00543fb8;

// USA 00543F30 <- EU 00543F08 (Ghidra, non-matching)
// GLOBAL DAT_00543fa4 uint *
// GLOBAL DAT_00543fa8 undefined4 *
// GLOBAL DAT_00543fac undefined4
// GLOBAL DAT_00543fb0 uint *
// GLOBAL DAT_00543fb4 undefined4 *
// GLOBAL DAT_00543fb8 undefined4

undefined4 func_00543F30(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00543fa4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00543fa4), iVar1 != 0)) {
    *DAT_00543fa8 = DAT_00543fac;
  }
  if (DAT_00543fa8 != param_2) {
    if (((*DAT_00543fb0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00543fb0), iVar1 != 0)) {
      *DAT_00543fb4 = DAT_00543fb8;
    }
    if (DAT_00543fb4 != param_2) {
      return 0;
    }
  }
  return 1;
}

