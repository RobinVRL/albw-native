#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0036D0E0(int *param_1);
extern int DAT_001354b8;

// USA 00135480 <- EU 00135480 (Ghidra, non-matching)
// GLOBAL DAT_001354b8 int

undefined4 func_00135480(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_001354b8 + 0x54;
  *param_1 = DAT_001354b8;
  param_1[200] = iVar1;
  func_0036D0E0(param_1 + 0x155);
  func_0036D0E0(param_1 + 0x154);
  return func_001510A4(param_1);
}

