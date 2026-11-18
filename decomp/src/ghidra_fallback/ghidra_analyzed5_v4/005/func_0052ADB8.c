#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E41C4(undefined4 *param_1);
extern uint *DAT_0052ade4;
extern undefined4 *DAT_0052ade8;
extern undefined4 DAT_0052adec;

// USA 0052ADB8 <- EU 0052AD90 (Ghidra, non-matching)
// GLOBAL DAT_0052ade4 uint *
// GLOBAL DAT_0052ade8 undefined4 *
// GLOBAL DAT_0052adec undefined4

void func_0052ADB8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052ade4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052ade4), iVar1 != 0)) {
    *DAT_0052ade8 = DAT_0052adec;
  }
  if (DAT_0052ade8 != param_2) {
    func_001E41C4(param_2);
  }
  return;
}

