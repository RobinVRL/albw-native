#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005516c0;
extern undefined4 *DAT_005516c4;
extern undefined4 DAT_005516c8;
extern uint *DAT_005516cc;
extern undefined4 *DAT_005516d0;
extern undefined4 DAT_005516d4;
extern uint *DAT_005516d8;
extern undefined4 *DAT_005516dc;
extern undefined4 DAT_005516e0;
extern uint *DAT_005516e4;
extern undefined4 *DAT_005516e8;
extern undefined4 DAT_005516ec;

// USA 005515C4 <- EU 0055159C (Ghidra, non-matching)
// GLOBAL DAT_005516c0 uint *
// GLOBAL DAT_005516c4 undefined4 *
// GLOBAL DAT_005516c8 undefined4
// GLOBAL DAT_005516cc uint *
// GLOBAL DAT_005516d0 undefined4 *
// GLOBAL DAT_005516d4 undefined4
// GLOBAL DAT_005516d8 uint *
// GLOBAL DAT_005516dc undefined4 *
// GLOBAL DAT_005516e0 undefined4
// GLOBAL DAT_005516e4 uint *
// GLOBAL DAT_005516e8 undefined4 *
// GLOBAL DAT_005516ec undefined4

undefined4 func_005515C4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005516c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005516c0), iVar1 != 0)) {
    *DAT_005516c4 = DAT_005516c8;
  }
  if (DAT_005516c4 != param_2) {
    if (((*DAT_005516cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005516cc), iVar1 != 0)) {
      *DAT_005516d0 = DAT_005516d4;
    }
    if (DAT_005516d0 != param_2) {
      if (((*DAT_005516d8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005516d8), iVar1 != 0)) {
        *DAT_005516dc = DAT_005516e0;
      }
      if (DAT_005516dc != param_2) {
        if (((*DAT_005516e4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005516e4), iVar1 != 0))
        {
          *DAT_005516e8 = DAT_005516ec;
        }
        if (DAT_005516e8 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

