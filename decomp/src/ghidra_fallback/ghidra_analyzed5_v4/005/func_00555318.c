#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E5578(undefined4 *param_1);
extern uint *DAT_00555344;
extern undefined4 *DAT_00555348;
extern undefined4 DAT_0055534c;

// USA 00555318 <- EU 005552F0 (Ghidra, non-matching)
// GLOBAL DAT_00555344 uint *
// GLOBAL DAT_00555348 undefined4 *
// GLOBAL DAT_0055534c undefined4

void func_00555318(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00555344 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00555344), iVar1 != 0)) {
    *DAT_00555348 = DAT_0055534c;
  }
  if (DAT_00555348 != param_2) {
    func_001E5578(param_2);
  }
  return;
}

