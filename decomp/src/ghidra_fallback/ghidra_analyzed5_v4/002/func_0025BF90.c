#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_0025BAE4(int param_1,int param_2);
extern int func_0052EF6C(int param_1);

// USA 0025BF90 <- EU 0025BFB8 (Ghidra, non-matching)

void func_0025BF90(int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float in_s0;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    iVar4 = *(int *)(param_1 + 100);
    iVar3 = *(int *)(param_1 + 0x5c) - iVar4;
    iVar1 = *(int *)(iVar3 + iVar4 + 4);
    while (iVar3 != (param_1 + 0x58) - iVar4) {
      bVar2 = func_0052EF6C(iVar3);
      if (!bVar2) {
        func_0010F1F8((int *)(*(int *)(param_1 + 100) + iVar3),in_s0);
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
      }
      iVar3 = iVar1 - iVar4;
      iVar1 = *(int *)(iVar1 + 4);
    }
  }
  if ((0 < *(int *)(param_1 + 0x68)) &&
     (iVar3 = *(int *)(param_1 + 0x68) + -1, *(int *)(param_1 + 0x68) = iVar3, iVar3 == 0)) {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  if ((0 < *(int *)(param_1 + 0x6c)) &&
     (iVar3 = *(int *)(param_1 + 0x6c) + -1, *(int *)(param_1 + 0x6c) = iVar3, iVar3 == 0)) {
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  if (*(int *)(param_1 + 0x78) != -1) {
    func_0025BAE4(param_1,*(int *)(param_1 + 0x78));
  }
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffff;
  return;
}

