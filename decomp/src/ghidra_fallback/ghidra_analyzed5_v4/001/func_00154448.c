#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_00154460;

// USA 00154448 <- EU 0015444C (Ghidra, non-matching)
// GLOBAL DAT_00154460 int

undefined4 func_00154448(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00154460 + 0x84;
  *param_1 = DAT_00154460;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

