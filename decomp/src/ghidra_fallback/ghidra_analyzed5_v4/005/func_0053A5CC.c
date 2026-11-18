#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053a6c8;
extern undefined4 *DAT_0053a6cc;
extern undefined4 DAT_0053a6d0;
extern uint *DAT_0053a6d4;
extern undefined4 *DAT_0053a6d8;
extern undefined4 DAT_0053a6dc;
extern uint *DAT_0053a6e0;
extern undefined4 *DAT_0053a6e4;
extern undefined4 DAT_0053a6e8;
extern uint *DAT_0053a6ec;
extern undefined4 *DAT_0053a6f0;
extern undefined4 DAT_0053a6f4;

// USA 0053A5CC <- EU 0053A5A4 (Ghidra, non-matching)
// GLOBAL DAT_0053a6c8 uint *
// GLOBAL DAT_0053a6cc undefined4 *
// GLOBAL DAT_0053a6d0 undefined4
// GLOBAL DAT_0053a6d4 uint *
// GLOBAL DAT_0053a6d8 undefined4 *
// GLOBAL DAT_0053a6dc undefined4
// GLOBAL DAT_0053a6e0 uint *
// GLOBAL DAT_0053a6e4 undefined4 *
// GLOBAL DAT_0053a6e8 undefined4
// GLOBAL DAT_0053a6ec uint *
// GLOBAL DAT_0053a6f0 undefined4 *
// GLOBAL DAT_0053a6f4 undefined4

undefined4 func_0053A5CC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053a6c8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053a6c8), iVar1 != 0)) {
    *DAT_0053a6cc = DAT_0053a6d0;
  }
  if (DAT_0053a6cc != param_2) {
    if (((*DAT_0053a6d4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053a6d4), iVar1 != 0)) {
      *DAT_0053a6d8 = DAT_0053a6dc;
    }
    if (DAT_0053a6d8 != param_2) {
      if (((*DAT_0053a6e0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053a6e0), iVar1 != 0)) {
        *DAT_0053a6e4 = DAT_0053a6e8;
      }
      if (DAT_0053a6e4 != param_2) {
        if (((*DAT_0053a6ec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053a6ec), iVar1 != 0))
        {
          *DAT_0053a6f0 = DAT_0053a6f4;
        }
        if (DAT_0053a6f0 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

