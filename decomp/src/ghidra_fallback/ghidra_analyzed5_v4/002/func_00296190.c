#include "ghidra_types.h"

extern int func_00109DE4(int param_1);
extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_00258CA8(int param_1,int param_2);
extern int func_00537D70(int param_1);

// USA 00296190 <- EU 002961B8 (Ghidra, non-matching)

void func_00296190(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float in_s0;
  
  piVar3 = (int *)(param_1 + 0x54);
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar5 = *(int *)(param_1 + 0x20);
    iVar1 = *(int *)(param_1 + 0x18) - iVar5;
    iVar2 = *(int *)(iVar1 + iVar5 + 4);
    iVar4 = (param_1 + 0x14) - iVar5;
    if (iVar1 != iVar4) {
      do {
        if (((*(uint *)(iVar1 + 0x38) & 0x80) == 0) || (*(char *)(iVar1 + 0x6b) != '\0')) {
          func_00258CA8(iVar1,param_2);
          func_0010F1F8((int *)(*(int *)(param_1 + 0x20) + iVar1),in_s0);
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
          if (param_2 == 0) {
            func_00109DE4(iVar1);
            func_0010F1DC(piVar3,(int *)(*(int *)(param_1 + 0x60) + iVar1));
            *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
          }
          else {
            func_0010F1DC((int *)(param_1 + 0x44),(int *)(*(int *)(param_1 + 0x50) + iVar1));
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
          }
        }
        iVar1 = iVar2 - iVar5;
        iVar2 = *(int *)(iVar2 + 4);
      } while (iVar1 != iVar4);
    }
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar4 = *(int *)(param_1 + 0x30);
    iVar1 = *(int *)(param_1 + 0x28) - iVar4;
    iVar2 = *(int *)(iVar1 + iVar4 + 4);
    while (iVar1 != (param_1 + 0x24) - iVar4) {
      iVar5 = func_00537D70(iVar1);
      if (iVar5 != 0) {
        func_00258CA8(iVar1,0);
        func_00109DE4(iVar1);
        func_0010F1F8((int *)(*(int *)(param_1 + 0x30) + iVar1),in_s0);
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
        func_0010F1DC(piVar3,(int *)(*(int *)(param_1 + 0x60) + iVar1));
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      }
      iVar1 = iVar2 - iVar4;
      iVar2 = *(int *)(iVar2 + 4);
    }
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar4 = *(int *)(param_1 + 0x40);
    iVar1 = *(int *)(param_1 + 0x38) - iVar4;
    iVar2 = *(int *)(iVar1 + iVar4 + 4);
    while (iVar1 != (param_1 + 0x34) - iVar4) {
      iVar5 = func_00537D70(iVar1);
      if (iVar5 != 0) {
        func_00258CA8(iVar1,0);
        func_00109DE4(iVar1);
        func_0010F1F8((int *)(*(int *)(param_1 + 0x40) + iVar1),in_s0);
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
        func_0010F1DC(piVar3,(int *)(*(int *)(param_1 + 0x60) + iVar1));
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      }
      iVar1 = iVar2 - iVar4;
      iVar2 = *(int *)(iVar2 + 4);
    }
  }
  return;
}

