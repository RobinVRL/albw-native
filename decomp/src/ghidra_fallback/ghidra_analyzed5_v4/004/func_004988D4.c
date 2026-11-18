#include "ghidra_types.h"

extern longlong func_001104E4(int param_1,int param_2);
extern float func_005909A0(float fparam_0);
extern float func_0059163C(float fparam_0);
extern uint DAT_004989b4;
extern float DAT_004989b8;
extern float DAT_004989bc;
extern float DAT_004989c0;

// USA 004988D4 <- EU 004988AC (Ghidra, non-matching)
// GLOBAL DAT_004989b4 uint
// GLOBAL DAT_004989b8 float
// GLOBAL DAT_004989bc float
// GLOBAL DAT_004989c0 float

float * func_004988D4(float *param_1,short *param_2,uint param_3)

{
  short sVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 in_d8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  if (param_1 != (float *)0x0) {
    uVar11 = (ulonglong)DAT_004989b4;
    fVar9 = ALBW_AS_F32(((ulonglong)in_d8 >> 0x20));
    if (0 < (int)param_3) {
      fVar9 = DAT_004989c0;
    }
    iVar3 = 0;
    fVar10 = DAT_004989bc;
    fVar8 = DAT_004989b8;
    if (0 < (int)param_3) {
      do {
        fVar7 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
        fVar6 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
        fVar6 = (fVar7 * ALBW_AS_F32(uVar11)) / fVar6;
        fVar7 = func_005909A0(fVar6);
        pfVar2 = param_1 + iVar3 * 9;
        *pfVar2 = fVar7 * fVar8;
        fVar6 = func_0059163C(fVar6);
        pfVar2[2] = fVar10;
        iVar3 = iVar3 + 1;
        pfVar2[1] = fVar6 * fVar8;
        pfVar2[3] = *pfVar2;
        pfVar2[5] = fVar9;
        pfVar2[4] = fVar9 - fVar6 * fVar8;
      } while (iVar3 < (int)param_3);
    }
    param_1 = param_1 + param_3 * 9;
    *param_1 = fVar10;
    param_1[1] = fVar10;
    param_1[2] = fVar10;
    param_1[3] = fVar8;
    param_1[4] = fVar8;
    param_1[5] = fVar10;
  }
  uVar5 = 0;
  if (param_2 != (short *)0x0) {
    uVar5 = param_3;
  }
  if ((param_2 != (short *)0x0 && param_3 != 0) && -1 < (int)uVar5) {
    uVar4 = 1;
    sVar1 = 0;
    uVar5 = param_3;
    do {
      *param_2 = sVar1;
      lVar12 = func_001104E4(uVar4,param_3);
      param_1 = (float *)lVar12;
      param_2[2] = (short)param_3;
      param_2[1] = (short)((ulonglong)lVar12 >> 0x20);
      uVar5 = uVar5 - 1;
      uVar4 = uVar4 + 1;
      param_2 = param_2 + 3;
      sVar1 = sVar1 + 1;
    } while (uVar5 != 0);
  }
  return param_1;
}

