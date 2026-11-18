#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005448b0;
extern undefined4 *DAT_005448b4;
extern undefined4 DAT_005448b8;
extern uint *DAT_005448bc;
extern undefined4 *DAT_005448c0;
extern undefined4 DAT_005448c4;
extern uint *DAT_005448c8;
extern undefined4 *DAT_005448cc;
extern undefined4 DAT_005448d0;

// USA 005447F8 <- EU 005447D0 (Ghidra, non-matching)
// GLOBAL DAT_005448b0 uint *
// GLOBAL DAT_005448b4 undefined4 *
// GLOBAL DAT_005448b8 undefined4
// GLOBAL DAT_005448bc uint *
// GLOBAL DAT_005448c0 undefined4 *
// GLOBAL DAT_005448c4 undefined4
// GLOBAL DAT_005448c8 uint *
// GLOBAL DAT_005448cc undefined4 *
// GLOBAL DAT_005448d0 undefined4

undefined4 func_005447F8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005448b0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005448b0), iVar1 != 0)) {
    *DAT_005448b4 = DAT_005448b8;
  }
  if (DAT_005448b4 != param_2) {
    if (((*DAT_005448bc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005448bc), iVar1 != 0)) {
      *DAT_005448c0 = DAT_005448c4;
    }
    if (DAT_005448c0 != param_2) {
      if (((*DAT_005448c8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005448c8), iVar1 != 0)) {
        *DAT_005448cc = DAT_005448d0;
      }
      if (DAT_005448cc != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

