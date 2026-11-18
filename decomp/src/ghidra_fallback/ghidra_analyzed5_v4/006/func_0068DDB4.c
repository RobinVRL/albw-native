#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068de2c;
extern undefined4 *DAT_0068de30;
extern undefined4 DAT_0068de34;
extern uint *DAT_0068de38;
extern undefined4 *DAT_0068de3c;
extern undefined4 DAT_0068de40;

// USA 0068DDB4 <- EU 0068DD8C (Ghidra, non-matching)
// GLOBAL DAT_0068de2c uint *
// GLOBAL DAT_0068de30 undefined4 *
// GLOBAL DAT_0068de34 undefined4
// GLOBAL DAT_0068de38 uint *
// GLOBAL DAT_0068de3c undefined4 *
// GLOBAL DAT_0068de40 undefined4

undefined4 func_0068DDB4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068de2c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068de2c), iVar1 != 0)) {
    *DAT_0068de30 = DAT_0068de34;
  }
  if (DAT_0068de30 != param_2) {
    if (((*DAT_0068de38 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068de38), iVar1 != 0)) {
      *DAT_0068de3c = DAT_0068de40;
    }
    if (DAT_0068de3c != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

