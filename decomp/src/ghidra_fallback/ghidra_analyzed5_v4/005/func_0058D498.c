#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058d550;
extern undefined4 *DAT_0058d554;
extern undefined4 DAT_0058d558;
extern uint *DAT_0058d55c;
extern undefined4 *DAT_0058d560;
extern undefined4 DAT_0058d564;
extern uint *DAT_0058d568;
extern undefined4 *DAT_0058d56c;
extern undefined4 DAT_0058d570;

// USA 0058D498 <- EU 0058D470 (Ghidra, non-matching)
// GLOBAL DAT_0058d550 uint *
// GLOBAL DAT_0058d554 undefined4 *
// GLOBAL DAT_0058d558 undefined4
// GLOBAL DAT_0058d55c uint *
// GLOBAL DAT_0058d560 undefined4 *
// GLOBAL DAT_0058d564 undefined4
// GLOBAL DAT_0058d568 uint *
// GLOBAL DAT_0058d56c undefined4 *
// GLOBAL DAT_0058d570 undefined4

undefined4 func_0058D498(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058d550 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058d550), iVar1 != 0)) {
    *DAT_0058d554 = DAT_0058d558;
  }
  if (DAT_0058d554 != param_2) {
    if (((*DAT_0058d55c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058d55c), iVar1 != 0)) {
      *DAT_0058d560 = DAT_0058d564;
    }
    if (DAT_0058d560 != param_2) {
      if (((*DAT_0058d568 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058d568), iVar1 != 0)) {
        *DAT_0058d56c = DAT_0058d570;
      }
      if (DAT_0058d56c != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

