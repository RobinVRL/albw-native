#include "ghidra_types.h"

extern int func_001510A4();
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int DAT_00152074;

// USA 00152040 <- EU 00152040 (Ghidra, non-matching)
// GLOBAL DAT_00152074 int

undefined4 func_00152040(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00152074;
  param_1[200] = DAT_00152074 + 0x54;
  *param_1 = iVar1;
  func_00588C14((int)param_1,0,0);
  return func_001510A4(param_1);
}

