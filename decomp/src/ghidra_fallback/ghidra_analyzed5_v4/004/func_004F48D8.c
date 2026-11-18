#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_004f48c4;

// USA 004F48D8 <- EU 004F48B0 (Ghidra, non-matching)
// GLOBAL DAT_004f48c4 int

undefined4 func_004F48D8(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_004f48c4 + 0x84;
  *param_1 = DAT_004f48c4;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

