#include "ghidra_types.h"

extern int func_002ACD14(undefined4 *param_1,int param_2,int param_3);
extern int func_004F5494(undefined4 *param_1);
extern int func_004FCEDC(int param_1,float fparam_0);
extern int func_00520FC0(void);
extern int func_006624F4(undefined4 *param_1,undefined1 param_2);
extern float DAT_002acb7c;
extern float DAT_002acb80;
extern float DAT_002acb84;

// USA 002ACA04 <- EU 002AC9E0 (Ghidra, non-matching)
// GLOBAL DAT_002acb7c float
// GLOBAL DAT_002acb80 float
// GLOBAL DAT_002acb84 float

undefined4 func_002ACA04(undefined4 *param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar12 = DAT_002acb80;
  fVar8 = DAT_002acb7c;
  *(short *)(param_1 + 0xb0) = *(short *)(param_1 + 0xb0) + 1;
  uVar5 = param_1[0xb];
  if (uVar5 == 0) {
    bVar2 = true;
    iVar6 = 0;
    fVar9 = fVar12;
  }
  else {
    uVar3 = param_1[10];
    bVar2 = false;
    fVar9 = fVar8;
    if ((uVar3 != 0) && (fVar9 = fVar12, uVar3 < uVar5)) {
      fVar9 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
      fVar9 = fVar9 * ALBW_AS_F32(param_1[0xc]);
    }
    iVar6 = uVar5 - uVar3;
  }
  iVar4 = iVar6;
  if (iVar6 < 2) {
    iVar4 = 1;
  }
  fVar10 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
  fVar11 = *(float *)(param_1[0xd] + 0x4f0);
  fVar7 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1[0xd] + 0x4f0) = fVar11 + (fVar12 - fVar11) * (fVar12 / fVar10);
  fVar10 = *(float *)(param_1[0xd] + 0x574);
  *(float *)(param_1[0xd] + 0x574) = fVar10 + (fVar8 - fVar10) * (fVar12 / fVar7);
  iVar4 = func_00520FC0();
  fVar8 = *(float *)(iVar4 + 4) + DAT_002acb84;
  fVar7 = *(float *)(param_1[0xd] + 0x3d4);
  uVar5 = in_fpscr & 0xfffffff | (uint)(fVar7 < fVar8) << 0x1f | (uint)(fVar7 == fVar8) << 0x1e;
  bVar1 = (byte)(uVar5 >> 0x18);
  if (!(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(fVar7) || NAN(fVar8))) {
    if (iVar6 < 2) {
      iVar6 = 1;
    }
    fVar10 = (float)VectorSignedToFloat(iVar6,(byte)(uVar5 >> 0x15) & 3);
    *(float *)(param_1[0xd] + 0x3d4) = fVar7 + (fVar8 - fVar7) * (fVar12 / fVar10);
  }
  if (!bVar2) {
    func_004FCEDC(param_1[0xd] + 0x5a8,
                  (fVar12 - fVar9) * *(float *)(*(int *)(param_1[0xd] + 0x2d0) + 0x2c));
  }
  if ((uint)param_1[0xb] <= (uint)param_1[10]) {
    func_004F5494(param_1 + 0x3b);
    return func_006624F4(param_1,0);
  }
  param_1[10] = param_1[10] + 1;
  return func_002ACD14(param_1,0,0);
}

