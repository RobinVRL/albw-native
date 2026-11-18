#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068ccec;
extern undefined4 *DAT_0068ccf0;
extern undefined4 DAT_0068ccf4;
extern uint *DAT_0068ccf8;
extern undefined4 *DAT_0068ccfc;
extern undefined4 DAT_0068cd00;

// USA 0068CC74 <- EU 0068CC4C (Ghidra, non-matching)
// GLOBAL DAT_0068ccec uint *
// GLOBAL DAT_0068ccf0 undefined4 *
// GLOBAL DAT_0068ccf4 undefined4
// GLOBAL DAT_0068ccf8 uint *
// GLOBAL DAT_0068ccfc undefined4 *
// GLOBAL DAT_0068cd00 undefined4

undefined4 func_0068CC74(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068ccec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068ccec), iVar1 != 0)) {
    *DAT_0068ccf0 = DAT_0068ccf4;
  }
  if (DAT_0068ccf0 != param_2) {
    if (((*DAT_0068ccf8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068ccf8), iVar1 != 0)) {
      *DAT_0068ccfc = DAT_0068cd00;
    }
    if (DAT_0068ccfc != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

