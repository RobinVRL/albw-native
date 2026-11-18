#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005219f8;
extern undefined4 *DAT_005219fc;
extern undefined4 DAT_00521a00;
extern uint *DAT_00521a04;
extern undefined4 *DAT_00521a08;
extern undefined4 DAT_00521a0c;
extern uint *DAT_00521a10;
extern undefined4 *DAT_00521a14;
extern undefined4 DAT_00521a18;
extern uint *DAT_00521a1c;
extern undefined4 *DAT_00521a20;
extern undefined4 DAT_00521a24;

// USA 005218FC <- EU 005218D4 (Ghidra, non-matching)
// GLOBAL DAT_005219f8 uint *
// GLOBAL DAT_005219fc undefined4 *
// GLOBAL DAT_00521a00 undefined4
// GLOBAL DAT_00521a04 uint *
// GLOBAL DAT_00521a08 undefined4 *
// GLOBAL DAT_00521a0c undefined4
// GLOBAL DAT_00521a10 uint *
// GLOBAL DAT_00521a14 undefined4 *
// GLOBAL DAT_00521a18 undefined4
// GLOBAL DAT_00521a1c uint *
// GLOBAL DAT_00521a20 undefined4 *
// GLOBAL DAT_00521a24 undefined4

undefined4 func_005218FC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005219f8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005219f8), iVar1 != 0)) {
    *DAT_005219fc = DAT_00521a00;
  }
  if (DAT_005219fc != param_2) {
    if (((*DAT_00521a04 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00521a04), iVar1 != 0)) {
      *DAT_00521a08 = DAT_00521a0c;
    }
    if (DAT_00521a08 != param_2) {
      if (((*DAT_00521a10 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00521a10), iVar1 != 0)) {
        *DAT_00521a14 = DAT_00521a18;
      }
      if (DAT_00521a14 != param_2) {
        if (((*DAT_00521a1c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00521a1c), iVar1 != 0))
        {
          *DAT_00521a20 = DAT_00521a24;
        }
        if (DAT_00521a20 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

