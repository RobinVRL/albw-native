#include "ghidra_types.h"


// USA 00421CC8 <- EU 00421CA8 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:2 undefined2
// PARAM param_6 Stack[0x4]:4 int

void func_00421CC8(undefined2 *param_1,undefined4 param_2,undefined2 param_3,int param_4,
                  undefined2 param_5,int param_6)

{
  undefined2 uVar1;
  
  *(undefined4 *)(param_1 + 4) = param_2;
  if (param_4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 2;
  }
  param_1[1] = param_3;
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 10) = param_2;
  if (param_6 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 2;
  }
  param_1[7] = param_5;
  param_1[6] = uVar1;
  return;
}

