#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055f8b4;
extern undefined4 *DAT_0055f8b8;
extern undefined4 DAT_0055f8bc;
extern uint *DAT_0055f8c0;
extern undefined4 *DAT_0055f8c4;
extern undefined4 DAT_0055f8c8;

// USA 0055F840 <- EU 0055F818 (Ghidra, non-matching)
// GLOBAL DAT_0055f8b4 uint *
// GLOBAL DAT_0055f8b8 undefined4 *
// GLOBAL DAT_0055f8bc undefined4
// GLOBAL DAT_0055f8c0 uint *
// GLOBAL DAT_0055f8c4 undefined4 *
// GLOBAL DAT_0055f8c8 undefined4

undefined4 func_0055F840(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055f8b4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055f8b4), iVar1 != 0)) {
    *DAT_0055f8b8 = DAT_0055f8bc;
  }
  if (DAT_0055f8b8 != param_2) {
    if (((*DAT_0055f8c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055f8c0), iVar1 != 0)) {
      *DAT_0055f8c4 = DAT_0055f8c8;
    }
    if (DAT_0055f8c4 != param_2) {
      return 0;
    }
  }
  return 1;
}

