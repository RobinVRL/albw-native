#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0062A730(undefined4 *param_1);
extern uint *DAT_005561f8;
extern undefined4 *DAT_005561fc;
extern undefined4 DAT_00556200;

// USA 005561CC <- EU 005561A4 (Ghidra, non-matching)
// GLOBAL DAT_005561f8 uint *
// GLOBAL DAT_005561fc undefined4 *
// GLOBAL DAT_00556200 undefined4

void func_005561CC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005561f8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005561f8), iVar1 != 0)) {
    *DAT_005561fc = DAT_00556200;
  }
  if (DAT_005561fc != param_2) {
    func_0062A730(param_2);
  }
  return;
}

