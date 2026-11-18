#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055b310;
extern undefined4 *DAT_0055b314;
extern undefined4 DAT_0055b318;
extern uint *DAT_0055b31c;
extern undefined4 *DAT_0055b320;
extern undefined4 DAT_0055b324;

// USA 0055B29C <- EU 0055B274 (Ghidra, non-matching)
// GLOBAL DAT_0055b310 uint *
// GLOBAL DAT_0055b314 undefined4 *
// GLOBAL DAT_0055b318 undefined4
// GLOBAL DAT_0055b31c uint *
// GLOBAL DAT_0055b320 undefined4 *
// GLOBAL DAT_0055b324 undefined4

undefined4 func_0055B29C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055b310 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055b310), iVar1 != 0)) {
    *DAT_0055b314 = DAT_0055b318;
  }
  if (DAT_0055b314 != param_2) {
    if (((*DAT_0055b31c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055b31c), iVar1 != 0)) {
      *DAT_0055b320 = DAT_0055b324;
    }
    if (DAT_0055b320 != param_2) {
      return 0;
    }
  }
  return 1;
}

