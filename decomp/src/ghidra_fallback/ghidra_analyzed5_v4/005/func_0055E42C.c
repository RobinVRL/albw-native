#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055e4a0;
extern undefined4 *DAT_0055e4a4;
extern undefined4 DAT_0055e4a8;
extern uint *DAT_0055e4ac;
extern undefined4 *DAT_0055e4b0;
extern undefined4 DAT_0055e4b4;

// USA 0055E42C <- EU 0055E404 (Ghidra, non-matching)
// GLOBAL DAT_0055e4a0 uint *
// GLOBAL DAT_0055e4a4 undefined4 *
// GLOBAL DAT_0055e4a8 undefined4
// GLOBAL DAT_0055e4ac uint *
// GLOBAL DAT_0055e4b0 undefined4 *
// GLOBAL DAT_0055e4b4 undefined4

undefined4 func_0055E42C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055e4a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055e4a0), iVar1 != 0)) {
    *DAT_0055e4a4 = DAT_0055e4a8;
  }
  if (DAT_0055e4a4 != param_2) {
    if (((*DAT_0055e4ac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055e4ac), iVar1 != 0)) {
      *DAT_0055e4b0 = DAT_0055e4b4;
    }
    if (DAT_0055e4b0 != param_2) {
      return 0;
    }
  }
  return 1;
}

