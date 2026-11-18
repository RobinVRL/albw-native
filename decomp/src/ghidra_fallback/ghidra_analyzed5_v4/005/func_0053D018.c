#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_0053d090;
extern undefined4 *DAT_0053d094;
extern undefined4 DAT_0053d098;
extern uint *DAT_0053d09c;
extern undefined4 *DAT_0053d0a0;
extern undefined4 DAT_0053d0a4;

// USA 0053D018 <- EU 0053CFF0 (Ghidra, non-matching)
// GLOBAL DAT_0053d090 uint *
// GLOBAL DAT_0053d094 undefined4 *
// GLOBAL DAT_0053d098 undefined4
// GLOBAL DAT_0053d09c uint *
// GLOBAL DAT_0053d0a0 undefined4 *
// GLOBAL DAT_0053d0a4 undefined4

undefined4 func_0053D018(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0053d090 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053d090), iVar1 != 0)) {
    *DAT_0053d094 = DAT_0053d098;
  }
  if (DAT_0053d094 != param_2) {
    if (((*DAT_0053d09c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053d09c), iVar1 != 0)) {
      *DAT_0053d0a0 = DAT_0053d0a4;
    }
    if (DAT_0053d0a0 != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

