#include "ghidra_types.h"

extern int func_00110DB8(int param_1,int param_2);
extern int func_002DEAD0(int param_1,int *param_2);
extern int func_0052EF04(int param_1,int param_2);
extern int func_0052EF6C(int param_1);

// USA 002DF17C <- EU 002DF158 (Ghidra, non-matching)

void func_002DF17C(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar4 = *(int *)(param_1 + 0x30);
    piVar3 = (int *)(*(int *)(param_1 + 0x28) - iVar4);
    iVar1 = *(int *)((int)piVar3 + iVar4 + 4);
    while (piVar3 != (int *)((param_1 + 0x24) - iVar4)) {
      bVar2 = func_0052EF6C((int)piVar3);
      if ((!bVar2) ||
         ((bVar2 = func_0052EF04((int)piVar3,param_2), bVar2 &&
          (func_00110DB8((int)piVar3,param_3), param_3 == 0)))) {
        func_002DEAD0(param_1,piVar3);
      }
      piVar3 = (int *)(iVar1 - iVar4);
      iVar1 = *(int *)(iVar1 + 4);
    }
  }
  return;
}

