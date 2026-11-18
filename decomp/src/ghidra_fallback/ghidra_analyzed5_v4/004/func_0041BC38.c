#include "ghidra_types.h"

extern int DAT_0041bca4;

// USA 0041BC38 <- EU 0041BC18 (Ghidra, non-matching)
// GLOBAL DAT_0041bca4 int

void func_0041BC38(int param_1,uint param_2,undefined4 param_3,float fparam_0)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  
  iVar4 = 0;
  pcVar6 = *(code **)(DAT_0041bca4 + 0x38);
  uVar5 = *(uint *)(DAT_0041bca4 + 0x3c);
  do {
    if (param_2 == 0) {
      return;
    }
    if ((((param_2 & 1) != 0) && (iVar4 < 0x10)) &&
       (iVar1 = *(int *)(param_1 + iVar4 * 4 + 0x90), iVar1 != 0)) {
      piVar2 = (int *)(iVar1 + ((int)uVar5 >> 1));
      pcVar3 = pcVar6;
      if ((uVar5 & 1) != 0) {
        pcVar3 = *(code **)(pcVar6 + *piVar2);
      }
      (*pcVar3)(piVar2,param_3);
    }
    iVar4 = iVar4 + 1;
    param_2 = param_2 >> 1;
  } while (iVar4 < 0x10);
  return;
}

