#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005833c8;
extern undefined4 *DAT_005833cc;
extern undefined4 DAT_005833d0;
extern uint *DAT_005833d4;
extern undefined4 *DAT_005833d8;
extern undefined4 DAT_005833dc;
extern uint *DAT_005833e0;
extern undefined4 *DAT_005833e4;
extern undefined4 DAT_005833e8;
extern uint *DAT_005833ec;
extern undefined4 *DAT_005833f0;
extern undefined4 DAT_005833f4;

// USA 005832CC <- EU 005832A4 (Ghidra, non-matching)
// GLOBAL DAT_005833c8 uint *
// GLOBAL DAT_005833cc undefined4 *
// GLOBAL DAT_005833d0 undefined4
// GLOBAL DAT_005833d4 uint *
// GLOBAL DAT_005833d8 undefined4 *
// GLOBAL DAT_005833dc undefined4
// GLOBAL DAT_005833e0 uint *
// GLOBAL DAT_005833e4 undefined4 *
// GLOBAL DAT_005833e8 undefined4
// GLOBAL DAT_005833ec uint *
// GLOBAL DAT_005833f0 undefined4 *
// GLOBAL DAT_005833f4 undefined4

undefined4 func_005832CC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005833c8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005833c8), iVar1 != 0)) {
    *DAT_005833cc = DAT_005833d0;
  }
  if (DAT_005833cc != param_2) {
    if (((*DAT_005833d4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005833d4), iVar1 != 0)) {
      *DAT_005833d8 = DAT_005833dc;
    }
    if (DAT_005833d8 != param_2) {
      if (((*DAT_005833e0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005833e0), iVar1 != 0)) {
        *DAT_005833e4 = DAT_005833e8;
      }
      if (DAT_005833e4 != param_2) {
        if (((*DAT_005833ec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005833ec), iVar1 != 0))
        {
          *DAT_005833f0 = DAT_005833f4;
        }
        if (DAT_005833f0 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

