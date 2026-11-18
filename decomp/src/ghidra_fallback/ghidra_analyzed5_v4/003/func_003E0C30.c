#include "ghidra_types.h"


// USA 003E0C30 <- EU 003E0C10 (Ghidra, non-matching)

void func_003E0C30(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  *(undefined4 *)(param_1 + 0x34) = *param_2;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  *(undefined4 *)(param_1 + 0x44) = uVar5;
  *(undefined4 *)(param_1 + 0x48) = uVar6;
  *(undefined4 *)(param_1 + 0x4c) = uVar7;
  *(undefined4 *)(param_1 + 0x50) = uVar8;
  uVar2 = param_2[9];
  uVar3 = param_2[10];
  uVar4 = param_2[0xb];
  *(undefined4 *)(param_1 + 0x54) = param_2[8];
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  iVar1 = *(int *)(param_1 + 0x68);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  *(undefined4 *)(iVar1 + 0x38) = *param_2;
  *(undefined4 *)(iVar1 + 0x3c) = uVar2;
  *(undefined4 *)(iVar1 + 0x40) = uVar3;
  *(undefined4 *)(iVar1 + 0x44) = uVar4;
  *(undefined4 *)(iVar1 + 0x48) = uVar5;
  *(undefined4 *)(iVar1 + 0x4c) = uVar6;
  *(undefined4 *)(iVar1 + 0x50) = uVar7;
  *(undefined4 *)(iVar1 + 0x54) = uVar8;
  uVar2 = param_2[8];
  uVar3 = param_2[9];
  uVar4 = param_2[10];
  *(undefined4 *)(iVar1 + 100) = param_2[0xb];
  *(undefined4 *)(iVar1 + 0x58) = uVar2;
  *(undefined4 *)(iVar1 + 0x5c) = uVar3;
  *(undefined4 *)(iVar1 + 0x60) = uVar4;
  *(ushort *)(iVar1 + 0x6c) = *(ushort *)(iVar1 + 0x6c) | 1;
  return;
}

