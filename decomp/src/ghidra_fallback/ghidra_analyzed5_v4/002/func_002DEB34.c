#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_0049F688(int param_1);

// USA 002DEB34 <- EU 002DEB10 (Ghidra, non-matching)

int func_002DEB34(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  iVar3 = 0;
  if (*(int *)(iVar1 + 0x1c) != 0) {
    piVar2 = func_0049F688(iVar1 + 0x14);
    if ((piVar2 == (int *)0x0) || (iVar3 = (int)piVar2 - *(int *)(iVar1 + 0x20), iVar3 == 0)) {
      return 0;
    }
    func_0010F1DC((int *)(iVar1 + 0x24),(int *)(*(int *)(iVar1 + 0x30) + iVar3));
    *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + 1;
  }
  return iVar3;
}

