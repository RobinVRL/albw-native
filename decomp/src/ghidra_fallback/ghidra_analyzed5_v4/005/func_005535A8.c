#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055361c;
extern undefined4 *DAT_00553620;
extern undefined4 DAT_00553624;
extern uint *DAT_00553628;
extern undefined4 *DAT_0055362c;
extern undefined4 DAT_00553630;

// USA 005535A8 <- EU 00553580 (Ghidra, non-matching)
// GLOBAL DAT_0055361c uint *
// GLOBAL DAT_00553620 undefined4 *
// GLOBAL DAT_00553624 undefined4
// GLOBAL DAT_00553628 uint *
// GLOBAL DAT_0055362c undefined4 *
// GLOBAL DAT_00553630 undefined4

undefined4 func_005535A8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055361c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055361c), iVar1 != 0)) {
    *DAT_00553620 = DAT_00553624;
  }
  if (DAT_00553620 != param_2) {
    if (((*DAT_00553628 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00553628), iVar1 != 0)) {
      *DAT_0055362c = DAT_00553630;
    }
    if (DAT_0055362c != param_2) {
      return 0;
    }
  }
  return 1;
}

