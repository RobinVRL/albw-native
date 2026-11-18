#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00201234(undefined4 *param_1);
extern uint *DAT_00531b04;
extern undefined4 *DAT_00531b08;
extern undefined4 DAT_00531b0c;

// USA 00531AD8 <- EU 00531AB0 (Ghidra, non-matching)
// GLOBAL DAT_00531b04 uint *
// GLOBAL DAT_00531b08 undefined4 *
// GLOBAL DAT_00531b0c undefined4

void func_00531AD8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00531b04 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00531b04), iVar1 != 0)) {
    *DAT_00531b08 = DAT_00531b0c;
  }
  if (DAT_00531b08 != param_2) {
    func_00201234(param_2);
  }
  return;
}

