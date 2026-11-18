#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068c89c;
extern undefined4 *DAT_0068c8a0;
extern undefined4 DAT_0068c8a4;
extern uint *DAT_0068c8a8;
extern undefined4 *DAT_0068c8ac;
extern undefined4 DAT_0068c8b0;

// USA 0068C824 <- EU 0068C7FC (Ghidra, non-matching)
// GLOBAL DAT_0068c89c uint *
// GLOBAL DAT_0068c8a0 undefined4 *
// GLOBAL DAT_0068c8a4 undefined4
// GLOBAL DAT_0068c8a8 uint *
// GLOBAL DAT_0068c8ac undefined4 *
// GLOBAL DAT_0068c8b0 undefined4

undefined4 func_0068C824(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068c89c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068c89c), iVar1 != 0)) {
    *DAT_0068c8a0 = DAT_0068c8a4;
  }
  if (DAT_0068c8a0 != param_2) {
    if (((*DAT_0068c8a8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068c8a8), iVar1 != 0)) {
      *DAT_0068c8ac = DAT_0068c8b0;
    }
    if (DAT_0068c8ac != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

