#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00201234(undefined4 *param_1);
extern uint *DAT_0058a134;
extern undefined4 *DAT_0058a138;
extern undefined4 DAT_0058a13c;

// USA 0058A108 <- EU 0058A0E0 (Ghidra, non-matching)
// GLOBAL DAT_0058a134 uint *
// GLOBAL DAT_0058a138 undefined4 *
// GLOBAL DAT_0058a13c undefined4

void func_0058A108(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058a134 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058a134), iVar1 != 0)) {
    *DAT_0058a138 = DAT_0058a13c;
  }
  if (DAT_0058a138 != param_2) {
    func_00201234(param_2);
  }
  return;
}

