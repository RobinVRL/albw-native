#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053e2a8;
extern undefined4 *DAT_0053e2ac;
extern undefined4 DAT_0053e2b0;
extern uint *DAT_0053e2b4;
extern undefined4 *DAT_0053e2b8;
extern undefined4 DAT_0053e2bc;
extern uint *DAT_0053e2c0;
extern undefined4 *DAT_0053e2c4;
extern undefined4 DAT_0053e2c8;
extern uint *DAT_0053e2cc;
extern undefined4 *DAT_0053e2d0;
extern undefined4 DAT_0053e2d4;
extern uint *DAT_0053e2d8;
extern undefined4 *DAT_0053e2dc;
extern undefined4 DAT_0053e2e0;

// USA 0053E168 <- EU 0053E140 (Ghidra, non-matching)
// GLOBAL DAT_0053e2a8 uint *
// GLOBAL DAT_0053e2ac undefined4 *
// GLOBAL DAT_0053e2b0 undefined4
// GLOBAL DAT_0053e2b4 uint *
// GLOBAL DAT_0053e2b8 undefined4 *
// GLOBAL DAT_0053e2bc undefined4
// GLOBAL DAT_0053e2c0 uint *
// GLOBAL DAT_0053e2c4 undefined4 *
// GLOBAL DAT_0053e2c8 undefined4
// GLOBAL DAT_0053e2cc uint *
// GLOBAL DAT_0053e2d0 undefined4 *
// GLOBAL DAT_0053e2d4 undefined4
// GLOBAL DAT_0053e2d8 uint *
// GLOBAL DAT_0053e2dc undefined4 *
// GLOBAL DAT_0053e2e0 undefined4

undefined4 func_0053E168(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053e2a8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053e2a8), iVar1 != 0)) {
    *DAT_0053e2ac = DAT_0053e2b0;
  }
  if (DAT_0053e2ac != param_2) {
    if (((*DAT_0053e2b4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053e2b4), iVar1 != 0)) {
      *DAT_0053e2b8 = DAT_0053e2bc;
    }
    if (DAT_0053e2b8 != param_2) {
      if (((*DAT_0053e2c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053e2c0), iVar1 != 0)) {
        *DAT_0053e2c4 = DAT_0053e2c8;
      }
      if (DAT_0053e2c4 != param_2) {
        if (((*DAT_0053e2cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053e2cc), iVar1 != 0))
        {
          *DAT_0053e2d0 = DAT_0053e2d4;
        }
        if (DAT_0053e2d0 != param_2) {
          if (((*DAT_0053e2d8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053e2d8), iVar1 != 0)
             ) {
            *DAT_0053e2dc = DAT_0053e2e0;
          }
          if (DAT_0053e2dc != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

