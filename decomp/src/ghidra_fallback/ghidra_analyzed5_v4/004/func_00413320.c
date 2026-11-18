#include "ghidra_types.h"

extern int func_0056AB4C(int param_1);
extern int DAT_00413348;

// USA 00413320 <- EU 00413300 (Ghidra, non-matching)
// GLOBAL DAT_00413348 int

void func_00413320(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 == DAT_00413348) && (param_2[2] + 0xfe000000U < 0x20001)) {
    *param_1 = param_2;
    iVar1 = func_0056AB4C((int)param_2);
    param_1[1] = (int)param_2 + iVar1 + 8;
  }
  return;
}

