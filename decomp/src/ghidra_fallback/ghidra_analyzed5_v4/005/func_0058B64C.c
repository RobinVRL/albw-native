#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0022EDDC(undefined4 *param_1);
extern uint *DAT_0058b678;
extern undefined4 *DAT_0058b67c;
extern undefined4 DAT_0058b680;

// USA 0058B64C <- EU 0058B624 (Ghidra, non-matching)
// GLOBAL DAT_0058b678 uint *
// GLOBAL DAT_0058b67c undefined4 *
// GLOBAL DAT_0058b680 undefined4

void func_0058B64C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058b678 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058b678), iVar1 != 0)) {
    *DAT_0058b67c = DAT_0058b680;
  }
  if (DAT_0058b67c != param_2) {
    func_0022EDDC(param_2);
  }
  return;
}

