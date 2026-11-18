#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0036D0E0(int *param_1);
extern int DAT_001baa34;

// USA 001BAA0C <- EU 001BAA0C (Ghidra, non-matching)
// GLOBAL DAT_001baa34 int

undefined4 func_001BAA0C(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_001baa34;
  *param_1 = DAT_001baa34;
  param_1[200] = iVar1 + 0x5c;
  func_0036D0E0(param_1 + 0x11c);
  return func_001510A4(param_1);
}

