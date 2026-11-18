#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern float func_00490628(float fparam_0);
extern float func_004906A8(float fparam_0);
extern uint DAT_005111e4;
extern float DAT_005111e8;
extern float DAT_005111ec;
extern float DAT_005111f0;
extern float DAT_005111f4;

// USA 00511094 <- EU 0051106C (Ghidra, non-matching)
// GLOBAL DAT_005111e4 uint
// GLOBAL DAT_005111e8 float
// GLOBAL DAT_005111ec float
// GLOBAL DAT_005111f0 float
// GLOBAL DAT_005111f4 float

void func_00511094(int param_1,float *param_2,int param_3,int param_4,float fparam_0)

{
  uint uVar1;
  byte bVar2;
  float *pfVar3;
  uint extraout_r1;
  uint uVar4;
  bool bVar5;
  uint in_fpscr;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c ((float *)(albw_frame + 0x14))
  func_00115154(&local_30,local_2c,*(uint *)(param_1 + 1000));
  fVar9 = *param_2 + local_30 * fparam_0;
  fVar10 = param_2[2] + local_2c[0] * fparam_0;
  if (param_3 != 0) {
    pfVar3 = (float *)(param_3 + param_4 * 0xc);
    fVar11 = pfVar3[1];
    fVar8 = *pfVar3;
    uVar12 = func_00114608(DAT_005111e4,extraout_r1);
    uVar4 = *(uint *)(param_1 + 1000);
    uVar1 = (int)uVar12 + uVar4 >> 0x1d;
    if ((uVar1 != 0 && uVar1 != 2) && (uVar1 != 4 && uVar1 != 6)) {
      uVar4 = uVar4 + 0xe0000000;
    }
    func_00115154(&local_38,&local_34,uVar4);
    fVar9 = fVar9 + local_38 * fVar11 + local_34 * fVar8;
    fVar10 = fVar10 + local_34 * fVar11 + -local_38 * fVar8;
  }
  fVar8 = DAT_005111e8;
  fVar11 = func_004906A8(DAT_005111ec);
  fVar11 = func_00490628(fVar11 * fVar8);
  fVar6 = fVar9 * (DAT_005111f0 / fVar11) + DAT_005111f4;
  fVar9 = fVar10 * (DAT_005111f0 / fVar11) + DAT_005111f4;
  iVar7 = (int)fVar6;
  fVar10 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar10 == fVar6) << 0x1e | (uint)(fVar6 <= fVar10) << 0x1d;
  bVar2 = (byte)(uVar1 >> 0x18);
  bVar5 = (bool)(bVar2 >> 6);
  if (!bVar5) {
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar8 == fVar6) << 0x1e | (uint)(fVar6 <= fVar8) << 0x1d;
    bVar2 = (byte)(uVar1 >> 0x18);
    bVar5 = (bool)(bVar2 >> 6);
  }
  if ((bool)(bVar2 >> 5 & 1) && !bVar5) {
    iVar7 = iVar7 + -1;
  }
  fVar6 = (float)VectorSignedToFloat(iVar7,(byte)(uVar1 >> 0x15) & 3);
  iVar7 = (int)fVar9;
  fVar10 = (float)VectorSignedToFloat(iVar7,(byte)(uVar1 >> 0x15) & 3);
  uVar4 = uVar1 & 0xfffffff | (uint)(fVar10 == fVar9) << 0x1e | (uint)(fVar9 <= fVar10) << 0x1d;
  bVar2 = (byte)(uVar4 >> 0x18);
  bVar5 = (bool)(bVar2 >> 6);
  if (!bVar5) {
    uVar4 = uVar1 & 0xfffffff | (uint)(fVar8 == fVar9) << 0x1e | (uint)(fVar9 <= fVar8) << 0x1d;
    bVar2 = (byte)(uVar4 >> 0x18);
    bVar5 = (bool)(bVar2 >> 6);
  }
  if ((bool)(bVar2 >> 5 & 1) && !bVar5) {
    iVar7 = iVar7 + -1;
  }
  fVar9 = param_2[1];
  fVar10 = (float)VectorSignedToFloat(iVar7,(byte)(uVar4 >> 0x15) & 3);
  *(float *)(param_1 + 0x450) = fVar6 * fVar11;
  *(float *)(param_1 + 0x454) = fVar9;
  *(float *)(param_1 + 0x458) = fVar10 * fVar11;
  return;
}

