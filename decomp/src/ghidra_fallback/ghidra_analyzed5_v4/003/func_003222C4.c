#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_00321900(int param_1);
extern int func_00321A24(int param_1);
extern int func_00321D9C(int param_1);
extern int func_0052EF6C(int param_1);

// USA 003222C4 <- EU 003222A0 (Ghidra, non-matching)

undefined4 func_003222C4(int param_1,undefined4 param_2,uint param_3,float *param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float in_s0;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar4 = *(int *)(param_1 + 0x14);
    iVar5 = 0;
    iVar3 = *(int *)(param_1 + 0xc) - iVar4;
    iVar1 = *(int *)(iVar3 + iVar4 + 4);
    while (iVar3 != (param_1 + 8) - iVar4) {
      bVar2 = func_0052EF6C(iVar3);
      if (bVar2) {
        if ((*(char *)(iVar3 + 0x108) == '\0') || (*(int *)(iVar3 + 0xfc) != 0)) {
          iVar5 = iVar5 + 1;
        }
      }
      else {
        func_0010F1F8((int *)(*(int *)(param_1 + 0x14) + iVar3),in_s0);
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
      }
      iVar3 = iVar1 - iVar4;
      iVar1 = *(int *)(iVar1 + 4);
    }
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
    *(int *)(param_1 + 0x1c) = iVar5;
    if (*(int *)(param_1 + 0x10) != 0) {
      if ((*(uint *)(param_1 + 0x18) & 0x10) != 0) {
        return func_00321A24(param_1);
      }
      if ((*(uint *)(param_1 + 0x18) & 0xb) != 0) {
        func_00321D9C(param_1);
      }
      if ((*(uint *)(param_1 + 0x18) & 4) != 0) {
        return func_00321900(param_1);
      }
    }
  }
  return 0;
}

