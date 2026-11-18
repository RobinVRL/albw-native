#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004B9748(undefined4 *param_1);
extern uint *DAT_005768dc;
extern undefined4 *DAT_005768e0;
extern undefined4 DAT_005768e4;

// USA 005768B0 <- EU 00576888 (Ghidra, non-matching)
// GLOBAL DAT_005768dc uint *
// GLOBAL DAT_005768e0 undefined4 *
// GLOBAL DAT_005768e4 undefined4

void func_005768B0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005768dc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005768dc), iVar1 != 0)) {
    *DAT_005768e0 = DAT_005768e4;
  }
  if (DAT_005768e0 != param_2) {
    func_004B9748(param_2);
  }
  return;
}

