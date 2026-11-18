#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055d424;
extern undefined4 *DAT_0055d428;
extern undefined4 DAT_0055d42c;
extern uint *DAT_0055d430;
extern undefined4 *DAT_0055d434;
extern undefined4 DAT_0055d438;

// USA 0055D3B0 <- EU 0055D388 (Ghidra, non-matching)
// GLOBAL DAT_0055d424 uint *
// GLOBAL DAT_0055d428 undefined4 *
// GLOBAL DAT_0055d42c undefined4
// GLOBAL DAT_0055d430 uint *
// GLOBAL DAT_0055d434 undefined4 *
// GLOBAL DAT_0055d438 undefined4

undefined4 func_0055D3B0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055d424 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055d424), iVar1 != 0)) {
    *DAT_0055d428 = DAT_0055d42c;
  }
  if (DAT_0055d428 != param_2) {
    if (((*DAT_0055d430 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055d430), iVar1 != 0)) {
      *DAT_0055d434 = DAT_0055d438;
    }
    if (DAT_0055d434 != param_2) {
      return 0;
    }
  }
  return 1;
}

