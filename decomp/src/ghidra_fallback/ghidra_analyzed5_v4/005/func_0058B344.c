#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0021DD80(undefined4 *param_1);
extern uint *DAT_0058b370;
extern undefined4 *DAT_0058b374;
extern undefined4 DAT_0058b378;

// USA 0058B344 <- EU 0058B31C (Ghidra, non-matching)
// GLOBAL DAT_0058b370 uint *
// GLOBAL DAT_0058b374 undefined4 *
// GLOBAL DAT_0058b378 undefined4

void func_0058B344(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058b370 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058b370), iVar1 != 0)) {
    *DAT_0058b374 = DAT_0058b378;
  }
  if (DAT_0058b374 != param_2) {
    func_0021DD80(param_2);
  }
  return;
}

