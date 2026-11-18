#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_001164F4(undefined4 *param_1,uint param_2);
extern undefined4 DAT_004a271c;

// USA 004A2704 <- EU 004A26DC (Ghidra, non-matching)
// GLOBAL DAT_004a271c undefined4

undefined4 * func_004A2704(undefined4 *param_1,undefined4 param_2,int *param_3,int param_4)

{
  undefined4 *puVar1;
  
  param_1[3] = param_2;
  *param_1 = DAT_004a271c;
  param_1[1] = param_4;
  puVar1 = (undefined4 *)func_0010CEE0(param_4 << 2,param_3,4);
  param_1[2] = puVar1;
  func_001164F4(puVar1,param_4 << 2);
  return param_1;
}

