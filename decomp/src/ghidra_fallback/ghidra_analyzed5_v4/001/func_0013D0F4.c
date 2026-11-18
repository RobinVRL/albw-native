#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_0013CF3C(int param_1);
extern int func_0013DC0C(int param_1);
extern int func_0014EEB8(int param_1,undefined4 *param_2,undefined4 param_3,float fparam_0);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0037C320(int param_1,float fparam_0);
extern int func_00392E48(undefined4 *param_1,int param_2,undefined4 *param_3,undefined1 param_4);
extern int func_00520EE4(int param_1);
extern int func_00520FF8(int param_1);
extern int func_0052108C(int param_1);
extern int func_005211D8(int param_1);
extern int func_0065743C(undefined4 *param_1,undefined1 param_2);
extern float DAT_0013d400;
extern int DAT_0013d404;
extern float DAT_0013d408;
extern float DAT_0013d40c;
extern float DAT_0013d410;
extern float DAT_0013d414;
extern undefined4 DAT_0013d418;
extern int DAT_0013d41c;
extern float DAT_0013d420;
extern undefined DAT_0013d424;
extern int DAT_0013d438;
extern int DAT_0013d54c;
extern char s__SE_EyeBall_LAND_0013d427[];
extern undefined4 _DAT_0013d424;

// USA 0013D0F4 <- EU 0013D0F4 (Ghidra, non-matching)
// GLOBAL DAT_0013d400 float
// GLOBAL DAT_0013d404 int
// GLOBAL DAT_0013d408 float
// GLOBAL DAT_0013d40c float
// GLOBAL DAT_0013d410 float
// GLOBAL DAT_0013d414 float
// GLOBAL DAT_0013d418 undefined4
// GLOBAL DAT_0013d41c int
// GLOBAL DAT_0013d420 float
// GLOBAL DAT_0013d424 undefined
// GLOBAL DAT_0013d438 int
// GLOBAL DAT_0013d54c int
// GLOBAL s_;SE_EyeBall_LAND_0013d427 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_0013D0F4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  int unaff_r6;
  int *piVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define local_3c (*(float *)(albw_frame + 0x4))
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  fVar9 = DAT_0013d400;
  bVar8 = (uint)param_1[0x147] < (uint)param_1[0x148];
  if (bVar8) {
    param_1[0x147] = param_1[0x147] + 1;
  }
  if (bVar8) {
    unaff_r6 = 0;
  }
  if (!bVar8) {
    unaff_r6 = 1;
  }
  param_1[0xf8] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf8]) - fVar9));
  func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0xf7));
  func_0013CF3C((int)param_1);
  func_0013DC0C((int)param_1);
  iVar1 = DAT_0013d404;
  piVar6 = param_1 + 0x13e;
  if (unaff_r6 != 0) {
    if ((uint)param_1[0x14a] < (uint)param_1[0x14b]) {
      param_1[0x14a] = param_1[0x14a] + 1;
    }
    else {
      param_1[0x14b] = 4;
      param_1[0x14c] = iVar1;
      param_1[0x14a] = 0;
      uVar3 = func_00392E48(param_1 + 0xf4,1,(undefined4 *)0x0,0);
      if ((uVar3 < 2) || (uVar3 == 2 || uVar3 == 5)) goto LAB_0013d478;
    }
    fVar9 = ALBW_AS_F32(param_1[0xf9]) * DAT_0013d408;
    param_1[0xf7] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf7]) * DAT_0013d408));
    param_1[0xf9] = (int)ALBW_AS_U32(fVar9);
  }
  uVar2 = DAT_0013d418;
  fVar10 = DAT_0013d414;
  fVar9 = DAT_0013d40c;
  local_3c = DAT_0013d40c;
  if (ALBW_AS_F32(param_1[0x165]) < ALBW_AS_F32(param_1[0xf5])) {
    local_3c = (ALBW_AS_F32(param_1[0x165]) - ALBW_AS_F32(param_1[0xf5])) + DAT_0013d40c + DAT_0013d410;
  }
  local_40 = DAT_0013d414;
  pfVar5 = (float *)(param_1 + 0x15b);
  local_38 = DAT_0013d414;
  *pfVar5 = DAT_0013d414;
  param_1[0x15c] = (int)ALBW_AS_U32(fVar10);
  param_1[0x15d] = (int)ALBW_AS_U32(fVar10);
  *(undefined1 *)((int)param_1 + 0x62e) = 1;
  iVar4 = func_0014EEB8((int)param_1,&local_40,uVar2,fVar9);
  iVar1 = DAT_0013d41c;
  if (iVar4 == 0) {
    iVar4 = func_0052108C((int)param_1);
    if (((iVar4 != 0) || (iVar4 = func_00520FF8((int)param_1), iVar4 != 0)) ||
       (iVar4 = func_00520EE4((int)param_1), iVar4 != 0)) goto LAB_0013d478;
  }
  else {
    iVar4 = func_00520EE4((int)param_1);
    if (((iVar4 != 0) || (iVar4 = func_0052108C((int)param_1), iVar4 != 0)) ||
       (iVar4 = func_00520FF8((int)param_1), iVar4 != 0)) {
LAB_0013d478:
      return func_0065743C(piVar6,7);
    }
    func_00115DC8(pfVar5);
    bVar8 = false;
    if (ALBW_AS_F32(param_1[0x15e]) == fVar10) {
      bVar8 = ALBW_AS_F32(param_1[0x15f]) == fVar10;
    }
    bVar7 = false;
    if (bVar8) {
      bVar7 = ALBW_AS_F32(param_1[0x160]) == fVar10;
    }
    if (!bVar7) {
      func_00115D70((float *)(param_1 + 0xf7),(float *)(param_1 + 0xf7),fVar9);
    }
    bVar8 = false;
    if (*pfVar5 == fVar10) {
      bVar8 = ALBW_AS_F32(param_1[0x15c]) == fVar10;
    }
    bVar7 = false;
    if (bVar8) {
      bVar7 = ALBW_AS_F32(param_1[0x15d]) == fVar10;
    }
    if (bVar7) {
      param_1[0xf7] = (int)ALBW_AS_U32(fVar10);
      param_1[0xf8] = (int)ALBW_AS_U32(fVar10);
      param_1[0xf9] = (int)ALBW_AS_U32(fVar10);
    }
    else {
      fVar11 = ALBW_AS_F32(param_1[0xf7]);
      fVar9 = ALBW_AS_F32(param_1[0xf9]);
      fVar12 = fVar11 * fVar11 + fVar9 * fVar9;
      fVar9 = *pfVar5 * fVar11 + ALBW_AS_F32(param_1[0x15c]) * ALBW_AS_F32(param_1[0xf8]) +
              ALBW_AS_F32(param_1[0x15d]) * fVar9;
      if ((fVar9 < fVar10) &&
         (func_00115DAC((float *)(param_1 + 0xf7),pfVar5,(float *)(param_1 + 0xf7),
                        fVar9 * DAT_0013d420), _DAT_0013d424 < param_1[0xf8])) {
        local_2c = s__SE_EyeBall_LAND_0013d427 + 1;
        local_30 = DAT_0013d438;
        func_00150A84(param_1,&local_30,0);
      }
      if (fVar10 < fVar12) {
        func_0037C320((int)(param_1 + 0x120),
                      SQRT((ALBW_AS_F32(param_1[0xf7]) * ALBW_AS_F32(param_1[0xf7]) +
                           ALBW_AS_F32(param_1[0xf9]) * ALBW_AS_F32(param_1[0xf9])) / fVar12));
      }
    }
    if ((int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf7]) * ALBW_AS_F32(param_1[0xf7]) +
              ALBW_AS_F32(param_1[0xf8]) * ALBW_AS_F32(param_1[0xf8]) +
             ALBW_AS_F32(param_1[0xf9]) * ALBW_AS_F32(param_1[0xf9]))) < iVar1) {
      return func_0065743C(piVar6,0);
    }
  }
  if (unaff_r6 != 0) {
    fVar10 = ALBW_AS_F32(param_1[0x161]) - ALBW_AS_F32(param_1[0xf4]);
    fVar9 = ALBW_AS_F32(param_1[0x162]) - ALBW_AS_F32(param_1[0xf5]);
    fVar11 = ALBW_AS_F32(param_1[0x163]) - ALBW_AS_F32(param_1[0xf6]);
    if ((int)ALBW_AS_U32((fVar10 * fVar10 + fVar9 * fVar9 + fVar11 * fVar11)) < iVar1) {
      if ((uint)param_1[0x150] < (uint)param_1[0x151]) {
        param_1[0x150] = param_1[0x150] + 1;
      }
      else {
        func_0065743C(piVar6,0);
      }
    }
    else {
      param_1[0x161] = param_1[0xf4];
      iVar1 = DAT_0013d54c;
      param_1[0x162] = param_1[0xf5];
      param_1[0x163] = param_1[0xf6];
      param_1[0x151] = 0x1e;
      param_1[0x152] = iVar1;
      param_1[0x150] = 0;
    }
  }
  bVar8 = func_005211D8((int)param_1);
  if (bVar8) {
    *(undefined1 *)((int)param_1 + 0x2d7) = 1;
  }
  return 0;
}

