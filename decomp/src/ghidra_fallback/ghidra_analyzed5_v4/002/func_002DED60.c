#include "ghidra_types.h"

extern int func_001DFF3C(int param_1,int param_2,int param_3);
extern int func_002DEAD0(int param_1,int *param_2);
extern int func_0052EF04(int param_1,int param_2);
extern int func_0052EF6C(int param_1);
extern int func_00587FCC(int param_1,int *param_2);
extern int *DAT_002dedfc;

// USA 002DED60 <- EU 002DED3C (Ghidra, non-matching)
// GLOBAL DAT_002dedfc int *

void func_002DED60(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  if ((*(int *)(param_1 + 0x2c) != 0) && (iVar3 = func_00587FCC(*DAT_002dedfc,param_2), iVar3 != -1)
     ) {
    iVar5 = *(int *)(param_1 + 0x30);
    piVar4 = (int *)(*(int *)(param_1 + 0x28) - iVar5);
    iVar1 = *(int *)((int)piVar4 + iVar5 + 4);
    while (piVar4 != (int *)((param_1 + 0x24) - iVar5)) {
      bVar2 = func_0052EF6C((int)piVar4);
      if (bVar2) {
        bVar2 = func_0052EF04((int)piVar4,iVar3);
        if (bVar2) {
          func_001DFF3C((int)piVar4,param_3,param_4);
        }
      }
      else {
        func_002DEAD0(param_1,piVar4);
      }
      piVar4 = (int *)(iVar1 - iVar5);
      iVar1 = *(int *)(iVar1 + 4);
    }
  }
  return;
}

