#include "ghidra_types.h"

extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int DAT_00225fd0;
extern int DAT_00225fd4;
extern int *DAT_00225fd8;

// USA 00225E24 <- EU 00225E24 (Ghidra, non-matching)
// GLOBAL DAT_00225fd0 int
// GLOBAL DAT_00225fd4 int
// GLOBAL DAT_00225fd8 int *

void func_00225E24(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define aiStack_78 ((int *)(albw_frame + 0x8))
  uVar2 = func_0014E904(param_1,0x14,1);
  *(undefined4 *)(param_1 + 0x68c) = uVar2;
  iVar1 = DAT_00225fd0;
  piVar5 = (int *)(param_1 + 0x68c);
  iVar6 = *(int *)(*(int *)(param_1 + 0x2d0) + 0x1c8);
  uVar4 = 0;
  do {
    func_00169688(*(uint **)(param_1 + 0x68c),uVar4,(int *)(iVar1 + uVar4 * 8),iVar6);
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0x14);
  func_0016A02C(*(int *)(param_1 + 0x68c),-1,(int *)0xffffffff,0);
  puVar3 = (uint *)func_002C11E8(aiStack_78,4,10,0);
  func_0016898C(*piVar5,puVar3);
  func_00168E9C((int *)*piVar5,*(int *)(param_1 + 0x594),(int *)0x0);
  puVar3 = (uint *)func_002C11E8(aiStack_78,1,10,0);
  func_0016898C(*piVar5,puVar3);
  uVar2 = func_0014E904(param_1,2,1);
  iVar1 = DAT_00225fd4;
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0x690) = uVar2;
  do {
    func_00169688(*(uint **)(param_1 + 0x690),uVar4,(int *)(iVar1 + uVar4 * 8),iVar6);
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 2);
  func_0016A02C(*(int *)(param_1 + 0x690),-1,(int *)0xffffffff,0);
  puVar3 = (uint *)func_002C11E8(aiStack_78,1,10,0);
  func_0016898C(*(int *)(param_1 + 0x690),puVar3);
  puVar3 = (uint *)func_0014E904(param_1,1,1);
  piVar5 = DAT_00225fd8;
  *(uint **)(param_1 + 0x694) = puVar3;
  func_00169608(puVar3,0,piVar5,iVar6);
  func_0016A02C(*(int *)(param_1 + 0x694),-1,(int *)0xffffffff,0);
  puVar3 = (uint *)func_002C11E8(aiStack_78,0,10,0);
  func_0016898C(*(int *)(param_1 + 0x694),puVar3);
  *(undefined1 *)(param_1 + 0x753) = 0;
  return;
}

