#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern float func_00546258(int param_1);
extern int func_006653E8(undefined4 *param_1,undefined1 param_2);
extern undefined4 *DAT_0031c430;
extern float DAT_0031c434;
extern float DAT_0031c438;

// USA 0031C3A4 <- EU 0031C380 (Ghidra, non-matching)
// GLOBAL DAT_0031c430 undefined4 *
// GLOBAL DAT_0031c434 float
// GLOBAL DAT_0031c438 float

undefined4 func_0031C3A4(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = func_00546258(*DAT_0031c430);
  fVar5 = DAT_0031c438;
  fVar1 = DAT_0031c434;
  *(float *)(param_1 + 0xe4) = fVar3;
  *(float *)(param_1 + 0xe0) = fVar3;
  fVar4 = fVar1;
  if ((fVar1 <= fVar3) && (fVar4 = fVar3, fVar5 < fVar3)) {
    fVar4 = fVar5;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
  if ((uint)(int)*(short *)(param_1 + 0x82) < *(uint *)(*(int *)(param_1 + 0x1c) + 8)) {
    iVar2 = iVar2 + *(short *)(param_1 + 0x82) * 0x38;
  }
  fVar5 = (fVar5 - fVar4) * *(float *)(param_1 + 0xf0);
  *(float *)(iVar2 + 0x14) = fVar5;
  *(float *)(*(int *)(iVar2 + 0x10) + 0x10) = fVar5;
  if (fVar1 <= *(float *)(param_1 + 0xe0)) {
    func_002313DC(param_1 + 200);
    return func_006653E8((undefined4 *)(param_1 + 0x50),0);
  }
  return func_006653E8((undefined4 *)(param_1 + 0x50),3);
}

