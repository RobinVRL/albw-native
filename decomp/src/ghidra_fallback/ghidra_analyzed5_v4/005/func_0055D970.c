#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055d9e4;
extern undefined4 *DAT_0055d9e8;
extern undefined4 DAT_0055d9ec;
extern uint *DAT_0055d9f0;
extern undefined4 *DAT_0055d9f4;
extern undefined4 DAT_0055d9f8;

// USA 0055D970 <- EU 0055D948 (Ghidra, non-matching)
// GLOBAL DAT_0055d9e4 uint *
// GLOBAL DAT_0055d9e8 undefined4 *
// GLOBAL DAT_0055d9ec undefined4
// GLOBAL DAT_0055d9f0 uint *
// GLOBAL DAT_0055d9f4 undefined4 *
// GLOBAL DAT_0055d9f8 undefined4

undefined4 func_0055D970(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055d9e4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055d9e4), iVar1 != 0)) {
    *DAT_0055d9e8 = DAT_0055d9ec;
  }
  if (DAT_0055d9e8 != param_2) {
    if (((*DAT_0055d9f0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055d9f0), iVar1 != 0)) {
      *DAT_0055d9f4 = DAT_0055d9f8;
    }
    if (DAT_0055d9f4 != param_2) {
      return 0;
    }
  }
  return 1;
}

