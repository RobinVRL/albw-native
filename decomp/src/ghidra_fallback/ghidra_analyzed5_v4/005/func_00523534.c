#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005235a8;
extern undefined4 *DAT_005235ac;
extern undefined4 DAT_005235b0;
extern uint *DAT_005235b4;
extern undefined4 *DAT_005235b8;
extern undefined4 DAT_005235bc;

// USA 00523534 <- EU 0052350C (Ghidra, non-matching)
// GLOBAL DAT_005235a8 uint *
// GLOBAL DAT_005235ac undefined4 *
// GLOBAL DAT_005235b0 undefined4
// GLOBAL DAT_005235b4 uint *
// GLOBAL DAT_005235b8 undefined4 *
// GLOBAL DAT_005235bc undefined4

undefined4 func_00523534(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005235a8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005235a8), iVar1 != 0)) {
    *DAT_005235ac = DAT_005235b0;
  }
  if (DAT_005235ac != param_2) {
    if (((*DAT_005235b4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005235b4), iVar1 != 0)) {
      *DAT_005235b8 = DAT_005235bc;
    }
    if (DAT_005235b8 != param_2) {
      return 0;
    }
  }
  return 1;
}

