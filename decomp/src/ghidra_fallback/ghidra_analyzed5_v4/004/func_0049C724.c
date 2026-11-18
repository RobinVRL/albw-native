#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_00580654(int param_1,uint param_2,int param_3,int param_4);

// USA 0049C724 <- EU 0049C6FC (Ghidra, non-matching)

undefined4 * func_0049C724(int param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  float in_s0;
  
  puVar1 = (undefined4 *)func_00580654(param_1,param_2,param_3,(uint)*(byte *)(param_1 + 0x74));
  puVar4 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (int)puVar1 + (puVar1[2] - param_2) + puVar1[3] + 0x10;
    iVar3 = (uVar2 - (uVar2 & ~(param_3 - 1U))) + param_2;
    uVar2 = puVar1[2] - iVar3;
    if (uVar2 < 0x11) {
      puVar1[3] = uVar2;
      if (uVar2 != 0) {
        *(int *)((int)puVar1 + uVar2 + 0xc) = (int)puVar1 + 1;
      }
      puVar1[2] = iVar3;
      func_0010F1F8((int *)(*(int *)(param_1 + 0x84) + (int)puVar1),in_s0);
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
      func_0010F1DC((int *)(param_1 + 0x88),(int *)(*(int *)(param_1 + 0x94) + (int)puVar1));
      *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
      return puVar1;
    }
    puVar1[2] = uVar2 - 0x10;
    puVar4 = (undefined4 *)((int)puVar1 + (uVar2 - 0x10) + puVar1[3] + 0x10);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
    }
    puVar4[2] = iVar3;
    func_0010F1DC((int *)(param_1 + 0x88),(int *)(*(int *)(param_1 + 0x94) + (int)puVar4));
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
  }
  return puVar4;
}

