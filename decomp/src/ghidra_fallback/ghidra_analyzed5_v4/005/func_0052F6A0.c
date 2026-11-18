#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052f79c;
extern undefined4 *DAT_0052f7a0;
extern undefined4 DAT_0052f7a4;
extern uint *DAT_0052f7a8;
extern undefined4 *DAT_0052f7ac;
extern undefined4 DAT_0052f7b0;
extern uint *DAT_0052f7b4;
extern undefined4 *DAT_0052f7b8;
extern undefined4 DAT_0052f7bc;
extern uint *DAT_0052f7c0;
extern undefined4 *DAT_0052f7c4;
extern undefined4 DAT_0052f7c8;

// USA 0052F6A0 <- EU 0052F678 (Ghidra, non-matching)
// GLOBAL DAT_0052f79c uint *
// GLOBAL DAT_0052f7a0 undefined4 *
// GLOBAL DAT_0052f7a4 undefined4
// GLOBAL DAT_0052f7a8 uint *
// GLOBAL DAT_0052f7ac undefined4 *
// GLOBAL DAT_0052f7b0 undefined4
// GLOBAL DAT_0052f7b4 uint *
// GLOBAL DAT_0052f7b8 undefined4 *
// GLOBAL DAT_0052f7bc undefined4
// GLOBAL DAT_0052f7c0 uint *
// GLOBAL DAT_0052f7c4 undefined4 *
// GLOBAL DAT_0052f7c8 undefined4

undefined4 func_0052F6A0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052f79c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052f79c), iVar1 != 0)) {
    *DAT_0052f7a0 = DAT_0052f7a4;
  }
  if (DAT_0052f7a0 != param_2) {
    if (((*DAT_0052f7a8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052f7a8), iVar1 != 0)) {
      *DAT_0052f7ac = DAT_0052f7b0;
    }
    if (DAT_0052f7ac != param_2) {
      if (((*DAT_0052f7b4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052f7b4), iVar1 != 0)) {
        *DAT_0052f7b8 = DAT_0052f7bc;
      }
      if (DAT_0052f7b8 != param_2) {
        if (((*DAT_0052f7c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052f7c0), iVar1 != 0))
        {
          *DAT_0052f7c4 = DAT_0052f7c8;
        }
        if (DAT_0052f7c4 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

