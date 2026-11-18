#include "ghidra_types.h"

extern undefined4 DAT_002c123c;
extern undefined4 DAT_002c1240;
extern undefined4 DAT_002c1244;

// USA 002C11E8 <- EU 002C11C4 (Ghidra, non-matching)
// GLOBAL DAT_002c123c undefined4
// GLOBAL DAT_002c1240 undefined4
// GLOBAL DAT_002c1244 undefined4

int * func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_r12;
  undefined4 *puVar5;
  
  param_1[1] = 3;
  *param_1 = 0;
  param_1[2] = 0;
  if (param_1 + 3 != (int *)0x0) {
    param_1[2] = (int)(param_1 + 3);
  }
  param_1[0x15] = param_3;
  *(undefined1 *)(param_1 + 0x16) = param_4;
  uVar3 = DAT_002c1244;
  uVar2 = DAT_002c1240;
  uVar1 = DAT_002c123c;
  iVar4 = *param_1;
  if (iVar4 < param_1[1]) {
    *param_1 = iVar4 + 1;
    puVar5 = (undefined4 *)(param_1[2] + iVar4 * 0x18);
    *puVar5 = param_2;
    puVar5[1] = uVar2;
    puVar5[2] = uVar1;
    puVar5[3] = uVar3;
    puVar5[4] = uVar1;
    puVar5[5] = in_r12 | 0xff;
  }
  return param_1;
}

