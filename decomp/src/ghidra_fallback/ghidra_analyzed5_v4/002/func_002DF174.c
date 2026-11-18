#include "ghidra_types.h"

extern int func_00110DB8(int param_1,int param_2);
extern int func_002DEAD0(int param_1,int *param_2);
extern int func_0052EF04(int param_1,int param_2);
extern int func_0052EF6C(int param_1);

// USA 002DF174 <- EU 002DF150 (Ghidra, non-matching)

void func_002DF174(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0x3c);
  if (*(int *)(iVar3 + 0x2c) != 0) {
    iVar5 = *(int *)(iVar3 + 0x30);
    piVar4 = (int *)(*(int *)(iVar3 + 0x28) - iVar5);
    iVar1 = *(int *)((int)piVar4 + iVar5 + 4);
    while (piVar4 != (int *)((iVar3 + 0x24) - iVar5)) {
      bVar2 = func_0052EF6C((int)piVar4);
      if ((!bVar2) ||
         ((bVar2 = func_0052EF04((int)piVar4,param_2), bVar2 &&
          (func_00110DB8((int)piVar4,param_3), param_3 == 0)))) {
        func_002DEAD0(iVar3,piVar4);
      }
      piVar4 = (int *)(iVar1 - iVar5);
      iVar1 = *(int *)(iVar1 + 4);
    }
  }
  return;
}

