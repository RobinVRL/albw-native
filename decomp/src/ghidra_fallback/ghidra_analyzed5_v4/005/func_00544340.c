#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_002796B8(undefined4 *param_1);
extern uint *DAT_0054436c;
extern undefined4 *DAT_00544370;
extern undefined4 DAT_00544374;

// USA 00544340 <- EU 00544318 (Ghidra, non-matching)
// GLOBAL DAT_0054436c uint *
// GLOBAL DAT_00544370 undefined4 *
// GLOBAL DAT_00544374 undefined4

void func_00544340(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054436c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054436c), iVar1 != 0)) {
    *DAT_00544370 = DAT_00544374;
  }
  if (DAT_00544370 != param_2) {
    func_002796B8(param_2);
  }
  return;
}

