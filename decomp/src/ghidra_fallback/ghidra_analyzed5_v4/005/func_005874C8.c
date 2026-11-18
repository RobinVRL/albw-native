#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005875c4;
extern undefined4 *DAT_005875c8;
extern undefined4 DAT_005875cc;
extern uint *DAT_005875d0;
extern undefined4 *DAT_005875d4;
extern undefined4 DAT_005875d8;
extern uint *DAT_005875dc;
extern undefined4 *DAT_005875e0;
extern undefined4 DAT_005875e4;
extern uint *DAT_005875e8;
extern undefined4 *DAT_005875ec;
extern undefined4 DAT_005875f0;

// USA 005874C8 <- EU 005874A0 (Ghidra, non-matching)
// GLOBAL DAT_005875c4 uint *
// GLOBAL DAT_005875c8 undefined4 *
// GLOBAL DAT_005875cc undefined4
// GLOBAL DAT_005875d0 uint *
// GLOBAL DAT_005875d4 undefined4 *
// GLOBAL DAT_005875d8 undefined4
// GLOBAL DAT_005875dc uint *
// GLOBAL DAT_005875e0 undefined4 *
// GLOBAL DAT_005875e4 undefined4
// GLOBAL DAT_005875e8 uint *
// GLOBAL DAT_005875ec undefined4 *
// GLOBAL DAT_005875f0 undefined4

undefined4 func_005874C8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005875c4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005875c4), iVar1 != 0)) {
    *DAT_005875c8 = DAT_005875cc;
  }
  if (DAT_005875c8 != param_2) {
    if (((*DAT_005875d0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005875d0), iVar1 != 0)) {
      *DAT_005875d4 = DAT_005875d8;
    }
    if (DAT_005875d4 != param_2) {
      if (((*DAT_005875dc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005875dc), iVar1 != 0)) {
        *DAT_005875e0 = DAT_005875e4;
      }
      if (DAT_005875e0 != param_2) {
        if (((*DAT_005875e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005875e8), iVar1 != 0))
        {
          *DAT_005875ec = DAT_005875f0;
        }
        if (DAT_005875ec != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

