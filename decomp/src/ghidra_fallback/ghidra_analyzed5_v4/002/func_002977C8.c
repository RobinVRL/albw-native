#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_0019A2EC(int param_1);
extern int func_00489AD8(int param_1);
extern int func_0052781C(int param_1);

// USA 002977C8 <- EU 002977F0 (Ghidra, non-matching)

void func_002977C8(int param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float in_s0;
  
  func_00489AD8(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar5 = *(int *)(param_1 + 0x30);
    iVar4 = *(int *)(param_1 + 0x28) - iVar5;
    iVar1 = *(int *)(iVar4 + iVar5 + 4);
    while (iVar4 != (param_1 + 0x24) - iVar5) {
      func_0019A2EC(iVar4);
      if (*(char *)(iVar4 + 0x4d) == '\0') {
        bVar2 = func_0052781C(iVar4);
        uVar3 = (uint)bVar2;
        bVar2 = uVar3 == 0;
        if (bVar2) {
          uVar3 = *(uint *)(iVar4 + 0x38);
        }
        if (bVar2 && uVar3 == 0) {
          func_0010F1F8((int *)(*(int *)(param_1 + 0x30) + iVar4),in_s0);
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
          func_0010F1DC((int *)(param_1 + 0x14),(int *)(*(int *)(param_1 + 0x20) + iVar4));
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        }
      }
      iVar4 = iVar1 - iVar5;
      iVar1 = *(int *)(iVar1 + 4);
    }
  }
  return;
}

