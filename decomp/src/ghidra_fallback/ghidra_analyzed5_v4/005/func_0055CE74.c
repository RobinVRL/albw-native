#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00631550(undefined4 *param_1);
extern uint *DAT_0055cea0;
extern undefined4 *DAT_0055cea4;
extern undefined4 DAT_0055cea8;

// USA 0055CE74 <- EU 0055CE4C (Ghidra, non-matching)
// GLOBAL DAT_0055cea0 uint *
// GLOBAL DAT_0055cea4 undefined4 *
// GLOBAL DAT_0055cea8 undefined4

void func_0055CE74(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055cea0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055cea0), iVar1 != 0)) {
    *DAT_0055cea4 = DAT_0055cea8;
  }
  if (DAT_0055cea4 != param_2) {
    func_00631550(param_2);
  }
  return;
}

