#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058d1b4;
extern undefined4 *DAT_0058d1b8;
extern undefined4 DAT_0058d1bc;
extern uint *DAT_0058d1c0;
extern undefined4 *DAT_0058d1c4;
extern undefined4 DAT_0058d1c8;
extern uint *DAT_0058d1cc;
extern undefined4 *DAT_0058d1d0;
extern undefined4 DAT_0058d1d4;

// USA 0058D0FC <- EU 0058D0D4 (Ghidra, non-matching)
// GLOBAL DAT_0058d1b4 uint *
// GLOBAL DAT_0058d1b8 undefined4 *
// GLOBAL DAT_0058d1bc undefined4
// GLOBAL DAT_0058d1c0 uint *
// GLOBAL DAT_0058d1c4 undefined4 *
// GLOBAL DAT_0058d1c8 undefined4
// GLOBAL DAT_0058d1cc uint *
// GLOBAL DAT_0058d1d0 undefined4 *
// GLOBAL DAT_0058d1d4 undefined4

undefined4 func_0058D0FC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058d1b4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058d1b4), iVar1 != 0)) {
    *DAT_0058d1b8 = DAT_0058d1bc;
  }
  if (DAT_0058d1b8 != param_2) {
    if (((*DAT_0058d1c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058d1c0), iVar1 != 0)) {
      *DAT_0058d1c4 = DAT_0058d1c8;
    }
    if (DAT_0058d1c4 != param_2) {
      if (((*DAT_0058d1cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058d1cc), iVar1 != 0)) {
        *DAT_0058d1d0 = DAT_0058d1d4;
      }
      if (DAT_0058d1d0 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

