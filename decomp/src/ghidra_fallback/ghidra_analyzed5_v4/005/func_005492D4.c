#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005493d0;
extern undefined4 *DAT_005493d4;
extern undefined4 DAT_005493d8;
extern uint *DAT_005493dc;
extern undefined4 *DAT_005493e0;
extern undefined4 DAT_005493e4;
extern uint *DAT_005493e8;
extern undefined4 *DAT_005493ec;
extern undefined4 DAT_005493f0;
extern uint *DAT_005493f4;
extern undefined4 *DAT_005493f8;
extern undefined4 DAT_005493fc;

// USA 005492D4 <- EU 005492AC (Ghidra, non-matching)
// GLOBAL DAT_005493d0 uint *
// GLOBAL DAT_005493d4 undefined4 *
// GLOBAL DAT_005493d8 undefined4
// GLOBAL DAT_005493dc uint *
// GLOBAL DAT_005493e0 undefined4 *
// GLOBAL DAT_005493e4 undefined4
// GLOBAL DAT_005493e8 uint *
// GLOBAL DAT_005493ec undefined4 *
// GLOBAL DAT_005493f0 undefined4
// GLOBAL DAT_005493f4 uint *
// GLOBAL DAT_005493f8 undefined4 *
// GLOBAL DAT_005493fc undefined4

undefined4 func_005492D4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005493d0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005493d0), iVar1 != 0)) {
    *DAT_005493d4 = DAT_005493d8;
  }
  if (DAT_005493d4 != param_2) {
    if (((*DAT_005493dc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005493dc), iVar1 != 0)) {
      *DAT_005493e0 = DAT_005493e4;
    }
    if (DAT_005493e0 != param_2) {
      if (((*DAT_005493e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005493e8), iVar1 != 0)) {
        *DAT_005493ec = DAT_005493f0;
      }
      if (DAT_005493ec != param_2) {
        if (((*DAT_005493f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005493f4), iVar1 != 0))
        {
          *DAT_005493f8 = DAT_005493fc;
        }
        if (DAT_005493f8 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

