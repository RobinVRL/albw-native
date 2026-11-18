#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0060DDA0(undefined4 *param_1);
extern uint *DAT_005247a4;
extern undefined4 *DAT_005247a8;
extern undefined4 DAT_005247ac;

// USA 00524778 <- EU 00524750 (Ghidra, non-matching)
// GLOBAL DAT_005247a4 uint *
// GLOBAL DAT_005247a8 undefined4 *
// GLOBAL DAT_005247ac undefined4

void func_00524778(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005247a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005247a4), iVar1 != 0)) {
    *DAT_005247a8 = DAT_005247ac;
  }
  if (DAT_005247a8 != param_2) {
    func_0060DDA0(param_2);
  }
  return;
}

