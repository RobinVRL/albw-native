#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_001a41f8;

// USA 001A41E4 <- EU 001A41E4 (Ghidra, non-matching)
// GLOBAL DAT_001a41f8 int

undefined4 func_001A41E4(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_001a41f8 + 0x84;
  *param_1 = DAT_001a41f8;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

