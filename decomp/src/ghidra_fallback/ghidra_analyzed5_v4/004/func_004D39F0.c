#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0036D0E0(int *param_1);
extern int DAT_004d39f8;

// USA 004D39F0 <- EU 004D39C8 (Ghidra, non-matching)
// GLOBAL DAT_004d39f8 int

undefined4 func_004D39F0(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_004d39f8 + 0x54;
  *param_1 = DAT_004d39f8;
  param_1[200] = iVar1;
  func_0036D0E0(param_1 + 0x151);
  return func_001510A4(param_1);
}

