#include "ghidra_types.h"

extern int func_0012C85C(int *param_1,uint param_2);
extern int func_00427CA8(int param_1);
extern int func_0051E300(int param_1);

// USA 0047087C <- EU 00470854 (Ghidra, non-matching)

undefined4 func_0047087C(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = param_1[0x15];
  for (piVar2 = (int *)(param_1[0x13] - iVar3);
      piVar2 != (int *)((int)param_1 + (0x48 - param_1[0x15]));
      piVar2 = (int *)(*(int *)((int)piVar2 + iVar3 + 4) - iVar3)) {
    iVar1 = func_0051E300((int)piVar2);
    if (iVar1 != 0) {
      (**(code **)(*piVar2 + 0xc))(piVar2);
    }
  }
  func_0012C85C(param_1,param_1[0x15]);
  return func_00427CA8(param_1[0x26]);
}

