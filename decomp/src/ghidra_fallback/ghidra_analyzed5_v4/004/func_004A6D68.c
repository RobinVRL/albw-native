#include "ghidra_types.h"

extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004A6C38(undefined4 *param_1,undefined4 param_2,undefined4 param_3);

// USA 004A6D68 <- EU 004A6D40 (Ghidra, non-matching)

undefined4 * func_004A6D68(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  param_1[2] = param_2;
  param_1[1] = 0;
  param_1[5] = param_1 + 4;
  param_1[6] = 0;
  param_1[7] = 0xffffffff;
  param_1[4] = param_1 + 4;
  param_1[10] = param_3;
  puVar1 = (undefined4 *)func_0010CF28(0x24,param_3,4);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = func_004A6C38(puVar1,param_1,param_4);
  }
  param_1[3] = puVar2;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  return param_1;
}

