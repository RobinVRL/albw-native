#include "ghidra_types.h"

extern longlong func_001104E4(int param_1,int param_2);

// USA 003E5C7C <- EU 003E5C5C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 int

int func_003E5C7C(undefined2 *param_1,undefined2 *param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = param_4 * param_4 + param_3 * param_3;
  if (iVar5 <= param_5 * param_5) {
    *param_2 = 0;
    *param_1 = 0;
    return 0;
  }
  uVar1 = iVar5 * 0x4000;
  if ((int)uVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uVar3 = 1;
    uVar2 = uVar1;
    if (1 < (int)uVar1) {
      do {
        uVar3 = uVar3 * 2;
        uVar2 = (int)uVar2 >> 1;
      } while ((int)uVar3 < (int)uVar2);
    }
    do {
      uVar2 = uVar3;
      lVar6 = func_001104E4(uVar1,uVar2);
      uVar3 = (int)((int)lVar6 + uVar2) >> 1;
    } while ((int)uVar3 < (int)uVar2);
  }
  if (param_6 * param_6 - iVar5 == 0 || param_6 * param_6 < iVar5) {
    iVar4 = param_6 - param_5;
    iVar5 = iVar4 * 0x80;
  }
  else {
    iVar5 = uVar2 + param_5 * -0x80;
    iVar4 = ((int)uVar2 >> 7) - param_5;
  }
  lVar6 = func_001104E4(param_3 * iVar5,uVar2);
  *param_1 = (short)lVar6;
  lVar6 = func_001104E4(param_4 * iVar5,uVar2);
  *param_2 = (short)lVar6;
  return (int)(short)iVar4;
}

