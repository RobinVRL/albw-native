#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055b9ec;
extern undefined4 *DAT_0055b9f0;
extern undefined4 DAT_0055b9f4;
extern uint *DAT_0055b9f8;
extern undefined4 *DAT_0055b9fc;
extern undefined4 DAT_0055ba00;

// USA 0055B978 <- EU 0055B950 (Ghidra, non-matching)
// GLOBAL DAT_0055b9ec uint *
// GLOBAL DAT_0055b9f0 undefined4 *
// GLOBAL DAT_0055b9f4 undefined4
// GLOBAL DAT_0055b9f8 uint *
// GLOBAL DAT_0055b9fc undefined4 *
// GLOBAL DAT_0055ba00 undefined4

undefined4 func_0055B978(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055b9ec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055b9ec), iVar1 != 0)) {
    *DAT_0055b9f0 = DAT_0055b9f4;
  }
  if (DAT_0055b9f0 != param_2) {
    if (((*DAT_0055b9f8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055b9f8), iVar1 != 0)) {
      *DAT_0055b9fc = DAT_0055ba00;
    }
    if (DAT_0055b9fc != param_2) {
      return 0;
    }
  }
  return 1;
}

