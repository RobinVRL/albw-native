#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00261EB0(undefined4 *param_1);
extern uint *DAT_0051d778;
extern undefined4 *DAT_0051d77c;
extern undefined4 DAT_0051d780;

// USA 0051D74C <- EU 0051D724 (Ghidra, non-matching)
// GLOBAL DAT_0051d778 uint *
// GLOBAL DAT_0051d77c undefined4 *
// GLOBAL DAT_0051d780 undefined4

void func_0051D74C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0051d778 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051d778), iVar1 != 0)) {
    *DAT_0051d77c = DAT_0051d780;
  }
  if (DAT_0051d77c != param_2) {
    func_00261EB0(param_2);
  }
  return;
}

