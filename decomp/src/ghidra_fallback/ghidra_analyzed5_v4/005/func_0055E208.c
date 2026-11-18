#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00631550(undefined4 *param_1);
extern uint *DAT_0055e280;
extern undefined4 *DAT_0055e284;
extern undefined4 DAT_0055e288;
extern uint *DAT_0055e28c;
extern undefined4 *DAT_0055e290;
extern undefined4 DAT_0055e294;

// USA 0055E208 <- EU 0055E1E0 (Ghidra, non-matching)
// GLOBAL DAT_0055e280 uint *
// GLOBAL DAT_0055e284 undefined4 *
// GLOBAL DAT_0055e288 undefined4
// GLOBAL DAT_0055e28c uint *
// GLOBAL DAT_0055e290 undefined4 *
// GLOBAL DAT_0055e294 undefined4

undefined4 func_0055E208(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0055e280 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055e280), iVar1 != 0)) {
    *DAT_0055e284 = DAT_0055e288;
  }
  if (DAT_0055e284 != param_2) {
    if (((*DAT_0055e28c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055e28c), iVar1 != 0)) {
      *DAT_0055e290 = DAT_0055e294;
    }
    if (DAT_0055e290 != param_2) {
      uVar2 = func_00631550(param_2);
      return uVar2;
    }
  }
  return 1;
}

