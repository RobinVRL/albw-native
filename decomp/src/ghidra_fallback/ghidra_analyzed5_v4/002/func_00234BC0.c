#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0036D0E0(int *param_1);
extern int DAT_00234be8;

// USA 00234BC0 <- EU 00234BC0 (Ghidra, non-matching)
// GLOBAL DAT_00234be8 int

undefined4 func_00234BC0(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00234be8;
  *param_1 = DAT_00234be8;
  param_1[200] = iVar1 + 0x54;
  func_0036D0E0(param_1 + 0x151);
  return func_001510A4(param_1);
}

