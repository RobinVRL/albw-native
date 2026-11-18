#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055f0b4;
extern undefined4 *DAT_0055f0b8;
extern undefined4 DAT_0055f0bc;
extern uint *DAT_0055f0c0;
extern undefined4 *DAT_0055f0c4;
extern undefined4 DAT_0055f0c8;

// USA 0055F040 <- EU 0055F018 (Ghidra, non-matching)
// GLOBAL DAT_0055f0b4 uint *
// GLOBAL DAT_0055f0b8 undefined4 *
// GLOBAL DAT_0055f0bc undefined4
// GLOBAL DAT_0055f0c0 uint *
// GLOBAL DAT_0055f0c4 undefined4 *
// GLOBAL DAT_0055f0c8 undefined4

undefined4 func_0055F040(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055f0b4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055f0b4), iVar1 != 0)) {
    *DAT_0055f0b8 = DAT_0055f0bc;
  }
  if (DAT_0055f0b8 != param_2) {
    if (((*DAT_0055f0c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055f0c0), iVar1 != 0)) {
      *DAT_0055f0c4 = DAT_0055f0c8;
    }
    if (DAT_0055f0c4 != param_2) {
      return 0;
    }
  }
  return 1;
}

