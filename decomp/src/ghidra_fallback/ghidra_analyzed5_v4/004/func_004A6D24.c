#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_001164F4(undefined4 *param_1,uint param_2);
extern undefined4 DAT_004a6d3c;

// USA 004A6D24 <- EU 004A6CFC (Ghidra, non-matching)
// GLOBAL DAT_004a6d3c undefined4

undefined4 * func_004A6D24(undefined4 *param_1,undefined4 param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = DAT_004a6d3c;
  param_1[3] = param_2;
  *param_1 = uVar1;
  param_1[1] = param_4;
  puVar2 = (undefined4 *)func_0010CEE0(param_4 << 2,param_3,4);
  param_1[2] = puVar2;
  func_001164F4(puVar2,param_4 << 2);
  return param_1;
}

