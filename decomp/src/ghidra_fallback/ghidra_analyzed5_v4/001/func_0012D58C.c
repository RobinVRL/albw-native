#include "ghidra_types.h"

extern int func_003E183C(float *param_1,float *param_2,float fparam_0);
extern int func_003E18CC(float *param_1,int param_2,float fparam_0,float fparam_1,float fparam_2, float fparam_3,float fparam_4,float fparam_5);
extern int func_003E1A70(float *param_1,int param_2);
extern float func_00591804(float fparam_0);
extern float DAT_0012d898;
extern float DAT_0012d89c;
extern float DAT_0012d8a0;
extern float DAT_0012d8a4;
extern float DAT_0012d8a8;
extern float DAT_0012d8ac;
extern float DAT_0012d8b0;
extern float DAT_0012d8b4;
extern float DAT_0012d8b8;
extern float *DAT_0012d8bc;
extern float *DAT_0012d8c0;
extern int DAT_0012d8c4;
extern float DAT_0012d8c8;
extern float DAT_0012d8cc;
extern float DAT_0012d8d0;
extern undefined4 DAT_0012d8d4;
extern undefined4 DAT_0012d8d8;

// USA 0012D58C <- EU 0012D58C (Ghidra, non-matching)
// GLOBAL DAT_0012d898 float
// GLOBAL DAT_0012d89c float
// GLOBAL DAT_0012d8a0 float
// GLOBAL DAT_0012d8a4 float
// GLOBAL DAT_0012d8a8 float
// GLOBAL DAT_0012d8ac float
// GLOBAL DAT_0012d8b0 float
// GLOBAL DAT_0012d8b4 float
// GLOBAL DAT_0012d8b8 float
// GLOBAL DAT_0012d8bc float *
// GLOBAL DAT_0012d8c0 float *
// GLOBAL DAT_0012d8c4 int
// GLOBAL DAT_0012d8c8 float
// GLOBAL DAT_0012d8cc float
// GLOBAL DAT_0012d8d0 float
// GLOBAL DAT_0012d8d4 undefined4
// GLOBAL DAT_0012d8d8 undefined4

undefined4 func_0012D58C(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define local_3c ((float *)(albw_frame + 0x4))
  pfVar2 = DAT_0012d8c0;
  pfVar1 = DAT_0012d8bc;
  fVar10 = DAT_0012d8ac;
  *(float *)(param_1 + 0x181c) = DAT_0012d8ac;
  fVar21 = DAT_0012d8b8;
  fVar15 = DAT_0012d8b4;
  fVar12 = DAT_0012d8b0;
  fVar9 = DAT_0012d8a8;
  fVar6 = DAT_0012d8a4;
  fVar26 = DAT_0012d8a0;
  fVar7 = DAT_0012d89c;
  fVar14 = DAT_0012d898;
  fVar24 = DAT_0012d8b8 - *pfVar1;
  fVar22 = DAT_0012d8b8 - pfVar1[1];
  fVar8 = fVar10 - pfVar1[2];
  fVar23 = fVar24 * fVar24;
  fVar11 = DAT_0012d898 / SQRT(fVar23 + fVar22 * fVar22 + fVar8 * fVar8);
  fVar8 = fVar8 * fVar11;
  fVar13 = fVar24 * fVar11;
  fVar11 = fVar22 * fVar11;
  fVar25 = DAT_0012d8b8 * fVar13;
  fVar16 = pfVar2[1] * fVar8 - pfVar2[2] * fVar11;
  fVar18 = pfVar2[2] * fVar13 - *pfVar2 * fVar8;
  fVar17 = *pfVar2 * fVar11 - pfVar2[1] * fVar13;
  fVar5 = DAT_0012d8b8 * fVar11;
  fVar19 = DAT_0012d898 / SQRT(fVar16 * fVar16 + fVar18 * fVar18 + fVar17 * fVar17);
  fVar17 = fVar17 * fVar19;
  fVar16 = fVar16 * fVar19;
  fVar18 = fVar18 * fVar19;
  fVar27 = DAT_0012d8b8 * fVar16;
  *(float *)(param_1 + 0x143c) = fVar16;
  *(float *)(param_1 + 0x1440) = fVar18;
  *(float *)(param_1 + 0x1444) = fVar17;
  fVar20 = fVar11 * fVar17 - fVar8 * fVar18;
  fVar19 = fVar8 * fVar16 - fVar13 * fVar17;
  fVar16 = fVar13 * fVar18 - fVar11 * fVar16;
  *(float *)(param_1 + 0x144c) = fVar20;
  *(float *)(param_1 + 0x145c) = fVar13;
  *(float *)(param_1 + 0x1460) = fVar11;
  *(float *)(param_1 + 0x1464) = fVar8;
  *(float *)(param_1 + 0x1450) = fVar19;
  *(float *)(param_1 + 0x1454) = fVar16;
  *(float *)(param_1 + 0x1448) = -(fVar27 + fVar21 * fVar18 + fVar10 * fVar17);
  *(float *)(param_1 + 0x1458) = -(fVar21 * fVar20 + fVar21 * fVar19 + fVar10 * fVar16);
  *(float *)(param_1 + 0x1468) = -(fVar25 + fVar5 + fVar10 * fVar8);
  func_003E18CC((float *)(param_1 + 0x149c),0,-(fVar6 * fVar9),fVar12,-(fVar7 * fVar9),fVar15,fVar14
                ,fVar26);
  iVar3 = DAT_0012d8c4;
  fVar26 = DAT_0012d8c8;
  fVar5 = func_00591804(*(float *)(DAT_0012d8c4 + 8) * DAT_0012d8c8);
  fVar7 = fVar7 / fVar5;
  *(float *)(param_1 + 0x1820) = fVar7;
  fVar5 = DAT_0012d8cc;
  fVar6 = fVar7 - pfVar1[2];
  fVar9 = fVar14 / SQRT(fVar23 + fVar22 * fVar22 + fVar6 * fVar6);
  fVar6 = fVar6 * fVar9;
  fVar24 = fVar24 * fVar9;
  fVar22 = fVar22 * fVar9;
  fVar10 = pfVar2[1] * fVar6 - pfVar2[2] * fVar22;
  fVar12 = pfVar2[2] * fVar24 - *pfVar2 * fVar6;
  fVar9 = *pfVar2 * fVar22 - pfVar2[1] * fVar24;
  fVar14 = fVar14 / SQRT(fVar10 * fVar10 + fVar12 * fVar12 + fVar9 * fVar9);
  fVar9 = fVar9 * fVar14;
  fVar12 = fVar12 * fVar14;
  fVar10 = fVar10 * fVar14;
  *(float *)(param_1 + 0x1474) = fVar9;
  *(float *)(param_1 + 0x146c) = fVar10;
  *(float *)(param_1 + 0x1470) = fVar12;
  fVar11 = fVar22 * fVar9 - fVar6 * fVar12;
  fVar8 = fVar24 * fVar12 - fVar22 * fVar10;
  fVar15 = fVar6 * fVar10 - fVar24 * fVar9;
  *(float *)(param_1 + 0x147c) = fVar11;
  *(float *)(param_1 + 0x1494) = fVar6;
  *(float *)(param_1 + 0x1480) = fVar15;
  *(float *)(param_1 + 0x1484) = fVar8;
  *(float *)(param_1 + 0x1478) = -(fVar21 * fVar10 + fVar21 * fVar12 + fVar7 * fVar9);
  fVar14 = DAT_0012d8d0;
  *(float *)(param_1 + 0x1488) = -(fVar21 * fVar11 + fVar21 * fVar15 + fVar7 * fVar8);
  *(float *)(param_1 + 0x1498) = -(fVar21 * fVar24 + fVar21 * fVar22 + fVar7 * fVar6);
  *(float *)(param_1 + 0x148c) = fVar24;
  *(float *)(param_1 + 0x1490) = fVar22;
  func_003E183C(&local_40,local_3c,*(float *)(iVar3 + 8) * fVar26 * fVar14);
  *(float *)(param_1 + 0x14e0) = fVar21;
  *(float *)(param_1 + 0x14e4) = fVar21;
  *(float *)(param_1 + 0x14e8) = fVar21;
  *(float *)(param_1 + 0x14ec) = fVar21;
  *(float *)(param_1 + 0x14f4) = fVar21;
  *(float *)(param_1 + 0x14f8) = fVar21;
  *(float *)(param_1 + 0x14fc) = fVar21;
  *(float *)(param_1 + 0x1500) = fVar21;
  uVar4 = DAT_0012d8d8;
  *(float *)(param_1 + 0x150c) = fVar21;
  *(float *)(param_1 + 0x1510) = fVar21;
  *(undefined4 *)(param_1 + 0x1514) = uVar4;
  *(float *)(param_1 + 0x1518) = fVar21;
  uVar4 = DAT_0012d8d4;
  *(float *)(param_1 + 0x14dc) = (local_3c[0] / local_40) / fVar5;
  *(float *)(param_1 + 0x14f0) = local_3c[0] / local_40;
  *(undefined4 *)(param_1 + 0x1504) = uVar4;
  *(undefined4 *)(param_1 + 0x1508) = uVar4;
  return func_003E1A70((float *)(param_1 + 0x14dc),0);
}

