#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0062B7FC(undefined4 *param_1);
extern uint *DAT_00545630;
extern undefined4 *DAT_00545634;
extern undefined4 DAT_00545638;
extern uint *DAT_0054563c;
extern undefined4 *DAT_00545640;
extern undefined4 DAT_00545644;

// USA 005455B8 <- EU 00545590 (Ghidra, non-matching)
// GLOBAL DAT_00545630 uint *
// GLOBAL DAT_00545634 undefined4 *
// GLOBAL DAT_00545638 undefined4
// GLOBAL DAT_0054563c uint *
// GLOBAL DAT_00545640 undefined4 *
// GLOBAL DAT_00545644 undefined4

undefined4 func_005455B8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00545630 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00545630), iVar1 != 0)) {
    *DAT_00545634 = DAT_00545638;
  }
  if (DAT_00545634 != param_2) {
    if (((*DAT_0054563c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054563c), iVar1 != 0)) {
      *DAT_00545640 = DAT_00545644;
    }
    if (DAT_00545640 != param_2) {
      uVar2 = func_0062B7FC(param_2);
      return uVar2;
    }
  }
  return 1;
}

