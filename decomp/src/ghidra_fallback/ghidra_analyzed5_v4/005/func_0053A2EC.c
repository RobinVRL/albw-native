#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053a3e8;
extern undefined4 *DAT_0053a3ec;
extern undefined4 DAT_0053a3f0;
extern uint *DAT_0053a3f4;
extern undefined4 *DAT_0053a3f8;
extern undefined4 DAT_0053a3fc;
extern uint *DAT_0053a400;
extern undefined4 *DAT_0053a404;
extern undefined4 DAT_0053a408;
extern uint *DAT_0053a40c;
extern undefined4 *DAT_0053a410;
extern undefined4 DAT_0053a414;

// USA 0053A2EC <- EU 0053A2C4 (Ghidra, non-matching)
// GLOBAL DAT_0053a3e8 uint *
// GLOBAL DAT_0053a3ec undefined4 *
// GLOBAL DAT_0053a3f0 undefined4
// GLOBAL DAT_0053a3f4 uint *
// GLOBAL DAT_0053a3f8 undefined4 *
// GLOBAL DAT_0053a3fc undefined4
// GLOBAL DAT_0053a400 uint *
// GLOBAL DAT_0053a404 undefined4 *
// GLOBAL DAT_0053a408 undefined4
// GLOBAL DAT_0053a40c uint *
// GLOBAL DAT_0053a410 undefined4 *
// GLOBAL DAT_0053a414 undefined4

undefined4 func_0053A2EC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053a3e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053a3e8), iVar1 != 0)) {
    *DAT_0053a3ec = DAT_0053a3f0;
  }
  if (DAT_0053a3ec != param_2) {
    if (((*DAT_0053a3f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053a3f4), iVar1 != 0)) {
      *DAT_0053a3f8 = DAT_0053a3fc;
    }
    if (DAT_0053a3f8 != param_2) {
      if (((*DAT_0053a400 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053a400), iVar1 != 0)) {
        *DAT_0053a404 = DAT_0053a408;
      }
      if (DAT_0053a404 != param_2) {
        if (((*DAT_0053a40c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053a40c), iVar1 != 0))
        {
          *DAT_0053a410 = DAT_0053a414;
        }
        if (DAT_0053a410 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

