#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0026C108(undefined4 *param_1);
extern uint *DAT_005849a4;
extern undefined4 *DAT_005849a8;
extern undefined4 DAT_005849ac;

// USA 00584978 <- EU 00584950 (Ghidra, non-matching)
// GLOBAL DAT_005849a4 uint *
// GLOBAL DAT_005849a8 undefined4 *
// GLOBAL DAT_005849ac undefined4

void func_00584978(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005849a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005849a4), iVar1 != 0)) {
    *DAT_005849a8 = DAT_005849ac;
  }
  if (DAT_005849a8 != param_2) {
    func_0026C108(param_2);
  }
  return;
}

