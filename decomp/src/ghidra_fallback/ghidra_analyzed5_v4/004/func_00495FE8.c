#include "ghidra_types.h"

extern int func_0048A6CC(int param_1,int param_2,int param_3,int param_4,float *param_5);

// USA 00495FE8 <- EU 00495FC0 (Ghidra, non-matching)

undefined4 func_00495FE8(int param_1,undefined4 *param_2,int *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x11c) = *param_2;
  *(undefined4 *)(param_1 + 0x120) = param_2[1];
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined4 *)(param_1 + 300) = *param_4;
  *(undefined4 *)(param_1 + 0x130) = uVar1;
  *(undefined4 *)(param_1 + 0x134) = uVar2;
  *(undefined4 *)(param_1 + 0x138) = uVar3;
  (**(code **)(*param_3 + 8))(param_3);
  return func_0048A6CC(param_1 + 0x108,param_3[1],-1,1,(float *)0x0);
}

