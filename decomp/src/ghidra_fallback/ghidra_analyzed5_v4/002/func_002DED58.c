#include "ghidra_types.h"

extern int func_001DFF3C(int param_1,int param_2,int param_3);
extern int func_002DEAD0(int param_1,int *param_2);
extern int func_0052EF04(int param_1,int param_2);
extern int func_0052EF6C(int param_1);
extern int func_00587FCC(int param_1,int *param_2);
extern int *DAT_002dedfc;

// USA 002DED58 <- EU 002DED34 (Ghidra, non-matching)
// GLOBAL DAT_002dedfc int *

void func_002DED58(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar3 = *(int *)(param_1 + 0x3c);
  if ((*(int *)(iVar3 + 0x2c) != 0) && (iVar4 = func_00587FCC(*DAT_002dedfc,param_2), iVar4 != -1))
  {
    iVar6 = *(int *)(iVar3 + 0x30);
    piVar5 = (int *)(*(int *)(iVar3 + 0x28) - iVar6);
    iVar1 = *(int *)((int)piVar5 + iVar6 + 4);
    while (piVar5 != (int *)((iVar3 + 0x24) - iVar6)) {
      bVar2 = func_0052EF6C((int)piVar5);
      if (bVar2) {
        bVar2 = func_0052EF04((int)piVar5,iVar4);
        if (bVar2) {
          func_001DFF3C((int)piVar5,param_3,param_4);
        }
      }
      else {
        func_002DEAD0(iVar3,piVar5);
      }
      piVar5 = (int *)(iVar1 - iVar6);
      iVar1 = *(int *)(iVar1 + 4);
    }
  }
  return;
}

