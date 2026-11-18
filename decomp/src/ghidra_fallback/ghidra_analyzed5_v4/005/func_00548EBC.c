#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00548fb8;
extern undefined4 *DAT_00548fbc;
extern undefined4 DAT_00548fc0;
extern uint *DAT_00548fc4;
extern undefined4 *DAT_00548fc8;
extern undefined4 DAT_00548fcc;
extern uint *DAT_00548fd0;
extern undefined4 *DAT_00548fd4;
extern undefined4 DAT_00548fd8;
extern uint *DAT_00548fdc;
extern undefined4 *DAT_00548fe0;
extern undefined4 DAT_00548fe4;

// USA 00548EBC <- EU 00548E94 (Ghidra, non-matching)
// GLOBAL DAT_00548fb8 uint *
// GLOBAL DAT_00548fbc undefined4 *
// GLOBAL DAT_00548fc0 undefined4
// GLOBAL DAT_00548fc4 uint *
// GLOBAL DAT_00548fc8 undefined4 *
// GLOBAL DAT_00548fcc undefined4
// GLOBAL DAT_00548fd0 uint *
// GLOBAL DAT_00548fd4 undefined4 *
// GLOBAL DAT_00548fd8 undefined4
// GLOBAL DAT_00548fdc uint *
// GLOBAL DAT_00548fe0 undefined4 *
// GLOBAL DAT_00548fe4 undefined4

undefined4 func_00548EBC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00548fb8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00548fb8), iVar1 != 0)) {
    *DAT_00548fbc = DAT_00548fc0;
  }
  if (DAT_00548fbc != param_2) {
    if (((*DAT_00548fc4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00548fc4), iVar1 != 0)) {
      *DAT_00548fc8 = DAT_00548fcc;
    }
    if (DAT_00548fc8 != param_2) {
      if (((*DAT_00548fd0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00548fd0), iVar1 != 0)) {
        *DAT_00548fd4 = DAT_00548fd8;
      }
      if (DAT_00548fd4 != param_2) {
        if (((*DAT_00548fdc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00548fdc), iVar1 != 0))
        {
          *DAT_00548fe0 = DAT_00548fe4;
        }
        if (DAT_00548fe0 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

