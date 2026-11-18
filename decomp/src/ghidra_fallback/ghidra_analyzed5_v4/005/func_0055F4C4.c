#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055f5c0;
extern undefined4 *DAT_0055f5c4;
extern undefined4 DAT_0055f5c8;
extern uint *DAT_0055f5cc;
extern undefined4 *DAT_0055f5d0;
extern undefined4 DAT_0055f5d4;
extern uint *DAT_0055f5d8;
extern undefined4 *DAT_0055f5dc;
extern undefined4 DAT_0055f5e0;
extern uint *DAT_0055f5e4;
extern undefined4 *DAT_0055f5e8;
extern undefined4 DAT_0055f5ec;

// USA 0055F4C4 <- EU 0055F49C (Ghidra, non-matching)
// GLOBAL DAT_0055f5c0 uint *
// GLOBAL DAT_0055f5c4 undefined4 *
// GLOBAL DAT_0055f5c8 undefined4
// GLOBAL DAT_0055f5cc uint *
// GLOBAL DAT_0055f5d0 undefined4 *
// GLOBAL DAT_0055f5d4 undefined4
// GLOBAL DAT_0055f5d8 uint *
// GLOBAL DAT_0055f5dc undefined4 *
// GLOBAL DAT_0055f5e0 undefined4
// GLOBAL DAT_0055f5e4 uint *
// GLOBAL DAT_0055f5e8 undefined4 *
// GLOBAL DAT_0055f5ec undefined4

undefined4 func_0055F4C4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055f5c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055f5c0), iVar1 != 0)) {
    *DAT_0055f5c4 = DAT_0055f5c8;
  }
  if (DAT_0055f5c4 != param_2) {
    if (((*DAT_0055f5cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055f5cc), iVar1 != 0)) {
      *DAT_0055f5d0 = DAT_0055f5d4;
    }
    if (DAT_0055f5d0 != param_2) {
      if (((*DAT_0055f5d8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055f5d8), iVar1 != 0)) {
        *DAT_0055f5dc = DAT_0055f5e0;
      }
      if (DAT_0055f5dc != param_2) {
        if (((*DAT_0055f5e4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055f5e4), iVar1 != 0))
        {
          *DAT_0055f5e8 = DAT_0055f5ec;
        }
        if (DAT_0055f5e8 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

