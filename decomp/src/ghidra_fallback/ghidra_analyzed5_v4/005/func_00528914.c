#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00528a10;
extern undefined4 *DAT_00528a14;
extern undefined4 DAT_00528a18;
extern uint *DAT_00528a1c;
extern undefined4 *DAT_00528a20;
extern undefined4 DAT_00528a24;
extern uint *DAT_00528a28;
extern undefined4 *DAT_00528a2c;
extern undefined4 DAT_00528a30;
extern uint *DAT_00528a34;
extern undefined4 *DAT_00528a38;
extern undefined4 DAT_00528a3c;

// USA 00528914 <- EU 005288EC (Ghidra, non-matching)
// GLOBAL DAT_00528a10 uint *
// GLOBAL DAT_00528a14 undefined4 *
// GLOBAL DAT_00528a18 undefined4
// GLOBAL DAT_00528a1c uint *
// GLOBAL DAT_00528a20 undefined4 *
// GLOBAL DAT_00528a24 undefined4
// GLOBAL DAT_00528a28 uint *
// GLOBAL DAT_00528a2c undefined4 *
// GLOBAL DAT_00528a30 undefined4
// GLOBAL DAT_00528a34 uint *
// GLOBAL DAT_00528a38 undefined4 *
// GLOBAL DAT_00528a3c undefined4

undefined4 func_00528914(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00528a10 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00528a10), iVar1 != 0)) {
    *DAT_00528a14 = DAT_00528a18;
  }
  if (DAT_00528a14 != param_2) {
    if (((*DAT_00528a1c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00528a1c), iVar1 != 0)) {
      *DAT_00528a20 = DAT_00528a24;
    }
    if (DAT_00528a20 != param_2) {
      if (((*DAT_00528a28 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00528a28), iVar1 != 0)) {
        *DAT_00528a2c = DAT_00528a30;
      }
      if (DAT_00528a2c != param_2) {
        if (((*DAT_00528a34 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00528a34), iVar1 != 0))
        {
          *DAT_00528a38 = DAT_00528a3c;
        }
        if (DAT_00528a38 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

