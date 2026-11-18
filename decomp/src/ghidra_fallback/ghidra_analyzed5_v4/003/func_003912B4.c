#include "ghidra_types.h"

extern int func_0051D530(int param_1,undefined4 *param_2);
extern int *DAT_00391474;
extern float DAT_00391478;
extern float DAT_0039147c;
extern float DAT_00391480;
extern undefined4 *DAT_00391484;
extern float DAT_00391488;
extern float DAT_0039148c;
extern float DAT_00391490;
extern float DAT_00391494;
extern float DAT_00391498;

// USA 003912B4 <- EU 00391290 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_00391474 int *
// GLOBAL DAT_00391478 float
// GLOBAL DAT_0039147c float
// GLOBAL DAT_00391480 float
// GLOBAL DAT_00391484 undefined4 *
// GLOBAL DAT_00391488 float
// GLOBAL DAT_0039148c float
// GLOBAL DAT_00391490 float
// GLOBAL DAT_00391494 float
// GLOBAL DAT_00391498 float

void func_003912B4(int param_1)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint in_fpscr;
  uint uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  
  *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x2e0) | 2;
  iVar13 = *(int *)(*DAT_00391474 + 0x18);
  func_0051D530(iVar13,(undefined4 *)(param_1 + 0x45c));
  fVar6 = DAT_00391490;
  fVar5 = DAT_00391488;
  fVar4 = DAT_0039147c;
  fVar3 = DAT_00391478;
  uVar16 = *DAT_00391484;
  iVar7 = 1;
  iVar9 = 0;
  iVar10 = 0xb4;
  fVar15 = DAT_00391478;
  do {
    fVar17 = (float)VectorSignedToFloat(uVar16,(byte)(in_fpscr >> 0x15) & 3);
    iVar8 = (iVar9 * iVar7) / 2;
    fVar18 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
    uVar1 = in_fpscr & 0xfffffff;
    in_fpscr = uVar1 | (uint)(DAT_00391478 <= fVar18 * DAT_0039147c * fVar17 * DAT_00391480) << 0x1d
    ;
    if (SUB41(in_fpscr >> 0x1d,0)) {
      fVar17 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
      fVar18 = (float)VectorSignedToFloat(uVar16,(byte)(in_fpscr >> 0x15) & 3);
      fVar17 = fVar17 * DAT_0039147c * fVar18 * DAT_00391480;
    }
    else {
      fVar17 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
      fVar18 = (float)VectorSignedToFloat(uVar16,(byte)(in_fpscr >> 0x15) & 3);
      fVar17 = -(fVar17 * DAT_0039147c * fVar18 * DAT_00391480);
    }
    iVar10 = iVar10 + -1;
    iVar7 = iVar7 + 1;
    iVar9 = iVar9 + 1;
    fVar15 = fVar17 + fVar15;
  } while (iVar10 != 0);
  fVar17 = (float)VectorSignedToFloat(uVar16,(byte)(in_fpscr >> 0x15) & 3);
  iVar7 = 1;
  fVar17 = fVar17 * DAT_00391480;
  uVar1 = uVar1 | (uint)(fVar17 < DAT_00391478) << 0x1f | (uint)(fVar17 == DAT_00391478) << 0x1e;
  uVar14 = uVar1 | (uint)(NAN(fVar17) || NAN(DAT_00391478)) << 0x1c;
  bVar2 = (byte)(uVar1 >> 0x18);
  if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar14 >> 0x1c) & 1)) {
    fVar17 = -fVar17;
  }
  *(int *)(param_1 + 0x4b8) = (int)((DAT_0039148c - fVar15 * DAT_00391488) / fVar17) + 0x168;
  iVar9 = 0;
  iVar10 = 0x5a;
  fVar15 = fVar3;
  fVar17 = fVar3;
  do {
    iVar11 = iVar9 * iVar7;
    iVar10 = iVar10 + -1;
    iVar12 = iVar7 + 1;
    iVar8 = iVar9 + 1;
    iVar9 = iVar9 + 2;
    fVar18 = (float)VectorSignedToFloat(iVar11 / 2,(byte)(uVar14 >> 0x15) & 3);
    fVar17 = fVar17 + fVar18 * fVar4 * fVar6;
    iVar7 = iVar7 + 2;
    fVar18 = (float)VectorSignedToFloat((iVar8 * iVar12) / 2,(byte)(uVar14 >> 0x15) & 3);
    fVar15 = fVar15 + fVar18 * fVar4 * fVar6;
  } while (iVar10 != 0);
  *(int *)(param_1 + 0x4bc) =
       (int)((DAT_00391494 - (fVar17 + fVar15) * fVar5) * DAT_00391498) + 0x168;
  *(undefined4 *)(param_1 + 0x4b4) = 0;
  *(float *)(param_1 + 0x4d0) = fVar3;
  *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(iVar13 + 0x1bc);
  *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(iVar13 + 0x1c0);
  uVar16 = *(undefined4 *)(iVar13 + 0x1c4);
  *(undefined4 *)(param_1 + 0x458) = uVar16;
  *(undefined4 *)(param_1 + 0x444) = *(undefined4 *)(param_1 + 0x450);
  *(undefined4 *)(param_1 + 0x44c) = uVar16;
  *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(param_1 + 0x454);
  return;
}

