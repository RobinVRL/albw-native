#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_003389CC(undefined4 *param_1);
extern uint *DAT_0055f6a4;
extern undefined4 *DAT_0055f6a8;
extern undefined4 DAT_0055f6ac;

// USA 0055F678 <- EU 0055F650 (Ghidra, non-matching)
// GLOBAL DAT_0055f6a4 uint *
// GLOBAL DAT_0055f6a8 undefined4 *
// GLOBAL DAT_0055f6ac undefined4

void func_0055F678(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055f6a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055f6a4), iVar1 != 0)) {
    *DAT_0055f6a8 = DAT_0055f6ac;
  }
  if (DAT_0055f6a8 != param_2) {
    func_003389CC(param_2);
  }
  return;
}

