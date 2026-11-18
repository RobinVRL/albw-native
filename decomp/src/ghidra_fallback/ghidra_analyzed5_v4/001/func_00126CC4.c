#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_00126cd8;

// USA 00126CC4 <- EU 00126CC4 (Ghidra, non-matching)
// GLOBAL DAT_00126cd8 int

undefined4 func_00126CC4(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00126cd8 + 0x84;
  *param_1 = DAT_00126cd8;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

