#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0036D0E0(int *param_1);
extern int DAT_002c49a4;

// USA 002C4980 <- EU 002C495C (Ghidra, non-matching)
// GLOBAL DAT_002c49a4 int

undefined4 func_002C4980(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_002c49a4;
  *param_1 = DAT_002c49a4;
  param_1[200] = iVar1 + 0x54;
  func_0036D0E0(param_1 + 0x157);
  func_0036D0E0(param_1 + 0x156);
  func_0036D0E0(param_1 + 0x155);
  func_0036D0E0(param_1 + 0x154);
  return func_001510A4(param_1);
}

