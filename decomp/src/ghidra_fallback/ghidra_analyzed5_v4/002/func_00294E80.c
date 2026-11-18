#include "ghidra_types.h"

extern int func_00258038(int param_1,uint param_2,undefined4 param_3,float fparam_0);

// USA 00294E80 <- EU 00294EA8 (Ghidra, non-matching)

void func_00294E80(int param_1,uint param_2,undefined4 param_3,float fparam_0)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(uint)ALBW_AS_U32(fparam_0);
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar3 = *(int *)(param_1 + 0x20);
    iVar1 = *(int *)(param_1 + 0x20);
    for (iVar2 = *(int *)(param_1 + 0x18) - iVar3; iVar2 != (param_1 + 0x14) - iVar1;
        iVar2 = *(int *)(iVar2 + iVar3 + 4) - iVar3) {
      func_00258038(iVar2,param_2,param_3,ALBW_AS_F32(uVar4));
    }
  }
  return;
}

