#include "ghidra_types.h"

extern int func_00112D70(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4);
extern int func_001139F8(int param_1);
extern int func_00496C18(undefined4 param_1,int *param_2,int param_3,int param_4,int param_5);
extern undefined4 DAT_00496dac;
extern undefined4 DAT_00496db0;
extern undefined4 DAT_00496db4;
extern undefined4 DAT_00496db8;

// USA 00496CCC <- EU 00496CA4 (Ghidra, non-matching)
// GLOBAL DAT_00496dac undefined4
// GLOBAL DAT_00496db0 undefined4
// GLOBAL DAT_00496db4 undefined4
// GLOBAL DAT_00496db8 undefined4

void func_00496CCC(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)(param_1 + 0xad8);
  func_00496C18(param_1,param_2,(int)puVar6,2,2);
  uVar3 = DAT_00496db8;
  uVar1 = DAT_00496dac;
  puVar4 = *(undefined4 **)(param_1 + 0x1278);
  *puVar4 = DAT_00496db0;
  puVar4[1] = uVar1;
  puVar4[2] = uVar1;
  uVar2 = DAT_00496db4;
  iVar5 = *(int *)(param_1 + 0x1278);
  *(undefined4 *)(iVar5 + 0xc) = DAT_00496db4;
  *(undefined4 *)(iVar5 + 0x10) = uVar1;
  *(undefined4 *)(iVar5 + 0x14) = uVar1;
  puVar4 = *(undefined4 **)(param_1 + 0x127c);
  *puVar4 = uVar1;
  puVar4[1] = uVar2;
  iVar5 = *(int *)(param_1 + 0x127c);
  *(undefined4 *)(iVar5 + 8) = uVar3;
  *(undefined4 *)(iVar5 + 0xc) = uVar2;
  **(undefined4 **)(param_1 + 0x1280) = uVar1;
  *(undefined4 *)(*(int *)(param_1 + 0x1280) + 4) = uVar3;
  **(undefined2 **)(param_1 + 0x1268) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0x1268) + 2) = 1;
  iVar5 = func_001139F8(*(int *)(param_1 + 0x1278));
  func_00112D70(puVar6,param_1 + 0x8c,iVar5,0xb);
  iVar5 = func_001139F8(*(int *)(param_1 + 0x127c));
  func_00112D70(puVar6,param_1 + 0x94,iVar5,7);
  iVar5 = func_001139F8(*(int *)(param_1 + 0x1280));
  func_00112D70(puVar6,param_1 + 0x9c,iVar5,3);
  iVar5 = func_001139F8(*(int *)(param_1 + 0x1268));
  *(int *)(param_1 + 0x126c) = iVar5;
  *(undefined4 *)(param_1 + 0x1270) = 2;
  *(undefined1 *)(param_1 + 0x1274) = 0;
  return;
}

