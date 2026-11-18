#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0026C108(undefined4 *param_1);
extern uint *DAT_0051e2cc;
extern undefined4 *DAT_0051e2d0;
extern undefined4 DAT_0051e2d4;

// USA 0051E2A0 <- EU 0051E278 (Ghidra, non-matching)
// GLOBAL DAT_0051e2cc uint *
// GLOBAL DAT_0051e2d0 undefined4 *
// GLOBAL DAT_0051e2d4 undefined4

void func_0051E2A0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0051e2cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051e2cc), iVar1 != 0)) {
    *DAT_0051e2d0 = DAT_0051e2d4;
  }
  if (DAT_0051e2d0 != param_2) {
    func_0026C108(param_2);
  }
  return;
}

