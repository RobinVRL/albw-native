#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0036D0E0(int *param_1);
extern int DAT_00273d18;

// USA 00273CC8 <- EU 00273CF0 (Ghidra, non-matching)
// GLOBAL DAT_00273d18 int

undefined4 func_00273CC8(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00273d18;
  *param_1 = DAT_00273d18;
  param_1[200] = iVar1 + 0x5c;
  func_0036D0E0(param_1 + 0x11c);
  return func_001510A4(param_1);
}

