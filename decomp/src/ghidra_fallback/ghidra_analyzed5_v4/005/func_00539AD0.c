#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00539b88;
extern undefined4 *DAT_00539b8c;
extern undefined4 DAT_00539b90;
extern uint *DAT_00539b94;
extern undefined4 *DAT_00539b98;
extern undefined4 DAT_00539b9c;
extern uint *DAT_00539ba0;
extern undefined4 *DAT_00539ba4;
extern undefined4 DAT_00539ba8;

// USA 00539AD0 <- EU 00539AA8 (Ghidra, non-matching)
// GLOBAL DAT_00539b88 uint *
// GLOBAL DAT_00539b8c undefined4 *
// GLOBAL DAT_00539b90 undefined4
// GLOBAL DAT_00539b94 uint *
// GLOBAL DAT_00539b98 undefined4 *
// GLOBAL DAT_00539b9c undefined4
// GLOBAL DAT_00539ba0 uint *
// GLOBAL DAT_00539ba4 undefined4 *
// GLOBAL DAT_00539ba8 undefined4

undefined4 func_00539AD0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00539b88 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00539b88), iVar1 != 0)) {
    *DAT_00539b8c = DAT_00539b90;
  }
  if (DAT_00539b8c != param_2) {
    if (((*DAT_00539b94 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00539b94), iVar1 != 0)) {
      *DAT_00539b98 = DAT_00539b9c;
    }
    if (DAT_00539b98 != param_2) {
      if (((*DAT_00539ba0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00539ba0), iVar1 != 0)) {
        *DAT_00539ba4 = DAT_00539ba8;
      }
      if (DAT_00539ba4 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

