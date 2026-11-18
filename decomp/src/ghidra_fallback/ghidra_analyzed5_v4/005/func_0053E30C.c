#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053e3c4;
extern undefined4 *DAT_0053e3c8;
extern undefined4 DAT_0053e3cc;
extern uint *DAT_0053e3d0;
extern undefined4 *DAT_0053e3d4;
extern undefined4 DAT_0053e3d8;
extern uint *DAT_0053e3dc;
extern undefined4 *DAT_0053e3e0;
extern undefined4 DAT_0053e3e4;

// USA 0053E30C <- EU 0053E2E4 (Ghidra, non-matching)
// GLOBAL DAT_0053e3c4 uint *
// GLOBAL DAT_0053e3c8 undefined4 *
// GLOBAL DAT_0053e3cc undefined4
// GLOBAL DAT_0053e3d0 uint *
// GLOBAL DAT_0053e3d4 undefined4 *
// GLOBAL DAT_0053e3d8 undefined4
// GLOBAL DAT_0053e3dc uint *
// GLOBAL DAT_0053e3e0 undefined4 *
// GLOBAL DAT_0053e3e4 undefined4

undefined4 func_0053E30C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053e3c4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053e3c4), iVar1 != 0)) {
    *DAT_0053e3c8 = DAT_0053e3cc;
  }
  if (DAT_0053e3c8 != param_2) {
    if (((*DAT_0053e3d0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053e3d0), iVar1 != 0)) {
      *DAT_0053e3d4 = DAT_0053e3d8;
    }
    if (DAT_0053e3d4 != param_2) {
      if (((*DAT_0053e3dc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053e3dc), iVar1 != 0)) {
        *DAT_0053e3e0 = DAT_0053e3e4;
      }
      if (DAT_0053e3e0 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

