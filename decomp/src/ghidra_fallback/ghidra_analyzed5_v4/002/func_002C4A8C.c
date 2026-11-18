#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0036D0E0(int *param_1);
extern int DAT_002c4a90;

// USA 002C4A8C <- EU 002C4A68 (Ghidra, non-matching)
// GLOBAL DAT_002c4a90 int

undefined4 func_002C4A8C(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_002c4a90;
  *param_1 = DAT_002c4a90;
  param_1[200] = iVar1 + 0x5c;
  func_0036D0E0(param_1 + 0x11c);
  return func_001510A4(param_1);
}

