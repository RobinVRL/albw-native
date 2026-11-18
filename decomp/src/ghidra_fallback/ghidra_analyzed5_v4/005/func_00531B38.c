#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00201234(undefined4 *param_1);
extern uint *DAT_00531b64;
extern undefined4 *DAT_00531b68;
extern undefined4 DAT_00531b6c;

// USA 00531B38 <- EU 00531B10 (Ghidra, non-matching)
// GLOBAL DAT_00531b64 uint *
// GLOBAL DAT_00531b68 undefined4 *
// GLOBAL DAT_00531b6c undefined4

void func_00531B38(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00531b64 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00531b64), iVar1 != 0)) {
    *DAT_00531b68 = DAT_00531b6c;
  }
  if (DAT_00531b68 != param_2) {
    func_00201234(param_2);
  }
  return;
}

