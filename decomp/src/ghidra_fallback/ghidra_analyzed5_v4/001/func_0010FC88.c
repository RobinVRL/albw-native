#include "ghidra_types.h"

extern ulonglong func_00110710(uint param_1,uint param_2);

// USA 0010FC88 <- EU 0010FC88 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// PARAM param_6 Stack[0x4]:4 undefined4

void func_0010FC88(int param_1,int param_2,int param_3,int param_4,uint param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  
  *(undefined4 *)(param_1 + 0x14) = param_6;
  uVar7 = func_00110710((param_2 + param_5) - 1,param_5);
  uVar5 = (int)uVar7 * param_5;
  *(uint *)(param_1 + 0x18) = uVar5;
  uVar7 = func_00110710((param_3 + param_5) - 1,param_5);
  puVar6 = (undefined4 *)((int)uVar7 * param_5);
  *(undefined4 **)(param_1 + 0x1c) = puVar6;
  uVar7 = func_00110710((param_3 + param_4) - (int)puVar6,uVar5);
  iVar3 = (int)uVar7 * uVar5;
  puVar1 = (undefined4 *)0x0;
  *(int *)(param_1 + 0x20) = iVar3;
  puVar4 = (undefined4 *)((int)puVar6 + (iVar3 - uVar5));
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(uint *)(param_1 + 0x28) = param_5;
  puVar2 = puVar1;
  if (puVar6 < puVar4 || (int)puVar6 - (int)puVar4 == 0) {
    do {
      puVar1 = puVar4;
      *puVar1 = puVar2;
      puVar4 = (undefined4 *)((int)puVar1 - *(int *)(param_1 + 0x18));
      puVar2 = puVar1;
    } while (*(undefined4 **)(param_1 + 0x1c) <= puVar4);
  }
  *(undefined4 **)(param_1 + 0x24) = puVar1;
  return;
}

