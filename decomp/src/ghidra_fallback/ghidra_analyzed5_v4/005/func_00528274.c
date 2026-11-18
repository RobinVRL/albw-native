#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00528370;
extern undefined4 *DAT_00528374;
extern undefined4 DAT_00528378;
extern uint *DAT_0052837c;
extern undefined4 *DAT_00528380;
extern undefined4 DAT_00528384;
extern uint *DAT_00528388;
extern undefined4 *DAT_0052838c;
extern undefined4 DAT_00528390;
extern uint *DAT_00528394;
extern undefined4 *DAT_00528398;
extern undefined4 DAT_0052839c;

// USA 00528274 <- EU 0052824C (Ghidra, non-matching)
// GLOBAL DAT_00528370 uint *
// GLOBAL DAT_00528374 undefined4 *
// GLOBAL DAT_00528378 undefined4
// GLOBAL DAT_0052837c uint *
// GLOBAL DAT_00528380 undefined4 *
// GLOBAL DAT_00528384 undefined4
// GLOBAL DAT_00528388 uint *
// GLOBAL DAT_0052838c undefined4 *
// GLOBAL DAT_00528390 undefined4
// GLOBAL DAT_00528394 uint *
// GLOBAL DAT_00528398 undefined4 *
// GLOBAL DAT_0052839c undefined4

undefined4 func_00528274(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00528370 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00528370), iVar1 != 0)) {
    *DAT_00528374 = DAT_00528378;
  }
  if (DAT_00528374 != param_2) {
    if (((*DAT_0052837c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052837c), iVar1 != 0)) {
      *DAT_00528380 = DAT_00528384;
    }
    if (DAT_00528380 != param_2) {
      if (((*DAT_00528388 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00528388), iVar1 != 0)) {
        *DAT_0052838c = DAT_00528390;
      }
      if (DAT_0052838c != param_2) {
        if (((*DAT_00528394 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00528394), iVar1 != 0))
        {
          *DAT_00528398 = DAT_0052839c;
        }
        if (DAT_00528398 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

