#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055d4d8;
extern undefined4 *DAT_0055d4dc;
extern undefined4 DAT_0055d4e0;
extern uint *DAT_0055d4e4;
extern undefined4 *DAT_0055d4e8;
extern undefined4 DAT_0055d4ec;

// USA 0055D464 <- EU 0055D43C (Ghidra, non-matching)
// GLOBAL DAT_0055d4d8 uint *
// GLOBAL DAT_0055d4dc undefined4 *
// GLOBAL DAT_0055d4e0 undefined4
// GLOBAL DAT_0055d4e4 uint *
// GLOBAL DAT_0055d4e8 undefined4 *
// GLOBAL DAT_0055d4ec undefined4

undefined4 func_0055D464(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055d4d8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055d4d8), iVar1 != 0)) {
    *DAT_0055d4dc = DAT_0055d4e0;
  }
  if (DAT_0055d4dc != param_2) {
    if (((*DAT_0055d4e4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055d4e4), iVar1 != 0)) {
      *DAT_0055d4e8 = DAT_0055d4ec;
    }
    if (DAT_0055d4e8 != param_2) {
      return 0;
    }
  }
  return 1;
}

