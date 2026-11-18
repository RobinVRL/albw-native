#include "ghidra_types.h"

extern int func_00115B68(float *param_1,float *param_2,float *param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0037C574(int param_1,int param_2);
extern int func_0048B330(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_005845D8(int param_1);
extern int func_00588BE4(int param_1);
extern int func_0066A650(undefined4 *param_1,undefined1 param_2);
extern float DAT_004e0884;
extern float DAT_004e0888;
extern float *DAT_004e088c;
extern float DAT_004e0890;
extern float DAT_004e0894;
extern float DAT_004e0898;
extern float DAT_004e089c;
extern float DAT_004e08a0;
extern float DAT_004e08a4;
extern int DAT_004e08b8;
extern float DAT_004e08bc;
extern int *DAT_004e08c0;
extern int *DAT_004e08c4;
extern char s_SE_Apple_LAND_004e08a8[];

// USA 004E0550 <- EU 004E0528 (Ghidra, non-matching)
// GLOBAL DAT_004e0884 float
// GLOBAL DAT_004e0888 float
// GLOBAL DAT_004e088c float *
// GLOBAL DAT_004e0890 float
// GLOBAL DAT_004e0894 float
// GLOBAL DAT_004e0898 float
// GLOBAL DAT_004e089c float
// GLOBAL DAT_004e08a0 float
// GLOBAL DAT_004e08a4 float
// GLOBAL DAT_004e08b8 int
// GLOBAL DAT_004e08bc float
// GLOBAL DAT_004e08c0 int *
// GLOBAL DAT_004e08c4 int *
// GLOBAL s_SE_Apple_LAND_004e08a8 string

undefined4 func_004E0550(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(int *)(albw_frame + 0x0))
  #define local_4c (*(char * *)(albw_frame + 0x4))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define local_28 (*(float *)(albw_frame + 0x28))
  local_3c = *(float *)(param_1[0x103] + 0x88);
  local_34 = *(undefined4 *)(param_1[0x103] + 0xa8);
  local_38 = DAT_004e0888;
  fVar12 = DAT_004e0888;
  fVar11 = DAT_004e0884;
  func_00115DC8(&local_3c);
  func_00115B68((float *)(param_1 + 0x14e),DAT_004e088c,&local_3c);
  pfVar6 = (float *)(param_1 + 0x14a);
  func_0048B330(pfVar6,pfVar6,(float *)(param_1 + 0x14e),fVar11);
  fVar10 = DAT_004e0894;
  fVar9 = DAT_004e0890;
  fVar8 = ALBW_AS_F32(param_1[0x152]);
  fVar8 = fVar8 + -fVar8 * fVar11;
  param_1[0x152] = (int)ALBW_AS_U32(fVar8);
  uVar14 = CONCAT44(fVar9,*(float *)(param_1[0xb4] + 0x2c));
  *(float *)(param_1[0x103] + 0x134) = (fVar9 - fVar8) * *(float *)(param_1[0xb4] + 0x2c);
  fVar9 = ALBW_AS_F32(param_1[0xf8]);
  param_1[0xf8] = (int)ALBW_AS_U32((fVar9 - fVar10));
  if (fVar9 - fVar10 < fVar12) {
    *(undefined1 *)((int)param_1 + 0x425) = 0;
    *(undefined1 *)((int)param_1 + 0x426) = 1;
  }
  func_00115C70(&local_30,(float *)(param_1 + 0xf4),(float *)(param_1 + 0x141));
  if ((local_30 == fVar12) && (local_28 == fVar12)) {
    local_30 = *DAT_004e088c;
    local_2c = DAT_004e088c[1];
    local_28 = DAT_004e088c[2];
    fVar9 = fVar12;
  }
  else {
    fVar9 = SQRT(local_30 * local_30 + fVar12 * fVar12 + local_28 * local_28);
    local_2c = fVar12;
    func_00115DC8(&local_30);
  }
  if (fVar12 < local_30 * ALBW_AS_F32(param_1[0xf7]) + local_2c * ALBW_AS_F32(param_1[0xf8]) +
               local_28 * ALBW_AS_F32(param_1[0xf9])) {
    func_00115D70(&local_30,&local_30,(DAT_004e0898 - fVar9) * DAT_004e089c);
    func_00115C54((float *)(param_1 + 0xf7),(float *)(param_1 + 0xf7),&local_30);
  }
  fVar9 = ALBW_AS_F32(param_1[0xf8]);
  if ((uint)ALBW_AS_U32(DAT_004e08a0) <= (uint)ALBW_AS_U32(fVar9)) {
    fVar9 = DAT_004e08a4;
  }
  param_1[0xf8] = (int)ALBW_AS_U32(fVar9);
  fVar11 = ALBW_AS_F32(param_1[0xf5]);
  fVar10 = ALBW_AS_F32(param_1[0x142]);
  bVar7 = fVar10 <= fVar11;
  if (!bVar7 || fVar11 == fVar10) {
    bVar7 = fVar12 <= fVar9;
  }
  if (bVar7) {
    return 0;
  }
  if ((int)ALBW_AS_U32((fVar11 - fVar10)) < 0x3f000000) {
    if (param_1[0x154] == 0) {
      local_4c = s_SE_Apple_LAND_004e08a8;
      local_50 = DAT_004e08b8;
      func_00150A84(param_1,&local_50,0);
    }
    param_1[0xf8] = (int)ALBW_AS_U32(-ALBW_AS_F32(param_1[0xf8]));
    func_00115D70((float *)(param_1 + 0xf7),(float *)(param_1 + 0xf7),DAT_004e08bc);
    fVar11 = ALBW_AS_F32(param_1[0x14d]);
    fVar10 = *pfVar6;
    fVar8 = ALBW_AS_F32(param_1[0x14b]);
    fVar9 = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar8 * fVar8 +
                 ALBW_AS_F32(param_1[0x14c]) * ALBW_AS_F32(param_1[0x14c]));
    if (fVar12 < fVar9) {
      fVar9 = ALBW_AS_F32(((ulonglong)uVar14 >> 0x20)) / fVar9;
      param_1[0x14d] = (int)ALBW_AS_U32((fVar11 * fVar9));
      *pfVar6 = fVar10 * fVar9;
      param_1[0x14b] = (int)ALBW_AS_U32((fVar8 * fVar9));
      param_1[0x14c] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x14c]) * fVar9));
    }
    param_1[0x154] = param_1[0x154] + 1;
    param_1[0xf5] = param_1[0x142];
  }
  uVar13 = (undefined4)uVar14;
  if (param_1[0x154] < 2) {
    return 0;
  }
  func_0037C574((int)param_1,-1);
  *pfVar6 = ALBW_AS_F32(param_1[0x14e]);
  param_1[0x14b] = param_1[0x14f];
  param_1[0x14c] = param_1[0x150];
  param_1[0x14d] = param_1[0x151];
  piVar3 = DAT_004e08c0;
  *(undefined4 *)(param_1[0x103] + 0x134) = uVar13;
  if ((*piVar3 == 0) || (iVar1 = func_005845D8(*piVar3), iVar1 == 0)) goto LAB_004e0904;
  iVar2 = func_00588BE4((int)param_1);
  iVar4 = param_1[0xb3];
  if (iVar2 == *DAT_004e08c4) {
    piVar3 = (int *)(iVar1 + 0x14a8);
    iVar2 = *(int *)(iVar1 + 0x14b4);
    if (*(int *)(iVar1 + 0x14ac) <= iVar2) goto LAB_004e0904;
    *(int *)(iVar1 + 0x14b4) = iVar2 + 1;
    iVar5 = *(int *)(iVar1 + 0x14ac);
    iVar2 = iVar2 + *(int *)(iVar1 + 0x14b0);
    if (iVar5 <= iVar2) {
LAB_004e08fc:
      iVar2 = iVar2 - iVar5;
    }
  }
  else {
    piVar3 = (int *)(iVar1 + 0x1498);
    iVar2 = *(int *)(iVar1 + 0x14a4);
    if (*(int *)(iVar1 + 0x149c) <= iVar2) goto LAB_004e0904;
    *(int *)(iVar1 + 0x14a4) = iVar2 + 1;
    iVar5 = *(int *)(iVar1 + 0x149c);
    iVar2 = iVar2 + *(int *)(iVar1 + 0x14a0);
    if (iVar5 <= iVar2) goto LAB_004e08fc;
  }
  *(int *)(*piVar3 + iVar2 * 4) = iVar4;
LAB_004e0904:
  return func_0066A650(param_1 + 0x135,1);
}

