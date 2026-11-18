#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00553990;
extern undefined4 *DAT_00553994;
extern undefined4 DAT_00553998;
extern uint *DAT_0055399c;
extern undefined4 *DAT_005539a0;
extern undefined4 DAT_005539a4;

// USA 0055391C <- EU 005538F4 (Ghidra, non-matching)
// GLOBAL DAT_00553990 uint *
// GLOBAL DAT_00553994 undefined4 *
// GLOBAL DAT_00553998 undefined4
// GLOBAL DAT_0055399c uint *
// GLOBAL DAT_005539a0 undefined4 *
// GLOBAL DAT_005539a4 undefined4

undefined4 func_0055391C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00553990 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00553990), iVar1 != 0)) {
    *DAT_00553994 = DAT_00553998;
  }
  if (DAT_00553994 != param_2) {
    if (((*DAT_0055399c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055399c), iVar1 != 0)) {
      *DAT_005539a0 = DAT_005539a4;
    }
    if (DAT_005539a0 != param_2) {
      return 0;
    }
  }
  return 1;
}

