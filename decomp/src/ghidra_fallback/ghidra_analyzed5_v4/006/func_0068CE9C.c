#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068cf14;
extern undefined4 *DAT_0068cf18;
extern undefined4 DAT_0068cf1c;
extern uint *DAT_0068cf20;
extern undefined4 *DAT_0068cf24;
extern undefined4 DAT_0068cf28;

// USA 0068CE9C <- EU 0068CE74 (Ghidra, non-matching)
// GLOBAL DAT_0068cf14 uint *
// GLOBAL DAT_0068cf18 undefined4 *
// GLOBAL DAT_0068cf1c undefined4
// GLOBAL DAT_0068cf20 uint *
// GLOBAL DAT_0068cf24 undefined4 *
// GLOBAL DAT_0068cf28 undefined4

undefined4 func_0068CE9C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068cf14 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068cf14), iVar1 != 0)) {
    *DAT_0068cf18 = DAT_0068cf1c;
  }
  if (DAT_0068cf18 != param_2) {
    if (((*DAT_0068cf20 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068cf20), iVar1 != 0)) {
      *DAT_0068cf24 = DAT_0068cf28;
    }
    if (DAT_0068cf24 != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

