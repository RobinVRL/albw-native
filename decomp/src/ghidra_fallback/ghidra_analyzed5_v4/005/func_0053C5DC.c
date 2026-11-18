#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053c6d8;
extern undefined4 *DAT_0053c6dc;
extern undefined4 DAT_0053c6e0;
extern uint *DAT_0053c6e4;
extern undefined4 *DAT_0053c6e8;
extern undefined4 DAT_0053c6ec;
extern uint *DAT_0053c6f0;
extern undefined4 *DAT_0053c6f4;
extern undefined4 DAT_0053c6f8;
extern uint *DAT_0053c6fc;
extern undefined4 *DAT_0053c700;
extern undefined4 DAT_0053c704;

// USA 0053C5DC <- EU 0053C5B4 (Ghidra, non-matching)
// GLOBAL DAT_0053c6d8 uint *
// GLOBAL DAT_0053c6dc undefined4 *
// GLOBAL DAT_0053c6e0 undefined4
// GLOBAL DAT_0053c6e4 uint *
// GLOBAL DAT_0053c6e8 undefined4 *
// GLOBAL DAT_0053c6ec undefined4
// GLOBAL DAT_0053c6f0 uint *
// GLOBAL DAT_0053c6f4 undefined4 *
// GLOBAL DAT_0053c6f8 undefined4
// GLOBAL DAT_0053c6fc uint *
// GLOBAL DAT_0053c700 undefined4 *
// GLOBAL DAT_0053c704 undefined4

undefined4 func_0053C5DC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053c6d8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053c6d8), iVar1 != 0)) {
    *DAT_0053c6dc = DAT_0053c6e0;
  }
  if (DAT_0053c6dc != param_2) {
    if (((*DAT_0053c6e4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053c6e4), iVar1 != 0)) {
      *DAT_0053c6e8 = DAT_0053c6ec;
    }
    if (DAT_0053c6e8 != param_2) {
      if (((*DAT_0053c6f0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053c6f0), iVar1 != 0)) {
        *DAT_0053c6f4 = DAT_0053c6f8;
      }
      if (DAT_0053c6f4 != param_2) {
        if (((*DAT_0053c6fc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053c6fc), iVar1 != 0))
        {
          *DAT_0053c700 = DAT_0053c704;
        }
        if (DAT_0053c700 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

