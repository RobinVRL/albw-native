#include "ghidra_types.h"

extern int func_0052EF04(int param_1,int param_2);
extern int func_00587FCC(int param_1,int *param_2);
extern int *DAT_00527888;

// USA 0052782C <- EU 00527804 (Ghidra, non-matching)
// GLOBAL DAT_00527888 int *

int func_0052782C(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x30) != 0) && (iVar2 = func_00587FCC(*DAT_00527888,param_2), iVar2 != -1)
     ) {
    iVar4 = *(int *)(param_1 + 0x34);
    for (iVar3 = *(int *)(param_1 + 0x2c) - iVar4; iVar3 != (param_1 + 0x28) - iVar4;
        iVar3 = *(int *)(iVar3 + iVar4 + 4) - iVar4) {
      bVar1 = func_0052EF04(iVar3,iVar2);
      if (bVar1) {
        return iVar3;
      }
    }
  }
  return 0;
}

