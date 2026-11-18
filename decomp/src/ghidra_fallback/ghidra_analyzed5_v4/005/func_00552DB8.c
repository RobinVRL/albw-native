#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00552e70;
extern undefined4 *DAT_00552e74;
extern undefined4 DAT_00552e78;
extern uint *DAT_00552e7c;
extern undefined4 *DAT_00552e80;
extern undefined4 DAT_00552e84;
extern uint *DAT_00552e88;
extern undefined4 *DAT_00552e8c;
extern undefined4 DAT_00552e90;

// USA 00552DB8 <- EU 00552D90 (Ghidra, non-matching)
// GLOBAL DAT_00552e70 uint *
// GLOBAL DAT_00552e74 undefined4 *
// GLOBAL DAT_00552e78 undefined4
// GLOBAL DAT_00552e7c uint *
// GLOBAL DAT_00552e80 undefined4 *
// GLOBAL DAT_00552e84 undefined4
// GLOBAL DAT_00552e88 uint *
// GLOBAL DAT_00552e8c undefined4 *
// GLOBAL DAT_00552e90 undefined4

undefined4 func_00552DB8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00552e70 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00552e70), iVar1 != 0)) {
    *DAT_00552e74 = DAT_00552e78;
  }
  if (DAT_00552e74 != param_2) {
    if (((*DAT_00552e7c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00552e7c), iVar1 != 0)) {
      *DAT_00552e80 = DAT_00552e84;
    }
    if (DAT_00552e80 != param_2) {
      if (((*DAT_00552e88 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00552e88), iVar1 != 0)) {
        *DAT_00552e8c = DAT_00552e90;
      }
      if (DAT_00552e8c != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

