#include "ghidra_types.h"

extern int func_0010961C(int param_1);
extern int func_00109698(int param_1);
extern int func_001096AC(int param_1,undefined4 param_2);
extern int func_00109868(int param_1,int *param_2,undefined4 param_3);
extern undefined4 DAT_00105db0;
extern undefined8 *DAT_00105db4;
extern undefined4 DAT_00105db8;

// USA 00105C7C <- EU 00105C7C (Ghidra, non-matching)
// GLOBAL DAT_00105db0 undefined4
// GLOBAL DAT_00105db4 undefined8 *
// GLOBAL DAT_00105db8 undefined4

int func_00105C7C(int param_1,int *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  puVar3 = (undefined4 *)func_00109868(param_1,param_2,param_3);
  *puVar3 = DAT_00105db0;
  pvVar4 = func_001096AC((int)(puVar3 + 0x1b),0);
  pvVar4 = func_001096AC((int)pvVar4 + 0x50,0);
  iVar5 = (int)pvVar4 + -0xbc;
  iVar6 = (int)pvVar4 + -0x50;
  func_0010961C(iVar6);
  puVar3 = *(undefined4 **)((int)pvVar4 + -8);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(puVar3,iVar6,3);
  }
  *(undefined4 *)((int)pvVar4 + -0xc) = 3;
  func_00109698(iVar6);
  func_0010961C((int)pvVar4);
  puVar3 = *(undefined4 **)((int)pvVar4 + 0x48);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(puVar3,pvVar4,3);
  }
  *(undefined4 *)((int)pvVar4 + 0x44) = 3;
  func_00109698((int)pvVar4);
  puVar1 = DAT_00105db4;
  uVar7 = *DAT_00105db4;
  func_0010961C((int)pvVar4 + -0x50);
  uVar2 = DAT_00105db8;
  if ((undefined4 *)((int)pvVar4 + -0x24) != (undefined4 *)0x0) {
    *(int *)((int)pvVar4 + -0x20) = iVar5;
    *(int *)((int)pvVar4 + -0x1c) = (int)uVar7;
    *(int *)((int)pvVar4 + -0x18) = (int)((ulonglong)uVar7 >> 0x20);
    *(undefined4 *)((int)pvVar4 + -0x24) = uVar2;
  }
  func_00109698((int)pvVar4 + -0x50);
  if (param_3 != 0) {
    *(int *)((int)pvVar4 + -0x28) = param_3;
  }
  uVar7 = puVar1[1];
  func_0010961C((int)pvVar4);
  if ((undefined4 *)((int)pvVar4 + 0x2c) != (undefined4 *)0x0) {
    *(int *)((int)pvVar4 + 0x30) = iVar5;
    *(int *)((int)pvVar4 + 0x34) = (int)uVar7;
    *(int *)((int)pvVar4 + 0x38) = (int)((ulonglong)uVar7 >> 0x20);
    *(undefined4 *)((int)pvVar4 + 0x2c) = uVar2;
  }
  func_00109698((int)pvVar4);
  if (param_3 != 0) {
    *(int *)((int)pvVar4 + 0x28) = param_3;
  }
  return iVar5;
}

