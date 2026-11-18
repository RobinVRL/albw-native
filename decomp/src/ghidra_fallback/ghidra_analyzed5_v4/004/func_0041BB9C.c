#include "ghidra_types.h"

extern int DAT_0041bbfc;

// USA 0041BB9C <- EU 0041BB7C (Ghidra, non-matching)
// GLOBAL DAT_0041bbfc int

void func_0041BB9C(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  
  iVar4 = 0;
  pcVar6 = *(code **)(DAT_0041bbfc + 0x50);
  uVar5 = *(uint *)(DAT_0041bbfc + 0x54);
  do {
    if (param_2 == 0) {
      return;
    }
    if ((((param_2 & 1) != 0) && (iVar4 < 0x10)) &&
       (iVar1 = *(int *)(param_1 + iVar4 * 4 + 0x90), iVar1 != 0)) {
      piVar3 = (int *)(iVar1 + ((int)uVar5 >> 1));
      pcVar2 = pcVar6;
      if ((uVar5 & 1) != 0) {
        pcVar2 = *(code **)(pcVar6 + *piVar3);
      }
      (*pcVar2)(piVar3,param_3);
    }
    iVar4 = iVar4 + 1;
    param_2 = param_2 >> 1;
  } while (iVar4 < 0x10);
  return;
}

