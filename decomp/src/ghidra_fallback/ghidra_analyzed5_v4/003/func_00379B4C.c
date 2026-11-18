#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_00322274(int param_1,int param_2);
extern int func_0049F688(int param_1);

// USA 00379B4C <- EU 00379B28 (Ghidra, non-matching)

int func_00379B4C(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x48);
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
    *(undefined4 *)(iVar3 + 0x28) = param_2;
    func_00322274(iVar3,param_3);
  }
  return iVar3;
}

