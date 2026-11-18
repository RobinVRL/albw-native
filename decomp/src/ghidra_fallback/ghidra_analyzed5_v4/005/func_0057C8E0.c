#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004B9748(undefined4 *param_1);
extern uint *DAT_0057c90c;
extern undefined4 *DAT_0057c910;
extern undefined4 DAT_0057c914;

// USA 0057C8E0 <- EU 0057C8B8 (Ghidra, non-matching)
// GLOBAL DAT_0057c90c uint *
// GLOBAL DAT_0057c910 undefined4 *
// GLOBAL DAT_0057c914 undefined4

void func_0057C8E0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057c90c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057c90c), iVar1 != 0)) {
    *DAT_0057c910 = DAT_0057c914;
  }
  if (DAT_0057c910 != param_2) {
    func_004B9748(param_2);
  }
  return;
}

