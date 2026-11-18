#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0018CFAC(int param_1);
extern int func_0018E15C(int param_1);
extern int func_0018FAD0(int param_1);
extern int func_002C2D00(int *param_1);
extern int func_004356B4(int *param_1);
extern int func_00435714(undefined4 *param_1);
extern int func_004A8BFC(int param_1,int param_2,uint param_3);
extern int func_004A9120(undefined4 param_1,int param_2);
extern int func_004EDEA0(int param_1,uint *param_2);
extern int func_004EE484(undefined4 *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00533400(int param_1,int *param_2);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_005532D8(undefined4 param_1,int param_2,int param_3);
extern int func_00556CF4(void);
extern int func_00659688(undefined4 *param_1,undefined1 param_2);
extern int DAT_0018ffc8;
extern int *DAT_0018ffcc;
extern int DAT_0018ffd0;
extern float DAT_0018ffd4;
extern undefined4 *DAT_0018ffd8;
extern int DAT_0018ffdc;
extern float DAT_0018ffe0;
extern float DAT_0018ffe4;
extern float DAT_0018ffe8;
extern undefined *DAT_0018ffec;
extern int *DAT_0018fff0;
extern uint *DAT_0018fff4;
extern int *DAT_0018fff8;
extern undefined4 *DAT_0018fffc;
extern undefined4 DAT_00190000;
extern float DAT_00190004;
extern float DAT_00190008;
extern uint DAT_0019000c;
extern int *DAT_00190010;
extern undefined *DAT_00190578;
extern int DAT_0019057c;
extern uint DAT_00190590;
extern undefined4 *DAT_00190620;
extern uint DAT_00190624;
extern undefined4 *DAT_00190628;
extern int *DAT_00190940;
extern int *DAT_00190944;
extern undefined DAT_00190948;
extern uint DAT_00190950;
extern char s_Chain_00190954[];
extern char s_cState_HookedEnemy_0019060c[];
extern char s_cState_HookedSwitchPull_001905f4[];
extern char s_cState_Release_00190580[];
extern char s_cState_ReturnPutAway_001905a4[];
extern char s_cState_Return_00190594[];
extern char s_cState_StickLast_001905cc[];
extern char s_cState_StickPutAway_001905e0[];
extern char s_cState_Stick_001905bc[];

// USA 0018FBA8 <- EU 0018FBA8 (Ghidra, non-matching)
// GLOBAL DAT_0018ffc8 int
// GLOBAL DAT_0018ffcc int *
// GLOBAL DAT_0018ffd0 int
// GLOBAL DAT_0018ffd4 float
// GLOBAL DAT_0018ffd8 undefined4 *
// GLOBAL DAT_0018ffdc int
// GLOBAL DAT_0018ffe0 float
// GLOBAL DAT_0018ffe4 float
// GLOBAL DAT_0018ffe8 float
// GLOBAL DAT_0018ffec undefined *
// GLOBAL DAT_0018fff0 int *
// GLOBAL DAT_0018fff4 uint *
// GLOBAL DAT_0018fff8 int *
// GLOBAL DAT_0018fffc undefined4 *
// GLOBAL DAT_00190000 undefined4
// GLOBAL DAT_00190004 float
// GLOBAL DAT_00190008 float
// GLOBAL DAT_0019000c uint
// GLOBAL DAT_00190010 int *
// GLOBAL DAT_00190578 undefined *
// GLOBAL DAT_0019057c int
// GLOBAL DAT_00190590 uint
// GLOBAL DAT_00190620 undefined4 *
// GLOBAL DAT_00190624 uint
// GLOBAL DAT_00190628 undefined4 *
// GLOBAL DAT_00190940 int *
// GLOBAL DAT_00190944 int *
// GLOBAL DAT_00190948 undefined
// GLOBAL DAT_00190950 uint
// GLOBAL s_Chain_00190954 string
// GLOBAL s_cState_HookedEnemy_0019060c string
// GLOBAL s_cState_HookedSwitchPull_001905f4 string
// GLOBAL s_cState_Release_00190580 string
// GLOBAL s_cState_ReturnPutAway_001905a4 string
// GLOBAL s_cState_Return_00190594 string
// GLOBAL s_cState_StickLast_001905cc string
// GLOBAL s_cState_StickPutAway_001905e0 string
// GLOBAL s_cState_Stick_001905bc string

/* WARNING: Variable defined which should be unmapped: objStack_e0 */
/* WARNING: Variable defined which should be unmapped: objStack_dc */
/* WARNING: Variable defined which should be unmapped: objStack_d8 */

undefined4 * func_0018FBA8(undefined4 *param_1,uint *param_2)

{
  char cVar1;
  float fVar2;
  uint uVar3;
  undefined2 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float *pfVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined2 *puVar12;
  int *piVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  undefined4 *puVar20;
  bool bVar21;
  uint in_fpscr;
  float fVar22;
  float fVar23;
  int iVar24;
  int iVar25;
  undefined4 uVar26;
  uint uVar27;
  ulonglong uVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  ulonglong uVar32;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define objStack_e0 ((uint *)(albw_frame + 0x0))
  #define objStack_dc ((uint *)(albw_frame + 0x4))
  #define objStack_d8 ((uint *)(albw_frame + 0x8))
  #define local_d0 (*(uint *)(albw_frame + 0x10))
  #define local_cc (*(undefined4 * *)(albw_frame + 0x14))
  #define local_c8 (*(uint *)(albw_frame + 0x18))
  #define local_c4 (*(undefined4 * *)(albw_frame + 0x1c))
  #define local_c0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_bc (*(undefined4 *)(albw_frame + 0x24))
  #define local_b8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_b4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_b0 (*(float *)(albw_frame + 0x30))
  #define local_ac (*(float *)(albw_frame + 0x34))
  #define local_a8 (*(float *)(albw_frame + 0x38))
  #define local_98 (*(uint *)(albw_frame + 0x48))
  #define local_94 (*(char * *)(albw_frame + 0x4c))
  #define local_90 (*(float *)(albw_frame + 0x50))
  #define local_8c (*(undefined4 * *)(albw_frame + 0x54))
  #define local_88 (*(uint *)(albw_frame + 0x58))
  #define local_84 (*(undefined * *)(albw_frame + 0x5c))
  #define uStack_80 (*(uint *)(albw_frame + 0x60))
  #define local_7c (*(uint *)(albw_frame + 0x64))
  #define local_78 (*(int *)(albw_frame + 0x68))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x70))
  #define local_6c (*(undefined1 *)(albw_frame + 0x74))
  #define local_6b (*(undefined1 *)(albw_frame + 0x75))
  #define local_68 (*(undefined4 *)(albw_frame + 0x78))
  #define local_64 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x80))
  #define local_5c (*(undefined4 *)(albw_frame + 0x84))
  #define local_58 (*(undefined4 *)(albw_frame + 0x88))
  #define local_54 (*(undefined4 *)(albw_frame + 0x8c))
  #define local_50 (*(undefined1 *)(albw_frame + 0x90))
  #define local_4f (*(undefined1 *)(albw_frame + 0x91))
  #define local_4c (*(float *)(albw_frame + 0x94))
  #define local_48 (*(float *)(albw_frame + 0x98))
  #define local_44 (*(float *)(albw_frame + 0x9c))
  #define local_40 (*(float *)(albw_frame + 0xa0))
  piVar5 = func_00150E40(param_1,param_2);
  piVar13 = DAT_0018ffcc;
  iVar16 = DAT_0018ffc8 + 0x5c;
  *piVar5 = DAT_0018ffc8;
  piVar5[200] = iVar16;
  iVar16 = DAT_0018ffd0;
  iVar14 = *piVar13;
  iVar19 = piVar13[1];
  piVar5[0x104] = (int)piVar5;
  piVar5[0x105] = iVar14;
  piVar5[0x106] = iVar19;
  piVar5[0x103] = iVar16;
  iVar14 = piVar13[2];
  iVar19 = piVar13[3];
  piVar5[0x107] = iVar16;
  piVar5[0x108] = (int)piVar5;
  piVar5[0x109] = iVar14;
  piVar5[0x10a] = iVar19;
  piVar5[0x10d] = 0;
  iVar14 = func_004EE484(piVar5 + 0x10e);
  puVar6 = func_0010A794((undefined4 *)(iVar14 + 100));
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  *(undefined1 *)(puVar6 + 0x12) = 0x19;
  puVar6[0x13] = 0;
  fVar30 = DAT_0018ffd4;
  puVar20 = puVar6 + -0x127;
  local_cc = puVar6 + -0x27;
  puVar6[0x17] = ALBW_AS_U32(DAT_0018ffd4);
  puVar6[0x18] = 0;
  puVar6[0x21] = 0;
  puVar6[0x23] = 0;
  puVar6[0x24] = 0;
  puVar6[0x25] = 0;
  puVar6[0x26] = 0;
  puVar6[0x28] = 0;
  iVar14 = piVar13[0x2c];
  iVar19 = piVar13[0x2d];
  puVar6[0x27] = iVar16;
  puVar6[0x29] = iVar14;
  puVar6[0x2a] = iVar19;
  local_c4 = puVar6 + 0x2b;
  puVar6[0x2c] = 0;
  iVar14 = piVar13[0x2c];
  iVar19 = piVar13[0x2d];
  puVar6[0x2b] = iVar16;
  puVar6[0x2d] = iVar14;
  puVar6[0x2e] = iVar19;
  *(undefined2 *)((int)puVar6 + 0xbe) = 0;
  puVar7 = DAT_0018ffd8;
  *(undefined1 *)((int)puVar6 + 0xc1) = 0;
  *(undefined1 *)(puVar6 + 0x31) = 0;
  *(undefined1 *)((int)puVar6 + 0xc5) = 0;
  *(undefined1 *)((int)puVar6 + 0xc6) = 0;
  fVar23 = DAT_0018ffe4;
  fVar31 = DAT_0018ffe0;
  uVar15 = *puVar7;
  uVar17 = puVar7[1];
  uVar32 = (ulonglong)(uint)ALBW_AS_U32(DAT_0018ffe4);
  puVar6[0x34] = puVar7[2];
  puVar6[0x32] = uVar15;
  puVar6[0x33] = uVar17;
  puVar6[0x38] = 0;
  fVar2 = DAT_0018ffe8;
  puVar6[0x38] = param_2[0x13];
  iVar14 = (int)ALBW_AS_F32(param_2[0x11]);
  local_88 = (uint)(9 < iVar14);
  iVar16 = (int)((ulonglong)((longlong)DAT_0018ffdc * (longlong)iVar14) >> 0x20);
  bVar21 = iVar14 + ((iVar16 >> 2) - (iVar16 >> 0x1f)) * -10 != 0;
  fVar22 = fVar31;
  if (!bVar21) {
    fVar22 = fVar23;
  }
  *(bool *)((int)puVar6 + 0xc2) = bVar21;
  fVar22 = fVar22 * fVar2;
  iVar16 = (int)fVar22;
  fVar23 = (float)VectorSignedToFloat(iVar16,(byte)(in_fpscr >> 0x15) & 3);
  if ((fVar23 != fVar22) && (fVar30 <= fVar22)) {
    iVar16 = iVar16 + 1;
  }
  uVar15 = func_0010BA78(iVar16 << 2);
  puVar6[-0x1c] = uVar15;
  piVar13 = puVar6 + -0x1c;
  puVar7 = (undefined4 *)func_0010BA78(iVar16 * 100 + 8);
  iVar14 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 100;
    puVar7[1] = iVar16;
    iVar14 = func_00100118((int)(puVar7 + 2),DAT_0018ffec,100,iVar16);
  }
  piVar5 = puVar6 + -0x1b;
  puVar6[-0x1b] = iVar14;
  if (puVar6[0x38] == 0) {
    pfVar8 = *(float **)(*DAT_0018fff8 + 0x1c);
    local_48 = *pfVar8;
    local_44 = pfVar8[1];
    local_40 = pfVar8[2];
  }
  else {
    puVar7 = (undefined4 *)func_0052FBA0(*DAT_0018fff0 + 0x3dbbc,puVar6[0x38]);
    if (((*DAT_0018fff4 & 1) == 0) && (iVar14 = func_00100174((int *)DAT_0018fff4), iVar14 != 0)) {
      *DAT_0018fffc = DAT_00190000;
    }
    if ((puVar7 == (undefined4 *)0x0) ||
       (iVar14 = (**(code **)*puVar7)(puVar7,DAT_0018fffc), iVar14 == 0)) {
      puVar7 = (undefined4 *)0x0;
    }
    if (puVar7 == (undefined4 *)0x0) {
      *(undefined1 *)((int)puVar6 + -0x1c5) = 1;
      return puVar20;
    }
    local_48 = ALBW_AS_F32(puVar7[0xf4]);
    local_44 = ALBW_AS_F32(puVar7[0xf5]);
    local_40 = ALBW_AS_F32(puVar7[0xf6]);
    *(undefined1 *)((int)puVar6 + 0xc6) = 1;
  }
  fVar23 = local_44 + DAT_00190004;
  func_00115154((float *)objStack_e0,(float *)objStack_dc,puVar6[-0x2d]);
  local_b0 = ALBW_AS_F32(objStack_e0[0]) * DAT_00190008;
  local_a8 = ALBW_AS_F32(objStack_dc[0]) * DAT_00190008;
  local_ac = fVar30;
  func_00115C54((float *)(puVar6 + -0x33),(float *)(puVar6 + -0x33),&local_b0);
  puVar6[0xc] = puVar6[-0x33];
  iVar14 = 0;
  puVar6[0xd] = puVar6[-0x32];
  puVar6[0xe] = puVar6[-0x31];
  local_cc[0x34] = ALBW_AS_U32(fVar23);
  uVar27 = DAT_0019000c;
  uVar28 = (ulonglong)DAT_0019000c;
  puVar6[0xf] = puVar6[0xc];
  puVar6[0x10] = puVar6[0xd];
  puVar6[0x11] = puVar6[0xe];
  if (0 < iVar16) {
    do {
      local_d0 = 6;
      piVar9 = func_00435714(&local_d0);
      *(int **)(puVar6[-0x1c] + iVar14 * 4) = piVar9;
      iVar19 = *(int *)(*piVar13 + iVar14 * 4);
      *(undefined4 *)(iVar19 + 4) = puVar6[0xc];
      *(undefined4 *)(iVar19 + 8) = puVar6[0xd];
      *(undefined4 *)(iVar19 + 0xc) = puVar6[0xe];
      *(int *)(*(int *)(*piVar13 + iVar14 * 4) + 0x58) = (int)uVar28;
      func_004356B4(*(int **)(*piVar13 + iVar14 * 4));
      uVar27 = (uint)uVar28;
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar16);
  }
  cVar1 = *(char *)(*DAT_00190010 + 0x18);
  if ((cVar1 == '\x0e' || cVar1 == '\x10') || (cVar1 == '\x13' || cVar1 == '\x14')) {
    objStack_d8[0] = 6;
    piVar9 = func_00435714(objStack_d8);
    puVar6[-0x1a] = piVar9;
    piVar9[1] = puVar6[-0x33];
    piVar9[2] = puVar6[-0x32];
    piVar9[3] = puVar6[-0x31];
    *(uint *)(puVar6[-0x1a] + 0x58) = uVar27;
    func_004356B4((int *)puVar6[-0x1a]);
  }
  puVar6[9] = puVar6[-0x33];
  puVar6[10] = puVar6[-0x32];
  puVar6[0xb] = puVar6[-0x31];
  func_00115C70((float *)(puVar6 + 0x14),(float *)(puVar6 + 9),&local_48);
  objStack_d8[0] = 8;
  *(undefined1 *)((int)puVar6 + 6) = 8;
  puVar6[5] = puVar20;
  local_8c = puVar6;
  iVar14 = func_0010BA78(0x80);
  puVar6[6] = iVar14;
  puVar6[7] = iVar14 + (uint)*(byte *)((int)puVar6 + 6) * 8;
  iVar19 = 8;
  piVar9 = (int *)(iVar14 + -8);
  do {
    piVar11 = DAT_0018ffcc;
    iVar14 = DAT_0018ffcc[0x2b];
    iVar19 = iVar19 + -1;
    piVar9[2] = DAT_0018ffcc[0x2a];
    piVar9[3] = iVar14;
    iVar14 = piVar11[0x2b];
    piVar9[4] = piVar11[0x2a];
    piVar9[5] = iVar14;
    piVar9 = piVar9 + 4;
  } while (iVar19 != 0);
  local_d0 = (uint)*(byte *)((int)puVar6 + 6);
  piVar9 = (int *)func_0010BA78(local_d0 << 3);
  uVar27 = objStack_d8[0];
  puVar6[8] = piVar9;
  if (0 < (int)local_d0) {
    piVar10 = piVar9 + -2;
    if ((local_d0 & 1) != 0) {
      iVar14 = piVar11[9];
      *piVar9 = piVar11[8];
      piVar9[1] = iVar14;
      piVar10 = piVar9;
    }
    for (iVar14 = (int)local_d0 >> 1; iVar14 != 0; iVar14 = iVar14 + -1) {
      iVar19 = piVar11[9];
      piVar10[2] = piVar11[8];
      piVar10[3] = iVar19;
      iVar19 = piVar11[9];
      piVar10[4] = piVar11[8];
      piVar10[5] = iVar19;
      piVar10 = piVar10 + 4;
    }
  }
  if (0 < (int)objStack_d8[0]) {
    puVar7 = (undefined4 *)func_0010CEE0(objStack_d8[0] * 0x24 + 8,(int *)0x0,4);
    iVar14 = 0;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = 0x24;
      puVar7[1] = uVar27;
      iVar14 = func_00100118((int)(puVar7 + 2),DAT_00190578,0x24,uVar27);
    }
    if (iVar14 != 0) {
      puVar6[2] = uVar27;
      puVar6[3] = iVar14;
    }
  }
  iVar14 = DAT_0019057c;
  puVar6[-0x52] = local_8c;
  uVar27 = DAT_00190590;
  *(undefined2 *)(iVar14 + (int)puVar20) = 8;
  local_94 = s_cState_Release_00190580;
  local_98 = uVar27;
  func_0010BEC4((int)local_8c,0,(int *)&local_98);
  piVar9 = DAT_0018ffcc;
  piVar11 = (int *)puVar6[6];
  iVar14 = DAT_0018ffcc[6];
  iVar19 = DAT_0018ffcc[7];
  iVar25 = DAT_0018ffcc[5];
  uVar29 = *(undefined8 *)(DAT_0018ffcc + 8);
  *piVar11 = DAT_0018ffcc[4];
  piVar11[1] = iVar25;
  piVar11 = (int *)puVar6[7];
  *piVar11 = iVar14;
  piVar11[1] = iVar19;
  puVar7 = (undefined4 *)puVar6[8];
  *puVar7 = (int)uVar29;
  puVar7[1] = (int)((ulonglong)uVar29 >> 0x20);
  local_94 = s_cState_Return_00190594;
  local_98 = uVar27;
  func_0010BEC4((int)local_8c,1,(int *)&local_98);
  iVar14 = puVar6[6];
  iVar19 = piVar9[0xb];
  iVar25 = piVar9[0xc];
  iVar24 = piVar9[0xd];
  *(int *)(iVar14 + 8) = piVar9[10];
  *(int *)(iVar14 + 0xc) = iVar19;
  iVar14 = puVar6[7];
  *(int *)(iVar14 + 8) = iVar25;
  *(int *)(iVar14 + 0xc) = iVar24;
  iVar14 = puVar6[8];
  *(int *)(iVar14 + 8) = (int)uVar29;
  *(int *)(iVar14 + 0xc) = (int)((ulonglong)uVar29 >> 0x20);
  local_94 = s_cState_ReturnPutAway_001905a4;
  local_98 = uVar27;
  func_0010BEC4((int)local_8c,2,(int *)&local_98);
  iVar14 = puVar6[6];
  iVar19 = piVar9[0xf];
  iVar25 = piVar9[0x10];
  iVar24 = piVar9[0x11];
  *(int *)(iVar14 + 0x10) = piVar9[0xe];
  *(int *)(iVar14 + 0x14) = iVar19;
  iVar14 = puVar6[7];
  *(int *)(iVar14 + 0x10) = iVar25;
  *(int *)(iVar14 + 0x14) = iVar24;
  iVar14 = puVar6[8];
  *(int *)(iVar14 + 0x10) = (int)uVar29;
  *(int *)(iVar14 + 0x14) = (int)((ulonglong)uVar29 >> 0x20);
  local_94 = s_cState_Stick_001905bc;
  local_98 = uVar27;
  func_0010BEC4((int)local_8c,3,(int *)&local_98);
  iVar14 = puVar6[6];
  iVar19 = piVar9[0x13];
  iVar25 = piVar9[0x14];
  iVar24 = piVar9[0x15];
  *(int *)(iVar14 + 0x18) = piVar9[0x12];
  *(int *)(iVar14 + 0x1c) = iVar19;
  iVar14 = puVar6[7];
  *(int *)(iVar14 + 0x18) = iVar25;
  *(int *)(iVar14 + 0x1c) = iVar24;
  iVar14 = puVar6[8];
  *(int *)(iVar14 + 0x18) = (int)uVar29;
  *(int *)(iVar14 + 0x1c) = (int)((ulonglong)uVar29 >> 0x20);
  local_94 = s_cState_StickLast_001905cc;
  local_98 = uVar27;
  func_0010BEC4((int)local_8c,4,(int *)&local_98);
  iVar14 = puVar6[6];
  iVar19 = piVar9[0x17];
  iVar25 = piVar9[0x18];
  iVar24 = piVar9[0x19];
  *(int *)(iVar14 + 0x20) = piVar9[0x16];
  *(int *)(iVar14 + 0x24) = iVar19;
  iVar14 = puVar6[7];
  *(int *)(iVar14 + 0x20) = iVar25;
  *(int *)(iVar14 + 0x24) = iVar24;
  iVar14 = puVar6[8];
  *(int *)(iVar14 + 0x20) = (int)uVar29;
  *(int *)(iVar14 + 0x24) = (int)((ulonglong)uVar29 >> 0x20);
  local_94 = s_cState_StickPutAway_001905e0;
  local_98 = uVar27;
  func_0010BEC4((int)local_8c,5,(int *)&local_98);
  iVar14 = puVar6[6];
  iVar19 = piVar9[0x1b];
  iVar25 = piVar9[0x1c];
  iVar24 = piVar9[0x1d];
  *(int *)(iVar14 + 0x28) = piVar9[0x1a];
  *(int *)(iVar14 + 0x2c) = iVar19;
  iVar14 = puVar6[7];
  *(int *)(iVar14 + 0x28) = iVar25;
  *(int *)(iVar14 + 0x2c) = iVar24;
  iVar14 = puVar6[8];
  *(int *)(iVar14 + 0x28) = (int)uVar29;
  *(int *)(iVar14 + 0x2c) = (int)((ulonglong)uVar29 >> 0x20);
  local_94 = s_cState_HookedSwitchPull_001905f4;
  local_98 = uVar27;
  func_0010BEC4((int)local_8c,6,(int *)&local_98);
  iVar14 = puVar6[6];
  iVar19 = piVar9[0x1f];
  iVar25 = piVar9[0x20];
  iVar24 = piVar9[0x21];
  *(int *)(iVar14 + 0x30) = piVar9[0x1e];
  *(int *)(iVar14 + 0x34) = iVar19;
  iVar14 = puVar6[7];
  *(int *)(iVar14 + 0x30) = iVar25;
  *(int *)(iVar14 + 0x34) = iVar24;
  iVar14 = puVar6[8];
  *(int *)(iVar14 + 0x30) = (int)uVar29;
  *(int *)(iVar14 + 0x34) = (int)((ulonglong)uVar29 >> 0x20);
  local_94 = s_cState_HookedEnemy_0019060c;
  local_98 = uVar27;
  func_0010BEC4((int)local_8c,7,(int *)&local_98);
  iVar14 = puVar6[6];
  iVar19 = 0;
  uVar15 = DAT_00190620[1];
  uVar17 = DAT_00190620[2];
  uVar26 = DAT_00190620[3];
  *(undefined4 *)(iVar14 + 0x38) = *DAT_00190620;
  *(undefined4 *)(iVar14 + 0x3c) = uVar15;
  iVar14 = puVar6[7];
  *(undefined4 *)(iVar14 + 0x38) = uVar17;
  *(undefined4 *)(iVar14 + 0x3c) = uVar26;
  iVar14 = puVar6[8];
  *(int *)(iVar14 + 0x38) = (int)uVar29;
  *(int *)(iVar14 + 0x3c) = (int)((ulonglong)uVar29 >> 0x20);
  if (0 < iVar16) {
    do {
      *(undefined4 *)(puVar6[-0x1b] + iVar19 * 100 + 0x10) =
           *(undefined4 *)(puVar6[-0x1c] + iVar19 * 4);
      local_cc = (undefined4 *)puVar6[-0x74];
      func_004EDEA0(*piVar5 + iVar19 * 100,(uint *)&local_cc);
      iVar19 = iVar19 + 1;
    } while (iVar19 < iVar16);
  }
  if (puVar6[-0x1a] != 0) {
    objStack_e0[0] = puVar6[-0x74];
    puVar6[-0x15] = puVar6[-0x1a];
    func_004EDEA0((int)(puVar6 + -0x19),objStack_e0);
  }
  iVar14 = func_0054DDF4((int)puVar20,(uint)(*(char *)((int)puVar6 + 0xc2) != '\0'));
  piVar9 = DAT_0018ffcc;
  puVar6[-0x3f] = iVar14;
  puVar6[-0x3e] = iVar14;
  iVar14 = piVar9[0x26];
  iVar19 = piVar9[0x27];
  puVar6[0x28] = puVar20;
  iVar25 = 0;
  puVar6[0x29] = iVar14;
  puVar6[0x2a] = iVar19;
  if (0 < iVar16) {
    do {
      puVar12 = (undefined2 *)
                func_0054DDF4((int)puVar20,(uint)(*(char *)((int)puVar6 + 0xc2) != '\0'));
      local_b0 = ALBW_AS_F32(puVar6[-0x74]);
      objStack_e0[0] = (uint)*(short *)(puVar6 + -0x112);
      objStack_d8[0] = DAT_00190624;
      uVar18 = objStack_d8[0];
      (*(undefined2 *)((char *)&objStack_d8[0] + 0)) = (undefined2)DAT_00190624;
      uVar4 = (undefined2)objStack_d8[0];
      objStack_dc[0] = (uint)(puVar6 + 0x27);
      objStack_d8[0] = uVar18;
      func_0014EB8C(puVar6[-0x1b] + iVar25 * 100,*(undefined4 *)(puVar6[-0x1c] + iVar25 * 4),puVar12
                    ,(uint *)&local_b0,*(short *)(puVar6 + -0x112),puVar6 + 0x27,uVar4);
      iVar25 = iVar25 + 1;
    } while (iVar25 < iVar16);
  }
  if (puVar6[-0x1a] != 0) {
    uVar15 = *DAT_00190628;
    uVar17 = DAT_00190628[1];
    local_c4[1] = puVar20;
    local_c4[2] = uVar15;
    local_c4[3] = uVar17;
    puVar12 = (undefined2 *)
              func_0054DDF4((int)puVar20,(uint)(*(char *)((int)puVar6 + 0xc2) != '\0'));
    local_c8 = puVar6[-0x74];
    objStack_e0[0] = (uint)*(short *)(puVar6 + -0x112);
    objStack_dc[0] = (uint)local_c4;
    objStack_d8[0] = DAT_00190624;
    uVar18 = objStack_d8[0];
    (*(undefined2 *)((char *)&objStack_d8[0] + 0)) = (undefined2)DAT_00190624;
    uVar4 = (undefined2)objStack_d8[0];
    objStack_d8[0] = uVar18;
    func_0014EB8C((int)(puVar6 + -0x19),puVar6[-0x1a],puVar12,&local_c8,*(short *)(puVar6 + -0x112),
                  local_c4,uVar4);
  }
  fVar23 = ALBW_AS_F32(uVar32);
  if ((*(char *)((int)puVar6 + 0xc6) != '\0') && (iVar14 = 0, 0 < iVar16)) {
    do {
      func_004A9120(*DAT_00190940,puVar6[-0x1b] + iVar14 * 100);
      func_004A8BFC(*DAT_00190940,*piVar5 + iVar14 * 100,3);
      fVar23 = ALBW_AS_F32(uVar32);
      iVar19 = iVar14 + 1;
      *(undefined2 *)(*piVar5 + iVar14 * 100 + 0x32) = 0x920;
      *(undefined1 *)(*piVar5 + iVar14 * 100 + 0x22) = 5;
      iVar14 = iVar19;
    } while (iVar19 < iVar16);
  }
  iVar14 = 0;
  if (0 < iVar16) {
    do {
      iVar19 = *(int *)(puVar6[-0x1c] + iVar14 * 4);
      uVar18 = *(uint *)(iVar19 + 0x2c);
      *(uint *)(iVar19 + 0x2c) = uVar18 | 8;
      iVar19 = iVar14 * 4;
      iVar14 = iVar14 + 1;
      *(uint *)(*(int *)(*piVar13 + iVar19) + 0x2c) = uVar18 | 0x80008;
    } while (iVar14 < iVar16);
  }
  func_00115154(&local_4c,&local_90,puVar6[-0x2d]);
  if (*(char *)((int)puVar6 + 0xc2) == '\0') {
    fVar31 = fVar23;
  }
  puVar6[-0x30] = ALBW_AS_U32(local_4c * fVar31);
  puVar6[-0x2f] = ALBW_AS_U32(fVar30);
  puVar6[-0x2e] = ALBW_AS_U32(local_90 * fVar31);
  if (puVar6[0x38] == 0) {
    iVar16 = func_00556CF4();
  }
  else {
    if (local_88 == 0) {
      if (*(char *)((int)puVar6 + 0xc2) == '\0') {
        iVar16 = 1;
      }
      else {
        iVar16 = 2;
      }
    }
    else {
      iVar16 = 0;
    }
    iVar16 = func_005532D8(*(undefined4 *)(*DAT_00190944 + 0x10),4,iVar16);
  }
  local_84 = &DAT_00190948;
  local_88 = uVar27;
  local_d0 = func_00533400(iVar16,(int *)&local_88);
  uVar3 = DAT_00190950;
  objStack_e0[0] = uVar27;
  objStack_dc[0] = DAT_00190950;
  objStack_d8[0] = uVar27;
  objStack_d8[1] = DAT_00190950;
  local_cc = (undefined4 *)0x0;
  uVar18 = (uint)local_c4 >> 8;
  local_c8 = 0;
  local_b0 = 0.0;
  local_ac = 0.0;
  local_bc = 0;
  local_c0 = 0;
  local_b4 = 0;
  local_b8 = 0;
  local_a8 = ALBW_AS_F32(CONCAT22((*(undefined2 *)((char *)&local_a8 + 2)),0xc401));
  local_c4 = (undefined4 *)CONCAT31((uint3)uVar18 & 0xffff00,1);
  piVar13 = func_002C2D00((int *)objStack_e0);
  puVar6[0x23] = piVar13;
  iVar14 = func_0054D89C((int)puVar20,0);
  puVar6[0x25] = iVar14;
  objStack_d8[1] = (uint)s_Chain_00190954;
  objStack_d8[0] = uVar27;
  local_78 = func_00533400(iVar16,(int *)objStack_d8);
  local_88 = uVar27;
  local_84 = (undefined *)uVar3;
  uStack_80 = uVar27;
  local_7c = uVar3;
  uStack_74 = 0;
  local_50 = 1;
  local_6b = 0;
  local_70 = 0;
  local_58 = 0;
  local_54 = 0;
  local_64 = 0;
  local_68 = 0;
  local_5c = 0;
  local_60 = 0;
  local_4f = 0xc4;
  local_6c = 1;
  if (*(char *)((int)puVar6 + 0xc2) == '\0') {
    iVar16 = 9;
  }
  else {
    iVar16 = 0xc;
  }
  uVar15 = func_0010BA78(iVar16 << 2);
  iVar14 = 0;
  puVar6[0x24] = uVar15;
  if (iVar16 != 0) {
    do {
      piVar13 = func_002C2D00((int *)&local_88);
      *(int **)(puVar6[0x24] + iVar14 * 4) = piVar13;
      if (puVar6[0x26] != 0) {
        iVar19 = func_0054D89C((int)puVar20,1);
        *(int *)(puVar6[0x26] + iVar14 * 4) = iVar19;
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar16);
  }
  func_00659688(local_8c,0);
  func_0018FAD0((int)puVar20);
  func_0018CFAC((int)puVar20);
  func_0018E15C((int)puVar20);
  func_00151148(puVar6[0x25],0);
  return puVar20;
}

