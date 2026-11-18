#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055b50c;
extern undefined4 *DAT_0055b510;
extern undefined4 DAT_0055b514;
extern uint *DAT_0055b518;
extern undefined4 *DAT_0055b51c;
extern undefined4 DAT_0055b520;

// USA 0055B498 <- EU 0055B470 (Ghidra, non-matching)
// GLOBAL DAT_0055b50c uint *
// GLOBAL DAT_0055b510 undefined4 *
// GLOBAL DAT_0055b514 undefined4
// GLOBAL DAT_0055b518 uint *
// GLOBAL DAT_0055b51c undefined4 *
// GLOBAL DAT_0055b520 undefined4

undefined4 func_0055B498(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055b50c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055b50c), iVar1 != 0)) {
    *DAT_0055b510 = DAT_0055b514;
  }
  if (DAT_0055b510 != param_2) {
    if (((*DAT_0055b518 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055b518), iVar1 != 0)) {
      *DAT_0055b51c = DAT_0055b520;
    }
    if (DAT_0055b51c != param_2) {
      return 0;
    }
  }
  return 1;
}

