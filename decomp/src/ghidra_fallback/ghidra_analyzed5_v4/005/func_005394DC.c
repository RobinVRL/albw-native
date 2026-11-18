#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00539550;
extern undefined4 *DAT_00539554;
extern undefined4 DAT_00539558;
extern uint *DAT_0053955c;
extern undefined4 *DAT_00539560;
extern undefined4 DAT_00539564;

// USA 005394DC <- EU 005394B4 (Ghidra, non-matching)
// GLOBAL DAT_00539550 uint *
// GLOBAL DAT_00539554 undefined4 *
// GLOBAL DAT_00539558 undefined4
// GLOBAL DAT_0053955c uint *
// GLOBAL DAT_00539560 undefined4 *
// GLOBAL DAT_00539564 undefined4

undefined4 func_005394DC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00539550 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00539550), iVar1 != 0)) {
    *DAT_00539554 = DAT_00539558;
  }
  if (DAT_00539554 != param_2) {
    if (((*DAT_0053955c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053955c), iVar1 != 0)) {
      *DAT_00539560 = DAT_00539564;
    }
    if (DAT_00539560 != param_2) {
      return 0;
    }
  }
  return 1;
}

