#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E5578(undefined4 *param_1);
extern uint *DAT_00549ed0;
extern undefined4 *DAT_00549ed4;
extern undefined4 DAT_00549ed8;

// USA 00549EA4 <- EU 00549E7C (Ghidra, non-matching)
// GLOBAL DAT_00549ed0 uint *
// GLOBAL DAT_00549ed4 undefined4 *
// GLOBAL DAT_00549ed8 undefined4

void func_00549EA4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00549ed0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00549ed0), iVar1 != 0)) {
    *DAT_00549ed4 = DAT_00549ed8;
  }
  if (DAT_00549ed4 != param_2) {
    func_001E5578(param_2);
  }
  return;
}

