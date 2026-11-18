#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_00583c18;
extern undefined4 *DAT_00583c1c;
extern undefined4 DAT_00583c20;

// USA 00583BEC <- EU 00583BC4 (Ghidra, non-matching)
// GLOBAL DAT_00583c18 uint *
// GLOBAL DAT_00583c1c undefined4 *
// GLOBAL DAT_00583c20 undefined4

void func_00583BEC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00583c18 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00583c18), iVar1 != 0)) {
    *DAT_00583c1c = DAT_00583c20;
  }
  if (DAT_00583c1c != param_2) {
    func_001E6B34(param_2);
  }
  return;
}

