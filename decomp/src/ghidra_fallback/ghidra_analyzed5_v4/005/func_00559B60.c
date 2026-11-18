#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00559c18;
extern undefined4 *DAT_00559c1c;
extern undefined4 DAT_00559c20;
extern uint *DAT_00559c24;
extern undefined4 *DAT_00559c28;
extern undefined4 DAT_00559c2c;
extern uint *DAT_00559c30;
extern undefined4 *DAT_00559c34;
extern undefined4 DAT_00559c38;

// USA 00559B60 <- EU 00559B38 (Ghidra, non-matching)
// GLOBAL DAT_00559c18 uint *
// GLOBAL DAT_00559c1c undefined4 *
// GLOBAL DAT_00559c20 undefined4
// GLOBAL DAT_00559c24 uint *
// GLOBAL DAT_00559c28 undefined4 *
// GLOBAL DAT_00559c2c undefined4
// GLOBAL DAT_00559c30 uint *
// GLOBAL DAT_00559c34 undefined4 *
// GLOBAL DAT_00559c38 undefined4

undefined4 func_00559B60(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00559c18 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00559c18), iVar1 != 0)) {
    *DAT_00559c1c = DAT_00559c20;
  }
  if (DAT_00559c1c != param_2) {
    if (((*DAT_00559c24 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00559c24), iVar1 != 0)) {
      *DAT_00559c28 = DAT_00559c2c;
    }
    if (DAT_00559c28 != param_2) {
      if (((*DAT_00559c30 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00559c30), iVar1 != 0)) {
        *DAT_00559c34 = DAT_00559c38;
      }
      if (DAT_00559c34 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

