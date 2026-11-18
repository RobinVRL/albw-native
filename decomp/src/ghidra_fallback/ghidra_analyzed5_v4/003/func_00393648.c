// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_004ED534(int param_1,int param_2);
extern int func_004ED5E4(int param_1);
extern int func_004ED600(int param_1,float fparam_0);
extern int func_00556E64(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int *DAT_003937f8;
extern float DAT_003937fc;
extern float DAT_00393800;
extern int *DAT_00393804;
extern float DAT_00393808;
extern float DAT_0039380c;
extern float DAT_00393810;

// USA 00393648 <- EU 00393624 (Ghidra, non-matching)
// GLOBAL DAT_003937f8 int *
// GLOBAL DAT_003937fc float
// GLOBAL DAT_00393800 float
// GLOBAL DAT_00393804 int *
// GLOBAL DAT_00393808 float
// GLOBAL DAT_0039380c float
// GLOBAL DAT_00393810 float

undefined4 func_00393648(int param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  float *pfVar7;
  uint in_fpscr;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((*(short *)(param_1 + 0x36) != 0) && (bVar4 = func_00588BF0(param_1,0), !bVar4)) {
    return 0;
  }
  bVar4 = func_00588BF0(param_1,1);
  piVar2 = DAT_003937f8;
  if (bVar4) {
    return 0;
  }
  bVar4 = func_00556E64(*DAT_003937f8);
  piVar3 = DAT_00393804;
  if (bVar4) {
    return 0;
  }
  pfVar7 = *(float **)(*piVar2 + 0x1c);
  iVar6 = *(int *)(param_1 + 0x40c);
  fVar9 = *pfVar7;
  fVar10 = *(float *)(iVar6 + 0x34);
  if (fVar9 < fVar10) {
    return 0;
  }
  fVar12 = pfVar7[2];
  fVar11 = *(float *)(iVar6 + 0x3c);
  if (fVar12 + DAT_003937fc < fVar11) {
    return 0;
  }
  if (NAN(*(float *)(iVar6 + 0x40)) || NAN(fVar9 - DAT_003937fc)) {
    return 0;
  }
  if (NAN(*(float *)(iVar6 + 0x48)) || NAN(fVar12 - DAT_003937fc)) {
    return 0;
  }
  if (pfVar7[1] + DAT_003937fc < *(float *)(iVar6 + 0x38)) {
    return 0;
  }
  fVar13 = pfVar7[1] - DAT_003937fc;
  uVar1 = in_fpscr & 0xfffffff | (uint)(*(float *)(iVar6 + 0x44) < fVar13) << 0x1f;
  uVar8 = uVar1 | (uint)(NAN(*(float *)(iVar6 + 0x44)) || NAN(fVar13)) << 0x1c;
  if ((byte)(uVar1 >> 0x1f) != ((byte)(uVar8 >> 0x1c) & 1)) {
    return 0;
  }
  uVar5 = *(ushort *)(param_1 + 0x30) & 0xff;
  fVar13 = DAT_00393800;
  switch(uVar5) {
  default:
    goto switchD_0039372c_caseD_0;
  case 1:
  case 2:
    fVar13 = (fVar12 - fVar11) / (*(float *)(iVar6 + 0x48) - fVar11);
    if (uVar5 != 1) goto switchD_0039372c_caseD_0;
    break;
  case 3:
  case 4:
    fVar13 = (fVar9 - fVar10) / (*(float *)(iVar6 + 0x40) - fVar10);
    if (uVar5 != 4) goto switchD_0039372c_caseD_0;
  }
  fVar13 = DAT_00393800 - fVar13;
switchD_0039372c_caseD_0:
  func_004ED600(*DAT_00393804,*(float *)(param_1 + 0x48) * fVar13);
  if (*(short *)(param_1 + 0x2c) != 0) {
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x2c),(byte)(uVar8 >> 0x15) & 3);
    fVar9 = (float)VectorSignedToFloat((int)(fVar9 * DAT_00393808 * DAT_0039380c * DAT_00393810),
                                       (byte)(uVar8 >> 0x15) & 3);
    func_004ED534(*piVar3,(int)(fVar9 * fVar13));
  }
  if ((*(ushort *)(param_1 + 0x32) & 2) == 0) {
    return 0;
  }
  return func_004ED5E4(*piVar3);
}

