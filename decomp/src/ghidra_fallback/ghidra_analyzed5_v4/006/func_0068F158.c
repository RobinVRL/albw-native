#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_002197D8(undefined4 *param_1);
extern uint *DAT_0068f184;
extern undefined4 *DAT_0068f188;
extern undefined4 DAT_0068f18c;

// USA 0068F158 <- EU 0068F130 (Ghidra, non-matching)
// GLOBAL DAT_0068f184 uint *
// GLOBAL DAT_0068f188 undefined4 *
// GLOBAL DAT_0068f18c undefined4

void func_0068F158(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0068f184 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068f184), iVar1 != 0)) {
    *DAT_0068f188 = DAT_0068f18c;
  }
  if (DAT_0068f188 != param_2) {
    func_002197D8(param_2);
  }
  return;
}

