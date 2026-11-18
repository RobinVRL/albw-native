#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058b198;
extern undefined4 *DAT_0058b19c;
extern undefined4 DAT_0058b1a0;
extern uint *DAT_0058b1a4;
extern undefined4 *DAT_0058b1a8;
extern undefined4 DAT_0058b1ac;
extern uint *DAT_0058b1b0;
extern undefined4 *DAT_0058b1b4;
extern undefined4 DAT_0058b1b8;
extern uint *DAT_0058b1bc;
extern undefined4 *DAT_0058b1c0;
extern undefined4 DAT_0058b1c4;

// USA 0058B09C <- EU 0058B074 (Ghidra, non-matching)
// GLOBAL DAT_0058b198 uint *
// GLOBAL DAT_0058b19c undefined4 *
// GLOBAL DAT_0058b1a0 undefined4
// GLOBAL DAT_0058b1a4 uint *
// GLOBAL DAT_0058b1a8 undefined4 *
// GLOBAL DAT_0058b1ac undefined4
// GLOBAL DAT_0058b1b0 uint *
// GLOBAL DAT_0058b1b4 undefined4 *
// GLOBAL DAT_0058b1b8 undefined4
// GLOBAL DAT_0058b1bc uint *
// GLOBAL DAT_0058b1c0 undefined4 *
// GLOBAL DAT_0058b1c4 undefined4

undefined4 func_0058B09C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058b198 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058b198), iVar1 != 0)) {
    *DAT_0058b19c = DAT_0058b1a0;
  }
  if (DAT_0058b19c != param_2) {
    if (((*DAT_0058b1a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058b1a4), iVar1 != 0)) {
      *DAT_0058b1a8 = DAT_0058b1ac;
    }
    if (DAT_0058b1a8 != param_2) {
      if (((*DAT_0058b1b0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058b1b0), iVar1 != 0)) {
        *DAT_0058b1b4 = DAT_0058b1b8;
      }
      if (DAT_0058b1b4 != param_2) {
        if (((*DAT_0058b1bc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058b1bc), iVar1 != 0))
        {
          *DAT_0058b1c0 = DAT_0058b1c4;
        }
        if (DAT_0058b1c0 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

