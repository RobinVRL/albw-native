#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00521018(int param_1);
extern int func_00521078(int param_1);
extern int func_00664374(undefined4 *param_1,undefined1 param_2);
extern float DAT_002fb4a0;
extern float DAT_002fb4a4;
extern undefined4 DAT_002fb4a8;
extern float DAT_002fb4ac;
extern float DAT_002fb4b0;
extern float DAT_002fb4b4;
extern float DAT_002fb4b8;
extern float DAT_002fb4bc;
extern float DAT_002fb4c0;
extern float DAT_002fb4c4;

// USA 002FB33C <- EU 002FB318 (Ghidra, non-matching)
// GLOBAL DAT_002fb4a0 float
// GLOBAL DAT_002fb4a4 float
// GLOBAL DAT_002fb4a8 undefined4
// GLOBAL DAT_002fb4ac float
// GLOBAL DAT_002fb4b0 float
// GLOBAL DAT_002fb4b4 float
// GLOBAL DAT_002fb4b8 float
// GLOBAL DAT_002fb4bc float
// GLOBAL DAT_002fb4c0 float
// GLOBAL DAT_002fb4c4 float

void func_002FB33C(int param_1)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
  fVar9 = DAT_002fb4a0;
  if (1 < *(int *)(param_1 + 0x8bc)) {
    if (*(int *)(param_1 + 0x8bc) == 2) {
      *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_1 + 0x900);
      *(float *)(param_1 + 0x3e0) = fVar9;
      *(undefined4 *)(param_1 + 0x3e4) = *(undefined4 *)(param_1 + 0x908);
      func_00115DC8((float *)(param_1 + 0x3dc));
      func_00115D70((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),DAT_002fb4a4);
      *(undefined4 *)(param_1 + 0x3e0) = DAT_002fb4a8;
    }
    fVar4 = *(float *)(param_1 + 0x3e4) * DAT_002fb4ac;
    *(float *)(param_1 + 0x3dc) = *(float *)(param_1 + 0x3dc) * DAT_002fb4ac;
    *(float *)(param_1 + 0x3e4) = fVar4;
    fVar4 = DAT_002fb4b0;
    fVar5 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x4fc),(byte)(in_fpscr >> 0x15) & 3
                                      );
    fVar5 = fVar5 * DAT_002fb4b0;
    iVar7 = (int)fVar5;
    fVar8 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar8 == fVar5) << 0x1e | (uint)(fVar5 <= fVar8) << 0x1d;
    bVar2 = (byte)(uVar1 >> 0x18);
    bVar3 = (bool)(bVar2 >> 6);
    if (!bVar3) {
      uVar1 = in_fpscr & 0xfffffff | (uint)(fVar9 == fVar5) << 0x1e | (uint)(fVar5 <= fVar9) << 0x1d
      ;
      bVar2 = (byte)(uVar1 >> 0x18);
      bVar3 = (bool)(bVar2 >> 6);
    }
    if ((bool)(bVar2 >> 5 & 1) && !bVar3) {
      iVar7 = iVar7 + -1;
    }
    *(int *)(param_1 + 0x4fc) = iVar7;
    fVar5 = DAT_002fb4b4;
    fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x504),(byte)(uVar1 >> 0x15) & 3);
    fVar8 = fVar8 * fVar4;
    iVar7 = (int)fVar8;
    fVar6 = (float)VectorSignedToFloat(iVar7,(byte)(uVar1 >> 0x15) & 3);
    fVar4 = fVar6;
    if (fVar6 != fVar8) {
      fVar4 = fVar9;
    }
    if (fVar8 <= fVar4 && (fVar6 != fVar8 && fVar9 != fVar8)) {
      iVar7 = iVar7 + -1;
    }
    *(int *)(param_1 + 0x504) = iVar7;
    fVar4 = DAT_002fb4c0;
    fVar5 = *(float *)(param_1 + 0x3e0) - fVar5;
    if (fVar5 < DAT_002fb4b8) {
      fVar5 = DAT_002fb4b8;
    }
    *(float *)(param_1 + 0x3e0) = fVar5;
    *(float *)(param_1 + 0x4f0) =
         (DAT_002fb4c4 * ((*(float *)(param_1 + 0x3d4) - *(float *)(param_1 + 0x90c)) - fVar9)) /
         fVar4 + DAT_002fb4bc;
    if ((0x14 < *(int *)(param_1 + 0x8bc)) &&
       ((bVar3 = func_00521078(param_1), bVar3 || (bVar3 = func_00521018(param_1), bVar3)))) {
      func_00664374((undefined4 *)(param_1 + 0x8bc),2);
    }
  }
  return;
}

