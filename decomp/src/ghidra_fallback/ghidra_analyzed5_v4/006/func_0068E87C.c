#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068e8f4;
extern undefined4 *DAT_0068e8f8;
extern undefined4 DAT_0068e8fc;
extern uint *DAT_0068e900;
extern undefined4 *DAT_0068e904;
extern undefined4 DAT_0068e908;

// USA 0068E87C <- EU 0068E854 (Ghidra, non-matching)
// GLOBAL DAT_0068e8f4 uint *
// GLOBAL DAT_0068e8f8 undefined4 *
// GLOBAL DAT_0068e8fc undefined4
// GLOBAL DAT_0068e900 uint *
// GLOBAL DAT_0068e904 undefined4 *
// GLOBAL DAT_0068e908 undefined4

undefined4 func_0068E87C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068e8f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068e8f4), iVar1 != 0)) {
    *DAT_0068e8f8 = DAT_0068e8fc;
  }
  if (DAT_0068e8f8 != param_2) {
    if (((*DAT_0068e900 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068e900), iVar1 != 0)) {
      *DAT_0068e904 = DAT_0068e908;
    }
    if (DAT_0068e904 != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

