#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068d86c;
extern undefined4 *DAT_0068d870;
extern undefined4 DAT_0068d874;
extern uint *DAT_0068d878;
extern undefined4 *DAT_0068d87c;
extern undefined4 DAT_0068d880;

// USA 0068D7F4 <- EU 0068D7CC (Ghidra, non-matching)
// GLOBAL DAT_0068d86c uint *
// GLOBAL DAT_0068d870 undefined4 *
// GLOBAL DAT_0068d874 undefined4
// GLOBAL DAT_0068d878 uint *
// GLOBAL DAT_0068d87c undefined4 *
// GLOBAL DAT_0068d880 undefined4

undefined4 func_0068D7F4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068d86c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068d86c), iVar1 != 0)) {
    *DAT_0068d870 = DAT_0068d874;
  }
  if (DAT_0068d870 != param_2) {
    if (((*DAT_0068d878 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068d878), iVar1 != 0)) {
      *DAT_0068d87c = DAT_0068d880;
    }
    if (DAT_0068d87c != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

