/* compilefix: USA 00304C64 (EU 00304C40), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: member reference base type 'uint' (aka 'unsigned int') is not a structure or union
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - arr[i]._O_S_ -> typed byte access at (char *)&arr[i] + O [1]
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [1]
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [1]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [6]
 *  - explicit casts at pointer-type mismatches (identity on the ARM) [1]
 *  - implicit float<->int conversions (Ghidra COPY between a float and an int-typed variable or
 *    pool word, e.g. `fVar = _DAT_xxx;`, `puVar[3] = fVar;`) made bit copies [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "../include/ghidra_concat44.h"
extern char s_cf_0030507c[];
#include "compilefix.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_0011549C(float *param_1,float *param_2,float *param_3);
extern int func_001663BC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_001695F8(int param_1,uint param_2,int *param_3);
extern int func_00169678(int param_1,uint param_2,int *param_3);
extern int func_001E3FD8(int param_1);
extern int func_001E405C(int param_1,undefined4 param_2);
extern int func_001E4090(int param_1,undefined4 param_2);
extern int func_001E40DC(int param_1,int param_2);
extern int func_001E40F4(int param_1,int param_2);
extern int func_001E410C(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_001E4318(int param_1);
extern float func_001E4378(int param_1);
extern int func_001E43DC(int param_1,float fparam_0);
extern int func_001E43F8(int param_1,float fparam_0);
extern int func_002E0274(undefined4 *param_1,uint *param_2);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004ECF6C(int param_1);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDB28(int param_1,int param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00664884(undefined4 *param_1,undefined1 param_2);
extern int DAT_00305038;
extern float DAT_0030503c;
extern undefined *DAT_00305040;
extern int DAT_00305044;
extern undefined DAT_00305048;
extern float DAT_00305074;
extern undefined4 DAT_00305078;
extern float DAT_00305094;
extern float DAT_00305098;
extern float *DAT_00305674;
extern int *DAT_00305678;
extern int DAT_0030567c;
extern int DAT_00305680;
extern undefined4 *DAT_00305684;
extern undefined *DAT_00305688;
extern int DAT_0030568c;
extern char s_Actor_DoorHolocaust_kcl_0030507c[];
extern char s_cState_CloseStay_003056c0[];
extern char s_cState_Close_003056a0[];
extern char s_cState_OpenStay_00305690[];
extern char s_cState_Open_003056e8[];
extern char s_cState_TurnBack_003056b0[];
extern char s_cState_WaitOpened_003056d4[];

// USA 00304C64 <- EU 00304C40 (Ghidra, non-matching)
// GLOBAL DAT_00305038 int
// GLOBAL DAT_0030503c float
// GLOBAL DAT_00305040 undefined *
// GLOBAL DAT_00305044 int
// GLOBAL DAT_00305048 undefined
// GLOBAL DAT_00305074 float
// GLOBAL DAT_00305078 undefined4
// GLOBAL DAT_00305094 float
// GLOBAL DAT_00305098 float
// GLOBAL DAT_00305674 float *
// GLOBAL DAT_00305678 int *
// GLOBAL DAT_0030567c int
// GLOBAL DAT_00305680 int
// GLOBAL DAT_00305684 undefined4 *
// GLOBAL DAT_00305688 undefined *
// GLOBAL DAT_0030568c int
// GLOBAL EXT_00000004 undefined
// GLOBAL s_cf_0030507c string
// GLOBAL s_cState_CloseStay_003056c0 string
// GLOBAL s_cState_Close_003056a0 string
// GLOBAL s_cState_OpenStay_00305690 string
// GLOBAL s_cState_Open_003056e8 string
// GLOBAL s_cState_TurnBack_003056b0 string
// GLOBAL s_cState_WaitOpened_003056d4 string

int func_00304C64(undefined4 *param_1,uint *param_2)

{
  float *pfVar1;
  bool bVar2;
  byte bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 extraout_r1;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar25;
  longlong lVar23;
  undefined8 uVar24;
  float fVar27;
  undefined8 uVar26;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define local_e0 (*(int *)(albw_frame + 0x0))
  #define local_dc (*(char * *)(albw_frame + 0x4))
  #define local_d8 (*(undefined4 *)(albw_frame + 0x8))
  #define local_d4 (*(uint * *)(albw_frame + 0xc))
  #define local_d0 (*(int *)(albw_frame + 0x10))
  #define local_cc ((uint *)(albw_frame + 0x14))
  #define uStack_8d (*(undefined1 *)(albw_frame + 0x53))
  #define local_8c (*(float *)(albw_frame + 0x54))
  #define local_88 (*(float *)(albw_frame + 0x58))
  #define local_84 (*(float *)(albw_frame + 0x5c))
  #define local_80 (*(float *)(albw_frame + 0x60))
  #define local_7c (*(float *)(albw_frame + 0x64))
  #define local_78 (*(float *)(albw_frame + 0x68))
  #define local_74 (*(float *)(albw_frame + 0x6c))
  #define local_70 (*(float *)(albw_frame + 0x70))
  #define local_6c (*(float *)(albw_frame + 0x74))
  #define afStack_68 ((float *)(albw_frame + 0x78))
  #define local_44 (*(uint *)(albw_frame + 0x9c))
  #define local_40 (*(int *)(albw_frame + 0xa0))
  #define local_3c (*(uint * *)(albw_frame + 0xa4))
  piVar4 = (int *)(uintptr_t)(func_002E0274(param_1,param_2));
  iVar17 = DAT_00305038;
  *piVar4 = DAT_00305038;
  piVar4[200] = iVar17 + 0x5c;
  puVar5 = (undefined4 *)(uintptr_t)(func_0010A794(piVar4 + 0x130));
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  fVar20 = DAT_0030503c;
  puVar5[10] = 0;
  puVar5[0xb] = ALBW_AS_U32(fVar20);
  piVar4 = (int *)&UndefinedInstruction;
  puVar5[0xc] = 0;
  iVar6 = func_00100118((int)(puVar5 + 0xd),DAT_00305040,4,4);
  iVar13 = iVar6 + -0x4f4;
  *(short *)(iVar6 + 0x10) = (short)param_2[0xb];
  puVar5 = (undefined4 *)func_0010BAB4(0x108);
  iVar17 = DAT_00305044;
  uVar7 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    local_dc = &DAT_00305048;
    local_e0 = DAT_00305044;
    piVar4 = (int *)0x3;
    uVar7 = func_001663BC(puVar5,(undefined4)(uintptr_t)(&local_e0),*(undefined4 *)(iVar6 + -0x228),3,1);
  }
  *(undefined4 *)(iVar6 + 0x14) = uVar7;
  *(undefined4 *)(iVar6 + 0x1c) = 0x5a;
  *(undefined4 *)(iVar6 + 0x18) = 0;
  *(float *)(iVar6 + 0x20) = fVar20;
  *(undefined1 *)(iVar6 + 0x24) = 0;
  *(undefined1 *)(iVar6 + 0x25) = 0;
  *(undefined1 *)(iVar6 + 0x26) = 0;
  *(undefined1 *)(iVar6 + 0x27) = 0;
  *(undefined1 *)(iVar6 + 0x28) = 0;
  *(undefined1 *)(iVar6 + 0x29) = 0;
  *(undefined1 *)(iVar6 + 0x2a) = 0;
  if (*(char *)(iVar6 + -0x21d) != '\0') {
    return iVar13;
  }
  bVar2 = func_00588BF0(iVar13,0);
  if (bVar2) {
    *(undefined1 *)(iVar6 + 0x2a) = 0;
  }
  else {
    *(undefined1 *)(iVar6 + 0x2a) = 1;
  }
  func_001E3FD8(iVar13);
  puVar8 = (undefined4 *)func_0010BAB4(0x48);
  puVar5 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)(uintptr_t)(func_004EDC9C(puVar8));
  }
  fVar25 = DAT_00305074;
  lVar23 = (ulonglong)(uint)ALBW_AS_U32(DAT_00305074) << 0x20;
  piVar16 = (int *)(iVar6 + -0x70);
  *(undefined4 **)(iVar6 + -0x70) = puVar5;
  if (puVar5 == (undefined4 *)0x0) goto LAB_003052a4;
  local_d0 = 0x40;
  uStack_8d = 0;
  (*(undefined1 *)((char *)&local_cc[0] + 0)) = 0;
  local_40 = iVar17;
  local_d8 = DAT_00305078;
  local_3c = (uint *)s_Actor_DoorHolocaust_kcl_0030507c;
  local_d4 = local_cc;
  (**(code **)(iVar17 + 8))(&local_40);
  uVar14 = 0;
  do {
    if (*(char *)((int)local_3c + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_00304e08;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_00304e08:
  if (local_d0 <= (int)uVar14) {
    uVar14 = local_d0 - 1;
  }
  (**(code **)(local_40 + 8))(&local_40);
  func_0010E3C4(local_cc,local_3c,uVar14);
  *(undefined1 *)((int)local_cc + uVar14) = 0;
  func_004EDB28(*(int *)(iVar6 + -0x70),(int)&local_d8);
  piVar4 = (int *)0x0;
  local_8c = fVar20;
  local_88 = fVar25;
  local_84 = fVar25;
  local_80 = fVar25;
  local_7c = fVar20;
  local_78 = fVar25;
  local_74 = fVar25;
  local_70 = fVar25;
  local_6c = fVar20;
  func_00491624(afStack_68,0,*(uint *)(iVar6 + -0x10c),0);
  func_0011549C(&local_8c,&local_8c,afStack_68);
  fVar27 = DAT_00305098;
  lVar23 = CONCAT44(fVar25,DAT_00305094);
  iVar15 = *(int *)(*piVar16 + 0x14);
  fVar19 = local_8c - *(float *)(iVar15 + 0x18);
  bVar2 = DAT_00305098 == fVar19;
  bVar18 = fVar19 <= DAT_00305098;
  if (!bVar18 || bVar2) {
    bVar2 = fVar19 == DAT_00305094;
    bVar18 = DAT_00305094 <= fVar19;
  }
  if (bVar18 && !bVar2) {
LAB_00304fe8:
    bVar2 = false;
  }
  else {
    fVar19 = local_88 - *(float *)(iVar15 + 0x1c);
    bVar2 = DAT_00305098 == fVar19;
    bVar18 = fVar19 <= DAT_00305098;
    if (!bVar18 || bVar2) {
      bVar2 = fVar19 == DAT_00305094;
      bVar18 = DAT_00305094 <= fVar19;
    }
    if (bVar18 && !bVar2) goto LAB_00304fe8;
    fVar19 = local_84 - *(float *)(iVar15 + 0x20);
    bVar2 = DAT_00305098 == fVar19;
    bVar18 = fVar19 <= DAT_00305098;
    if (!bVar18 || bVar2) {
      bVar2 = fVar19 == DAT_00305094;
      bVar18 = DAT_00305094 <= fVar19;
    }
    if (bVar18 && !bVar2) goto LAB_00304fe8;
    fVar19 = local_80 - *(float *)(iVar15 + 0x24);
    bVar2 = DAT_00305098 == fVar19;
    bVar18 = fVar19 <= DAT_00305098;
    if (!bVar18 || bVar2) {
      bVar2 = fVar19 == DAT_00305094;
      bVar18 = DAT_00305094 <= fVar19;
    }
    if (bVar18 && !bVar2) goto LAB_00304fe8;
    fVar19 = local_7c - *(float *)(iVar15 + 0x28);
    bVar2 = DAT_00305098 == fVar19;
    bVar18 = fVar19 <= DAT_00305098;
    if (!bVar18 || bVar2) {
      bVar2 = fVar19 == DAT_00305094;
      bVar18 = DAT_00305094 <= fVar19;
    }
    if (bVar18 && !bVar2) goto LAB_00304fe8;
    fVar19 = local_78 - *(float *)(iVar15 + 0x2c);
    bVar2 = DAT_00305098 == fVar19;
    bVar18 = fVar19 <= DAT_00305098;
    if (!bVar18 || bVar2) {
      bVar2 = fVar19 == DAT_00305094;
      bVar18 = DAT_00305094 <= fVar19;
    }
    if (bVar18 && !bVar2) goto LAB_00304fe8;
    fVar19 = local_74 - *(float *)(iVar15 + 0x30);
    bVar2 = DAT_00305098 == fVar19;
    bVar18 = fVar19 <= DAT_00305098;
    if (!bVar18 || bVar2) {
      bVar2 = fVar19 == DAT_00305094;
      bVar18 = DAT_00305094 <= fVar19;
    }
    if (bVar18 && !bVar2) goto LAB_00304fe8;
    fVar19 = local_70 - *(float *)(iVar15 + 0x34);
    bVar2 = DAT_00305098 == fVar19;
    bVar18 = fVar19 <= DAT_00305098;
    if (!bVar18 || bVar2) {
      bVar2 = fVar19 == DAT_00305094;
      bVar18 = DAT_00305094 <= fVar19;
    }
    if (bVar18 && !bVar2) goto LAB_00304fe8;
    fVar19 = local_6c - *(float *)(iVar15 + 0x38);
    bVar2 = DAT_00305098 == fVar19;
    bVar18 = fVar19 <= DAT_00305098;
    if (!bVar18 || bVar2) {
      bVar2 = fVar19 == DAT_00305094;
      bVar18 = DAT_00305094 <= fVar19;
    }
    if (bVar18 && !bVar2) goto LAB_00304fe8;
    bVar2 = true;
  }
  if (!bVar2) {
    bVar3 = *(byte *)(iVar15 + 0xa8);
    *(byte *)(iVar15 + 0xa8) = bVar3 | 8;
    if ((((local_8c == 1.0 && local_88 == fVar25) && (local_84 == fVar25 && local_80 == fVar25)) &&
        (local_7c == 1.0 && local_78 == fVar25)) &&
       ((local_74 == fVar25 && local_70 == fVar25) && local_6c == 1.0)) {
      *(float *)(iVar15 + 0x18) = fVar20;
      *(float *)(iVar15 + 0x1c) = fVar25;
      *(float *)(iVar15 + 0x20) = fVar25;
      bVar3 = bVar3 & 0xfb | 8;
      *(float *)(iVar15 + 0x24) = fVar25;
      *(float *)(iVar15 + 0x28) = fVar20;
      *(float *)(iVar15 + 0x2c) = fVar25;
      *(float *)(iVar15 + 0x30) = fVar25;
      *(float *)(iVar15 + 0x34) = fVar25;
      *(float *)(iVar15 + 0x38) = fVar20;
    }
    else {
      func_001151CC((undefined4 *)(iVar15 + 0x18),(undefined4 *)(&local_8c));
      bVar3 = *(byte *)(iVar15 + 0xa8) | 4;
    }
    *(byte *)(iVar15 + 0xa8) = bVar3;
  }
  func_0043625C(*(int **)(*(int *)(iVar6 + -0x70) + 0x14),(undefined4 *)(iVar6 + -0x124));
  iVar15 = *(int *)(*piVar16 + 0x14);
  fVar20 = ALBW_AS_F32(param_2[4]) - *(float *)(iVar15 + 4);
  bVar2 = fVar27 == fVar20;
  bVar18 = fVar20 <= fVar27;
  fVar25 = ALBW_AS_F32(lVar23);
  if (!bVar18 || bVar2) {
    bVar2 = fVar20 == fVar25;
    bVar18 = fVar25 <= fVar20;
  }
  if (bVar18 && !bVar2) {
LAB_00305174:
    bVar2 = false;
  }
  else {
    fVar20 = ALBW_AS_F32(param_2[5]) - *(float *)(iVar15 + 8);
    bVar2 = fVar27 == fVar20;
    bVar18 = fVar20 <= fVar27;
    if (!bVar18 || bVar2) {
      bVar2 = fVar20 == fVar25;
      bVar18 = fVar25 <= fVar20;
    }
    if (bVar18 && !bVar2) goto LAB_00305174;
    fVar20 = ALBW_AS_F32(param_2[6]) - *(float *)(iVar15 + 0xc);
    bVar2 = fVar27 == fVar20;
    bVar18 = fVar20 <= fVar27;
    if (!bVar18 || bVar2) {
      bVar2 = fVar20 == fVar25;
      bVar18 = fVar25 <= fVar20;
    }
    if (bVar18 && !bVar2) goto LAB_00305174;
    bVar2 = true;
  }
  if (!bVar2) {
    *(byte *)(iVar15 + 0xa8) = *(byte *)(iVar15 + 0xa8) | 8;
    pfVar1 = DAT_00305674;
    fVar20 = ALBW_AS_F32(param_2[4]) - *DAT_00305674;
    bVar2 = fVar27 == fVar20;
    bVar18 = fVar20 <= fVar27;
    if (!bVar18 || bVar2) {
      bVar2 = fVar20 == fVar25;
      bVar18 = fVar25 <= fVar20;
    }
    if (bVar18 && !bVar2) {
LAB_00305248:
      *(uint *)(iVar15 + 4) = param_2[4];
      *(uint *)(iVar15 + 8) = param_2[5];
      *(uint *)(iVar15 + 0xc) = param_2[6];
      bVar3 = *(byte *)(iVar15 + 0xa8) | 2;
    }
    else {
      fVar20 = ALBW_AS_F32(param_2[5]) - DAT_00305674[1];
      bVar2 = fVar27 == fVar20;
      bVar18 = fVar20 <= fVar27;
      if (!bVar18 || bVar2) {
        bVar2 = fVar20 == fVar25;
        bVar18 = fVar25 <= fVar20;
      }
      if (bVar18 && !bVar2) goto LAB_00305248;
      fVar20 = ALBW_AS_F32(param_2[6]) - DAT_00305674[2];
      bVar2 = fVar27 == fVar20;
      bVar18 = fVar20 <= fVar27;
      if (!bVar18 || bVar2) {
        bVar2 = fVar20 == fVar25;
        bVar18 = fVar25 <= fVar20;
      }
      if (bVar18 && !bVar2) goto LAB_00305248;
      *(float *)(iVar15 + 4) = *DAT_00305674;
      piVar4 = (int *)CF_FBITS(pfVar1[1]);
      *(int **)(iVar15 + 8) = piVar4;
      *(float *)(iVar15 + 0xc) = pfVar1[2];
      bVar3 = *(byte *)(iVar15 + 0xa8) & 0xfd;
    }
    *(byte *)(iVar15 + 0xa8) = bVar3;
  }
  local_44 = *(uint *)(iVar6 + -0x228);
  func_004EDAD0(*(int *)(iVar6 + -0x70),&local_44);
  *(undefined2 *)(*piVar16 + 0x2c) = *(undefined2 *)(iVar6 + -0x4a0);
  func_004ED9C8(*piVar16);
  func_004A879C(*DAT_00305678,*piVar16,0);
LAB_003052a4:
  func_001E40F4(iVar13,2);
  iVar15 = DAT_0030567c;
  uVar14 = 0;
  do {
    func_00169678(iVar13,uVar14,(int *)(uintptr_t)(iVar15 + uVar14 * 8));
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 2);
  func_001E4378(iVar13);
  func_001E4090(iVar13,1);
  func_001E43F8(iVar13,ALBW_AS_F32(((ulonglong)lVar23 >> 0x20)));
  func_001E40DC(iVar13,2);
  iVar15 = DAT_00305680;
  uVar14 = 0;
  do {
    iVar10 = iVar15 + uVar14 * 8;
    func_001695F8(iVar13,uVar14,(int *)(uintptr_t)(iVar10));
    fVar20 = ALBW_AS_F32(((ulonglong)lVar23 >> 0x20));
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 2);
  func_001E4318(iVar13);
  func_001E405C(iVar13,1);
  func_001E43DC(iVar13,fVar20);
  func_001E410C(iVar13,extraout_r1,iVar10,piVar4);
  *(int *)(iVar6 + -0x20) = iVar13;
  *(undefined1 *)(iVar6 + -0x2e) = 6;
  iVar15 = func_0010BA78(0x60);
  puVar5 = DAT_00305684;
  *(int *)(iVar6 + -0x1c) = iVar15;
  *(uint *)(iVar6 + -0x18) = iVar15 + (uint)*(byte *)(iVar6 + -0x2e) * 8;
  iVar10 = 6;
  puVar8 = (undefined4 *)(iVar15 + -8);
  do {
    uVar7 = puVar5[7];
    iVar10 = iVar10 + -1;
    puVar8[2] = puVar5[6];
    puVar8[3] = uVar7;
    uVar7 = puVar5[7];
    puVar8[4] = puVar5[6];
    puVar8[5] = uVar7;
    puVar8 = puVar8 + 4;
  } while (iVar10 != 0);
  bVar3 = *(byte *)(iVar6 + -0x2e);
  uVar14 = (uint)bVar3;
  puVar8 = (undefined4 *)func_0010BA78(uVar14 << 3);
  *(undefined4 **)(iVar6 + -0x14) = puVar8;
  if (uVar14 != 0) {
    puVar9 = puVar8 + -2;
    if ((bVar3 & 1) != 0) {
      uVar7 = puVar5[5];
      *puVar8 = puVar5[4];
      puVar8[1] = uVar7;
      puVar9 = puVar8;
    }
    for (iVar15 = (int)uVar14 >> 1; iVar15 != 0; iVar15 = iVar15 + -1) {
      uVar7 = puVar5[5];
      puVar9[2] = puVar5[4];
      puVar9[3] = uVar7;
      uVar7 = puVar5[5];
      puVar9[4] = puVar5[4];
      puVar9[5] = uVar7;
      puVar9 = puVar9 + 4;
    }
  }
  puVar8 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  iVar15 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = 0x24;
    puVar8[1] = 6;
    iVar15 = func_00100118((int)(puVar8 + 2),DAT_00305688,0x24,6);
  }
  if (iVar15 != 0) {
    *(undefined4 *)(iVar6 + -0x2c) = 6;
    *(int *)(iVar6 + -0x28) = iVar15;
  }
  iVar15 = DAT_0030568c;
  *(int *)(iVar6 + -0x1a0) = iVar6 + -0x34;
  *(undefined2 *)(iVar15 + iVar13) = 6;
  local_dc = s_cState_OpenStay_00305690;
  local_e0 = iVar17;
  func_0010BEC4(iVar6 + -0x34,0,&local_e0);
  puVar8 = *(undefined4 **)(iVar6 + -0x1c);
  uVar7 = puVar5[1];
  uVar11 = puVar5[2];
  uVar12 = puVar5[3];
  uVar24 = *(undefined8 *)(puVar5 + 4);
  *puVar8 = *puVar5;
  puVar8[1] = uVar7;
  puVar8 = *(undefined4 **)(iVar6 + -0x18);
  *puVar8 = uVar11;
  puVar8[1] = uVar12;
  puVar8 = *(undefined4 **)(iVar6 + -0x14);
  *puVar8 = (int)uVar24;
  puVar8[1] = (int)((ulonglong)uVar24 >> 0x20);
  local_dc = s_cState_Close_003056a0;
  local_e0 = iVar17;
  func_0010BEC4(iVar6 + -0x34,1,&local_e0);
  iVar15 = *(int *)(iVar6 + -0x1c);
  uVar26 = *(undefined8 *)(puVar5 + 6);
  uVar7 = puVar5[8];
  uVar11 = puVar5[9];
  *(int *)(iVar15 + 8) = (int)uVar26;
  *(int *)(iVar15 + 0xc) = (int)((ulonglong)uVar26 >> 0x20);
  iVar15 = *(int *)(iVar6 + -0x18);
  *(undefined4 *)(iVar15 + 8) = uVar7;
  *(undefined4 *)(iVar15 + 0xc) = uVar11;
  iVar15 = *(int *)(iVar6 + -0x14);
  *(int *)(iVar15 + 8) = (int)uVar24;
  *(int *)(iVar15 + 0xc) = (int)((ulonglong)uVar24 >> 0x20);
  local_dc = s_cState_TurnBack_003056b0;
  local_e0 = iVar17;
  func_0010BEC4(iVar6 + -0x34,2,&local_e0);
  iVar15 = *(int *)(iVar6 + -0x1c);
  uVar7 = puVar5[10];
  uVar11 = puVar5[0xb];
  *(int *)(iVar15 + 0x10) = (int)uVar26;
  *(int *)(iVar15 + 0x14) = (int)((ulonglong)uVar26 >> 0x20);
  iVar15 = *(int *)(iVar6 + -0x18);
  *(undefined4 *)(iVar15 + 0x10) = uVar7;
  *(undefined4 *)(iVar15 + 0x14) = uVar11;
  iVar15 = *(int *)(iVar6 + -0x14);
  *(int *)(iVar15 + 0x10) = (int)uVar24;
  *(int *)(iVar15 + 0x14) = (int)((ulonglong)uVar24 >> 0x20);
  local_dc = s_cState_CloseStay_003056c0;
  local_e0 = iVar17;
  func_0010BEC4(iVar6 + -0x34,3,&local_e0);
  iVar15 = *(int *)(iVar6 + -0x1c);
  uVar7 = puVar5[0xd];
  uVar11 = puVar5[0xe];
  uVar12 = puVar5[0xf];
  uVar21 = puVar5[0x10];
  uVar22 = puVar5[0x11];
  *(undefined4 *)(iVar15 + 0x18) = puVar5[0xc];
  *(undefined4 *)(iVar15 + 0x1c) = uVar7;
  iVar15 = *(int *)(iVar6 + -0x18);
  *(undefined4 *)(iVar15 + 0x18) = uVar11;
  *(undefined4 *)(iVar15 + 0x1c) = uVar12;
  iVar15 = *(int *)(iVar6 + -0x14);
  *(undefined4 *)(iVar15 + 0x18) = uVar21;
  *(undefined4 *)(iVar15 + 0x1c) = uVar22;
  local_dc = s_cState_WaitOpened_003056d4;
  local_e0 = iVar17;
  func_0010BEC4(iVar6 + -0x34,4,&local_e0);
  iVar15 = *(int *)(iVar6 + -0x1c);
  uVar7 = puVar5[0x13];
  uVar11 = puVar5[0x14];
  uVar12 = puVar5[0x15];
  uVar24 = *(undefined8 *)(puVar5 + 4);
  *(undefined4 *)(iVar15 + 0x20) = puVar5[0x12];
  *(undefined4 *)(iVar15 + 0x24) = uVar7;
  iVar15 = *(int *)(iVar6 + -0x18);
  *(undefined4 *)(iVar15 + 0x20) = uVar11;
  *(undefined4 *)(iVar15 + 0x24) = uVar12;
  iVar15 = *(int *)(iVar6 + -0x14);
  *(int *)(iVar15 + 0x20) = (int)uVar24;
  *(int *)(iVar15 + 0x24) = (int)((ulonglong)uVar24 >> 0x20);
  local_dc = s_cState_Open_003056e8;
  local_e0 = iVar17;
  func_0010BEC4(iVar6 + -0x34,5,&local_e0);
  iVar17 = *(int *)(iVar6 + -0x1c);
  uVar7 = puVar5[0x17];
  uVar11 = puVar5[0x18];
  uVar12 = puVar5[0x19];
  *(undefined4 *)(iVar17 + 0x28) = puVar5[0x16];
  *(undefined4 *)(iVar17 + 0x2c) = uVar7;
  iVar17 = *(int *)(iVar6 + -0x18);
  *(undefined4 *)(iVar17 + 0x28) = uVar11;
  *(undefined4 *)(iVar17 + 0x2c) = uVar12;
  iVar17 = *(int *)(iVar6 + -0x14);
  *(int *)(iVar17 + 0x28) = (int)uVar24;
  *(int *)(iVar17 + 0x2c) = (int)((ulonglong)uVar24 >> 0x20);
  func_00664884((undefined4 *)(iVar6 + -0x34),0);
  *(undefined1 *)(iVar6 + -0x60) = 1;
  func_001E3FD8(iVar13);
  *(undefined1 *)(*(int *)(iVar6 + -0x70) + 0x44) = 0;
  func_004ECF6C(iVar13);
  *(uint *)(iVar6 + -0x214) = *(uint *)(iVar6 + -0x214) | 4;
  return iVar13;
}

