#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_002f9c4c;

// USA 002F9C5C <- EU 002F9C38 (Ghidra, non-matching)
// GLOBAL DAT_002f9c4c int

undefined4 func_002F9C5C(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_002f9c4c + 0x84;
  *param_1 = DAT_002f9c4c;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

