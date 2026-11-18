#include "ghidra_types.h"

extern longlong func_001104E4(int param_1,int param_2);

// USA 00323DFC <- EU 00323DD8 (Ghidra, non-matching)

undefined8 func_00323DFC(char *param_1,int param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  iVar7 = 0;
  uVar6 = param_2 - 1;
  do {
    lVar8 = func_001104E4(uVar6,8);
    uVar1 = (uint)lVar8;
    uVar2 = uVar1;
    if (0 < (int)uVar1) {
      uVar2 = uVar6 + uVar1 * -8;
    }
    if (((int)uVar1 < 0) ||
       ((uVar3 = uVar2, uVar5 = (uint)((ulonglong)lVar8 >> 0x20), (int)uVar1 < 1 &&
        (uVar3 = uVar6, uVar5 = uVar6, (int)uVar6 < 0)))) {
      uVar3 = (uVar2 + 1) * 8 + uVar6;
      uVar5 = uVar2 + 1;
    }
    uVar6 = uVar6 + 1;
    pcVar4 = param_1;
    if ((uint)(int)(char)uVar3 < 8) {
      pcVar4 = param_1 + (char)uVar3 * 0x10;
    }
    if (*pcVar4 != '\0') {
      iVar7 = iVar7 + 1;
    }
  } while ((int)uVar6 < param_2 + 1);
  if (param_3 != (int *)0x0) {
    *param_3 = iVar7;
  }
  return CONCAT44(uVar5,(uint)(iVar7 != 0));
}

