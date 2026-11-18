#include "ghidra_types.h"

extern int func_00110DB8(int param_1,int param_2);
extern int func_002DEAD0(int param_1,int *param_2);
extern int func_0052EF04(int param_1,int param_2);
extern int func_0052EF6C(int param_1);
extern int func_00587FCC(int param_1,int *param_2);
extern int *DAT_002df14c;

// USA 002DF0B0 <- EU 002DF08C (Ghidra, non-matching)
// GLOBAL DAT_002df14c int *

void func_002DF0B0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar3 = *(int *)(param_1 + 0x3c);
  iVar4 = func_00587FCC(*DAT_002df14c,param_2);
  if ((iVar4 != -1) && (*(int *)(iVar3 + 0x2c) != 0)) {
    iVar6 = *(int *)(iVar3 + 0x30);
    piVar5 = (int *)(*(int *)(iVar3 + 0x28) - iVar6);
    iVar1 = *(int *)((int)piVar5 + iVar6 + 4);
    while (piVar5 != (int *)((iVar3 + 0x24) - iVar6)) {
      bVar2 = func_0052EF6C((int)piVar5);
      if ((!bVar2) ||
         ((bVar2 = func_0052EF04((int)piVar5,iVar4), bVar2 &&
          (func_00110DB8((int)piVar5,param_3), param_3 == 0)))) {
        func_002DEAD0(iVar3,piVar5);
      }
      piVar5 = (int *)(iVar1 - iVar6);
      iVar1 = *(int *)(iVar1 + 4);
    }
  }
  return;
}

