#include "ghidra_types.h"

extern void func_0049C154(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_00522E00(int param_1);
extern float DAT_0016c3a0;
extern float DAT_0016c3a4;
extern float *DAT_0016c3a8;
extern undefined4 *DAT_0016c3ac;
extern float DAT_0016c3b0;
extern float *DAT_0016c3b4;
extern float *DAT_0016c3b8;
extern float *DAT_0016c3bc;
extern float DAT_0016c3c0;
extern float DAT_0016c3c4;

// USA 0016C0FC <- EU 0016C0FC (Ghidra, non-matching)
// GLOBAL DAT_0016c3a0 float
// GLOBAL DAT_0016c3a4 float
// GLOBAL DAT_0016c3a8 float *
// GLOBAL DAT_0016c3ac undefined4 *
// GLOBAL DAT_0016c3b0 float
// GLOBAL DAT_0016c3b4 float *
// GLOBAL DAT_0016c3b8 float *
// GLOBAL DAT_0016c3bc float *
// GLOBAL DAT_0016c3c0 float
// GLOBAL DAT_0016c3c4 float

undefined4 func_0016C0FC(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *extraout_r1;
  int *piVar5;
  int extraout_r1_00;
  int *in_r3;
  float *pfVar6;
  uint in_fpscr;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  float fVar14;
  
  iVar1 = *(int *)(param_1 + 0xf74);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x20);
  }
  if ((iVar1 != 0 && iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) {
    fVar10 = *(float *)(iVar2 + 0x58) - *param_3;
    fVar8 = *(float *)(iVar2 + 0x60) - param_3[2];
    fVar8 = fVar10 * fVar10 + fVar8 * fVar8;
    uVar3 = func_00522E00(param_1);
    piVar5 = extraout_r1;
    if (uVar3 < 0x33) {
      piVar5 = extraout_r1 + uVar3 * 0xe;
    }
    if (*(int *)*piVar5 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int *)*piVar5)[2];
    }
    uVar12 = CONCAT44(*(float *)(iVar2 + 0x54) * DAT_0016c3a4,fVar8);
    fVar10 = *(float *)(iVar2 + 0x58) * DAT_0016c3a0;
    fVar14 = fVar10 * fVar10;
    uVar13 = CONCAT44(fVar14,fVar10);
    uVar3 = in_fpscr & 0xfffffff | (uint)(fVar14 < fVar8) << 0x1f;
    uVar7 = uVar3 | (uint)(NAN(fVar14) || NAN(fVar8)) << 0x1c;
    if ((byte)(uVar3 >> 0x1f) != ((byte)(uVar7 >> 0x1c) & 1)) {
      uVar3 = func_00522E00(param_1);
      iVar2 = extraout_r1_00;
      if (uVar3 < 0x33) {
        iVar2 = extraout_r1_00 + uVar3 * 0x38;
      }
      pfVar6 = (float *)(iVar2 + 0x18);
      local_30 = *DAT_0016c3a8;
      local_2c = *DAT_0016c3a8;
      local_28 = *DAT_0016c3a8;
      local_24 = *DAT_0016c3ac;
      uVar4 = *(uint *)(*(int *)(*(int *)(*(int *)(*in_r3 + 0xc) + in_r3[100] * 4) + 0x18) +
                       in_r3[0x65] * 0x3c + 0xc);
      uVar3 = uVar4 >> 0x10;
      if ((uVar3 & 0x8000) == 0) {
        if ((uVar3 & 0x4000) == 0) {
          if ((uVar3 & 0x2000) == 0) {
            local_30 = *pfVar6;
            local_2c = *(float *)(iVar2 + 0x1c);
            local_28 = *(float *)(iVar2 + 0x20);
          }
          else {
            fVar8 = (float)VectorUnsignedToFloat(uVar4 & 0xff,(byte)(uVar7 >> 0x15) & 3);
            func_0049C154(&local_30,pfVar6,DAT_0016c3bc,fVar8 * DAT_0016c3b0);
          }
        }
        else {
          fVar8 = (float)VectorUnsignedToFloat(uVar4 & 0xff,(byte)(uVar7 >> 0x15) & 3);
          func_0049C154(&local_30,pfVar6,DAT_0016c3b8,fVar8 * DAT_0016c3b0);
        }
      }
      else {
        fVar8 = (float)VectorUnsignedToFloat(uVar4 & 0xff,(byte)(uVar7 >> 0x15) & 3);
        func_0049C154(&local_30,pfVar6,DAT_0016c3b4,fVar8 * DAT_0016c3b0);
      }
      fVar8 = DAT_0016c3c4;
      fVar14 = ALBW_AS_F32(((ulonglong)uVar12 >> 0x20));
      fVar10 = ALBW_AS_F32(uVar12);
      if (fVar14 * fVar14 < fVar10) {
        *param_2 = *param_2 * local_30;
        param_2[1] = param_2[1] * local_2c;
        param_2[2] = param_2[2] * local_28;
        return 1;
      }
      if (ALBW_AS_F32(((ulonglong)uVar13 >> 0x20)) < fVar10) {
        fVar11 = ALBW_AS_F32(uVar13) - fVar14;
        fVar9 = DAT_0016c3c0;
        if (fVar11 != DAT_0016c3c0) {
          fVar9 = (DAT_0016c3c4 * (SQRT(fVar10) - fVar14)) / fVar11 + DAT_0016c3c0;
        }
        *param_2 = (local_30 + (DAT_0016c3c4 - local_30) * fVar9) * *param_2;
        param_2[1] = (local_2c + (fVar8 - local_2c) * fVar9) * param_2[1];
        param_2[2] = (local_28 + (fVar8 - local_28) * fVar9) * param_2[2];
        return 1;
      }
    }
  }
  return 0;
}

