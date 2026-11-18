#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00557e1c;
extern undefined4 *DAT_00557e20;
extern undefined4 DAT_00557e24;
extern uint *DAT_00557e28;
extern undefined4 *DAT_00557e2c;
extern undefined4 DAT_00557e30;
extern uint *DAT_00557e34;
extern undefined4 *DAT_00557e38;
extern undefined4 DAT_00557e3c;
extern uint *DAT_00557e40;
extern undefined4 *DAT_00557e44;
extern undefined4 DAT_00557e48;

// USA 00557D20 <- EU 00557CF8 (Ghidra, non-matching)
// GLOBAL DAT_00557e1c uint *
// GLOBAL DAT_00557e20 undefined4 *
// GLOBAL DAT_00557e24 undefined4
// GLOBAL DAT_00557e28 uint *
// GLOBAL DAT_00557e2c undefined4 *
// GLOBAL DAT_00557e30 undefined4
// GLOBAL DAT_00557e34 uint *
// GLOBAL DAT_00557e38 undefined4 *
// GLOBAL DAT_00557e3c undefined4
// GLOBAL DAT_00557e40 uint *
// GLOBAL DAT_00557e44 undefined4 *
// GLOBAL DAT_00557e48 undefined4

undefined4 func_00557D20(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00557e1c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00557e1c), iVar1 != 0)) {
    *DAT_00557e20 = DAT_00557e24;
  }
  if (DAT_00557e20 != param_2) {
    if (((*DAT_00557e28 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00557e28), iVar1 != 0)) {
      *DAT_00557e2c = DAT_00557e30;
    }
    if (DAT_00557e2c != param_2) {
      if (((*DAT_00557e34 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00557e34), iVar1 != 0)) {
        *DAT_00557e38 = DAT_00557e3c;
      }
      if (DAT_00557e38 != param_2) {
        if (((*DAT_00557e40 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00557e40), iVar1 != 0))
        {
          *DAT_00557e44 = DAT_00557e48;
        }
        if (DAT_00557e44 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

