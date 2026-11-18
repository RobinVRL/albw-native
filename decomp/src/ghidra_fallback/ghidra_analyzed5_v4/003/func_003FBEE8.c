#include "ghidra_types.h"

extern void func_00590B1C(float fparam_0);
extern float DAT_003fc1ec;
extern float DAT_003fc1f0;
extern float DAT_003fc1f4;
extern float DAT_003fc1f8;

// USA 003FBEE8 <- EU 003FBEC8 (Ghidra, non-matching)
// GLOBAL DAT_003fc1ec float
// GLOBAL DAT_003fc1f0 float
// GLOBAL DAT_003fc1f4 float
// GLOBAL DAT_003fc1f8 float

float func_003FBEE8(int param_1,undefined4 param_2,int param_3,float fparam_0,float fparam_1,
                   float fparam_2,float fparam_3,float fparam_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint in_fpscr;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  float fVar13;
  
  fVar9 = DAT_003fc1f8;
  fVar13 = DAT_003fc1f4;
  fVar11 = DAT_003fc1f0;
  fVar10 = DAT_003fc1ec;
  uVar12 = (ulonglong)(uint)ALBW_AS_U32(DAT_003fc1ec);
  fVar8 = DAT_003fc1ec / (fparam_4 - fparam_3);
  switch(param_2) {
  case 0:
    iVar3 = 0;
    while( true ) {
      fVar5 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      fVar6 = (fparam_3 + fVar5 * fVar11) * fVar8;
      uVar4 = in_fpscr & 0xfffffff | (uint)(fVar6 < fVar9) << 0x1f | (uint)(fVar6 == fVar9) << 0x1e;
      bVar2 = (byte)(uVar4 >> 0x18);
      fVar5 = fVar9;
      if (((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(fVar6) || NAN(fVar9))) &&
         (uVar4 = in_fpscr & 0xfffffff | (uint)(fVar13 <= fVar6) << 0x1d, fVar5 = fVar6,
         !SUB41(uVar4 >> 0x1d,0))) {
        fVar5 = fVar13;
      }
      fVar6 = (-*(float *)(param_3 + 0x2c) + -(*(float *)(param_3 + 0x28) * fVar5)) /
              (*(float *)(param_3 + 0x3c) + *(float *)(param_3 + 0x38) * fVar5);
      in_fpscr = uVar4 & 0xfffffff | (uint)(fVar6 == fparam_0) << 0x1e |
                 (uint)(fparam_0 <= fVar6) << 0x1d;
      bVar2 = (byte)(in_fpscr >> 0x18);
      fVar5 = fVar10;
      if (((bool)(bVar2 >> 5 & 1) && !(bool)(bVar2 >> 6)) &&
         (uVar4 = uVar4 & 0xfffffff | (uint)(fVar6 < fparam_1) << 0x1f |
                  (uint)(fVar6 == fparam_1) << 0x1e,
         in_fpscr = uVar4 | (uint)(NAN(fVar6) || NAN(fparam_1)) << 0x1c,
         bVar2 = (byte)(uVar4 >> 0x18), fVar5 = fVar9,
         (bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1))) {
        fVar5 = (fparam_1 - fVar6) / (fparam_1 - fparam_0);
      }
      if (0x7f < iVar3) break;
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      *(float *)(param_1 + iVar1) = fVar5;
    }
    return fVar5 - *(float *)(param_1 + 0x1fc);
  case 1:
    fVar6 = fparam_1 - fparam_0;
    iVar3 = 0;
    fVar10 = DAT_003fc1f0;
    fVar11 = DAT_003fc1ec;
    fVar13 = DAT_003fc1f8;
    fVar9 = DAT_003fc1f4;
    while( true ) {
      fVar5 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      fVar7 = (fparam_3 + fVar5 * fVar10) * fVar8;
      uVar4 = in_fpscr & 0xfffffff | (uint)(fVar7 < fVar13) << 0x1f |
              (uint)(fVar7 == fVar13) << 0x1e;
      bVar2 = (byte)(uVar4 >> 0x18);
      fVar5 = fVar13;
      if (((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(fVar7) || NAN(fVar13))) &&
         (uVar4 = in_fpscr & 0xfffffff | (uint)(fVar9 <= fVar7) << 0x1d, fVar5 = fVar7,
         !SUB41(uVar4 >> 0x1d,0))) {
        fVar5 = fVar9;
      }
      fVar7 = (-*(float *)(param_3 + 0x2c) + -(*(float *)(param_3 + 0x28) * fVar5)) /
              (*(float *)(param_3 + 0x3c) + *(float *)(param_3 + 0x38) * fVar5);
      in_fpscr = uVar4 & 0xfffffff | (uint)(fVar7 == fparam_0) << 0x1e |
                 (uint)(fparam_0 <= fVar7) << 0x1d;
      bVar2 = (byte)(in_fpscr >> 0x18);
      fVar5 = fVar11;
      if (((bool)(bVar2 >> 5 & 1) && !(bool)(bVar2 >> 6)) &&
         (uVar4 = uVar4 & 0xfffffff | (uint)(fVar7 < fparam_1) << 0x1f |
                  (uint)(fVar7 == fparam_1) << 0x1e,
         in_fpscr = uVar4 | (uint)(NAN(fVar7) || NAN(fparam_1)) << 0x1c,
         bVar2 = (byte)(uVar4 >> 0x18), fVar5 = fVar13,
         (bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1))) {
        func_00590B1C(-(((fVar7 - fparam_0) * fparam_2) / fVar6));
      }
      if (0x7f < iVar3) break;
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      *(float *)(param_1 + iVar1) = fVar5;
    }
    break;
  case 2:
    iVar3 = 0;
    fVar6 = fparam_1 - fparam_0;
    fVar10 = DAT_003fc1f4;
    fVar13 = DAT_003fc1ec;
    while( true ) {
      fVar5 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      fVar7 = (fparam_3 + fVar5 * fVar11) * fVar8;
      uVar4 = in_fpscr & 0xfffffff | (uint)(fVar7 < fVar9) << 0x1f | (uint)(fVar7 == fVar9) << 0x1e;
      bVar2 = (byte)(uVar4 >> 0x18);
      fVar5 = fVar9;
      if (((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(fVar7) || NAN(fVar9))) &&
         (uVar4 = in_fpscr & 0xfffffff | (uint)(fVar10 <= fVar7) << 0x1d, fVar5 = fVar7,
         !SUB41(uVar4 >> 0x1d,0))) {
        fVar5 = fVar10;
      }
      fVar7 = (-*(float *)(param_3 + 0x2c) + -(*(float *)(param_3 + 0x28) * fVar5)) /
              (*(float *)(param_3 + 0x3c) + *(float *)(param_3 + 0x38) * fVar5);
      in_fpscr = uVar4 & 0xfffffff | (uint)(fVar7 == fparam_0) << 0x1e |
                 (uint)(fparam_0 <= fVar7) << 0x1d;
      bVar2 = (byte)(in_fpscr >> 0x18);
      fVar5 = fVar13;
      if (((bool)(bVar2 >> 5 & 1) && !(bool)(bVar2 >> 6)) &&
         (uVar4 = uVar4 & 0xfffffff | (uint)(fVar7 < fparam_1) << 0x1f |
                  (uint)(fVar7 == fparam_1) << 0x1e,
         in_fpscr = uVar4 | (uint)(NAN(fVar7) || NAN(fparam_1)) << 0x1c,
         bVar2 = (byte)(uVar4 >> 0x18), fVar5 = fVar9,
         (bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1))) {
        fVar5 = ((fVar7 - fparam_0) * fparam_2) / fVar6;
        func_00590B1C(-(fVar5 * fVar5));
      }
      if (0x7f < iVar3) break;
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      *(float *)(param_1 + iVar1) = fVar5;
    }
    break;
  case 3:
    fVar9 = fparam_1 - fparam_0;
    iVar3 = 0;
    fVar10 = DAT_003fc1f4;
    fVar11 = DAT_003fc1f8;
    fVar13 = DAT_003fc1f0;
    while( true ) {
      fVar5 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      fVar6 = (fparam_3 + fVar5 * fVar13) * fVar8;
      uVar4 = in_fpscr & 0xfffffff | (uint)(fVar6 < fVar11) << 0x1f |
              (uint)(fVar6 == fVar11) << 0x1e;
      bVar2 = (byte)(uVar4 >> 0x18);
      fVar5 = fVar11;
      if (((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(fVar6) || NAN(fVar11))) &&
         (uVar4 = in_fpscr & 0xfffffff | (uint)(fVar10 <= fVar6) << 0x1d, fVar5 = fVar6,
         !SUB41(uVar4 >> 0x1d,0))) {
        fVar5 = fVar10;
      }
      fVar5 = (-*(float *)(param_3 + 0x2c) + -(*(float *)(param_3 + 0x28) * fVar5)) /
              (*(float *)(param_3 + 0x3c) + *(float *)(param_3 + 0x38) * fVar5);
      in_fpscr = uVar4 & 0xfffffff | (uint)(fVar5 == fparam_0) << 0x1e |
                 (uint)(fparam_0 <= fVar5) << 0x1d;
      bVar2 = (byte)(in_fpscr >> 0x18);
      if (!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) {
        fVar5 = ALBW_AS_F32(uVar12);
      }
      else {
        func_00590B1C(-(((fVar5 - fparam_0) * fparam_2) / fVar9));
      }
      if (0x7f < iVar3) break;
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      *(float *)(param_1 + iVar1) = fVar5;
    }
    break;
  case 4:
    fVar9 = fparam_1 - fparam_0;
    iVar3 = 0;
    fVar10 = DAT_003fc1f4;
    fVar11 = DAT_003fc1f8;
    fVar13 = DAT_003fc1f0;
    while( true ) {
      fVar5 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      fVar6 = (fparam_3 + fVar5 * fVar13) * fVar8;
      uVar4 = in_fpscr & 0xfffffff | (uint)(fVar6 < fVar11) << 0x1f |
              (uint)(fVar6 == fVar11) << 0x1e;
      bVar2 = (byte)(uVar4 >> 0x18);
      fVar5 = fVar11;
      if (((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(fVar6) || NAN(fVar11))) &&
         (uVar4 = in_fpscr & 0xfffffff | (uint)(fVar10 <= fVar6) << 0x1d, fVar5 = fVar6,
         !SUB41(uVar4 >> 0x1d,0))) {
        fVar5 = fVar10;
      }
      fVar5 = (-*(float *)(param_3 + 0x2c) + -(*(float *)(param_3 + 0x28) * fVar5)) /
              (*(float *)(param_3 + 0x3c) + *(float *)(param_3 + 0x38) * fVar5);
      in_fpscr = uVar4 & 0xfffffff | (uint)(fVar5 == fparam_0) << 0x1e |
                 (uint)(fparam_0 <= fVar5) << 0x1d;
      bVar2 = (byte)(in_fpscr >> 0x18);
      if (!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) {
        fVar5 = ALBW_AS_F32(uVar12);
      }
      else {
        fVar5 = ((fVar5 - fparam_0) * fparam_2) / fVar9;
        func_00590B1C(-(fVar5 * fVar5));
      }
      if (0x7f < iVar3) break;
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      *(float *)(param_1 + iVar1) = fVar5;
    }
    break;
  default:
    return fVar9;
  }
  return fVar5 - *(float *)(param_1 + 0x1fc);
}

