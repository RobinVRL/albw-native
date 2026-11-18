#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_002FC030(undefined4 *param_1);
extern uint *DAT_00549464;
extern undefined4 *DAT_00549468;
extern undefined4 DAT_0054946c;

// USA 00549438 <- EU 00549410 (Ghidra, non-matching)
// GLOBAL DAT_00549464 uint *
// GLOBAL DAT_00549468 undefined4 *
// GLOBAL DAT_0054946c undefined4

void func_00549438(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00549464 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00549464), iVar1 != 0)) {
    *DAT_00549468 = DAT_0054946c;
  }
  if (DAT_00549468 != param_2) {
    func_002FC030(param_2);
  }
  return;
}

