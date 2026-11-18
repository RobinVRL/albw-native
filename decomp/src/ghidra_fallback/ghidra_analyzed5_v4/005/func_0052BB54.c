#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052bc0c;
extern undefined4 *DAT_0052bc10;
extern undefined4 DAT_0052bc14;
extern uint *DAT_0052bc18;
extern undefined4 *DAT_0052bc1c;
extern undefined4 DAT_0052bc20;
extern uint *DAT_0052bc24;
extern undefined4 *DAT_0052bc28;
extern undefined4 DAT_0052bc2c;

// USA 0052BB54 <- EU 0052BB2C (Ghidra, non-matching)
// GLOBAL DAT_0052bc0c uint *
// GLOBAL DAT_0052bc10 undefined4 *
// GLOBAL DAT_0052bc14 undefined4
// GLOBAL DAT_0052bc18 uint *
// GLOBAL DAT_0052bc1c undefined4 *
// GLOBAL DAT_0052bc20 undefined4
// GLOBAL DAT_0052bc24 uint *
// GLOBAL DAT_0052bc28 undefined4 *
// GLOBAL DAT_0052bc2c undefined4

undefined4 func_0052BB54(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052bc0c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052bc0c), iVar1 != 0)) {
    *DAT_0052bc10 = DAT_0052bc14;
  }
  if (DAT_0052bc10 != param_2) {
    if (((*DAT_0052bc18 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052bc18), iVar1 != 0)) {
      *DAT_0052bc1c = DAT_0052bc20;
    }
    if (DAT_0052bc1c != param_2) {
      if (((*DAT_0052bc24 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052bc24), iVar1 != 0)) {
        *DAT_0052bc28 = DAT_0052bc2c;
      }
      if (DAT_0052bc28 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

