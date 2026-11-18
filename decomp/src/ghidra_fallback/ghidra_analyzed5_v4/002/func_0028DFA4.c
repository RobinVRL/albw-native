#include "ghidra_types.h"

extern int DAT_0028e088;

// USA 0028DFA4 <- EU 0028DFCC (Ghidra, non-matching)
// GLOBAL DAT_0028e088 int

int func_0028DFA4(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = DAT_0028e088;
  uVar4 = 0xaf;
  while( true ) {
    piVar3 = (int *)(iVar1 + uVar4 * 0x18);
    (**(code **)(*piVar3 + 8))(piVar3);
    (**(code **)(*piVar3 + 8))(piVar3);
    iVar5 = piVar3[1];
    (**(code **)(*param_1 + 8))(param_1);
    iVar6 = param_1[1];
    if (iVar5 == iVar6) break;
    iVar5 = 0;
    while( true ) {
      uVar2 = (uint)*(char *)(piVar3[1] + iVar5);
      if (uVar2 == 0) {
        param_4 = (uint)*(byte *)(iVar6 + iVar5);
      }
      if (uVar2 == 0 && param_4 == 0) goto LAB_0028e06c;
      if (((uVar2 == 0) || (param_4 = (uint)*(char *)(iVar6 + iVar5), param_4 == 0)) ||
         (uVar2 != param_4)) break;
      iVar5 = iVar5 + 1;
      if (0x3ffff < iVar5) goto LAB_0028e06c;
    }
    uVar4 = uVar4 - 1;
    if (0x7fffffff < uVar4) {
      return -1;
    }
  }
LAB_0028e06c:
  return (int)(short)uVar4;
}

