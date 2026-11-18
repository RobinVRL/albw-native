#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00653E44(undefined4 *param_1);
extern uint *DAT_0053dd7c;
extern undefined4 *DAT_0053dd80;
extern undefined4 DAT_0053dd84;
extern uint *DAT_0053dd88;
extern undefined4 *DAT_0053dd8c;
extern undefined4 DAT_0053dd90;

// USA 0053DD04 <- EU 0053DCDC (Ghidra, non-matching)
// GLOBAL DAT_0053dd7c uint *
// GLOBAL DAT_0053dd80 undefined4 *
// GLOBAL DAT_0053dd84 undefined4
// GLOBAL DAT_0053dd88 uint *
// GLOBAL DAT_0053dd8c undefined4 *
// GLOBAL DAT_0053dd90 undefined4

undefined4 func_0053DD04(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0053dd7c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053dd7c), iVar1 != 0)) {
    *DAT_0053dd80 = DAT_0053dd84;
  }
  if (DAT_0053dd80 != param_2) {
    if (((*DAT_0053dd88 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053dd88), iVar1 != 0)) {
      *DAT_0053dd8c = DAT_0053dd90;
    }
    if (DAT_0053dd8c != param_2) {
      uVar2 = func_00653E44(param_2);
      return uVar2;
    }
  }
  return 1;
}

