#include "ghidra_types.h"

extern int func_004FB064(int param_1);
extern int func_004FB208(int param_1,int param_2,float *param_3,undefined1 param_4,int param_5);
extern int func_00521018(int param_1);
extern int func_00521078(int param_1);
extern int func_0065B158(undefined4 *param_1,undefined1 param_2);
extern int DAT_001b2640;
extern float DAT_001b2644;
extern float DAT_001b2648;
extern float DAT_001b264c;
extern float DAT_001b2650;
extern float DAT_001b2654;
extern float DAT_001b2658;
extern float DAT_001b265c;

// USA 001B2424 <- EU 001B2424 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_001b2640 int
// GLOBAL DAT_001b2644 float
// GLOBAL DAT_001b2648 float
// GLOBAL DAT_001b264c float
// GLOBAL DAT_001b2650 float
// GLOBAL DAT_001b2654 float
// GLOBAL DAT_001b2658 float
// GLOBAL DAT_001b265c float

void func_001B2424(int param_1)

{
  bool bVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  func_004FB064(param_1);
  *(undefined2 *)(DAT_001b2640 + param_1) = 0;
  fVar9 = DAT_001b2648;
  fVar7 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x8bc),(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = -(*(float *)(param_1 + 0x8ec) * *(float *)(param_1 + 0x8f0)) * fVar7 * fVar7 +
          *(float *)(param_1 + 0x8ec) * fVar7;
  if (DAT_001b2644 < fVar6) {
    fVar6 = DAT_001b2644;
  }
  fVar3 = DAT_001b2644;
  if ((DAT_001b2648 < fVar6) && (fVar3 = DAT_001b264c, fVar6 < DAT_001b2644)) {
    fVar3 = (DAT_001b2650 * (fVar6 - DAT_001b2648)) / DAT_001b2644 + DAT_001b2644;
  }
  *(float *)(param_1 + 0x4f0) = fVar3;
  fVar8 = *(float *)(param_1 + 0x3d4);
  fVar3 = *(float *)(param_1 + 0x8f4);
  if (fVar8 <= *(float *)(param_1 + 0x8f4)) {
    fVar3 = fVar8;
  }
  fVar7 = *(float *)(param_1 + 0x8f0) * fVar7;
  fVar8 = (fVar3 + fVar6) - fVar8;
  *(float *)(param_1 + 0x3e0) = fVar8;
  fVar4 = (*(float *)(param_1 + 0x8e0) - *(float *)(param_1 + 0x3d0)) * fVar7;
  *(float *)(param_1 + 0x3dc) = fVar4;
  fVar3 = DAT_001b2658;
  fVar6 = DAT_001b2654;
  fVar7 = (*(float *)(param_1 + 0x8e8) - *(float *)(param_1 + 0x3d8)) * fVar7;
  bVar1 = DAT_001b2654 <= fVar4;
  *(float *)(param_1 + 0x3e4) = fVar7;
  fVar5 = fVar6;
  if ((bVar1) && (fVar5 = fVar4, fVar3 < fVar4)) {
    fVar5 = fVar3;
  }
  *(float *)(param_1 + 0x3dc) = fVar5;
  if ((fVar6 <= fVar7) && (fVar6 = fVar7, fVar3 < fVar7)) {
    fVar6 = fVar3;
  }
  *(float *)(param_1 + 0x3e4) = fVar6;
  if (((fVar8 < fVar9) &&
      (*(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x80,
      10 < *(int *)(param_1 + 0x8bc))) && (bVar1 = func_00521078(param_1), bVar1)) {
    func_0065B158((undefined4 *)(param_1 + 0x8bc),5);
  }
  bVar1 = func_00521018(param_1);
  if (bVar1) {
    fVar6 = *(float *)(param_1 + 0x3e4) * DAT_001b265c;
    *(float *)(param_1 + 0x3dc) = *(float *)(param_1 + 0x3dc) * DAT_001b265c;
    *(float *)(param_1 + 0x3e4) = fVar6;
  }
  if ((*(float *)(param_1 + 0x3d4) < *(float *)(param_1 + 0x914)) &&
     (iVar2 = func_004FB208(param_1,1,(float *)0x0,0,0), iVar2 != 0)) {
    *(float *)(param_1 + 0x3dc) = fVar9;
    *(float *)(param_1 + 0x3e0) = fVar9;
    *(float *)(param_1 + 0x3e4) = fVar9;
    func_0065B158((undefined4 *)(param_1 + 0x8bc),9);
  }
  return;
}

