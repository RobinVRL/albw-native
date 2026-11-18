#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);

// USA 004A09C4 <- EU 004A099C (Ghidra, non-matching)

void func_004A09C4(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float in_s0;
  
  if (*(int *)(param_1 + 0x24) != param_2 && param_2 != 0) {
    if (*(int *)(param_1 + 0x24) != 0) {
      iVar4 = *(int *)(param_1 + 0x20);
      uVar3 = 0;
      iVar1 = *(int *)(param_1 + 0x18) - iVar4;
      iVar2 = *(int *)(iVar1 + iVar4 + 4);
      while (iVar1 != (param_1 + 0x14) - *(int *)(param_1 + 0x20)) {
        if (uVar3 == 0) {
          if (param_2 == iVar1) {
            func_0010F1F8((int *)(iVar1 + *(int *)(param_1 + 0x20)),in_s0);
            uVar3 = 1;
            *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
          }
        }
        else {
          func_0010F1F8((int *)(iVar1 + *(int *)(param_1 + 0x20)),in_s0);
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
        }
        iVar1 = iVar2 - iVar4;
        iVar2 = *(int *)(iVar2 + 4);
      }
      if ((param_3 & ~uVar3) != 0) {
        func_0010F1DC((int *)(param_1 + 0x14),
                      (int *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x24)));
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      }
    }
    *(int *)(param_1 + 0x24) = param_2;
  }
  return;
}

