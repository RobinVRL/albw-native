#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00325B1C(undefined4 *param_1);
extern uint *DAT_0052b7b8;
extern undefined4 *DAT_0052b7bc;
extern undefined4 DAT_0052b7c0;
extern uint *DAT_0052b7c4;
extern undefined4 *DAT_0052b7c8;
extern undefined4 DAT_0052b7cc;

// USA 0052B740 <- EU 0052B718 (Ghidra, non-matching)
// GLOBAL DAT_0052b7b8 uint *
// GLOBAL DAT_0052b7bc undefined4 *
// GLOBAL DAT_0052b7c0 undefined4
// GLOBAL DAT_0052b7c4 uint *
// GLOBAL DAT_0052b7c8 undefined4 *
// GLOBAL DAT_0052b7cc undefined4

undefined4 func_0052B740(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0052b7b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052b7b8), iVar1 != 0)) {
    *DAT_0052b7bc = DAT_0052b7c0;
  }
  if (DAT_0052b7bc != param_2) {
    if (((*DAT_0052b7c4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052b7c4), iVar1 != 0)) {
      *DAT_0052b7c8 = DAT_0052b7cc;
    }
    if (DAT_0052b7c8 != param_2) {
      uVar2 = func_00325B1C(param_2);
      return uVar2;
    }
  }
  return 1;
}

