#include "ghidra_types.h"

extern longlong func_001104E4(int param_1,int param_2);

// USA 003E5B78 <- EU 003E5B58 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 int

undefined8
func_003E5B78(undefined2 *param_1,undefined2 *param_2,int param_3,int param_4,int param_5,
             int param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_3 < 0) {
    if (-param_5 == param_3 || -param_3 < param_5) {
LAB_003e5b90:
      iVar6 = 0;
    }
    else {
      iVar6 = param_3 + param_5;
    }
  }
  else {
    if (param_3 <= param_5) goto LAB_003e5b90;
    iVar6 = param_3 - param_5;
  }
  if (param_4 < 0) {
    if (-param_5 != param_4 && param_5 <= -param_4) {
      iVar5 = param_4 + param_5;
      goto LAB_003e5bc0;
    }
  }
  else if (param_5 < param_4) {
    iVar5 = param_4 - param_5;
    goto LAB_003e5bc0;
  }
  iVar5 = 0;
LAB_003e5bc0:
  iVar8 = param_6 - param_5;
  iVar2 = iVar5 * iVar5 + iVar6 * iVar6;
  iVar3 = iVar8 * iVar8;
  if (iVar3 - iVar2 == 0 || iVar3 < iVar2) {
    uVar1 = iVar2 * 0x4000;
    if ((int)uVar1 < 1) {
      uVar7 = 0;
    }
    else {
      uVar4 = 1;
      uVar7 = uVar1;
      if (1 < (int)uVar1) {
        do {
          uVar4 = uVar4 * 2;
          uVar7 = (int)uVar7 >> 1;
        } while ((int)uVar4 < (int)uVar7);
      }
      do {
        uVar7 = uVar4;
        lVar9 = func_001104E4(uVar1,uVar7);
        uVar4 = (int)((int)lVar9 + uVar7) >> 1;
      } while ((int)uVar4 < (int)uVar7);
    }
    lVar9 = func_001104E4(iVar6 * iVar8 * 0x80,uVar7);
    iVar6 = (int)(short)lVar9;
    lVar9 = func_001104E4(iVar5 * iVar8 * 0x80,uVar7);
    iVar3 = (int)((ulonglong)lVar9 >> 0x20);
    iVar5 = (int)(short)lVar9;
  }
  *param_1 = (short)iVar6;
  *param_2 = (short)iVar5;
  return CONCAT44(iVar3,(int)(short)iVar8);
}

