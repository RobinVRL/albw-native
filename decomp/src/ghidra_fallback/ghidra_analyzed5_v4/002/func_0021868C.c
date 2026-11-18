#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_002186a0;

// USA 0021868C <- EU 0021868C (Ghidra, non-matching)
// GLOBAL DAT_002186a0 int

undefined4 func_0021868C(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_002186a0 + 0x84;
  *param_1 = DAT_002186a0;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

