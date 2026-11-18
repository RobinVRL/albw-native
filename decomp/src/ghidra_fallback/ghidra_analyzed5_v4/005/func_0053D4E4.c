#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0062A730(undefined4 *param_1);
extern uint *DAT_0053d55c;
extern undefined4 *DAT_0053d560;
extern undefined4 DAT_0053d564;
extern uint *DAT_0053d568;
extern undefined4 *DAT_0053d56c;
extern undefined4 DAT_0053d570;

// USA 0053D4E4 <- EU 0053D4BC (Ghidra, non-matching)
// GLOBAL DAT_0053d55c uint *
// GLOBAL DAT_0053d560 undefined4 *
// GLOBAL DAT_0053d564 undefined4
// GLOBAL DAT_0053d568 uint *
// GLOBAL DAT_0053d56c undefined4 *
// GLOBAL DAT_0053d570 undefined4

undefined4 func_0053D4E4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0053d55c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053d55c), iVar1 != 0)) {
    *DAT_0053d560 = DAT_0053d564;
  }
  if (DAT_0053d560 != param_2) {
    if (((*DAT_0053d568 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053d568), iVar1 != 0)) {
      *DAT_0053d56c = DAT_0053d570;
    }
    if (DAT_0053d56c != param_2) {
      uVar2 = func_0062A730(param_2);
      return uVar2;
    }
  }
  return 1;
}

