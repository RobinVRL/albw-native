#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005433cc;
extern undefined4 *DAT_005433d0;
extern undefined4 DAT_005433d4;
extern uint *DAT_005433d8;
extern undefined4 *DAT_005433dc;
extern undefined4 DAT_005433e0;
extern uint *DAT_005433e4;
extern undefined4 *DAT_005433e8;
extern undefined4 DAT_005433ec;
extern uint *DAT_005433f0;
extern undefined4 *DAT_005433f4;
extern undefined4 DAT_005433f8;

// USA 005432D0 <- EU 005432A8 (Ghidra, non-matching)
// GLOBAL DAT_005433cc uint *
// GLOBAL DAT_005433d0 undefined4 *
// GLOBAL DAT_005433d4 undefined4
// GLOBAL DAT_005433d8 uint *
// GLOBAL DAT_005433dc undefined4 *
// GLOBAL DAT_005433e0 undefined4
// GLOBAL DAT_005433e4 uint *
// GLOBAL DAT_005433e8 undefined4 *
// GLOBAL DAT_005433ec undefined4
// GLOBAL DAT_005433f0 uint *
// GLOBAL DAT_005433f4 undefined4 *
// GLOBAL DAT_005433f8 undefined4

undefined4 func_005432D0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005433cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005433cc), iVar1 != 0)) {
    *DAT_005433d0 = DAT_005433d4;
  }
  if (DAT_005433d0 != param_2) {
    if (((*DAT_005433d8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005433d8), iVar1 != 0)) {
      *DAT_005433dc = DAT_005433e0;
    }
    if (DAT_005433dc != param_2) {
      if (((*DAT_005433e4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005433e4), iVar1 != 0)) {
        *DAT_005433e8 = DAT_005433ec;
      }
      if (DAT_005433e8 != param_2) {
        if (((*DAT_005433f0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005433f0), iVar1 != 0))
        {
          *DAT_005433f4 = DAT_005433f8;
        }
        if (DAT_005433f4 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

