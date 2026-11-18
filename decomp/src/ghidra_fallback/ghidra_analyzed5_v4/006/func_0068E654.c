#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068e6cc;
extern undefined4 *DAT_0068e6d0;
extern undefined4 DAT_0068e6d4;
extern uint *DAT_0068e6d8;
extern undefined4 *DAT_0068e6dc;
extern undefined4 DAT_0068e6e0;

// USA 0068E654 <- EU 0068E62C (Ghidra, non-matching)
// GLOBAL DAT_0068e6cc uint *
// GLOBAL DAT_0068e6d0 undefined4 *
// GLOBAL DAT_0068e6d4 undefined4
// GLOBAL DAT_0068e6d8 uint *
// GLOBAL DAT_0068e6dc undefined4 *
// GLOBAL DAT_0068e6e0 undefined4

undefined4 func_0068E654(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068e6cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068e6cc), iVar1 != 0)) {
    *DAT_0068e6d0 = DAT_0068e6d4;
  }
  if (DAT_0068e6d0 != param_2) {
    if (((*DAT_0068e6d8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068e6d8), iVar1 != 0)) {
      *DAT_0068e6dc = DAT_0068e6e0;
    }
    if (DAT_0068e6dc != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

