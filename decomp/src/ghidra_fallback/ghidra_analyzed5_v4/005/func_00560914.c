#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00560a10;
extern undefined4 *DAT_00560a14;
extern undefined4 DAT_00560a18;
extern uint *DAT_00560a1c;
extern undefined4 *DAT_00560a20;
extern undefined4 DAT_00560a24;
extern uint *DAT_00560a28;
extern undefined4 *DAT_00560a2c;
extern undefined4 DAT_00560a30;
extern uint *DAT_00560a34;
extern undefined4 *DAT_00560a38;
extern undefined4 DAT_00560a3c;

// USA 00560914 <- EU 005608EC (Ghidra, non-matching)
// GLOBAL DAT_00560a10 uint *
// GLOBAL DAT_00560a14 undefined4 *
// GLOBAL DAT_00560a18 undefined4
// GLOBAL DAT_00560a1c uint *
// GLOBAL DAT_00560a20 undefined4 *
// GLOBAL DAT_00560a24 undefined4
// GLOBAL DAT_00560a28 uint *
// GLOBAL DAT_00560a2c undefined4 *
// GLOBAL DAT_00560a30 undefined4
// GLOBAL DAT_00560a34 uint *
// GLOBAL DAT_00560a38 undefined4 *
// GLOBAL DAT_00560a3c undefined4

undefined4 func_00560914(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00560a10 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00560a10), iVar1 != 0)) {
    *DAT_00560a14 = DAT_00560a18;
  }
  if (DAT_00560a14 != param_2) {
    if (((*DAT_00560a1c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00560a1c), iVar1 != 0)) {
      *DAT_00560a20 = DAT_00560a24;
    }
    if (DAT_00560a20 != param_2) {
      if (((*DAT_00560a28 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00560a28), iVar1 != 0)) {
        *DAT_00560a2c = DAT_00560a30;
      }
      if (DAT_00560a2c != param_2) {
        if (((*DAT_00560a34 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00560a34), iVar1 != 0))
        {
          *DAT_00560a38 = DAT_00560a3c;
        }
        if (DAT_00560a38 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

