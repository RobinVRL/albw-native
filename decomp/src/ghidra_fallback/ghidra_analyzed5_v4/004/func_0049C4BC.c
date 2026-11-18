#include "ghidra_types.h"

extern int func_0010F0A8(int param_1,uint param_2);
extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_00580588(int param_1,uint param_2,int param_3,int param_4);

// USA 0049C4BC <- EU 0049C494 (Ghidra, non-matching)

int func_0049C4BC(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  float in_s0;
  
  iVar1 = func_00580588(param_1,param_2,param_3,(uint)*(byte *)(param_1 + 0x74));
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc) + 0x10 + iVar1;
    iVar2 = ((iVar2 + param_3) - 1U & ~(param_3 - 1U)) - iVar2;
    uVar4 = *(int *)(iVar1 + 8) - (param_2 + iVar2);
    *(int *)(iVar1 + 0xc) = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar1 + iVar2 + 0xc) = iVar1 + 1;
    }
    *(uint *)(iVar1 + 8) = param_2;
    func_0010F1F8((int *)(*(int *)(param_1 + 0x84) + iVar1),in_s0);
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
    func_0010F1DC((int *)(param_1 + 0x88),(int *)(*(int *)(param_1 + 0x94) + iVar1));
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
    if (uVar4 < 0x11) {
      if (uVar4 != 0) {
        *(uint *)(iVar1 + 8) = param_2 + uVar4;
      }
    }
    else {
      puVar3 = (undefined4 *)(*(int *)(iVar1 + 0xc) + 0x10 + iVar1 + param_2);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
      }
      puVar3[2] = uVar4 - 0x10;
      func_0010F0A8(param_1,(uint)puVar3);
    }
  }
  return iVar1;
}

