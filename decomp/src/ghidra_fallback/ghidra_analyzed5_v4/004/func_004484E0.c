#include "ghidra_types.h"

extern int func_00448138(undefined4 param_1,int param_2,float fparam_0);
extern float DAT_004486bc;
extern float DAT_004486c0;
extern float DAT_004486c4;
extern float DAT_004486c8;
extern float DAT_004486cc;
extern float *DAT_004486d0;
extern uint DAT_004486d4;

// USA 004484E0 <- EU 004484B8 (Ghidra, non-matching)
// GLOBAL DAT_004486bc float
// GLOBAL DAT_004486c0 float
// GLOBAL DAT_004486c4 float
// GLOBAL DAT_004486c8 float
// GLOBAL DAT_004486cc float
// GLOBAL DAT_004486d0 float *
// GLOBAL DAT_004486d4 uint

void func_004484E0(int param_1)

{
  uint uVar1;
  byte bVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  
  fVar12 = DAT_004486c4;
  fVar11 = DAT_004486c0;
  fVar15 = DAT_004486bc;
  uVar1 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x264) == DAT_004486bc) << 0x1e;
  bVar6 = false;
  if (SUB41(uVar1 >> 0x1e,0)) {
    uVar1 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x268) == DAT_004486bc) << 0x1e;
    bVar6 = SUB41(uVar1 >> 0x1e,0);
  }
  if (bVar6) {
    return;
  }
  fVar9 = *(float *)(param_1 + 0x250) + *(float *)(param_1 + 0x264);
  uVar4 = uVar1 & 0xfffffff | (uint)(DAT_004486c0 <= fVar9) << 0x1d;
  fVar10 = DAT_004486c0;
  if ((SUB41(uVar4 >> 0x1d,0)) &&
     (uVar4 = uVar1 & 0xfffffff | (uint)(fVar9 < DAT_004486c4) << 0x1f |
              (uint)(fVar9 == DAT_004486c4) << 0x1e, bVar2 = (byte)(uVar4 >> 0x18), fVar10 = fVar9,
     !(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(fVar9) || NAN(DAT_004486c4)))) {
    fVar10 = DAT_004486c4;
  }
  iVar13 = (int)fVar10;
  fVar9 = (float)VectorSignedToFloat(iVar13,(byte)(uVar4 >> 0x15) & 3);
  uVar1 = uVar4 & 0xfffffff | (uint)(fVar9 == fVar10) << 0x1e | (uint)(fVar10 <= fVar9) << 0x1d;
  bVar2 = (byte)(uVar1 >> 0x18);
  bVar6 = (bool)(bVar2 >> 6);
  if (!bVar6) {
    uVar1 = uVar4 & 0xfffffff | (uint)(DAT_004486bc == fVar10) << 0x1e |
            (uint)(fVar10 <= DAT_004486bc) << 0x1d;
    bVar2 = (byte)(uVar1 >> 0x18);
    bVar6 = (bool)(bVar2 >> 6);
  }
  if ((bool)(bVar2 >> 5 & 1) && !bVar6) {
    iVar13 = iVar13 + -1;
  }
  fVar9 = (float)VectorSignedToFloat(iVar13,(byte)(uVar1 >> 0x15) & 3);
  *(float *)(param_1 + 0x250) = fVar9;
  fVar10 = *(float *)(param_1 + 0x254) + *(float *)(param_1 + 0x268);
  uVar4 = uVar1 & 0xfffffff | (uint)(fVar11 <= fVar10) << 0x1d;
  if ((SUB41(uVar4 >> 0x1d,0)) &&
     (uVar4 = uVar1 & 0xfffffff | (uint)(fVar10 < fVar12) << 0x1f | (uint)(fVar10 == fVar12) << 0x1e
     , bVar2 = (byte)(uVar4 >> 0x18), fVar11 = fVar10,
     !(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(fVar10) || NAN(fVar12)))) {
    fVar11 = fVar12;
  }
  iVar13 = (int)fVar11;
  fVar12 = (float)VectorSignedToFloat(iVar13,(byte)(uVar4 >> 0x15) & 3);
  uVar1 = uVar4 & 0xfffffff | (uint)(fVar12 == fVar11) << 0x1e | (uint)(fVar11 <= fVar12) << 0x1d;
  bVar2 = (byte)(uVar1 >> 0x18);
  bVar6 = (bool)(bVar2 >> 6);
  if (!bVar6) {
    uVar1 = uVar4 & 0xfffffff | (uint)(fVar15 == fVar11) << 0x1e | (uint)(fVar11 <= fVar15) << 0x1d;
    bVar2 = (byte)(uVar1 >> 0x18);
    bVar6 = (bool)(bVar2 >> 6);
  }
  if ((bool)(bVar2 >> 5 & 1) && !bVar6) {
    iVar13 = iVar13 + -1;
  }
  fVar11 = (float)VectorSignedToFloat(iVar13,(byte)(uVar1 >> 0x15) & 3);
  *(float *)(param_1 + 0x254) = fVar11;
  fVar9 = fVar9 - *(float *)(param_1 + 0x248);
  fVar11 = fVar11 - *(float *)(param_1 + 0x24c);
  func_00448138(param_1,(int)*(char *)(param_1 + 0x27c),SQRT(fVar9 * fVar9 + fVar11 * fVar11));
  fVar12 = DAT_004486cc;
  fVar11 = DAT_004486c8;
  *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_1 + 0x248);
  *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_1 + 0x24c);
  pfVar3 = DAT_004486d0;
  *(float *)(param_1 + 0x260) = fVar11;
  fVar9 = *pfVar3 - *(float *)(param_1 + 0x264);
  fVar10 = pfVar3[1] - *(float *)(param_1 + 0x268);
  fVar14 = SQRT(fVar9 * fVar9 + fVar10 * fVar10);
  if (fVar12 < fVar14) {
    fVar11 = fVar11 / fVar14;
    *(float *)(param_1 + 0x264) = *(float *)(param_1 + 0x264) + fVar12 * fVar9 * fVar11;
    *(float *)(param_1 + 0x268) = *(float *)(param_1 + 0x268) + fVar12 * fVar10 * fVar11;
  }
  else {
    fVar11 = pfVar3[1];
    *(float *)(param_1 + 0x264) = *pfVar3;
    *(float *)(param_1 + 0x268) = fVar11;
  }
  uVar1 = DAT_004486d4;
  uVar4 = *(uint *)(param_1 + 0x250);
  uVar5 = DAT_004486d4 + 0x80000000;
  if ((uVar4 <= DAT_004486d4) || (fVar15 <= *(float *)(param_1 + 0x264))) {
    bVar8 = SBORROW4(uVar4,uVar5);
    bVar6 = (int)(uVar4 - uVar5) < 0;
    bVar7 = uVar4 == uVar5;
    if ((int)uVar5 < (int)uVar4) {
      fVar11 = *(float *)(param_1 + 0x264);
      bVar6 = fVar11 < fVar15;
      bVar7 = fVar11 == fVar15;
      bVar8 = NAN(fVar11) || NAN(fVar15);
    }
    if (bVar7 || bVar6 != bVar8) goto LAB_00448680;
  }
  *(float *)(param_1 + 0x264) = fVar15;
LAB_00448680:
  uVar4 = *(uint *)(param_1 + 0x254);
  if ((uVar4 <= uVar1) || (fVar15 <= *(float *)(param_1 + 0x268))) {
    bVar8 = SBORROW4(uVar4,uVar5);
    bVar6 = (int)(uVar4 - uVar5) < 0;
    bVar7 = uVar4 == uVar5;
    if ((int)uVar5 < (int)uVar4) {
      fVar11 = *(float *)(param_1 + 0x268);
      bVar6 = fVar11 < fVar15;
      bVar7 = fVar11 == fVar15;
      bVar8 = NAN(fVar11) || NAN(fVar15);
    }
    if (bVar7 || bVar6 != bVar8) {
      return;
    }
  }
  *(float *)(param_1 + 0x268) = fVar15;
  return;
}

