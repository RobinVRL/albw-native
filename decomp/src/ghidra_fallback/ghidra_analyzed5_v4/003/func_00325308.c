#include "ghidra_types.h"

extern int func_0053F224(int param_1);
extern int *DAT_003253c4;
extern float DAT_003253c8;

// USA 00325308 <- EU 003252E4 (Ghidra, non-matching)
// GLOBAL DAT_003253c4 int *
// GLOBAL DAT_003253c8 float

void func_00325308(int *param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float in_s0;
  float fVar7;
  
  param_1[0x121] = param_1[0x11e];
  param_1[0x122] = param_1[0x11f];
  param_1[0x123] = param_1[0x120];
  uVar6 = **(int **)(*DAT_003253c4 + 0x24) + 0x20000000U >> 0x1e;
  iVar1 = func_0053F224(*DAT_003253c4);
  if (iVar1 != 0) {
    if (uVar6 < 4) {
      uVar6 = uVar6 + 2 & 3;
    }
    else {
      uVar6 = 0xffffffff;
    }
  }
  *(char *)(param_1 + 0x124) = (char)uVar6;
  fVar7 = DAT_003253c8;
  pfVar2 = (float *)(**(code **)(*param_1 + 0x78))(param_1);
  fVar4 = *pfVar2;
  fVar5 = pfVar2[1];
  fVar3 = pfVar2[2];
  if (uVar6 == 0) {
    in_s0 = fVar3;
  }
  param_1[0x120] = (int)ALBW_AS_U32(fVar3);
  param_1[0x11e] = (int)ALBW_AS_U32(fVar4);
  param_1[0x11f] = (int)ALBW_AS_U32(fVar5);
  if (uVar6 != 0) {
    if (uVar6 == 1) {
      fVar4 = fVar4 + fVar7;
    }
    else {
      if (uVar6 == 2) {
        in_s0 = fVar3 - fVar7;
        goto LAB_003253b8;
      }
      if (uVar6 != 3) {
        return;
      }
      fVar4 = fVar4 - fVar7;
    }
    param_1[0x11e] = (int)ALBW_AS_U32(fVar4);
    return;
  }
  in_s0 = in_s0 + fVar7;
LAB_003253b8:
  param_1[0x120] = (int)ALBW_AS_U32(in_s0);
  return;
}

