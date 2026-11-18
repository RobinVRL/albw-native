#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00536ec8;
extern undefined4 *DAT_00536ecc;
extern undefined4 DAT_00536ed0;
extern uint *DAT_00536ed4;
extern undefined4 *DAT_00536ed8;
extern undefined4 DAT_00536edc;
extern uint *DAT_00536ee0;
extern undefined4 *DAT_00536ee4;
extern undefined4 DAT_00536ee8;

// USA 00536E10 <- EU 00536DE8 (Ghidra, non-matching)
// GLOBAL DAT_00536ec8 uint *
// GLOBAL DAT_00536ecc undefined4 *
// GLOBAL DAT_00536ed0 undefined4
// GLOBAL DAT_00536ed4 uint *
// GLOBAL DAT_00536ed8 undefined4 *
// GLOBAL DAT_00536edc undefined4
// GLOBAL DAT_00536ee0 uint *
// GLOBAL DAT_00536ee4 undefined4 *
// GLOBAL DAT_00536ee8 undefined4

undefined4 func_00536E10(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00536ec8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00536ec8), iVar1 != 0)) {
    *DAT_00536ecc = DAT_00536ed0;
  }
  if (DAT_00536ecc != param_2) {
    if (((*DAT_00536ed4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00536ed4), iVar1 != 0)) {
      *DAT_00536ed8 = DAT_00536edc;
    }
    if (DAT_00536ed8 != param_2) {
      if (((*DAT_00536ee0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00536ee0), iVar1 != 0)) {
        *DAT_00536ee4 = DAT_00536ee8;
      }
      if (DAT_00536ee4 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

