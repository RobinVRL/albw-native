#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052b550;
extern undefined4 *DAT_0052b554;
extern undefined4 DAT_0052b558;
extern uint *DAT_0052b55c;
extern undefined4 *DAT_0052b560;
extern undefined4 DAT_0052b564;
extern uint *DAT_0052b568;
extern undefined4 *DAT_0052b56c;
extern undefined4 DAT_0052b570;

// USA 0052B498 <- EU 0052B470 (Ghidra, non-matching)
// GLOBAL DAT_0052b550 uint *
// GLOBAL DAT_0052b554 undefined4 *
// GLOBAL DAT_0052b558 undefined4
// GLOBAL DAT_0052b55c uint *
// GLOBAL DAT_0052b560 undefined4 *
// GLOBAL DAT_0052b564 undefined4
// GLOBAL DAT_0052b568 uint *
// GLOBAL DAT_0052b56c undefined4 *
// GLOBAL DAT_0052b570 undefined4

undefined4 func_0052B498(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052b550 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052b550), iVar1 != 0)) {
    *DAT_0052b554 = DAT_0052b558;
  }
  if (DAT_0052b554 != param_2) {
    if (((*DAT_0052b55c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052b55c), iVar1 != 0)) {
      *DAT_0052b560 = DAT_0052b564;
    }
    if (DAT_0052b560 != param_2) {
      if (((*DAT_0052b568 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052b568), iVar1 != 0)) {
        *DAT_0052b56c = DAT_0052b570;
      }
      if (DAT_0052b56c != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

