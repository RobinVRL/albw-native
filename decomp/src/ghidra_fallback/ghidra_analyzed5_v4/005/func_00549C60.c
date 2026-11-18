#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E5578(undefined4 *param_1);
extern uint *DAT_00549c8c;
extern undefined4 *DAT_00549c90;
extern undefined4 DAT_00549c94;

// USA 00549C60 <- EU 00549C38 (Ghidra, non-matching)
// GLOBAL DAT_00549c8c uint *
// GLOBAL DAT_00549c90 undefined4 *
// GLOBAL DAT_00549c94 undefined4

void func_00549C60(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00549c8c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00549c8c), iVar1 != 0)) {
    *DAT_00549c90 = DAT_00549c94;
  }
  if (DAT_00549c90 != param_2) {
    func_001E5578(param_2);
  }
  return;
}

