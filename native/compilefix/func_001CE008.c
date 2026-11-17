/* compilefix: func_001CE008, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/001/func_001CE008.c) with inlined two-sided approaches
 * restored (tools/approach_fix.py, BOOT_LOG 150). */
// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014EEC8(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4,float fparam_0);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern undefined4 func_001CDDC8(int param_1,undefined4 param_2);
extern int func_0025B61C(int param_1,int param_2,float fparam_0);
extern int func_0025B7B0(int param_1,uint param_2);
extern int func_0025B874(undefined4 *param_1);
extern int func_00392E48(undefined4 *param_1,int param_2,undefined4 *param_3,undefined1 param_4);
extern int func_004A8F40(int param_1,int *param_2,uint param_3);
extern int func_00520ED8(int param_1);
extern int func_00520EE4(int param_1);
extern int func_00520FF8(int param_1);
extern int func_00521054();
extern undefined DAT_00000005;
extern float DAT_001ce32c;
extern float DAT_001ce330;
extern float DAT_001ce334;
extern float DAT_001ce338;
extern float DAT_001ce33c;
extern float DAT_001ce340;
extern float DAT_001ce344;
extern float DAT_001ce348;
extern float DAT_001ce34c;
extern undefined4 DAT_001ce350;
extern int DAT_001ce354;
extern char *DAT_001ce61c;
extern float DAT_001ce620;
extern float DAT_001ce63c;
extern uint DAT_001ce640;
extern int *DAT_001ce644;
extern char s_SE_OBJ_FALL_WATER_FLAT_001ce624[];

// USA 001CE008 <- EU 001CE008 (Ghidra, non-matching)
// GLOBAL DAT_00000005 undefined
// GLOBAL DAT_001ce32c float
// GLOBAL DAT_001ce330 float
// GLOBAL DAT_001ce334 float
// GLOBAL DAT_001ce338 float
// GLOBAL DAT_001ce33c float
// GLOBAL DAT_001ce340 float
// GLOBAL DAT_001ce344 float
// GLOBAL DAT_001ce348 float
// GLOBAL DAT_001ce34c float
// GLOBAL DAT_001ce350 undefined4
// GLOBAL DAT_001ce354 int
// GLOBAL DAT_001ce61c char *
// GLOBAL DAT_001ce620 float
// GLOBAL DAT_001ce63c float
// GLOBAL DAT_001ce640 uint
// GLOBAL DAT_001ce644 int *
// GLOBAL s_SE_OBJ_FALL_WATER_FLAT_001ce624 string

/* WARNING: Removing unreachable block (ram,0x001ce0bc) */
/* WARNING: Removing unreachable block (ram,0x001ce0c0) */
/* WARNING: Removing unreachable block (ram,0x001ce0d0) */
/* WARNING: Removing unreachable block (ram,0x001ce214) */
/* WARNING: Removing unreachable block (ram,0x001ce218) */
/* WARNING: Removing unreachable block (ram,0x001ce228) */

#ifndef ALBW_APPROACH_DEFINED
#define ALBW_APPROACH_DEFINED
/* inlined two-sided approach (tools/approach_fix.py, BOOT_LOG 150): v -> t by s, no overshoot */
static float albw_approach(float v, float t, float s) {
    float n;
    if (v < t) { n = v + s; return (t <= n || v > n) ? t : n; }
    if (v > t) { n = v - s; if (n <= t) return t; return n <= v ? n : t; }
    return v;
}
#endif
undefined4 func_001CE008(int *param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int unaff_r7;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_c0 (*(int *)(albw_frame + 0x0))
  #define local_bc (*(char * *)(albw_frame + 0x4))
  #define local_b4 ((int *)(albw_frame + 0xc))
  #define local_a4 (*(uint *)(albw_frame + 0x1c))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_9c (*(undefined4 *)(albw_frame + 0x24))
  #define local_98 (*(int *)(albw_frame + 0x28))
  #define local_94 (*(undefined1 *)(albw_frame + 0x2c))
  #define local_58 (*(int *)(albw_frame + 0x68))
  #define local_54 (*(char * *)(albw_frame + 0x6c))
  #define local_50 (*(float *)(albw_frame + 0x70))
  #define local_4c (*(float *)(albw_frame + 0x74))
  #define local_48 (*(float *)(albw_frame + 0x78))
  #define local_44 (*(float *)(albw_frame + 0x7c))
  #define local_40 (*(float *)(albw_frame + 0x80))
  #define local_3c (*(float *)(albw_frame + 0x84))
  fVar12 = DAT_001ce334;
  fVar7 = DAT_001ce330;
  fVar8 = DAT_001ce32c;
  bVar6 = (uint)param_1[0x163] < (uint)param_1[0x164];
  if (bVar6) {
    param_1[0x163] = param_1[0x163] + 1;
  }
  fVar9 = ALBW_AS_F32(param_1[0xf8]);
  if (bVar6) {
    unaff_r7 = 0;
  }
  if (!bVar6) {
    unaff_r7 = 1;
  }
  fVar11 = (fVar12 - fVar9) * fVar7;
  if (fVar11 <= fVar8) {
    fVar11 = -fVar11;
  }
  fVar10 = fVar8;
  if ((fVar8 <= fVar11) && (fVar10 = fVar11, ALBW_AS_F32(param_1[0x160]) < fVar11)) {
    fVar10 = ALBW_AS_F32(param_1[0x160]);
  }
  param_1[0xf8] = (int)ALBW_AS_U32(albw_approach(fVar9, fVar12, fVar10));   /* two-sided approach restored (approach_fix) */
  func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0xf7));
  fVar12 = DAT_001ce340;
  fVar9 = (fVar7 * ((ALBW_AS_F32(param_1[0xf5]) - ALBW_AS_F32(param_1[0x15d])) - fVar8)) / DAT_001ce33c +
          DAT_001ce338;
  fVar7 = DAT_001ce338;
  if (0x3f800000 < (int)ALBW_AS_U32(fVar9)) {
    fVar7 = fVar9;
  }
  param_1[0x15e] = (int)ALBW_AS_U32(fVar9);
  param_1[0x15e] = (int)ALBW_AS_U32(fVar7);
  if (unaff_r7 != 0) {
    if (*(char *)((int)param_1 + 0x571) == '\0') {
      *(undefined1 *)((int)param_1 + 0x571) = 1;
      iVar2 = func_00392E48(param_1 + 0xf4,1,(undefined4 *)0x0,0);
      if ((iVar2 == 0) || ((iVar2 == 5 && (*(char *)((int)param_1 + 0x572) == '\0')))) {
        return func_001CDDC8((int)param_1,3);
      }
    }
    else {
      pfVar1 = (float *)(param_1 + 0x160);
      fVar7 = *pfVar1;
      fVar9 = (DAT_001ce348 - fVar7) * fVar12;
      if (fVar9 <= fVar8) {
        fVar9 = -fVar9;
      }
      fVar11 = fVar8;
      if ((fVar8 <= fVar9) && (fVar11 = fVar9, DAT_001ce344 < fVar9)) {
        fVar11 = DAT_001ce344;
      }
      *pfVar1 = albw_approach(fVar7, DAT_001ce348, fVar11);   /* two-sided approach restored (approach_fix) */
      fVar7 = ALBW_AS_F32(param_1[0xf9]) * DAT_001ce34c;
      param_1[0xf7] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf7]) * DAT_001ce34c));
      param_1[0xf9] = (int)ALBW_AS_U32(fVar7);
    }
  }
  local_40 = fVar12;
  if (fVar8 < ALBW_AS_F32(param_1[0xf5]) - ALBW_AS_F32(param_1[0x161])) {
    local_40 = fVar12 - (ALBW_AS_F32(param_1[0xf5]) - ALBW_AS_F32(param_1[0x161]));
  }
  local_50 = fVar8;
  local_4c = fVar8;
  local_48 = fVar8;
  local_44 = fVar8;
  local_3c = fVar8;
  iVar3 = func_0014EEC8((int)param_1,(uint)&local_50,&local_44,DAT_001ce350,fVar12);
  iVar2 = DAT_001ce354;
  if (iVar3 != 0) {
    func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),&local_50);
    param_1[0xf7] = (int)ALBW_AS_U32(fVar8);
    param_1[0xf8] = (int)ALBW_AS_U32(fVar8);
    param_1[0xf9] = (int)ALBW_AS_U32(fVar8);
    param_1[0x160] = (int)ALBW_AS_U32(fVar8);
    iVar3 = func_00520EE4((int)param_1);
    if (iVar3 != 0) {
      return func_001CDDC8((int)param_1,3);
    }
    iVar3 = func_00520FF8((int)param_1);
    if (iVar3 == 0) {
      func_0010A464(&local_c0);
      local_54 = DAT_001ce61c;
      local_58 = iVar2;
      func_00150A84(param_1,&local_58,(int)&local_c0);
      iVar3 = func_00520ED8((int)param_1);
      if (iVar3 != 0) {
        func_0025B61C((int)&local_c0,0,DAT_001ce620);
        local_54 = s_SE_OBJ_FALL_WATER_FLAT_001ce624;
        local_58 = iVar2;
        func_00150A84(param_1,&local_58,(int)&local_c0);
        func_0025B7B0((int)&local_c0,5);
      }
      (**(code **)(param_1[200] + 0x30))(param_1 + 200);
      *(undefined1 *)(param_1 + 0x15c) = 1;
      return func_0025B874(&local_c0);
    }
    return func_001CDDC8((int)param_1,4);
  }
  iVar3 = func_00520FF8((int)param_1);
  if (iVar3 != 0) {
    piVar4 = param_1;
    func_001CDDC8((int)param_1,4);
    goto LAB_001ce578;
  }
  iVar3 = func_00520EE4((int)param_1);
  if (iVar3 == 0) {
    piVar4 = (int *)(uint)*(byte *)((int)param_1 + 0x572);
    if (piVar4 == (int *)0x0) {
      iVar3 = func_00521054((int)param_1);
      piVar4 = (int *)0x0;
      if (iVar3 == 0) goto LAB_001ce578;
      fVar8 = ALBW_AS_F32(param_1[3]);
      if (ALBW_AS_F32(param_1[0xf5]) - DAT_001ce63c <= ALBW_AS_F32(param_1[3])) {
        fVar8 = ALBW_AS_F32(param_1[0xf5]) - DAT_001ce63c;
      }
      param_1[0x162] = (int)ALBW_AS_U32(fVar8);
      piVar4 = (int *)func_00392E48(param_1 + 0xf4,1,param_1 + 0x162,0);
      if (piVar4 == (int *)0x0 || piVar4 == (int *)&DAT_00000005) {
LAB_001ce56c:
        *(undefined1 *)((int)param_1 + 0x572) = 1;
        goto LAB_001ce578;
      }
      if (piVar4 != (int *)0x1) {
        piVar4 = (int *)0x0;
        *(undefined1 *)((int)param_1 + 0x572) = 3;
        goto LAB_001ce578;
      }
    }
    else {
      if (piVar4 == (int *)0x1) {
        if (unaff_r7 == 0) goto LAB_001ce578;
        goto LAB_001ce510;
      }
      if (piVar4 == (int *)0x2) {
        if (ALBW_AS_F32(param_1[0xf5]) <= ALBW_AS_F32(param_1[0x162])) {
          param_1[0xf5] = param_1[0x162];
          func_001CDDC8((int)param_1,4);
          piVar4 = (int *)(**(code **)(param_1[200] + 0x38))(param_1 + 200);
        }
        goto LAB_001ce578;
      }
      if (piVar4 != (int *)0x3) goto LAB_001ce578;
      if (ALBW_AS_F32(param_1[0xf5]) <= ALBW_AS_F32(param_1[0x162])) {
        *(undefined1 *)((int)param_1 + 0x2d7) = 1;
        goto LAB_001ce578;
      }
      piVar4 = (int *)func_00392E48(param_1 + 0xf4,1,param_1 + 0x162,0);
      if (piVar4 == (int *)0x0) goto LAB_001ce56c;
      if (piVar4 != (int *)0x1) goto LAB_001ce578;
    }
    *(undefined1 *)((int)param_1 + 0x572) = 2;
  }
  else {
LAB_001ce510:
    piVar4 = param_1;
    func_001CDDC8((int)param_1,3);
  }
LAB_001ce578:
  local_a4 = DAT_001ce640 | (uint)piVar4 & 0xffff0000;
  local_b4[0] = 0;
  local_b4[1] = 0;
  local_b4[2] = 0;
  local_a0 = 0xff;
  uStack_9c = 0;
  local_94 = 0;
  local_b4[3] = param_1[0xb3];
  local_98 = param_1[0x141];
  uVar5 = func_004A8F40(*DAT_001ce644,local_b4,4);
  if (uVar5 == 0) {
    return 0;
  }
  local_bc = DAT_001ce61c;
  local_c0 = iVar2;
  func_00150A84(param_1,&local_c0,0);
  (**(code **)(param_1[200] + 0x30))(param_1 + 200);
  *(undefined1 *)(param_1 + 0x15c) = 1;
  return 0;
}

