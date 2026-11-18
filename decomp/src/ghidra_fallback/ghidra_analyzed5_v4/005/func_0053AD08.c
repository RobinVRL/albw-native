#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053ad30;
extern undefined4 *DAT_0053ad34;
extern undefined4 DAT_0053ad38;

// USA 0053AD08 <- EU 0053ACE0 (Ghidra, non-matching)
// GLOBAL DAT_0053ad30 uint *
// GLOBAL DAT_0053ad34 undefined4 *
// GLOBAL DAT_0053ad38 undefined4

bool func_0053AD08(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053ad30 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053ad30), iVar1 != 0)) {
    *DAT_0053ad34 = DAT_0053ad38;
  }
  return DAT_0053ad34 == param_2;
}

