#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_0021cc2c;

// USA 0021CC18 <- EU 0021CC18 (Ghidra, non-matching)
// GLOBAL DAT_0021cc2c int

undefined4 func_0021CC18(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0021cc2c + 0x84;
  *param_1 = DAT_0021cc2c;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

