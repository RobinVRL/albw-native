#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_006304C8(undefined4 *param_1);
extern uint *DAT_00558cc8;
extern undefined4 *DAT_00558ccc;
extern undefined4 DAT_00558cd0;
extern uint *DAT_00558cd4;
extern undefined4 *DAT_00558cd8;
extern undefined4 DAT_00558cdc;

// USA 00558C50 <- EU 00558C28 (Ghidra, non-matching)
// GLOBAL DAT_00558cc8 uint *
// GLOBAL DAT_00558ccc undefined4 *
// GLOBAL DAT_00558cd0 undefined4
// GLOBAL DAT_00558cd4 uint *
// GLOBAL DAT_00558cd8 undefined4 *
// GLOBAL DAT_00558cdc undefined4

undefined4 func_00558C50(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00558cc8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00558cc8), iVar1 != 0)) {
    *DAT_00558ccc = DAT_00558cd0;
  }
  if (DAT_00558ccc != param_2) {
    if (((*DAT_00558cd4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00558cd4), iVar1 != 0)) {
      *DAT_00558cd8 = DAT_00558cdc;
    }
    if (DAT_00558cd8 != param_2) {
      uVar2 = func_006304C8(param_2);
      return uVar2;
    }
  }
  return 1;
}

