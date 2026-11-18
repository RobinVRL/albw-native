#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00549b90;
extern undefined4 *DAT_00549b94;
extern undefined4 DAT_00549b98;
extern uint *DAT_00549b9c;
extern undefined4 *DAT_00549ba0;
extern undefined4 DAT_00549ba4;

// USA 00549B1C <- EU 00549AF4 (Ghidra, non-matching)
// GLOBAL DAT_00549b90 uint *
// GLOBAL DAT_00549b94 undefined4 *
// GLOBAL DAT_00549b98 undefined4
// GLOBAL DAT_00549b9c uint *
// GLOBAL DAT_00549ba0 undefined4 *
// GLOBAL DAT_00549ba4 undefined4

undefined4 func_00549B1C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00549b90 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00549b90), iVar1 != 0)) {
    *DAT_00549b94 = DAT_00549b98;
  }
  if (DAT_00549b94 != param_2) {
    if (((*DAT_00549b9c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00549b9c), iVar1 != 0)) {
      *DAT_00549ba0 = DAT_00549ba4;
    }
    if (DAT_00549ba0 != param_2) {
      return 0;
    }
  }
  return 1;
}

