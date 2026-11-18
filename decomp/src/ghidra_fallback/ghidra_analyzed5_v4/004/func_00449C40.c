#include "ghidra_types.h"

extern int func_0051AB7C(int param_1);
extern int *DAT_00449d30;
extern int *DAT_00449d34;
extern float DAT_00449d38;
extern float DAT_00449d3c;
extern float DAT_00449d40;
extern float DAT_00449d44;
extern float DAT_00449d48;
extern int *DAT_00449d4c;

// USA 00449C40 <- EU 00449C18 (Ghidra, non-matching)
// GLOBAL DAT_00449d30 int *
// GLOBAL DAT_00449d34 int *
// GLOBAL DAT_00449d38 float
// GLOBAL DAT_00449d3c float
// GLOBAL DAT_00449d40 float
// GLOBAL DAT_00449d44 float
// GLOBAL DAT_00449d48 float
// GLOBAL DAT_00449d4c int *

void func_00449C40(int param_1)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  bool bVar6;
  uint in_fpscr;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  int iVar12;
  float fVar13;
  
  if (*(char *)(*DAT_00449d30 + 0x18) == '\0' && *(int *)(*DAT_00449d30 + 0x1c) == 0xf) {
    fVar8 = *(float *)(*DAT_00449d4c + 0x5b44);
    fVar13 = *(float *)(*DAT_00449d4c + 0x5b4c);
  }
  else {
    pfVar5 = (float *)func_0051AB7C(*DAT_00449d34);
    fVar8 = *pfVar5;
    fVar13 = pfVar5[2];
  }
  fVar4 = DAT_00449d44;
  fVar3 = DAT_00449d40;
  fVar11 = DAT_00449d3c;
  fVar8 = fVar8 * DAT_00449d38;
  uVar7 = in_fpscr & 0xfffffff | (uint)(DAT_00449d3c <= fVar8) << 0x1d;
  fVar9 = DAT_00449d3c;
  if ((SUB41(uVar7 >> 0x1d,0)) &&
     (uVar7 = in_fpscr & 0xfffffff | (uint)(fVar8 < DAT_00449d40) << 0x1f |
              (uint)(fVar8 == DAT_00449d40) << 0x1e, bVar2 = (byte)(uVar7 >> 0x18), fVar9 = fVar8,
     !(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(fVar8) || NAN(DAT_00449d40)))) {
    fVar9 = DAT_00449d40;
  }
  iVar12 = (int)fVar9;
  fVar8 = (float)VectorSignedToFloat(iVar12,(byte)(uVar7 >> 0x15) & 3);
  uVar1 = uVar7 & 0xfffffff | (uint)(fVar8 == fVar9) << 0x1e | (uint)(fVar9 <= fVar8) << 0x1d;
  bVar2 = (byte)(uVar1 >> 0x18);
  bVar6 = (bool)(bVar2 >> 6);
  if (!bVar6) {
    uVar1 = uVar7 & 0xfffffff | (uint)(DAT_00449d44 == fVar9) << 0x1e |
            (uint)(fVar9 <= DAT_00449d44) << 0x1d;
    bVar2 = (byte)(uVar1 >> 0x18);
    bVar6 = (bool)(bVar2 >> 6);
  }
  if ((bool)(bVar2 >> 5 & 1) && !bVar6) {
    iVar12 = iVar12 + -1;
  }
  uVar10 = ALBW_AS_U32(VectorSignedToFloat(iVar12,(byte)(uVar1 >> 0x15) & 3));
  *(undefined4 *)(param_1 + 0x250) = uVar10;
  fVar13 = fVar13 * DAT_00449d48;
  uVar7 = uVar1 & 0xfffffff | (uint)(fVar11 <= fVar13) << 0x1d;
  if ((SUB41(uVar7 >> 0x1d,0)) &&
     (uVar7 = uVar1 & 0xfffffff | (uint)(fVar13 < fVar3) << 0x1f | (uint)(fVar13 == fVar3) << 0x1e,
     bVar2 = (byte)(uVar7 >> 0x18), fVar11 = fVar13,
     !(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(fVar13) || NAN(fVar3)))) {
    fVar11 = fVar3;
  }
  iVar12 = (int)fVar11;
  fVar8 = (float)VectorSignedToFloat(iVar12,(byte)(uVar7 >> 0x15) & 3);
  uVar1 = uVar7 & 0xfffffff | (uint)(fVar8 == fVar11) << 0x1e | (uint)(fVar11 <= fVar8) << 0x1d;
  bVar2 = (byte)(uVar1 >> 0x18);
  bVar6 = (bool)(bVar2 >> 6);
  if (!bVar6) {
    uVar1 = uVar7 & 0xfffffff | (uint)(fVar4 == fVar11) << 0x1e | (uint)(fVar11 <= fVar4) << 0x1d;
    bVar2 = (byte)(uVar1 >> 0x18);
    bVar6 = (bool)(bVar2 >> 6);
  }
  if ((bool)(bVar2 >> 5 & 1) && !bVar6) {
    iVar12 = iVar12 + -1;
  }
  uVar10 = ALBW_AS_U32(VectorSignedToFloat(iVar12,(byte)(uVar1 >> 0x15) & 3));
  *(undefined4 *)(param_1 + 0x254) = uVar10;
  *(float *)(param_1 + 0x264) = fVar4;
  *(float *)(param_1 + 0x268) = fVar4;
  return;
}

