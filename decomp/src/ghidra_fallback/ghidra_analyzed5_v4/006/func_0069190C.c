#include "ghidra_types.h"


// USA 0069190C <- EU 006918E4 (Ghidra, non-matching)

undefined4 func_0069190C(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint in_r12;
  
  (**(code **)(*param_1 + 8))(param_1);
  (**(code **)(*param_1 + 8))(param_1);
  iVar3 = param_1[1];
  (**(code **)(*param_2 + 8))(param_2);
  iVar1 = param_2[1];
  if (iVar3 != iVar1) {
    if (param_3 < 0x40001) {
      if (param_3 < 1) {
        return 0;
      }
    }
    else {
      param_3 = 0x40000;
    }
    iVar3 = 0;
    do {
      iVar2 = (int)*(char *)(param_1[1] + iVar3);
      if (iVar2 == 0) {
        in_r12 = (uint)*(byte *)(iVar1 + iVar3);
      }
      if (iVar2 == 0 && in_r12 == 0) {
        return 0;
      }
      if (iVar2 == 0) {
        return 0xffffffff;
      }
      in_r12 = (uint)*(char *)(iVar1 + iVar3);
      if (in_r12 == 0) {
        return 1;
      }
      if (iVar2 < (int)in_r12) {
        return 0xffffffff;
      }
      if ((int)in_r12 < iVar2) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  return 0;
}

