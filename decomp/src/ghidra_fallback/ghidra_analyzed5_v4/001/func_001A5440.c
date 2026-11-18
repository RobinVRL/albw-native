#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_001a5454;

// USA 001A5440 <- EU 001A5440 (Ghidra, non-matching)
// GLOBAL DAT_001a5454 int

undefined4 func_001A5440(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_001a5454 + 0x84;
  *param_1 = DAT_001a5454;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

