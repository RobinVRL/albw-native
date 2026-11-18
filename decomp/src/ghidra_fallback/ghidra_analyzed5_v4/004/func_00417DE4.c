#include "ghidra_types.h"

extern int func_0041D79C(undefined4 *param_1,int param_2,int param_3,int param_4);

// USA 00417DE4 <- EU 00417DC4 (Ghidra, non-matching)

void func_00417DE4(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 4) == '\0') {
    uVar1 = func_0041D79C(param_1,param_2,param_3,0x1b0);
    param_1[5] = uVar1;
    param_1[6] = param_2;
    *(undefined1 *)(param_1 + 4) = 1;
    param_1[7] = param_3;
  }
  return;
}

