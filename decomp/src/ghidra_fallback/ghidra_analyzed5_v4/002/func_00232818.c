#include "ghidra_types.h"

extern int func_0010B380(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);

// USA 00232818 <- EU 00232818 (Ghidra, non-matching)

undefined4 * func_00232818(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  func_0010B380(param_1 + 1,param_2,(int *)0x0,4);
  if ((0 < param_2) && (iVar1 = func_0010CEE0(param_2 * 0xc,(int *)0x0,4), iVar1 != 0)) {
    param_1[6] = iVar1;
    param_1[5] = param_2;
    param_1[4] = 0;
  }
  return param_1;
}

