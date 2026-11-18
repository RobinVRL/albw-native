#include "ghidra_types.h"

extern int func_0016EA5C(int param_1,undefined4 *param_2);
extern undefined4 DAT_002768b0;
extern float DAT_002768b4;

// USA 002767E8 <- EU 00276810 (Ghidra, non-matching)
// GLOBAL DAT_002768b0 undefined4
// GLOBAL DAT_002768b4 float

void func_002767E8(int param_1,undefined4 *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar7 = ALBW_AS_F32(param_2[6]) * DAT_002768b4;
  fVar9 = ALBW_AS_F32(param_2[4]) * DAT_002768b4;
  fVar4 = ALBW_AS_F32(param_2[2]) + ALBW_AS_F32(param_2[5]) * DAT_002768b4;
  fVar8 = ALBW_AS_F32(param_2[5]) * DAT_002768b4;
  fVar5 = ALBW_AS_F32(param_2[3]);
  sVar1 = *(short *)(param_2 + 10);
  fVar6 = ALBW_AS_F32(param_2[1]);
  iVar3 = param_1 + 0x183c + (int)sVar1 * (int)(short)DAT_002768b0 * 4;
  *(float *)(iVar3 + 4) = fVar6 - fVar9;
  *(float *)(iVar3 + 8) = fVar4 - fVar8;
  *(float *)(iVar3 + 0xc) = fVar5 - fVar7;
  *(float *)(iVar3 + 0x10) = fVar6 + fVar9;
  *(float *)(iVar3 + 0x14) = fVar4 + fVar8;
  *(float *)(iVar3 + 0x18) = fVar5 + fVar7;
  func_0016EA5C(iVar3,param_2);
  iVar2 = sVar1 + 1;
  iVar3 = *(int *)(param_1 + 0x15b3c);
  if (iVar3 <= iVar2) {
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0x15b3c) = iVar3;
  return;
}

