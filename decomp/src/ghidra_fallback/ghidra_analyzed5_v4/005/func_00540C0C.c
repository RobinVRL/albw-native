#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00540c80;
extern undefined4 *DAT_00540c84;
extern undefined4 DAT_00540c88;
extern uint *DAT_00540c8c;
extern undefined4 *DAT_00540c90;
extern undefined4 DAT_00540c94;

// USA 00540C0C <- EU 00540BE4 (Ghidra, non-matching)
// GLOBAL DAT_00540c80 uint *
// GLOBAL DAT_00540c84 undefined4 *
// GLOBAL DAT_00540c88 undefined4
// GLOBAL DAT_00540c8c uint *
// GLOBAL DAT_00540c90 undefined4 *
// GLOBAL DAT_00540c94 undefined4

undefined4 func_00540C0C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00540c80 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00540c80), iVar1 != 0)) {
    *DAT_00540c84 = DAT_00540c88;
  }
  if (DAT_00540c84 != param_2) {
    if (((*DAT_00540c8c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00540c8c), iVar1 != 0)) {
      *DAT_00540c90 = DAT_00540c94;
    }
    if (DAT_00540c90 != param_2) {
      return 0;
    }
  }
  return 1;
}

