#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055d2bc;
extern undefined4 *DAT_0055d2c0;
extern undefined4 DAT_0055d2c4;
extern uint *DAT_0055d2c8;
extern undefined4 *DAT_0055d2cc;
extern undefined4 DAT_0055d2d0;

// USA 0055D248 <- EU 0055D220 (Ghidra, non-matching)
// GLOBAL DAT_0055d2bc uint *
// GLOBAL DAT_0055d2c0 undefined4 *
// GLOBAL DAT_0055d2c4 undefined4
// GLOBAL DAT_0055d2c8 uint *
// GLOBAL DAT_0055d2cc undefined4 *
// GLOBAL DAT_0055d2d0 undefined4

undefined4 func_0055D248(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055d2bc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055d2bc), iVar1 != 0)) {
    *DAT_0055d2c0 = DAT_0055d2c4;
  }
  if (DAT_0055d2c0 != param_2) {
    if (((*DAT_0055d2c8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055d2c8), iVar1 != 0)) {
      *DAT_0055d2cc = DAT_0055d2d0;
    }
    if (DAT_0055d2cc != param_2) {
      return 0;
    }
  }
  return 1;
}

