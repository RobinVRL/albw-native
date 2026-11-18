#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_002197D8(undefined4 *param_1);
extern uint *DAT_0068f124;
extern undefined4 *DAT_0068f128;
extern undefined4 DAT_0068f12c;

// USA 0068F0F8 <- EU 0068F0D0 (Ghidra, non-matching)
// GLOBAL DAT_0068f124 uint *
// GLOBAL DAT_0068f128 undefined4 *
// GLOBAL DAT_0068f12c undefined4

void func_0068F0F8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0068f124 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068f124), iVar1 != 0)) {
    *DAT_0068f128 = DAT_0068f12c;
  }
  if (DAT_0068f128 != param_2) {
    func_002197D8(param_2);
  }
  return;
}

