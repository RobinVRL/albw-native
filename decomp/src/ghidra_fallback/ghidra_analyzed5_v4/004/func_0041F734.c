#include "ghidra_types.h"

extern int func_0041F3C0(undefined4 param_1,uint *param_2,uint *param_3,uint param_4,int param_5);

// USA 0041F734 <- EU 0041F714 (Ghidra, non-matching)

undefined4 func_0041F734(int param_1,uint *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar7 = param_3[1];
  uVar3 = param_3[2];
  uVar1 = param_3[3];
  uVar2 = param_3[4];
  uVar4 = param_3[5];
  uVar5 = param_3[6];
  *(undefined4 *)(param_1 + 0x38) = *param_3;
  uVar6 = param_3[7];
  *(undefined4 *)(param_1 + 0x3c) = uVar7;
  uVar7 = param_3[8];
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  uVar3 = param_3[9];
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  uVar1 = param_3[10];
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  uVar8 = param_3[0xb];
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  uVar2 = param_3[0xc];
  *(undefined4 *)(param_1 + 0x50) = uVar5;
  uVar4 = param_3[0xd];
  *(undefined4 *)(param_1 + 0x54) = uVar6;
  uVar5 = param_3[0xe];
  uVar6 = param_3[0xf];
  *(undefined4 *)(param_1 + 0x58) = uVar7;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  *(undefined4 *)(param_1 + 100) = uVar8;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar4;
  *(undefined4 *)(param_1 + 0x70) = uVar5;
  *(undefined4 *)(param_1 + 0x74) = uVar6;
  return func_0041F3C0(param_1,param_2,(uint *)(param_1 + 0x38),0,5);
}

