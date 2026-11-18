#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_002a22a4;

// USA 002A22B4 <- EU 002A2290 (Ghidra, non-matching)
// GLOBAL DAT_002a22a4 int

undefined4 func_002A22B4(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_002a22a4 + 0x84;
  *param_1 = DAT_002a22a4;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

