#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0022EDDC(undefined4 *param_1);
extern uint *DAT_00582f44;
extern undefined4 *DAT_00582f48;
extern undefined4 DAT_00582f4c;

// USA 00582F18 <- EU 00582EF0 (Ghidra, non-matching)
// GLOBAL DAT_00582f44 uint *
// GLOBAL DAT_00582f48 undefined4 *
// GLOBAL DAT_00582f4c undefined4

void func_00582F18(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00582f44 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00582f44), iVar1 != 0)) {
    *DAT_00582f48 = DAT_00582f4c;
  }
  if (DAT_00582f48 != param_2) {
    func_0022EDDC(param_2);
  }
  return;
}

