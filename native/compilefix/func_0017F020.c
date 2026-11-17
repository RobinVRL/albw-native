/* compilefix: func_0017F020, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/001/func_0017F020.c) with inlined two-sided approaches
 * restored (tools/approach_fix.py, BOOT_LOG 150). */
// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0011F714(float *param_1,float *param_2,undefined1 *param_3);
extern int func_0017FF90(int *param_1);
extern int func_00180F98(int param_1);
extern int func_00392E48(undefined4 *param_1,int param_2,undefined4 *param_3,undefined1 param_4);
extern int func_004C06E8(int param_1);
extern int func_00520FC0(void);
extern int func_00556914(int param_1);
extern int func_00556B14(int param_1);
extern int func_00556B3C(int param_1);
extern int func_00556E64(int param_1);
extern int func_00556EAC(int param_1,int param_2);
extern int func_00581C5C(int param_1);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int func_00659400(undefined4 *param_1,undefined1 param_2);
extern int func_0068A3EC(float *param_1,float fparam_0);
extern int func_0068C690(float *param_1);
extern int *DAT_0017f3ac;
extern int DAT_0017f3b0;
extern float DAT_0017f3b4;
extern int DAT_0017f3b8;
extern int *DAT_0017f3bc;
extern int DAT_0017f3c0;
extern float DAT_0017f3c4;
extern int DAT_0017f3c8;
extern float DAT_0017f3cc;
extern float DAT_0017f3d0;
extern float DAT_0017f3d4;
extern float DAT_0017f3d8;
extern int DAT_0017f3dc;
extern float DAT_0017f3e0;
extern float DAT_0017f7c8;
extern float DAT_0017f7cc;
extern float DAT_0017f7d0;
extern float DAT_0017f7d4;
extern float DAT_0017f7d8;
extern float DAT_0017f7dc;
extern float DAT_0017f7e0;
extern float DAT_0017f7e4;
extern float DAT_0017f7e8;
extern float DAT_0017f7ec;
extern float DAT_0017f7f0;
extern float DAT_0017f7f4;
extern float DAT_0017f7f8;
extern float DAT_0017f7fc;

// USA 0017F020 <- EU 0017F020 (Ghidra, non-matching)
// GLOBAL DAT_0017f3ac int *
// GLOBAL DAT_0017f3b0 int
// GLOBAL DAT_0017f3b4 float
// GLOBAL DAT_0017f3b8 int
// GLOBAL DAT_0017f3bc int *
// GLOBAL DAT_0017f3c0 int
// GLOBAL DAT_0017f3c4 float
// GLOBAL DAT_0017f3c8 int
// GLOBAL DAT_0017f3cc float
// GLOBAL DAT_0017f3d0 float
// GLOBAL DAT_0017f3d4 float
// GLOBAL DAT_0017f3d8 float
// GLOBAL DAT_0017f3dc int
// GLOBAL DAT_0017f3e0 float
// GLOBAL DAT_0017f7c8 float
// GLOBAL DAT_0017f7cc float
// GLOBAL DAT_0017f7d0 float
// GLOBAL DAT_0017f7d4 float
// GLOBAL DAT_0017f7d8 float
// GLOBAL DAT_0017f7dc float
// GLOBAL DAT_0017f7e0 float
// GLOBAL DAT_0017f7e4 float
// GLOBAL DAT_0017f7e8 float
// GLOBAL DAT_0017f7ec float
// GLOBAL DAT_0017f7f0 float
// GLOBAL DAT_0017f7f4 float
// GLOBAL DAT_0017f7f8 float
// GLOBAL DAT_0017f7fc float

/* WARNING: Removing unreachable block (ram,0x0017f5ec) */
/* WARNING: Removing unreachable block (ram,0x0017f5f0) */
/* WARNING: Removing unreachable block (ram,0x0017f600) */

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
undefined4 func_0017F020(int *param_1)

{
  bool bVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar10;
  float *pfVar11;
  int iVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a8 (*(int *)(albw_frame + 0x8))
  #define local_a4 (*(float * *)(albw_frame + 0xc))
  #define local_a0 (*(float *)(albw_frame + 0x10))
  #define local_9c (*(float *)(albw_frame + 0x14))
  #define fStack_98 (*(float *)(albw_frame + 0x18))
  #define local_94 (*(float *)(albw_frame + 0x1c))
  #define local_90 (*(float *)(albw_frame + 0x20))
  #define local_8c (*(float *)(albw_frame + 0x24))
  #define local_88 (*(float *)(albw_frame + 0x28))
  #define local_84 (*(float *)(albw_frame + 0x2c))
  #define local_80 (*(float *)(albw_frame + 0x30))
  #define local_7c (*(float *)(albw_frame + 0x34))
  #define local_5c (*(float *)(albw_frame + 0x54))
  #define iStack_58 (*(int *)(albw_frame + 0x58))
  #define local_54 (*(float *)(albw_frame + 0x5c))
  #define local_4c (*(int *)(albw_frame + 0x64))
  #define local_48 (*(float *)(albw_frame + 0x68))
  #define local_44 (*(float *)(albw_frame + 0x6c))
  #define local_40 (*(float *)(albw_frame + 0x70))
  uint uVar9;
  
  bVar5 = true;
  iVar6 = func_00581C5C(*DAT_0017f3ac);
  iVar12 = DAT_0017f3b8;
  fVar19 = DAT_0017f3b4;
  if ((iVar6 != 0) && (*(short *)(iVar6 + 0x5a) == 3)) {
    bVar5 = false;
  }
  fVar15 = ALBW_AS_F32(param_1[0x2a6]) - ALBW_AS_F32(param_1[0xf5]);
  bVar1 = false;
  fVar15 = (ALBW_AS_F32(param_1[0x2a5]) - ALBW_AS_F32(param_1[0xf4])) *
           (ALBW_AS_F32(param_1[0x2a5]) - ALBW_AS_F32(param_1[0xf4])) + fVar15 * fVar15 +
           (ALBW_AS_F32(param_1[0x2a7]) - ALBW_AS_F32(param_1[0xf6])) *
           (ALBW_AS_F32(param_1[0x2a7]) - ALBW_AS_F32(param_1[0xf6]));
  if ((int)ALBW_AS_U32(fVar15) < DAT_0017f3b0) {
    param_1[0xf5] = param_1[0x2a6];
    param_1[0xf8] = (int)ALBW_AS_U32(fVar19);
    if ((int)ALBW_AS_U32(fVar15) < iVar12) {
      bVar1 = true;
    }
  }
  piVar2 = DAT_0017f3bc;
  *(bool *)((int)param_1 + 0xbf5) = bVar1;
  local_4c = *piVar2;
  pfVar7 = (float *)func_00520FC0();
  local_9c = *pfVar7;
  fStack_98 = pfVar7[1];
  local_94 = pfVar7[2];
  if ((char)param_1[0x2fc] != '\0') {
    func_00115C70(&local_9c,(float *)(param_1 + 0xf4),(float *)(param_1 + 0x2a2));
    if ((int)ALBW_AS_U32((local_9c * local_9c + local_94 * local_94)) < DAT_0017f3c0) {
      func_0068A3EC(&local_9c,DAT_0017f3c4);
    }
    func_00115C54(&local_9c,&local_9c,(float *)(param_1 + 0x2a2));
  }
  func_00115C70(&local_90,&local_9c,(float *)(param_1 + 0xf4));
  fVar18 = SQRT(local_90 * local_90 + local_88 * local_88);
  fVar15 = DAT_0017f3cc;
  local_8c = fVar19;
  if ((DAT_0017f3c8 < (int)ALBW_AS_U32(fVar18)) ||
     (((((iVar12 = *piVar2, iVar12 == 0 || (bVar3 = func_00556E64(iVar12), bVar3)) ||
        (iVar6 = func_00556914(iVar12), iVar6 != 0)) ||
       ((bVar3 = func_00556B3C(iVar12), bVar3 || (bVar3 = func_00556B14(iVar12), bVar3)))) &&
      (iVar12 = func_00180F98((int)param_1), iVar12 == 0)))) {
    local_a8 = param_1[0xf4];
    local_a4 = (float *)param_1[0xf5];
    *(undefined1 *)(param_1 + 0x2fd) = 0;
    local_a0 = ALBW_AS_F32(param_1[0xf6]) + fVar15;
    uVar9 = func_00392E48(&local_a8,1,(undefined4 *)0x0,0);
    if (uVar9 < 2 || uVar9 == 5) {
      if ((short)param_1[0xe] == 0) {
        return 0;
      }
      func_00588C14((int)param_1,1,0);
      *(undefined1 *)((int)param_1 + 0xbed) = 1;
    }
    return func_00659400(param_1 + 600,0);
  }
  fVar13 = local_a0;
  local_a0 = ALBW_AS_F32(((uint)ALBW_AS_U32(local_a0) & 0xffffff00));
  local_5c = ALBW_AS_F32(param_1[0xf4]);
  iStack_58 = param_1[0xf5];
  local_54 = ALBW_AS_F32(param_1[0xf6]) + fVar15;
  fVar15 = DAT_0017f3d4;
  fVar16 = DAT_0017f3d0;
  if (!bVar5) {
    cVar4 = '\x01';
    uVar8 = 1;
    uVar9 = 1;
    local_a0 = ALBW_AS_F32(CONCAT31(SUB43(fVar13,1),1));
    goto LAB_0017f470;
  }
  uVar8 = param_1[0xfa];
  in_fpscr = in_fpscr & 0xfffffff;
  uVar9 = in_fpscr | (uint)(local_90 == fVar19) << 0x1e;
  if (SUB41(uVar9 >> 0x1e,0)) {
    uVar9 = in_fpscr | (uint)(local_8c == fVar19) << 0x1e;
    bVar5 = false;
    if (SUB41(uVar9 >> 0x1e,0)) {
      uVar9 = in_fpscr | (uint)(local_88 == fVar19) << 0x1e;
      bVar5 = SUB41(uVar9 >> 0x1e,0);
    }
    if (!bVar5) goto LAB_0017f25c;
  }
  else {
LAB_0017f25c:
    uVar8 = func_0068C690(&local_90);
  }
  local_a4 = &local_5c;
  pfVar7 = (float *)(DAT_0017f3dc + (uVar8 >> 0x18) * 0x10);
  fVar13 = (float)VectorUnsignedToFloat(uVar8 & 0xffffff,(byte)(uVar9 >> 0x15) & 3);
  local_84 = (*pfVar7 + pfVar7[1] * fVar13 * DAT_0017f3d8) * fVar16;
  fVar13 = (float)VectorUnsignedToFloat(uVar8 & 0xffffff,(byte)(uVar9 >> 0x15) & 3);
  local_7c = (pfVar7[2] + pfVar7[3] * fVar13 * DAT_0017f3d8) * fVar16;
  local_80 = fVar15;
  uVar8 = func_0011F714(local_a4,&local_84,(undefined1 *)&local_a0);
  local_48 = fVar15;
  if (local_84 <= fVar19) {
    local_48 = DAT_0017f3e0;
  }
  fVar13 = fVar19;
  fVar17 = DAT_0017f3e0;
  local_44 = fVar15;
  local_40 = fVar19;
  uVar9 = func_0011F714(local_a4,&local_48,(undefined1 *)0x0);
  cVar4 = (char)uVar9;
  local_40 = fVar15;
  if (local_7c <= fVar13) {
    local_40 = fVar17;
  }
  local_48 = fVar13;
  local_44 = fVar15;
  uVar9 = func_0011F714(local_a4,&local_48,(undefined1 *)0x0);
  if (cVar4 != '\0' && uVar9 != 0) {
    local_48 = fVar15;
    if (local_84 <= fVar13) {
      local_48 = fVar17;
    }
    local_40 = fVar17;
    if (fVar13 < local_7c) {
      local_40 = fVar15;
    }
    local_44 = fVar15;
    uVar10 = func_0011F714(local_a4,&local_48,(undefined1 *)0x0);
    if (uVar10 == 0) {
      fVar17 = local_84;
      if (local_84 <= fVar13) {
        fVar17 = -local_84;
      }
      fVar14 = local_7c;
      if (local_7c <= fVar13) {
        fVar14 = -local_7c;
      }
      if (fVar14 < fVar17) {
        uVar9 = 0;
      }
      else {
        cVar4 = '\0';
      }
    }
  }
LAB_0017f470:
  *(char *)(param_1 + 0x2fd) = (char)uVar8;
  fVar13 = DAT_0017f7c8;
  if ((char)param_1[0x2fc] != '\0') {
    fVar13 = fVar19;
  }
  if (uVar8 != 0) {
    func_00115C70(&local_84,(float *)(param_1 + 0xf4),(float *)(param_1 + 0xda));
    bVar5 = DAT_0017f7d0 == local_84;
    bVar3 = local_84 <= DAT_0017f7d0;
    if (!bVar3 || bVar5) {
      bVar5 = local_84 == DAT_0017f7cc;
      bVar3 = DAT_0017f7cc <= local_84;
    }
    local_80 = fVar19;
    if (((bVar3 && !bVar5) || (local_7c < DAT_0017f7d0)) || (DAT_0017f7cc < local_7c)) {
      func_0068A3EC(&local_84,fVar16);
      uVar8 = func_0011F714(&local_5c,&local_84,(undefined1 *)&local_a8);
      if ((char)local_a8 == '\0') {
        local_a0 = ALBW_AS_F32(((uint)ALBW_AS_U32(local_a0) & 0xffffff00));
      }
    }
  }
  if (((int)(*(undefined1 *)((char *)&local_a0 + 0)) & uVar8) == 0) {
    *(undefined1 *)((int)param_1 + 0xbf1) = 1;
  }
  pfVar7 = (float *)(param_1 + 0x2af);
  if ((fVar18 <= fVar13) || (uVar8 == 0 && !bVar1)) {
    fVar18 = ALBW_AS_F32(param_1[0x2b0]);
    param_1[0x2b0] = (int)ALBW_AS_U32((fVar18 + (DAT_0017f7f0 - fVar18) * DAT_0017f7f4));
    fVar15 = *pfVar7 + -*pfVar7 * fVar15;
    *pfVar7 = fVar15;
    func_0068A3EC(&local_90,fVar15);
    param_1[0xf7] = (int)ALBW_AS_U32(local_90);
    param_1[0xf9] = (int)ALBW_AS_U32(local_88);
  }
  else {
    pfVar11 = (float *)(param_1 + 0x2b0);
    fVar16 = *pfVar11;
    fVar17 = DAT_0017f7d4 / fVar18;
    fVar15 = (DAT_0017f7dc - fVar16) * DAT_0017f7e0;
    if (fVar15 <= fVar19) {
      fVar15 = -fVar15;
    }
    fVar14 = fVar19;
    if ((fVar19 <= fVar15) && (fVar14 = fVar15, DAT_0017f7d8 < fVar15)) {
      fVar14 = DAT_0017f7d8;
    }
    *pfVar11 = albw_approach(fVar16, DAT_0017f7dc, fVar14);   /* two-sided approach restored (approach_fix) */
    if ((int)ALBW_AS_U32(fVar18) < 0x40000001) {
      fVar14 = ALBW_AS_F32(param_1[0x2b0]);
      fVar16 = fVar14 * DAT_0017f7e4;
      fVar15 = fVar16;
      if (((fVar13 < fVar18) && (fVar15 = fVar14, fVar18 < DAT_0017f7e8)) &&
         (fVar15 = fVar16, DAT_0017f7e8 - fVar13 != fVar19)) {
        fVar15 = ((fVar14 - fVar16) * (fVar18 - fVar13)) / (DAT_0017f7e8 - fVar13) + fVar16;
      }
    }
    else {
      fVar15 = ALBW_AS_F32(param_1[0x2b0]);
    }
    fVar15 = *pfVar7 + (fVar15 - *pfVar7) * DAT_0017f7ec;
    *pfVar7 = fVar15;
    func_00115D70(&local_90,&local_90,fVar15 * fVar17);
    param_1[0xf7] = (int)ALBW_AS_U32(local_90);
    param_1[0xf9] = (int)ALBW_AS_U32(local_88);
  }
  if (!bVar1) {
    if (cVar4 == '\0') {
      param_1[0xf7] = (int)ALBW_AS_U32(fVar19);
    }
    if ((char)uVar9 == '\0') {
      param_1[0xf9] = (int)ALBW_AS_U32(fVar19);
    }
  }
  func_0017FF90(param_1);
  bVar5 = func_00556EAC(local_4c,99);
  if ((((bVar5) || (bVar5 = func_00556EAC(local_4c,100), bVar5)) &&
      ((DAT_0017f7fc <= ALBW_AS_F32(param_1[0xf7]) &&
       ((ALBW_AS_F32(param_1[0xf7]) <= DAT_0017f7f8 && (DAT_0017f7fc <= ALBW_AS_F32(param_1[0xf8]))))))) &&
     ((ALBW_AS_F32(param_1[0xf8]) <= DAT_0017f7f8 &&
      ((DAT_0017f7fc <= ALBW_AS_F32(param_1[0xf9]) && (ALBW_AS_F32(param_1[0xf9]) <= DAT_0017f7f8)))))) {
    return func_00659400(param_1 + 600,10);
  }
  bVar5 = func_00556EAC(local_4c,0x84);
  if ((!bVar5) && (bVar5 = func_00556EAC(local_4c,0x86), !bVar5)) {
    return 0;
  }
  return func_004C06E8((int)param_1);
}

