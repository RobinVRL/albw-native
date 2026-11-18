#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0062B7FC(undefined4 *param_1);
extern uint *DAT_00558b50;
extern undefined4 *DAT_00558b54;
extern undefined4 DAT_00558b58;

// USA 00558B24 <- EU 00558AFC (Ghidra, non-matching)
// GLOBAL DAT_00558b50 uint *
// GLOBAL DAT_00558b54 undefined4 *
// GLOBAL DAT_00558b58 undefined4

void func_00558B24(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00558b50 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00558b50), iVar1 != 0)) {
    *DAT_00558b54 = DAT_00558b58;
  }
  if (DAT_00558b54 != param_2) {
    func_0062B7FC(param_2);
  }
  return;
}

