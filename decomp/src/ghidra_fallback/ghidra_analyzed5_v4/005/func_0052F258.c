#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052f398;
extern undefined4 *DAT_0052f39c;
extern undefined4 DAT_0052f3a0;
extern uint *DAT_0052f3a4;
extern undefined4 *DAT_0052f3a8;
extern undefined4 DAT_0052f3ac;
extern uint *DAT_0052f3b0;
extern undefined4 *DAT_0052f3b4;
extern undefined4 DAT_0052f3b8;
extern uint *DAT_0052f3bc;
extern undefined4 *DAT_0052f3c0;
extern undefined4 DAT_0052f3c4;
extern uint *DAT_0052f3c8;
extern undefined4 *DAT_0052f3cc;
extern undefined4 DAT_0052f3d0;

// USA 0052F258 <- EU 0052F230 (Ghidra, non-matching)
// GLOBAL DAT_0052f398 uint *
// GLOBAL DAT_0052f39c undefined4 *
// GLOBAL DAT_0052f3a0 undefined4
// GLOBAL DAT_0052f3a4 uint *
// GLOBAL DAT_0052f3a8 undefined4 *
// GLOBAL DAT_0052f3ac undefined4
// GLOBAL DAT_0052f3b0 uint *
// GLOBAL DAT_0052f3b4 undefined4 *
// GLOBAL DAT_0052f3b8 undefined4
// GLOBAL DAT_0052f3bc uint *
// GLOBAL DAT_0052f3c0 undefined4 *
// GLOBAL DAT_0052f3c4 undefined4
// GLOBAL DAT_0052f3c8 uint *
// GLOBAL DAT_0052f3cc undefined4 *
// GLOBAL DAT_0052f3d0 undefined4

undefined4 func_0052F258(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052f398 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052f398), iVar1 != 0)) {
    *DAT_0052f39c = DAT_0052f3a0;
  }
  if (DAT_0052f39c != param_2) {
    if (((*DAT_0052f3a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052f3a4), iVar1 != 0)) {
      *DAT_0052f3a8 = DAT_0052f3ac;
    }
    if (DAT_0052f3a8 != param_2) {
      if (((*DAT_0052f3b0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052f3b0), iVar1 != 0)) {
        *DAT_0052f3b4 = DAT_0052f3b8;
      }
      if (DAT_0052f3b4 != param_2) {
        if (((*DAT_0052f3bc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052f3bc), iVar1 != 0))
        {
          *DAT_0052f3c0 = DAT_0052f3c4;
        }
        if (DAT_0052f3c0 != param_2) {
          if (((*DAT_0052f3c8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052f3c8), iVar1 != 0)
             ) {
            *DAT_0052f3cc = DAT_0052f3d0;
          }
          if (DAT_0052f3cc != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

