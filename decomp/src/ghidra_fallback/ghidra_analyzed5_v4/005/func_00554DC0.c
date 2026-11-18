#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00554e34;
extern undefined4 *DAT_00554e38;
extern undefined4 DAT_00554e3c;
extern uint *DAT_00554e40;
extern undefined4 *DAT_00554e44;
extern undefined4 DAT_00554e48;

// USA 00554DC0 <- EU 00554D98 (Ghidra, non-matching)
// GLOBAL DAT_00554e34 uint *
// GLOBAL DAT_00554e38 undefined4 *
// GLOBAL DAT_00554e3c undefined4
// GLOBAL DAT_00554e40 uint *
// GLOBAL DAT_00554e44 undefined4 *
// GLOBAL DAT_00554e48 undefined4

undefined4 func_00554DC0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00554e34 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00554e34), iVar1 != 0)) {
    *DAT_00554e38 = DAT_00554e3c;
  }
  if (DAT_00554e38 != param_2) {
    if (((*DAT_00554e40 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00554e40), iVar1 != 0)) {
      *DAT_00554e44 = DAT_00554e48;
    }
    if (DAT_00554e44 != param_2) {
      return 0;
    }
  }
  return 1;
}

