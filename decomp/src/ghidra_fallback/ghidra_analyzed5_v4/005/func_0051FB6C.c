#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_0051fbe4;
extern undefined4 *DAT_0051fbe8;
extern undefined4 DAT_0051fbec;
extern uint *DAT_0051fbf0;
extern undefined4 *DAT_0051fbf4;
extern undefined4 DAT_0051fbf8;

// USA 0051FB6C <- EU 0051FB44 (Ghidra, non-matching)
// GLOBAL DAT_0051fbe4 uint *
// GLOBAL DAT_0051fbe8 undefined4 *
// GLOBAL DAT_0051fbec undefined4
// GLOBAL DAT_0051fbf0 uint *
// GLOBAL DAT_0051fbf4 undefined4 *
// GLOBAL DAT_0051fbf8 undefined4

undefined4 func_0051FB6C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0051fbe4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051fbe4), iVar1 != 0)) {
    *DAT_0051fbe8 = DAT_0051fbec;
  }
  if (DAT_0051fbe8 != param_2) {
    if (((*DAT_0051fbf0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051fbf0), iVar1 != 0)) {
      *DAT_0051fbf4 = DAT_0051fbf8;
    }
    if (DAT_0051fbf4 != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

