#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_004b925c;

// USA 004B9270 <- EU 004B9248 (Ghidra, non-matching)
// GLOBAL DAT_004b925c int

undefined4 func_004B9270(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_004b925c + 0x84;
  *param_1 = DAT_004b925c;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

