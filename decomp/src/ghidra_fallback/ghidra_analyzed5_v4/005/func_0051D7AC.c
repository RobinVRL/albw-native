#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001ACF30(undefined4 *param_1);
extern uint *DAT_0051d7d8;
extern undefined4 *DAT_0051d7dc;
extern undefined4 DAT_0051d7e0;

// USA 0051D7AC <- EU 0051D784 (Ghidra, non-matching)
// GLOBAL DAT_0051d7d8 uint *
// GLOBAL DAT_0051d7dc undefined4 *
// GLOBAL DAT_0051d7e0 undefined4

void func_0051D7AC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0051d7d8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051d7d8), iVar1 != 0)) {
    *DAT_0051d7dc = DAT_0051d7e0;
  }
  if (DAT_0051d7dc != param_2) {
    func_001ACF30(param_2);
  }
  return;
}

