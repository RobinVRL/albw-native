#include "ghidra_types.h"

extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004A25C8(undefined4 *param_1,undefined4 param_2,undefined4 param_3);

// USA 004A27A4 <- EU 004A277C (Ghidra, non-matching)

undefined4 * func_004A27A4(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

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
  param_1[0xb] = param_3;
  param_1[0xc] = 0;
  puVar1 = (undefined4 *)func_0010CF28(0x28,param_3,4);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = func_004A25C8(puVar1,param_1,param_4);
  }
  param_1[3] = puVar2;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[0xc] = 0;
  return param_1;
}

