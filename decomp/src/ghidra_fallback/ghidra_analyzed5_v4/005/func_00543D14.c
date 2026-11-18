#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00543d88;
extern undefined4 *DAT_00543d8c;
extern undefined4 DAT_00543d90;
extern uint *DAT_00543d94;
extern undefined4 *DAT_00543d98;
extern undefined4 DAT_00543d9c;

// USA 00543D14 <- EU 00543CEC (Ghidra, non-matching)
// GLOBAL DAT_00543d88 uint *
// GLOBAL DAT_00543d8c undefined4 *
// GLOBAL DAT_00543d90 undefined4
// GLOBAL DAT_00543d94 uint *
// GLOBAL DAT_00543d98 undefined4 *
// GLOBAL DAT_00543d9c undefined4

undefined4 func_00543D14(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00543d88 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00543d88), iVar1 != 0)) {
    *DAT_00543d8c = DAT_00543d90;
  }
  if (DAT_00543d8c != param_2) {
    if (((*DAT_00543d94 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00543d94), iVar1 != 0)) {
      *DAT_00543d98 = DAT_00543d9c;
    }
    if (DAT_00543d98 != param_2) {
      return 0;
    }
  }
  return 1;
}

