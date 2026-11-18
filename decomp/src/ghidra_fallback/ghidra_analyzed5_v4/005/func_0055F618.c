#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_003389CC(undefined4 *param_1);
extern uint *DAT_0055f644;
extern undefined4 *DAT_0055f648;
extern undefined4 DAT_0055f64c;

// USA 0055F618 <- EU 0055F5F0 (Ghidra, non-matching)
// GLOBAL DAT_0055f644 uint *
// GLOBAL DAT_0055f648 undefined4 *
// GLOBAL DAT_0055f64c undefined4

void func_0055F618(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055f644 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055f644), iVar1 != 0)) {
    *DAT_0055f648 = DAT_0055f64c;
  }
  if (DAT_0055f648 != param_2) {
    func_003389CC(param_2);
  }
  return;
}

