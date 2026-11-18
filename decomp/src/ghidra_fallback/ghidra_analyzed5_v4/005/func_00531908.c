#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00263C30(undefined4 *param_1);
extern uint *DAT_00531934;
extern undefined4 *DAT_00531938;
extern undefined4 DAT_0053193c;

// USA 00531908 <- EU 005318E0 (Ghidra, non-matching)
// GLOBAL DAT_00531934 uint *
// GLOBAL DAT_00531938 undefined4 *
// GLOBAL DAT_0053193c undefined4

void func_00531908(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00531934 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00531934), iVar1 != 0)) {
    *DAT_00531938 = DAT_0053193c;
  }
  if (DAT_00531938 != param_2) {
    func_00263C30(param_2);
  }
  return;
}

