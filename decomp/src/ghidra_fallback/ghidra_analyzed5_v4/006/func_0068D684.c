#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068d6fc;
extern undefined4 *DAT_0068d700;
extern undefined4 DAT_0068d704;
extern uint *DAT_0068d708;
extern undefined4 *DAT_0068d70c;
extern undefined4 DAT_0068d710;

// USA 0068D684 <- EU 0068D65C (Ghidra, non-matching)
// GLOBAL DAT_0068d6fc uint *
// GLOBAL DAT_0068d700 undefined4 *
// GLOBAL DAT_0068d704 undefined4
// GLOBAL DAT_0068d708 uint *
// GLOBAL DAT_0068d70c undefined4 *
// GLOBAL DAT_0068d710 undefined4

undefined4 func_0068D684(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068d6fc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068d6fc), iVar1 != 0)) {
    *DAT_0068d700 = DAT_0068d704;
  }
  if (DAT_0068d700 != param_2) {
    if (((*DAT_0068d708 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068d708), iVar1 != 0)) {
      *DAT_0068d70c = DAT_0068d710;
    }
    if (DAT_0068d70c != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

