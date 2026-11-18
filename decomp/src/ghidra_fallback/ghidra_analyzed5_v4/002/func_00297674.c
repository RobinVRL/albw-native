#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_0019A2DC(int param_1);
extern int func_0049F688(int param_1);

// USA 00297674 <- EU 0029769C (Ghidra, non-matching)

int func_00297674(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x38);
  iVar3 = 0;
  if (*(int *)(iVar1 + 0x1c) != 0) {
    piVar2 = func_0049F688(iVar1 + 0x14);
    if (piVar2 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)piVar2 - *(int *)(iVar1 + 0x20);
    }
    func_0010F1DC((int *)(iVar1 + 0x24),(int *)(*(int *)(iVar1 + 0x30) + iVar3));
    *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + 1;
    func_0019A2DC(iVar3);
    if (param_2 != 0) {
      *(undefined4 *)(iVar3 + 0x38) = *(undefined4 *)(param_2 + 0x2cc);
    }
  }
  return iVar3;
}

