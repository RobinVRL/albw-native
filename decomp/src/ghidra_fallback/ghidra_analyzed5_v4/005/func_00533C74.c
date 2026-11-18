#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E5578(undefined4 *param_1);
extern uint *DAT_00533ca0;
extern undefined4 *DAT_00533ca4;
extern undefined4 DAT_00533ca8;

// USA 00533C74 <- EU 00533C4C (Ghidra, non-matching)
// GLOBAL DAT_00533ca0 uint *
// GLOBAL DAT_00533ca4 undefined4 *
// GLOBAL DAT_00533ca8 undefined4

void func_00533C74(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00533ca0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00533ca0), iVar1 != 0)) {
    *DAT_00533ca4 = DAT_00533ca8;
  }
  if (DAT_00533ca4 != param_2) {
    func_001E5578(param_2);
  }
  return;
}

