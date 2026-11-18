#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0037C574(int param_1,int param_2);
extern int func_00392E48(undefined4 *param_1,int param_2,undefined4 *param_3,undefined1 param_4);
extern int func_0052107C(int param_1);
extern int func_0066A650(undefined4 *param_1,undefined1 param_2);
extern float DAT_004e0398;
extern float DAT_004e039c;
extern float DAT_004e03a0;
extern float DAT_004e03a4;
extern float DAT_004e03a8;
extern float DAT_004e03ac;

// USA 004E0210 <- EU 004E01E8 (Ghidra, non-matching)
// GLOBAL DAT_004e0398 float
// GLOBAL DAT_004e039c float
// GLOBAL DAT_004e03a0 float
// GLOBAL DAT_004e03a4 float
// GLOBAL DAT_004e03a8 float
// GLOBAL DAT_004e03ac float

undefined4 func_004E0210(int param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = DAT_004e039c;
  fVar6 = *(float *)(param_1 + 0x3e0) - DAT_004e0398;
  *(float *)(param_1 + 0x3e0) = fVar6;
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar8 <= fVar6) << 0x1d;
  if (!SUB41(uVar1 >> 0x1d,0)) {
    *(undefined1 *)(param_1 + 0x425) = 0;
    *(undefined1 *)(param_1 + 0x426) = 1;
    *(undefined2 *)(param_1 + 0x42c) = 0;
  }
  if (*(uint *)(param_1 + 0x4f8) < *(uint *)(param_1 + 0x4fc)) {
    *(uint *)(param_1 + 0x4f8) = *(uint *)(param_1 + 0x4f8) + 1;
  }
  fVar6 = DAT_004e03a0;
  if (*(int *)(param_1 + 0x550) == 0) {
    iVar3 = *(uint *)(param_1 + 0x4fc) - *(int *)(param_1 + 0x4f8);
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    fVar7 = (float)VectorSignedToFloat(iVar3,(byte)(uVar1 >> 0x15) & 3);
    *(float *)(param_1 + 0x3dc) =
         *(float *)(param_1 + 0x3dc) +
         (*(float *)(param_1 + 0x51c) - *(float *)(param_1 + 0x3dc)) * (DAT_004e03a0 / fVar7);
    fVar7 = (float)VectorSignedToFloat(iVar3,(byte)(uVar1 >> 0x15) & 3);
    *(float *)(param_1 + 0x3e4) =
         *(float *)(param_1 + 0x3e4) +
         (*(float *)(param_1 + 0x524) - *(float *)(param_1 + 0x3e4)) * (fVar6 / fVar7);
  }
  fVar6 = *(float *)(param_1 + 0x3e0);
  if ((uint)ALBW_AS_U32(DAT_004e03a4) <= (uint)ALBW_AS_U32(fVar6)) {
    fVar6 = DAT_004e03a8;
  }
  *(float *)(param_1 + 0x3e0) = fVar6;
  if ((*(float *)(param_1 + 0x3d4) <= *(float *)(param_1 + 0xc)) &&
     (iVar3 = func_00392E48((undefined4 *)(param_1 + 0x3d0),1,(undefined4 *)0x0,0), iVar3 == 0)) {
    return func_0066A650((undefined4 *)(param_1 + 0x4d4),7);
  }
  bVar2 = func_0052107C(param_1);
  bVar5 = false;
  bVar2 = !bVar2;
  bVar4 = false;
  if (!bVar2) {
    fVar6 = *(float *)(param_1 + 0x3e0);
    bVar5 = fVar8 < fVar6;
    bVar2 = fVar8 == fVar6;
    bVar4 = NAN(fVar8) || NAN(fVar6);
  }
  if (!bVar2 && bVar5 == bVar4) {
    if ((int)ALBW_AS_U32((*(float *)(param_1 + 0x3d4) - *(float *)(param_1 + 0x508))) < 0x3f000000) {
      *(float *)(param_1 + 0x3e0) = -fVar6;
      func_00115D70((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),DAT_004e03ac);
      *(int *)(param_1 + 0x550) = *(int *)(param_1 + 0x550) + 1;
    }
    if (1 < *(int *)(param_1 + 0x550)) {
      func_0037C574(param_1,-1);
      func_0066A650((undefined4 *)(param_1 + 0x4d4),1);
    }
  }
  return 0;
}

