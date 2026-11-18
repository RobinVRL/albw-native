#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_003389CC(undefined4 *param_1);
extern uint *DAT_0055fe54;
extern undefined4 *DAT_0055fe58;
extern undefined4 DAT_0055fe5c;

// USA 0055FE28 <- EU 0055FE00 (Ghidra, non-matching)
// GLOBAL DAT_0055fe54 uint *
// GLOBAL DAT_0055fe58 undefined4 *
// GLOBAL DAT_0055fe5c undefined4

void func_0055FE28(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055fe54 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055fe54), iVar1 != 0)) {
    *DAT_0055fe58 = DAT_0055fe5c;
  }
  if (DAT_0055fe58 != param_2) {
    func_003389CC(param_2);
  }
  return;
}

