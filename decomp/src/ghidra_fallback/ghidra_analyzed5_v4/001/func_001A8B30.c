#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_001a8b44;

// USA 001A8B30 <- EU 001A8B30 (Ghidra, non-matching)
// GLOBAL DAT_001a8b44 int

undefined4 func_001A8B30(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_001a8b44 + 0x84;
  *param_1 = DAT_001a8b44;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

