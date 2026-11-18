#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068e9ac;
extern undefined4 *DAT_0068e9b0;
extern undefined4 DAT_0068e9b4;
extern uint *DAT_0068e9b8;
extern undefined4 *DAT_0068e9bc;
extern undefined4 DAT_0068e9c0;

// USA 0068E934 <- EU 0068E90C (Ghidra, non-matching)
// GLOBAL DAT_0068e9ac uint *
// GLOBAL DAT_0068e9b0 undefined4 *
// GLOBAL DAT_0068e9b4 undefined4
// GLOBAL DAT_0068e9b8 uint *
// GLOBAL DAT_0068e9bc undefined4 *
// GLOBAL DAT_0068e9c0 undefined4

undefined4 func_0068E934(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068e9ac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068e9ac), iVar1 != 0)) {
    *DAT_0068e9b0 = DAT_0068e9b4;
  }
  if (DAT_0068e9b0 != param_2) {
    if (((*DAT_0068e9b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068e9b8), iVar1 != 0)) {
      *DAT_0068e9bc = DAT_0068e9c0;
    }
    if (DAT_0068e9bc != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

