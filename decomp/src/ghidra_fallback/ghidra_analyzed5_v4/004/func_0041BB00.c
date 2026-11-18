#include "ghidra_types.h"

extern int DAT_0041bb78;

// USA 0041BB00 <- EU 0041BAE0 (Ghidra, non-matching)
// GLOBAL DAT_0041bb78 int

undefined4 func_0041BB00(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  
  if (*(char *)(param_1 + param_3 * 0xc + 0x13c) == '\0') {
    uVar1 = 0;
  }
  else {
    iVar5 = 0;
    pcVar7 = *(code **)(DAT_0041bb78 + 0x48);
    uVar6 = *(uint *)(DAT_0041bb78 + 0x4c);
    do {
      if (param_2 == 0) break;
      if ((((param_2 & 1) != 0) && (iVar5 < 0x10)) &&
         (iVar2 = *(int *)(param_1 + iVar5 * 4 + 0x90), iVar2 != 0)) {
        piVar3 = (int *)(iVar2 + ((int)uVar6 >> 1));
        pcVar4 = pcVar7;
        if ((uVar6 & 1) != 0) {
          pcVar4 = *(code **)(pcVar7 + *piVar3);
        }
        (*pcVar4)(piVar3,param_3);
      }
      iVar5 = iVar5 + 1;
      param_2 = param_2 >> 1;
    } while (iVar5 < 0x10);
    uVar1 = 1;
  }
  return uVar1;
}

