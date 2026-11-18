#include "ghidra_types.h"

extern int func_00112D70(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4);
extern int func_001139F8(int param_1);
extern int func_003E35DC(undefined4 param_1,undefined4 param_2);

// USA 00496DE4 <- EU 00496DBC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int

void func_00496DE4(int param_1,undefined4 *param_2,int param_3,uint param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = 0;
  if (param_4 != 0) {
    do {
      puVar1 = (undefined4 *)(param_3 + uVar3 * 0x24);
      puVar4 = (undefined4 *)(param_2[0x1e8] + uVar3 * 0xc);
      *puVar4 = *puVar1;
      puVar4[1] = puVar1[1];
      puVar4[2] = puVar1[2];
      puVar4 = (undefined4 *)(param_2[0x1e9] + uVar3 * 8);
      *puVar4 = puVar1[3];
      puVar4[1] = puVar1[4];
      iVar2 = uVar3 * 4;
      uVar3 = uVar3 + 1;
      *(undefined4 *)(param_2[0x1ea] + iVar2) = puVar1[5];
    } while (uVar3 < param_4);
  }
  func_003E35DC(param_2[0x1e8],param_4 * 0xc);
  func_003E35DC(param_2[0x1e9],param_4 * 8);
  func_003E35DC(param_2[0x1ea],param_4 * 0x10);
  func_003E35DC(param_2[0x1e4],param_5 << 1);
  iVar2 = func_001139F8(param_2[0x1e8]);
  func_00112D70(param_2,param_1 + 0x3c,iVar2,0xb);
  iVar2 = func_001139F8(param_2[0x1e9]);
  func_00112D70(param_2,param_1 + 0x44,iVar2,7);
  iVar2 = func_001139F8(param_2[0x1ea]);
  func_00112D70(param_2,param_1 + 0x4c,iVar2,3);
  iVar2 = func_001139F8(param_2[0x1e4]);
  param_2[0x1e5] = iVar2;
  param_2[0x1e6] = param_5;
  *(undefined1 *)(param_2 + 0x1e7) = 0;
  return;
}

