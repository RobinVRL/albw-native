#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00553544;
extern undefined4 *DAT_00553548;
extern undefined4 DAT_0055354c;
extern uint *DAT_00553550;
extern undefined4 *DAT_00553554;
extern undefined4 DAT_00553558;

// USA 005534D0 <- EU 005534A8 (Ghidra, non-matching)
// GLOBAL DAT_00553544 uint *
// GLOBAL DAT_00553548 undefined4 *
// GLOBAL DAT_0055354c undefined4
// GLOBAL DAT_00553550 uint *
// GLOBAL DAT_00553554 undefined4 *
// GLOBAL DAT_00553558 undefined4

undefined4 func_005534D0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00553544 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00553544), iVar1 != 0)) {
    *DAT_00553548 = DAT_0055354c;
  }
  if (DAT_00553548 != param_2) {
    if (((*DAT_00553550 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00553550), iVar1 != 0)) {
      *DAT_00553554 = DAT_00553558;
    }
    if (DAT_00553554 != param_2) {
      return 0;
    }
  }
  return 1;
}

