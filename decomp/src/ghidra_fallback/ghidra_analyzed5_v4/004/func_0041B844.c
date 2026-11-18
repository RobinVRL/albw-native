#include "ghidra_types.h"

extern int func_00414FF0(void);
extern int func_00415644(int param_1,int param_2);

// USA 0041B844 <- EU 0041B824 (Ghidra, non-matching)

void func_0041B844(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  *(undefined4 *)(param_1 + 0x170) = param_2[2];
  *(undefined4 *)(param_1 + 0x168) = uVar1;
  *(undefined4 *)(param_1 + 0x16c) = uVar3;
  uVar1 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[4];
  uVar6 = param_3[5];
  uVar7 = param_3[6];
  uVar8 = param_3[7];
  *(undefined4 *)(param_1 + 0x17c) = *param_3;
  *(undefined4 *)(param_1 + 0x180) = uVar1;
  *(undefined4 *)(param_1 + 0x184) = uVar3;
  *(undefined4 *)(param_1 + 0x188) = uVar4;
  *(undefined4 *)(param_1 + 0x18c) = uVar5;
  *(undefined4 *)(param_1 + 400) = uVar6;
  *(undefined4 *)(param_1 + 0x194) = uVar7;
  *(undefined4 *)(param_1 + 0x198) = uVar8;
  uVar1 = param_3[9];
  uVar3 = param_3[10];
  uVar4 = param_3[0xb];
  uVar5 = param_3[0xc];
  *(undefined4 *)(param_1 + 0x19c) = param_3[8];
  *(undefined4 *)(param_1 + 0x1a0) = uVar1;
  *(undefined4 *)(param_1 + 0x1a4) = uVar3;
  *(undefined4 *)(param_1 + 0x1a8) = uVar4;
  *(undefined4 *)(param_1 + 0x1ac) = uVar5;
  *(undefined1 *)(param_1 + 0x164) = 1;
  puVar2 = func_00414FF0();
  func_00415644((int)puVar2,param_1 + 0x50);
  *(undefined1 *)(param_1 + 0x166) = 1;
  return;
}

