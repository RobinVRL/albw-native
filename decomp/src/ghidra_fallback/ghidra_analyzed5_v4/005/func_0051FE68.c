#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E4908(undefined4 *param_1);
extern uint *DAT_0051fee0;
extern undefined4 *DAT_0051fee4;
extern undefined4 DAT_0051fee8;
extern uint *DAT_0051feec;
extern undefined4 *DAT_0051fef0;
extern undefined4 DAT_0051fef4;

// USA 0051FE68 <- EU 0051FE40 (Ghidra, non-matching)
// GLOBAL DAT_0051fee0 uint *
// GLOBAL DAT_0051fee4 undefined4 *
// GLOBAL DAT_0051fee8 undefined4
// GLOBAL DAT_0051feec uint *
// GLOBAL DAT_0051fef0 undefined4 *
// GLOBAL DAT_0051fef4 undefined4

undefined4 func_0051FE68(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0051fee0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051fee0), iVar1 != 0)) {
    *DAT_0051fee4 = DAT_0051fee8;
  }
  if (DAT_0051fee4 != param_2) {
    if (((*DAT_0051feec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051feec), iVar1 != 0)) {
      *DAT_0051fef0 = DAT_0051fef4;
    }
    if (DAT_0051fef0 != param_2) {
      uVar2 = func_001E4908(param_2);
      return uVar2;
    }
  }
  return 1;
}

