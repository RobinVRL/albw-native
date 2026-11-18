#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_00110DB8(int param_1,int param_2);
extern int func_0052EF04(int param_1,int param_2);
extern int func_0052EF6C(int param_1);

// USA 0025BCE8 <- EU 0025BD10 (Ghidra, non-matching)

void func_0025BCE8(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float in_s0;
  
  if (param_2 != -1) {
    if (*(int *)(param_1 + 0x60) != 0) {
      iVar4 = *(int *)(param_1 + 100);
      iVar3 = *(int *)(param_1 + 0x5c) - iVar4;
      iVar1 = *(int *)(iVar3 + iVar4 + 4);
      while (iVar3 != (param_1 + 0x58) - iVar4) {
        bVar2 = func_0052EF6C(iVar3);
        if ((!bVar2) ||
           ((bVar2 = func_0052EF04(iVar3,param_2), bVar2 &&
            (func_00110DB8(iVar3,param_3), param_3 == 0)))) {
          func_0010F1F8((int *)(*(int *)(param_1 + 100) + iVar3),in_s0);
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
        }
        iVar3 = iVar1 - iVar4;
        iVar1 = *(int *)(iVar1 + 4);
      }
    }
    return;
  }
  return;
}

