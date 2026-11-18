#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern float func_003E19E8(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4);
extern int func_004378FC(undefined4 param_1);
extern float DAT_0011f69c;
extern float DAT_0011f6a0;
extern float DAT_0011f6a4;
extern int DAT_0011f6a8;
extern int *DAT_0011f6ac;
extern float DAT_0011f6b0;

// USA 0011F468 <- EU 0011F468 (Ghidra, non-matching)
// GLOBAL DAT_0011f69c float
// GLOBAL DAT_0011f6a0 float
// GLOBAL DAT_0011f6a4 float
// GLOBAL DAT_0011f6a8 int
// GLOBAL DAT_0011f6ac int *
// GLOBAL DAT_0011f6b0 float

float func_0011F468(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fparam_0;
  float fVar11;
  float fparam_3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 ((float *)(albw_frame + 0x8))
  fVar9 = (float)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
  uVar3 = func_004378FC(param_2);
  iVar2 = DAT_0011f6a8;
  fVar8 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = fVar9 / fVar8;
  uVar6 = in_fpscr & 0xfffffff | (uint)(DAT_0011f69c <= fVar9) << 0x1d;
  fVar8 = DAT_0011f69c;
  if ((SUB41(uVar6 >> 0x1d,0)) &&
     (uVar6 = in_fpscr & 0xfffffff | (uint)(fVar9 < DAT_0011f6a0) << 0x1f |
              (uint)(fVar9 == DAT_0011f6a0) << 0x1e, bVar1 = (byte)(uVar6 >> 0x18), fVar8 = fVar9,
     !(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(fVar9) || NAN(DAT_0011f6a0)))) {
    fVar8 = DAT_0011f6a0;
  }
  local_38[0] = *(float *)(DAT_0011f6a8 + 0x114);
  local_38[1] = ALBW_AS_F32(*(undefined4 *)(DAT_0011f6a8 + 0x118));
  local_38[2] = ALBW_AS_F32(*(undefined4 *)(DAT_0011f6a8 + 0x11c));
  local_38[3] = ALBW_AS_F32(*(undefined4 *)(DAT_0011f6a8 + 0x120));
  fVar9 = (float)VectorSignedToFloat(param_2,(byte)(uVar6 >> 0x15) & 3);
  uVar5 = uVar6 & 0xfffffff | (uint)(fVar9 < DAT_0011f6a4) << 0x1f |
          (uint)(fVar9 == DAT_0011f6a4) << 0x1e;
  uVar4 = uVar5 | (uint)(NAN(fVar9) || NAN(DAT_0011f6a4)) << 0x1c;
  bVar1 = (byte)(uVar5 >> 0x18);
  if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar4 >> 0x1c) & 1)) {
    fVar9 = DAT_0011f6a4;
  }
  fVar11 = local_38[(int)fVar9];
  fVar9 = (float)VectorSignedToFloat(param_2,(byte)(uVar4 >> 0x15) & 3);
  local_38[0] = *(float *)(DAT_0011f6a8 + 0x124);
  local_38[1] = ALBW_AS_F32(*(undefined4 *)(DAT_0011f6a8 + 0x128));
  local_38[2] = ALBW_AS_F32(*(undefined4 *)(DAT_0011f6a8 + 300));
  local_38[3] = ALBW_AS_F32(*(undefined4 *)(DAT_0011f6a8 + 0x130));
  uVar6 = uVar6 & 0xfffffff | (uint)(fVar9 < DAT_0011f6a4) << 0x1f |
          (uint)(fVar9 == DAT_0011f6a4) << 0x1e;
  uVar5 = uVar6 | (uint)(NAN(fVar9) || NAN(DAT_0011f6a4)) << 0x1c;
  bVar1 = (byte)(uVar6 >> 0x18);
  if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar5 >> 0x1c) & 1)) {
    fVar9 = DAT_0011f6a4;
  }
  fparam_3 = local_38[(int)fVar9];
  fVar10 = DAT_0011f6a4;
  fparam_0 = DAT_0011f69c;
  fVar7 = func_003E19E8(DAT_0011f69c,fVar11,DAT_0011f6a0,fparam_3,fVar8);
  fVar9 = (float)VectorSignedToFloat(param_2,(byte)(uVar5 >> 0x15) & 3);
  local_38[0] = *(float *)(iVar2 + 0x134);
  local_38[1] = ALBW_AS_F32(*(undefined4 *)(iVar2 + 0x138));
  local_38[2] = ALBW_AS_F32(*(undefined4 *)(iVar2 + 0x13c));
  local_38[3] = ALBW_AS_F32(*(undefined4 *)(iVar2 + 0x140));
  uVar5 = uVar5 & 0xfffffff | (uint)(fVar9 < fVar10) << 0x1f | (uint)(fVar9 == fVar10) << 0x1e;
  uVar6 = uVar5 | (uint)(NAN(fVar9) || NAN(fVar10)) << 0x1c;
  bVar1 = (byte)(uVar5 >> 0x18);
  if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar6 >> 0x1c) & 1)) {
    fVar9 = fVar10;
  }
  fVar9 = local_38[(int)fVar9];
  fVar9 = func_003E19E8(fparam_0,fVar11 * fVar9,fVar9,fparam_3 * fVar9,fVar8);
  fVar8 = (float)VectorSignedToFloat(param_2,(byte)(uVar6 >> 0x15) & 3);
  local_38[0] = *(float *)(iVar2 + 0xb4);
  local_38[1] = ALBW_AS_F32(*(undefined4 *)(iVar2 + 0xb8));
  local_38[2] = ALBW_AS_F32(*(undefined4 *)(iVar2 + 0xbc));
  local_38[3] = ALBW_AS_F32(*(undefined4 *)(iVar2 + 0xc0));
  uVar6 = uVar6 & 0xfffffff;
  uVar5 = uVar6 | (uint)(fVar8 < fVar10) << 0x1f | (uint)(fVar8 == fVar10) << 0x1e;
  uVar4 = uVar5 | (uint)(NAN(fVar8) || NAN(fVar10)) << 0x1c;
  bVar1 = (byte)(uVar5 >> 0x18);
  if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar4 >> 0x1c) & 1)) {
    fVar8 = fVar10;
  }
  fVar11 = (float)VectorSignedToFloat(param_2,(byte)(uVar4 >> 0x15) & 3);
  local_38[0] = *(float *)(iVar2 + 0xc4);
  local_38[1] = ALBW_AS_F32(*(undefined4 *)(iVar2 + 200));
  local_38[2] = ALBW_AS_F32(*(undefined4 *)(iVar2 + 0xcc));
  local_38[3] = ALBW_AS_F32(*(undefined4 *)(iVar2 + 0xd0));
  uVar5 = uVar6 | (uint)(fVar11 < fVar10) << 0x1f | (uint)(fVar11 == fVar10) << 0x1e;
  uVar4 = uVar5 | (uint)(NAN(fVar11) || NAN(fVar10)) << 0x1c;
  bVar1 = (byte)(uVar5 >> 0x18);
  if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar4 >> 0x1c) & 1)) {
    fVar11 = fVar10;
  }
  local_38[0] = *(float *)(iVar2 + 0xb4);
  local_38[1] = ALBW_AS_F32(*(undefined4 *)(iVar2 + 0xb8));
  local_38[2] = ALBW_AS_F32(*(undefined4 *)(iVar2 + 0xbc));
  local_38[3] = ALBW_AS_F32(*(undefined4 *)(iVar2 + 0xc0));
  fVar9 = local_38[(int)fVar8] + (local_38[(int)fVar11] - local_38[(int)fVar8]) * fVar9 * fVar7;
  fVar8 = (float)VectorSignedToFloat(param_2,(byte)(uVar4 >> 0x15) & 3);
  uVar5 = uVar6 | (uint)(fVar8 < fVar10) << 0x1f | (uint)(fVar8 == fVar10) << 0x1e;
  uVar4 = uVar5 | (uint)(NAN(fVar8) || NAN(fVar10)) << 0x1c;
  bVar1 = (byte)(uVar5 >> 0x18);
  if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar4 >> 0x1c) & 1)) {
    fVar8 = fVar10;
  }
  fVar11 = (float)VectorSignedToFloat(param_2,(byte)(uVar4 >> 0x15) & 3);
  local_38[0] = *(float *)(iVar2 + 0xc4);
  local_38[1] = ALBW_AS_F32(*(undefined4 *)(iVar2 + 200));
  local_38[2] = ALBW_AS_F32(*(undefined4 *)(iVar2 + 0xcc));
  local_38[3] = ALBW_AS_F32(*(undefined4 *)(iVar2 + 0xd0));
  uVar6 = uVar6 | (uint)(fVar11 < fVar10) << 0x1f | (uint)(fVar11 == fVar10) << 0x1e;
  uVar5 = uVar6 | (uint)(NAN(fVar11) || NAN(fVar10)) << 0x1c;
  bVar1 = (byte)(uVar6 >> 0x18);
  if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar5 >> 0x1c) & 1)) {
    fVar11 = fVar10;
  }
  fVar11 = (local_38[(int)fVar8] + (local_38[(int)fVar11] - local_38[(int)fVar8]) * fVar7) - fVar9;
  uVar6 = func_00111A64((uint *)(*DAT_0011f6ac + 0x660));
  fVar8 = (float)VectorUnsignedToFloat(uVar6,(byte)(uVar5 >> 0x15) & 3);
  return fVar8 * DAT_0011f6b0 * fVar11 + fVar9;
}

