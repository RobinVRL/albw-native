#include "ghidra_types.h"

extern int func_0023194C(int param_1,undefined4 param_2);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_00532C2C(int param_1);
extern float func_00546258(int param_1);
extern undefined4 *DAT_0031c2c4;
extern float DAT_0031c2c8;
extern float DAT_0031c2cc;

// USA 0031C110 <- EU 0031C0EC (Ghidra, non-matching)
// GLOBAL DAT_0031c2c4 undefined4 *
// GLOBAL DAT_0031c2c8 float
// GLOBAL DAT_0031c2cc float

undefined4 func_0031C110(int param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (*(char *)(param_1 + 0xe8) == '\0') {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0xe0);
  fVar9 = func_00546258(*DAT_0031c2c4);
  *(float *)(param_1 + 0xe0) = fVar9;
  uVar4 = *(uint *)(*(int *)(param_1 + 0x6c) + *(char *)(param_1 + 0x54) * 8 + 4);
  piVar8 = (int *)(*(int *)(param_1 + 0x6c) + *(char *)(param_1 + 0x54) * 8);
  if ((uVar4 & 1) != 0) {
    piVar8 = (int *)(*piVar8 + *(int *)(*(int *)(param_1 + 100) + ((int)uVar4 >> 1)));
  }
  (*(code *)*piVar8)();
  iVar5 = *(int *)(param_1 + 0x50) + 1;
  *(int *)(param_1 + 0x50) = iVar5;
  if (*(int *)(param_1 + 0x60) != 0) {
    fVar9 = (float)VectorUnsignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x60),1,fVar9);
  }
  fVar9 = DAT_0031c2cc;
  fVar11 = *(float *)(param_1 + 0xe0);
  iVar5 = *(int *)(param_1 + 0x1c);
  uVar4 = in_fpscr & 0xfffffff | (uint)(DAT_0031c2c8 <= fVar11) << 0x1d;
  uVar6 = (uint)*(short *)(param_1 + 0x82);
  fVar10 = DAT_0031c2c8;
  if ((SUB41(uVar4 >> 0x1d,0)) &&
     (uVar2 = in_fpscr & 0xfffffff | (uint)(fVar11 < DAT_0031c2cc) << 0x1f |
              (uint)(fVar11 == DAT_0031c2cc) << 0x1e,
     uVar4 = uVar2 | (uint)(NAN(fVar11) || NAN(DAT_0031c2cc)) << 0x1c, bVar3 = (byte)(uVar2 >> 0x18)
     , fVar10 = fVar11, !(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(uVar4 >> 0x1c) & 1))) {
    fVar10 = DAT_0031c2cc;
  }
  puVar1 = (uint *)(iVar5 + 8);
  if (uVar6 < *puVar1) {
    iVar5 = *(int *)(iVar5 + 0xc);
  }
  if (uVar6 < *puVar1) {
    iVar5 = iVar5 + uVar6 * 0x38;
  }
  else {
    iVar5 = *(int *)(iVar5 + 0xc);
  }
  fVar10 = (DAT_0031c2cc - fVar10) * *(float *)(param_1 + 0xf0);
  *(float *)(iVar5 + 0x14) = fVar10;
  *(float *)(*(int *)(iVar5 + 0x10) + 0x10) = fVar10;
  iVar5 = *(int *)(param_1 + 0xec);
  if (iVar5 == -1) {
    iVar5 = func_00532C2C(param_1 + 0x8c);
    iVar7 = func_00532C2C(param_1 + 0x80);
    if (iVar7 <= iVar5) {
      return 0;
    }
    return func_0023194C(param_1 + 0x8c,(int)(fVar9 * *(float *)(param_1 + 0xf0)));
  }
  if (0x28 < iVar5) {
    if (0x3b < iVar5) {
      func_0023194C(param_1 + 0x8c,(int)(fVar9 * *(float *)(param_1 + 0xf0)));
      iVar5 = -1;
      goto LAB_0031c220;
    }
    iVar5 = func_00532C2C(param_1 + 0x80);
    fVar11 = (float)VectorSignedToFloat(iVar5,(byte)(uVar4 >> 0x15) & 3);
    iVar5 = func_00532C2C(param_1 + 0x8c);
    fVar9 = (float)VectorSignedToFloat(iVar5,(byte)(uVar4 >> 0x15) & 3);
    fVar10 = (float)VectorSignedToFloat(0x3c - *(int *)(param_1 + 0xec),(byte)(uVar4 >> 0x15) & 3);
    func_0023194C(param_1 + 0x8c,(int)((fVar11 - fVar9) / fVar10 + fVar9));
  }
  iVar5 = *(int *)(param_1 + 0xec) + 1;
LAB_0031c220:
  *(int *)(param_1 + 0xec) = iVar5;
  return 0;
}

