#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_003817cc;
extern undefined4 *DAT_003817d0;
extern undefined4 DAT_003817d4;
extern uint *DAT_003817d8;
extern undefined4 *DAT_003817dc;
extern undefined4 DAT_003817e0;
extern uint *DAT_003817e4;
extern undefined4 *DAT_003817e8;
extern undefined4 DAT_003817ec;
extern uint *DAT_003817f0;
extern undefined4 *DAT_003817f4;
extern undefined4 DAT_003817f8;

// USA 003816CC <- EU 003816A8 (Ghidra, non-matching)
// GLOBAL DAT_003817cc uint *
// GLOBAL DAT_003817d0 undefined4 *
// GLOBAL DAT_003817d4 undefined4
// GLOBAL DAT_003817d8 uint *
// GLOBAL DAT_003817dc undefined4 *
// GLOBAL DAT_003817e0 undefined4
// GLOBAL DAT_003817e4 uint *
// GLOBAL DAT_003817e8 undefined4 *
// GLOBAL DAT_003817ec undefined4
// GLOBAL DAT_003817f0 uint *
// GLOBAL DAT_003817f4 undefined4 *
// GLOBAL DAT_003817f8 undefined4

undefined4 func_003816CC(undefined4 *param_1)

{
  int iVar1;
  
  if (((*DAT_003817cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_003817cc), iVar1 != 0)) {
    *DAT_003817d0 = DAT_003817d4;
  }
  if (DAT_003817d0 != param_1) {
    if (((*DAT_003817d8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_003817d8), iVar1 != 0)) {
      *DAT_003817dc = DAT_003817e0;
    }
    if (DAT_003817dc != param_1) {
      if (((*DAT_003817e4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_003817e4), iVar1 != 0)) {
        *DAT_003817e8 = DAT_003817ec;
      }
      if (DAT_003817e8 != param_1) {
        if (((*DAT_003817f0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_003817f0), iVar1 != 0))
        {
          *DAT_003817f4 = DAT_003817f8;
        }
        if (DAT_003817f4 != param_1) {
          return 0;
        }
      }
    }
  }
  return 1;
}

