#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00521c10;
extern undefined4 *DAT_00521c14;
extern undefined4 DAT_00521c18;
extern uint *DAT_00521c1c;
extern undefined4 *DAT_00521c20;
extern undefined4 DAT_00521c24;
extern uint *DAT_00521c28;
extern undefined4 *DAT_00521c2c;
extern undefined4 DAT_00521c30;
extern uint *DAT_00521c34;
extern undefined4 *DAT_00521c38;
extern undefined4 DAT_00521c3c;

// USA 00521B14 <- EU 00521AEC (Ghidra, non-matching)
// GLOBAL DAT_00521c10 uint *
// GLOBAL DAT_00521c14 undefined4 *
// GLOBAL DAT_00521c18 undefined4
// GLOBAL DAT_00521c1c uint *
// GLOBAL DAT_00521c20 undefined4 *
// GLOBAL DAT_00521c24 undefined4
// GLOBAL DAT_00521c28 uint *
// GLOBAL DAT_00521c2c undefined4 *
// GLOBAL DAT_00521c30 undefined4
// GLOBAL DAT_00521c34 uint *
// GLOBAL DAT_00521c38 undefined4 *
// GLOBAL DAT_00521c3c undefined4

undefined4 func_00521B14(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00521c10 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00521c10), iVar1 != 0)) {
    *DAT_00521c14 = DAT_00521c18;
  }
  if (DAT_00521c14 != param_2) {
    if (((*DAT_00521c1c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00521c1c), iVar1 != 0)) {
      *DAT_00521c20 = DAT_00521c24;
    }
    if (DAT_00521c20 != param_2) {
      if (((*DAT_00521c28 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00521c28), iVar1 != 0)) {
        *DAT_00521c2c = DAT_00521c30;
      }
      if (DAT_00521c2c != param_2) {
        if (((*DAT_00521c34 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00521c34), iVar1 != 0))
        {
          *DAT_00521c38 = DAT_00521c3c;
        }
        if (DAT_00521c38 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

