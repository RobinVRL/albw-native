#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00530b1c;
extern undefined4 *DAT_00530b20;
extern undefined4 DAT_00530b24;
extern uint *DAT_00530b28;
extern undefined4 *DAT_00530b2c;
extern undefined4 DAT_00530b30;
extern uint *DAT_00530b34;
extern undefined4 *DAT_00530b38;
extern undefined4 DAT_00530b3c;
extern uint *DAT_00530b40;
extern undefined4 *DAT_00530b44;
extern undefined4 DAT_00530b48;

// USA 00530A20 <- EU 005309F8 (Ghidra, non-matching)
// GLOBAL DAT_00530b1c uint *
// GLOBAL DAT_00530b20 undefined4 *
// GLOBAL DAT_00530b24 undefined4
// GLOBAL DAT_00530b28 uint *
// GLOBAL DAT_00530b2c undefined4 *
// GLOBAL DAT_00530b30 undefined4
// GLOBAL DAT_00530b34 uint *
// GLOBAL DAT_00530b38 undefined4 *
// GLOBAL DAT_00530b3c undefined4
// GLOBAL DAT_00530b40 uint *
// GLOBAL DAT_00530b44 undefined4 *
// GLOBAL DAT_00530b48 undefined4

undefined4 func_00530A20(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00530b1c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00530b1c), iVar1 != 0)) {
    *DAT_00530b20 = DAT_00530b24;
  }
  if (DAT_00530b20 != param_2) {
    if (((*DAT_00530b28 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00530b28), iVar1 != 0)) {
      *DAT_00530b2c = DAT_00530b30;
    }
    if (DAT_00530b2c != param_2) {
      if (((*DAT_00530b34 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00530b34), iVar1 != 0)) {
        *DAT_00530b38 = DAT_00530b3c;
      }
      if (DAT_00530b38 != param_2) {
        if (((*DAT_00530b40 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00530b40), iVar1 != 0))
        {
          *DAT_00530b44 = DAT_00530b48;
        }
        if (DAT_00530b44 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

