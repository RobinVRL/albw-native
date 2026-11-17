/* compilefix: func_00123190, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/001/func_00123190.c) with inlined two-sided approaches
 * restored (tools/approach_fix.py, BOOT_LOG 150). */
#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00122EF8(int param_1,float *param_2,float *param_3,int *param_4,int *param_5);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_003167D4(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,int param_4, undefined4 param_5);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004FB4E0(int param_1,float fparam_0);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_00520FC0(void);
extern int func_00520FD4(void);
extern int func_00521078(int param_1);
extern int func_00564A78(int param_1,int *param_2);
extern int func_0058E2B8(int *param_1);
extern undefined DAT_0000000a;
extern uint DAT_0012353c;
extern int *DAT_0012355c;
extern float DAT_00123560;
extern uint DAT_00123564;
extern float DAT_00123568;
extern float DAT_0012356c;
extern float DAT_00123570;
extern float DAT_00123574;
extern float DAT_00123578;
extern int DAT_0012357c;
extern float DAT_00123750;
extern int *DAT_00123754;
extern uint DAT_00123758;
extern uint DAT_0012375c;
extern undefined DAT_00123760;
extern char s_SE_EN_FALL_00123540[];
extern char s_SE_Koppi_LAND_0012354c[];

// USA 00123190 <- EU 00123190 (Ghidra, non-matching)
// GLOBAL DAT_0000000a undefined
// GLOBAL DAT_0012353c uint
// GLOBAL DAT_0012355c int *
// GLOBAL DAT_00123560 float
// GLOBAL DAT_00123564 uint
// GLOBAL DAT_00123568 float
// GLOBAL DAT_0012356c float
// GLOBAL DAT_00123570 float
// GLOBAL DAT_00123574 float
// GLOBAL DAT_00123578 float
// GLOBAL DAT_0012357c int
// GLOBAL DAT_00123750 float
// GLOBAL DAT_00123754 int *
// GLOBAL DAT_00123758 uint
// GLOBAL DAT_0012375c uint
// GLOBAL DAT_00123760 undefined
// GLOBAL s_SE_EN_FALL_00123540 string
// GLOBAL s_SE_Koppi_LAND_0012354c string

/* WARNING: Variable defined which should be unmapped: objStack_98 */
/* WARNING: Removing unreachable block (ram,0x001233c8) */
/* WARNING: Removing unreachable block (ram,0x001233cc) */
/* WARNING: Removing unreachable block (ram,0x001233dc) */
/* WARNING: Removing unreachable block (ram,0x00123464) */
/* WARNING: Removing unreachable block (ram,0x00123468) */
/* WARNING: Removing unreachable block (ram,0x00123478) */

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
char * func_00123190(int *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  uint extraout_r1;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define objStack_98 ((uint *)(albw_frame + 0x8))
  #define local_94 (*(char * *)(albw_frame + 0xc))
  #define local_90 (*(uint *)(albw_frame + 0x10))
  #define local_8c (*(undefined * *)(albw_frame + 0x14))
  #define local_88 ((int *)(albw_frame + 0x18))
  #define local_7c (*(int *)(albw_frame + 0x24))
  #define local_78 (*(float *)(albw_frame + 0x28))
  #define local_74 (*(float *)(albw_frame + 0x2c))
  #define local_70 (*(float *)(albw_frame + 0x30))
  #define local_6c (*(undefined4 *)(albw_frame + 0x34))
  #define local_5c (*(undefined4 *)(albw_frame + 0x44))
  #define local_4c (*(undefined4 *)(albw_frame + 0x54))
  #define local_48 (*(undefined4 *)(albw_frame + 0x58))
  #define local_44 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x60))
  #define local_3c (*(int *)(albw_frame + 0x64))
  #define local_38 ((int *)(albw_frame + 0x68))
  uVar8 = DAT_0012353c;
  cVar1 = (char)param_1[0x241];
  if (cVar1 == '\0') {
    bVar3 = func_00521078((int)param_1);
    if (bVar3) {
      param_1[0x242] = 0;
    }
    else {
      iVar4 = param_1[0x242];
      param_1[0x242] = iVar4 + 1U;
      if (1 < iVar4 + 1U) {
        local_94 = s_SE_EN_FALL_00123540;
        objStack_98[0] = uVar8;
        func_00150A84(param_1,(int *)objStack_98,0);
        *(undefined1 *)(param_1 + 0x241) = 1;
      }
    }
  }
  else if (cVar1 == '\x01') {
    param_1[0x242] = 0;
    *(undefined1 *)(param_1 + 0x241) = 2;
  }
  else if (cVar1 == '\x02') {
    param_1[0x242] = 0;
    bVar3 = func_00521078((int)param_1);
    if (bVar3) {
      local_94 = s_SE_Koppi_LAND_0012354c;
      objStack_98[0] = uVar8;
      func_00150A84(param_1,(int *)objStack_98,0);
      *(undefined1 *)(param_1 + 0x241) = 0;
    }
  }
  local_88[0] = 0;
  objStack_98[0] = (uint)local_88;
  iVar4 = *DAT_0012355c;
  func_00122EF8((int)param_1,(float *)(iVar4 + 0x458),(float *)(param_1 + 0x23f),param_1 + 0x240,
                (int *)objStack_98[0]);
  fVar16 = ALBW_AS_F32(param_1[0x23f]);
  bVar3 = fVar16 == DAT_00123560;
  uVar17 = *(undefined8 *)(iVar4 + 0x458);
  fVar13 = DAT_00123560;
  bVar2 = func_00520FD4();
  if (bVar2 || bVar3) {
    param_1[0xf9] = (int)ALBW_AS_U32(fVar13);
    param_1[0xf7] = (int)ALBW_AS_U32(fVar13);
    func_004FC07C((int)param_1,0,0xffffffff,0);
    bVar3 = func_0051D27C(param_1 + 0xfa,param_1[0x23b],0x10000000);
    return (char *)(uint)bVar3;
  }
  iVar4 = func_004904CC(ALBW_AS_F32(uVar17),ALBW_AS_F32(((ulonglong)uVar17 >> 0x20)));
  uVar17 = func_00114608(DAT_00123564,extraout_r1);
  func_004D80A4(&local_78,(int)uVar17 + iVar4 & 0xe0000000,fVar16);
  fVar14 = DAT_00123570;
  fVar12 = DAT_0012356c;
  fVar16 = DAT_00123568;
  pfVar5 = (float *)(param_1 + 0x238);
  fVar15 = *pfVar5;
  fVar10 = (local_78 - fVar15) * DAT_00123568;
  if (fVar10 <= fVar13) {
    fVar10 = -fVar10;
  }
  fVar11 = DAT_0012356c;
  if ((DAT_0012356c <= fVar10) && (fVar11 = fVar10, DAT_00123570 < fVar10)) {
    fVar11 = DAT_00123570;
  }
  *pfVar5 = albw_approach(fVar15, local_78, fVar11);   /* two-sided approach restored (approach_fix) */
  pfVar5 = (float *)(param_1 + 0x239);
  fVar10 = *pfVar5;
  fVar16 = (local_70 - fVar10) * fVar16;
  if (fVar16 <= fVar13) {
    fVar16 = -fVar16;
  }
  if ((fVar12 <= fVar16) && (fVar12 = fVar16, fVar14 < fVar16)) {
    fVar12 = fVar14;
  }
  *pfVar5 = albw_approach(fVar10, local_70, fVar12);   /* two-sided approach restored (approach_fix) */
  fVar12 = DAT_00123574;
  fVar16 = ALBW_AS_F32(param_1[0x238]) * DAT_00123574;
  param_1[0xf7] = (int)ALBW_AS_U32(-fVar16);
  param_1[0xf9] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x239]) * fVar12));
  if ((char)param_1[0x23a] != '\0') {
    fVar14 = ALBW_AS_F32(param_1[0x239]) * fVar12 * DAT_00123578;
    param_1[0xf7] = (int)ALBW_AS_U32((-fVar16 * DAT_00123578));
    param_1[0xf9] = (int)ALBW_AS_U32(fVar14);
  }
  local_74 = fVar13;
  iVar4 = func_004904CC(-local_78,local_70);
  param_1[0x23b] = iVar4;
  func_0051D27C(param_1 + 0xfa,iVar4,0x10000000);
  func_004FC07C((int)param_1,1,0xffffffff,0);
  if ((int)ALBW_AS_U32(SQRT(ALBW_AS_F32(param_1[0x238]) * ALBW_AS_F32(param_1[0x238]) +
                ALBW_AS_F32(param_1[0x239]) * ALBW_AS_F32(param_1[0x239]))) < DAT_0012357c) {
    func_004FB4E0((int)param_1,fVar13);
  }
  else {
    fVar13 = SQRT(ALBW_AS_F32(param_1[0xf7]) * ALBW_AS_F32(param_1[0xf7]) +
                  ALBW_AS_F32(param_1[0xf9]) * ALBW_AS_F32(param_1[0xf9])) * DAT_00123750;
    if (fVar13 < fVar12) {
      fVar13 = fVar12;
    }
    func_004FB4E0((int)param_1,fVar13);
  }
  if ((char *)(uint)*(byte *)(param_1 + 0x23a) != (char *)0x0) {
    return (char *)(uint)*(byte *)(param_1 + 0x23a);
  }
  iVar9 = **(int **)(*DAT_00123754 + 0x24);
  pfVar5 = (float *)func_00520FC0();
  func_00115C70((float *)&local_94,pfVar5,(float *)(param_1 + 0xf4));
  iVar4 = func_004904CC(ALBW_AS_F32(local_94),ALBW_AS_F32(local_8c));
  local_3c = iVar9 - param_1[0xfa];
  uVar6 = func_0058E2B8(&local_3c);
  if (DAT_00123758 < uVar6) {
    local_38[0] = param_1[0xfa] - iVar4;
    uVar6 = func_0058E2B8(local_38);
    if (uVar6 < DAT_0012375c) {
      bVar3 = true;
      goto LAB_0012363c;
    }
  }
  bVar3 = false;
LAB_0012363c:
  cVar1 = *(char *)((int)param_1 + 0x8ea);
  if (cVar1 == '\0') {
    pcVar7 = (char *)(uint)*(byte *)((int)param_1 + 0x8e9);
    if ((pcVar7 == (char *)0x0) && (bVar3)) {
      *(undefined1 *)((int)param_1 + 0x8ea) = 1;
      local_8c = &DAT_00123760;
      local_90 = uVar8;
      uVar8 = func_00564A78(param_1[0x103],(int *)&local_90);
      func_001119F4(&local_78,
                    (undefined4 *)(*(int *)(*(int *)(param_1[0x103] + 0x24) + 0x14) + uVar8 * 0x30))
      ;
      local_48 = local_6c;
      local_44 = local_5c;
      local_40 = local_4c;
      local_7c = param_1[0xb3];
      objStack_98[0] = 0;
      pcVar7 = (char *)func_003167D4(&local_48,param_1[0xfa] + (int)uVar17 & 0xe0000000,&local_7c,0,
                                     0);
    }
  }
  else {
    pcVar7 = (char *)((int)param_1 + 0x8eb);
    if (cVar1 == '\x01') {
      pcVar7 = &DAT_0000000a;
      *(undefined1 *)((int)param_1 + 0x8ea) = 2;
      *(undefined1 *)((int)param_1 + 0x8eb) = 10;
    }
    else if ((cVar1 == '\x02') &&
            ((cVar1 = *(char *)((int)param_1 + 0x8eb), cVar1 == '\0' ||
             (*pcVar7 = cVar1 + -1, cVar1 == '\x01')))) {
      *(undefined1 *)((int)param_1 + 0x8ea) = 0;
    }
  }
  *(bool *)((int)param_1 + 0x8e9) = bVar3;
  return pcVar7;
}

