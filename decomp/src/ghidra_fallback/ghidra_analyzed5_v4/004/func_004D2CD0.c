#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0036D0E0(int *param_1);
extern int DAT_004d2cf8;

// USA 004D2CD0 <- EU 004D2CA8 (Ghidra, non-matching)
// GLOBAL DAT_004d2cf8 int

undefined4 func_004D2CD0(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_004d2cf8 + 0x54;
  *param_1 = DAT_004d2cf8;
  param_1[200] = iVar1;
  func_0036D0E0(param_1 + 0x157);
  func_0036D0E0(param_1 + 0x156);
  func_0036D0E0(param_1 + 0x155);
  func_0036D0E0(param_1 + 0x154);
  return func_001510A4(param_1);
}

