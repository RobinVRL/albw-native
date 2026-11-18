#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057f5c0;
extern undefined4 *DAT_0057f5c4;
extern undefined4 DAT_0057f5c8;
extern uint *DAT_0057f5cc;
extern undefined4 *DAT_0057f5d0;
extern undefined4 DAT_0057f5d4;
extern uint *DAT_0057f5d8;
extern undefined4 *DAT_0057f5dc;
extern undefined4 DAT_0057f5e0;

// USA 0057F508 <- EU 0057F4E0 (Ghidra, non-matching)
// GLOBAL DAT_0057f5c0 uint *
// GLOBAL DAT_0057f5c4 undefined4 *
// GLOBAL DAT_0057f5c8 undefined4
// GLOBAL DAT_0057f5cc uint *
// GLOBAL DAT_0057f5d0 undefined4 *
// GLOBAL DAT_0057f5d4 undefined4
// GLOBAL DAT_0057f5d8 uint *
// GLOBAL DAT_0057f5dc undefined4 *
// GLOBAL DAT_0057f5e0 undefined4

undefined4 func_0057F508(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057f5c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057f5c0), iVar1 != 0)) {
    *DAT_0057f5c4 = DAT_0057f5c8;
  }
  if (DAT_0057f5c4 != param_2) {
    if (((*DAT_0057f5cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057f5cc), iVar1 != 0)) {
      *DAT_0057f5d0 = DAT_0057f5d4;
    }
    if (DAT_0057f5d0 != param_2) {
      if (((*DAT_0057f5d8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057f5d8), iVar1 != 0)) {
        *DAT_0057f5dc = DAT_0057f5e0;
      }
      if (DAT_0057f5dc != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

