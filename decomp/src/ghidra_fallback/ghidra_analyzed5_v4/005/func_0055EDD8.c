#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_003389CC(undefined4 *param_1);
extern uint *DAT_0055ee04;
extern undefined4 *DAT_0055ee08;
extern undefined4 DAT_0055ee0c;

// USA 0055EDD8 <- EU 0055EDB0 (Ghidra, non-matching)
// GLOBAL DAT_0055ee04 uint *
// GLOBAL DAT_0055ee08 undefined4 *
// GLOBAL DAT_0055ee0c undefined4

void func_0055EDD8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055ee04 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055ee04), iVar1 != 0)) {
    *DAT_0055ee08 = DAT_0055ee0c;
  }
  if (DAT_0055ee08 != param_2) {
    func_003389CC(param_2);
  }
  return;
}

