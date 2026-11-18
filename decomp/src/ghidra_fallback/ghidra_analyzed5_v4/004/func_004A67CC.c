#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_004A6DE0(int param_1,int param_2);
extern int func_004A6E40(int param_1,undefined4 param_2,int param_3);

// USA 004A67CC <- EU 004A67A4 (Ghidra, non-matching)

void func_004A67CC(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float in_s0;
  
  iVar5 = *(int *)(param_1 + 0x48);
  iVar4 = *(int *)(param_1 + 0x40) - iVar5;
  while (iVar2 = iVar4, iVar2 != (param_1 + 0x3c) - *(int *)(param_1 + 0x48)) {
    iVar3 = *(int *)(iVar2 + iVar5 + 4);
    iVar4 = iVar3 - iVar5;
    cVar1 = func_004A6E40(iVar2,iVar3,*(int *)(param_1 + 0x48));
    if (cVar1 == '\x04') {
      func_0010F1F8((int *)(*(int *)(param_1 + 0x48) + iVar2),in_s0);
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
      func_004A6DE0(iVar2,0);
    }
  }
  return;
}

