#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_003221DC(int param_1);
extern int func_003222C4(int param_1,undefined4 param_2,uint param_3,float *param_4);
extern int func_0049F5FC(undefined4 *param_1);
extern int func_0054D254(int param_1);

// USA 00429AA4 <- EU 00429A84 (Ghidra, non-matching)

undefined4 func_00429AA4(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 extraout_r1;
  uint in_r2;
  float *in_r3;
  int iVar3;
  int iVar4;
  float in_s0;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar4 = *(int *)(param_1 + 0x30);
    iVar3 = *(int *)(param_1 + 0x28) - iVar4;
    iVar1 = *(int *)(iVar3 + iVar4 + 4);
    while (iVar3 != (param_1 + 0x24) - iVar4) {
      bVar2 = func_0054D254(iVar3);
      if (bVar2) {
        func_003222C4(iVar3,extraout_r1,in_r2,in_r3);
      }
      else {
        func_003221DC(iVar3);
        func_0010F1F8((int *)(*(int *)(param_1 + 0x30) + iVar3),in_s0);
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
        func_0010F1DC((int *)(param_1 + 0x14),(int *)(*(int *)(param_1 + 0x20) + iVar3));
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      }
      iVar3 = iVar1 - iVar4;
      iVar1 = *(int *)(iVar1 + 4);
    }
  }
  return func_0049F5FC(*(undefined4 **)(param_1 + 0x34));
}

