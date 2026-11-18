#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068d41c;
extern undefined4 *DAT_0068d420;
extern undefined4 DAT_0068d424;
extern uint *DAT_0068d428;
extern undefined4 *DAT_0068d42c;
extern undefined4 DAT_0068d430;

// USA 0068D3A4 <- EU 0068D37C (Ghidra, non-matching)
// GLOBAL DAT_0068d41c uint *
// GLOBAL DAT_0068d420 undefined4 *
// GLOBAL DAT_0068d424 undefined4
// GLOBAL DAT_0068d428 uint *
// GLOBAL DAT_0068d42c undefined4 *
// GLOBAL DAT_0068d430 undefined4

undefined4 func_0068D3A4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068d41c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068d41c), iVar1 != 0)) {
    *DAT_0068d420 = DAT_0068d424;
  }
  if (DAT_0068d420 != param_2) {
    if (((*DAT_0068d428 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068d428), iVar1 != 0)) {
      *DAT_0068d42c = DAT_0068d430;
    }
    if (DAT_0068d42c != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

