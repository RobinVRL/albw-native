#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068e4a4;
extern undefined4 *DAT_0068e4a8;
extern undefined4 DAT_0068e4ac;
extern uint *DAT_0068e4b0;
extern undefined4 *DAT_0068e4b4;
extern undefined4 DAT_0068e4b8;

// USA 0068E42C <- EU 0068E404 (Ghidra, non-matching)
// GLOBAL DAT_0068e4a4 uint *
// GLOBAL DAT_0068e4a8 undefined4 *
// GLOBAL DAT_0068e4ac undefined4
// GLOBAL DAT_0068e4b0 uint *
// GLOBAL DAT_0068e4b4 undefined4 *
// GLOBAL DAT_0068e4b8 undefined4

undefined4 func_0068E42C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068e4a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068e4a4), iVar1 != 0)) {
    *DAT_0068e4a8 = DAT_0068e4ac;
  }
  if (DAT_0068e4a8 != param_2) {
    if (((*DAT_0068e4b0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068e4b0), iVar1 != 0)) {
      *DAT_0068e4b4 = DAT_0068e4b8;
    }
    if (DAT_0068e4b4 != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

