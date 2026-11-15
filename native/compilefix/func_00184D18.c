/* compilefix: USA 00184D18 (EU 00184D18), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 'BADSPACEBASE'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - ((int)(BADSPACEBASE *)0 + ADDR) + n (a pc-relative address) -> s_cf_<ADDR+n> (string in the code section) [2]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [18]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_001855e8[];
#include "compilefix.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CE7C(undefined4 *param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00111A64(uint *param_1);
extern int func_0014DF18(int param_1,undefined4 param_2,int param_3,uint param_4,undefined1 param_5, undefined1 param_6);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_004BC8D8(int param_1);
extern int func_004BDEE8(int param_1);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_004CE68C(int param_1,uint param_2,int param_3);
extern int func_00611198(int param_1,int param_2,undefined1 param_3);
extern int func_00611E1C(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern float fRam001855e0;
extern undefined4 uRam001855e4;
extern undefined4 uRam001855f4;
extern int DAT_00185140;
extern float DAT_00185144;
extern int DAT_00185148;
extern int DAT_0018514c;
extern int DAT_00185150;
extern int DAT_00185154;
extern undefined DAT_00185158;
extern uint DAT_00185164;
extern undefined4 DAT_00185168;
extern undefined4 *DAT_0018516c;
extern undefined *DAT_00185170;
extern undefined4 *DAT_001855d4;
extern float DAT_001855d8;
extern int DAT_001855dc;
extern undefined *PTR_00185794;
extern undefined *PTR_00185798;
extern undefined *PTR_0018579c;
extern undefined *PTR_001857a0;
extern char s_cState_CheckPlayer_00185584[];
extern char s_cState_EventEnd_0018519c[];
extern char s_cState_Event_0018518c[];
extern char s_cState_GuardManWait_00185570[];
extern char s_cState_Hide_00185564[];
extern char s_cState_SceneChange0_001855ac[];
extern char s_cState_SceneChange1_001855c0[];
extern char s_cState_SearchPlayer_00185598[];
extern char s_cState_Wait_00185174[];
extern char s_cState_Walk_00185180[];

// USA 00184D18 <- EU 00184D18 (Ghidra, non-matching)
// GLOBAL DAT_00185140 int
// GLOBAL DAT_00185144 float
// GLOBAL DAT_00185148 int
// GLOBAL DAT_0018514c int
// GLOBAL DAT_00185150 int
// GLOBAL DAT_00185154 int
// GLOBAL DAT_00185158 undefined
// GLOBAL DAT_00185164 uint
// GLOBAL DAT_00185168 undefined4
// GLOBAL DAT_0018516c undefined4 *
// GLOBAL DAT_00185170 undefined *
// GLOBAL DAT_001855d4 undefined4 *
// GLOBAL DAT_001855d8 float
// GLOBAL DAT_001855dc int
// GLOBAL PTR_00185794 undefined *
// GLOBAL PTR_00185798 undefined *
// GLOBAL PTR_0018579c undefined *
// GLOBAL PTR_001857a0 undefined *
// GLOBAL UNK_001855e0 float
// GLOBAL UNK_001855e4 undefined4
// GLOBAL UNK_001855f4 undefined4
// GLOBAL s_cState_CheckPlayer_00185584 string
// GLOBAL s_cState_EventEnd_0018519c string
// GLOBAL s_cState_Event_0018518c string
// GLOBAL s_cState_GuardManWait_00185570 string
// GLOBAL s_cState_Hide_00185564 string
// GLOBAL s_cState_SceneChange0_001855ac string
// GLOBAL s_cState_SceneChange1_001855c0 string
// GLOBAL s_cState_SearchPlayer_00185598 string
// GLOBAL s_cState_Wait_00185174 string
// GLOBAL s_cState_Walk_00185180 string

int * func_00184D18(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar23;
  undefined8 uVar22;
  undefined4 uVar24;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define local_d0 (*(uint *)(albw_frame + 0x0))
  #define pcStack_cc (*(char * *)(albw_frame + 0x4))
  #define local_b8 (*(uint *)(albw_frame + 0x18))
  #define local_b4 (*(char * *)(albw_frame + 0x1c))
  #define auStack_b0 ((uint *)(albw_frame + 0x20))
  #define puStack_a8 (*(undefined4 * *)(albw_frame + 0x28))
  #define uStack_a4 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_a0 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_9c (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_98 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_94 (*(undefined4 *)(albw_frame + 0x3c))
  #define uStack_90 (*(uint *)(albw_frame + 0x40))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x74))
  #define uStack_58 (*(undefined1 *)(albw_frame + 0x78))
  #define local_50 (*(int * *)(albw_frame + 0x80))
  #define local_4c (*(int * *)(albw_frame + 0x84))
  #define local_48 (*(undefined4 *)(albw_frame + 0x88))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x8c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x90))
  #define local_3c (*(undefined1 *)(albw_frame + 0x94))
  #define local_3b (*(undefined1 *)(albw_frame + 0x95))
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  local_3c = 0;
  local_3b = 1;
  piVar8 = (int *)func_00611E1C(param_1,param_2,0,5,&local_48);
  iVar9 = DAT_00185140;
  piVar8[200] = DAT_00185140 + 0xb8;
  *piVar8 = iVar9;
  piVar8[0x263] = 0;
  local_4c = piVar8 + 0x265;
  piVar8[0x264] = 0;
  local_50 = piVar8 + 0x266;
  piVar8[0x265] = 0;
  fVar21 = DAT_00185144;
  piVar8[0x266] = 0;
  piVar8[0x267] = 0;
  piVar8[0x268] = (int)ALBW_AS_U32(fVar21);
  piVar8[0x269] = (int)ALBW_AS_U32(fVar21);
  piVar8[0x26a] = (int)ALBW_AS_U32(fVar21);
  piVar8[0x26b] = (int)ALBW_AS_U32(fVar21);
  piVar8[0x26c] = (int)ALBW_AS_U32(fVar21);
  piVar8[0x26d] = (int)ALBW_AS_U32(fVar21);
  piVar8[0x26e] = 0;
  piVar8[0x26f] = (int)ALBW_AS_U32(fVar21);
  *(undefined2 *)(piVar8 + 0x270) = 0;
  *(undefined2 *)((int)piVar8 + 0x9c2) = 0;
  *(undefined2 *)(piVar8 + 0x271) = 0;
  *(undefined1 *)((int)piVar8 + 0x9c6) = 0;
  *(undefined1 *)((int)piVar8 + 0x9c7) = 0;
  iVar9 = DAT_00185148;
  *(undefined1 *)(piVar8 + 0x272) = 0;
  *(undefined1 *)((int)piVar8 + 0x9c9) = 0;
  piVar8[0x273] = iVar9;
  iVar14 = DAT_0018514c;
  piVar8[0x274] = 0;
  iVar3 = DAT_00185154;
  piVar8[0x275] = 0;
  iVar2 = DAT_00185150;
  piVar8[0x276] = 0;
  piVar8[0x277] = iVar14;
  piVar8[0x27b] = iVar3;
  piVar8[0x278] = iVar14;
  piVar8[0x279] = iVar2;
  piVar8[0x27a] = 0;
  *(undefined2 *)(piVar8 + 0x27c) = 0;
  *(undefined2 *)((int)piVar8 + 0x9f2) = 0;
  *(undefined2 *)(piVar8 + 0x27d) = 0;
  *(undefined2 *)((int)piVar8 + 0x9f6) = 0;
  *(undefined1 *)(piVar8 + 0x27e) = 0;
  *(undefined1 *)((int)piVar8 + 0x9fa) = 0;
  *(undefined1 *)((int)piVar8 + 0x9fb) = 0;
  *(undefined1 *)(piVar8 + 0x27f) = 0;
  piVar8[0x280] = (int)ALBW_AS_U32(fVar21);
  piVar8[0x281] = (int)ALBW_AS_U32(fVar21);
  piVar8[0x282] = (int)ALBW_AS_U32(fVar21);
  *(char *)((int)piVar8 + 0x9f9) = (char)*(ushort *)((int)piVar8 + 0x32);
  if (9 < (*(ushort *)((int)piVar8 + 0x32) & 0xff)) {
    *(undefined1 *)((int)piVar8 + 0x9f9) = 7;
  }
  *(char *)(piVar8 + 0x27f) = (char)*(ushort *)(piVar8 + 0xb);
  if ((*(ushort *)(piVar8 + 0xb) & 0xff) == 0) {
    *(undefined1 *)(piVar8 + 0x27f) = 0xf;
  }
  uVar15 = DAT_00185164;
  *(char *)((int)piVar8 + 0x9fb) = (char)*(ushort *)((int)piVar8 + 0x2e);
  if (3 < (*(ushort *)((int)piVar8 + 0x2e) & 0xff)) {
    *(undefined1 *)((int)piVar8 + 0x9fb) = 0;
  }
  *(char *)((int)piVar8 + 0x9fa) = (char)*(ushort *)(piVar8 + 0xc);
  if (0xf < (*(ushort *)(piVar8 + 0xc) & 0xff)) {
    *(undefined1 *)((int)piVar8 + 0x9fa) = 0;
  }
  fVar17 = ALBW_AS_F32(param_2[0x11]);
  piVar8[0x273] = (int)ALBW_AS_U32(fVar17);
  if (fVar17 <= fVar21) {
    piVar8[0x273] = iVar9;
  }
  local_b4 = &DAT_00185158;
  local_b8 = uVar15;
  func_004BE114(piVar8,6,0,0,DAT_00185168);
  local_d0 = 10;
  piVar8[0x25d] = (int)piVar8;
  *(undefined1 *)((int)piVar8 + 0x966) = 10;
  iVar9 = func_0010BA78(0xa0);
  puVar13 = DAT_0018516c;
  piVar8[0x25e] = iVar9;
  piVar8[0x25f] = iVar9 + (uint)*(byte *)((int)piVar8 + 0x966) * 8;
  iVar14 = 10;
  puVar10 = (undefined4 *)(iVar9 + -8);
  do {
    uVar18 = puVar13[0x31];
    iVar14 = iVar14 + -1;
    puVar10[2] = puVar13[0x30];
    puVar10[3] = uVar18;
    uVar18 = puVar13[0x31];
    puVar10[4] = puVar13[0x30];
    puVar10[5] = uVar18;
    puVar10 = puVar10 + 4;
  } while (iVar14 != 0);
  bVar1 = *(byte *)((int)piVar8 + 0x966);
  uVar16 = (uint)bVar1;
  puVar10 = (undefined4 *)func_0010BA78(uVar16 << 3);
  uVar7 = local_d0;
  piVar8[0x260] = (int)puVar10;
  if (uVar16 != 0) {
    puVar11 = puVar10 + -2;
    if ((bVar1 & 1) != 0) {
      uVar18 = puVar13[7];
      *puVar10 = puVar13[6];
      puVar10[1] = uVar18;
      puVar11 = puVar10;
    }
    for (iVar9 = (int)uVar16 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
      uVar18 = puVar13[7];
      puVar11[2] = puVar13[6];
      puVar11[3] = uVar18;
      uVar18 = puVar13[7];
      puVar11[4] = puVar13[6];
      puVar11[5] = uVar18;
      puVar11 = puVar11 + 4;
    }
  }
  if (0 < (int)local_d0) {
    puVar10 = (undefined4 *)func_0010CEE0(local_d0 * 0x24 + 8,(int *)0x0,4);
    iVar9 = 0;
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = 0x24;
      puVar10[1] = uVar7;
      iVar9 = func_00100118((int)(puVar10 + 2),DAT_00185170,0x24,uVar7);
    }
    if (iVar9 != 0) {
      piVar8[0x25a] = uVar7;
      piVar8[0x25b] = iVar9;
    }
  }
  piVar8[0xd5] = (int)(piVar8 + 600);
  *(undefined2 *)((int)piVar8 + 0x35a) = 10;
  local_b4 = s_cState_Wait_00185174;
  local_b8 = uVar15;
  func_0010BEC4((int)(piVar8 + 600),0,(int *)&local_b8);
  puVar10 = (undefined4 *)piVar8[0x25e];
  uVar18 = puVar13[4];
  uVar19 = puVar13[3];
  uVar20 = puVar13[5];
  uVar23 = puVar13[6];
  uVar24 = puVar13[7];
  *puVar10 = puVar13[2];
  puVar10[1] = uVar19;
  puVar10 = (undefined4 *)piVar8[0x25f];
  *puVar10 = uVar18;
  puVar10[1] = uVar20;
  puVar10 = (undefined4 *)piVar8[0x260];
  *puVar10 = uVar23;
  puVar10[1] = uVar24;
  local_b4 = s_cState_Walk_00185180;
  local_b8 = uVar15;
  func_0010BEC4((int)(piVar8 + 600),1,(int *)&local_b8);
  iVar9 = piVar8[0x25e];
  uVar18 = puVar13[9];
  uVar19 = puVar13[10];
  uVar20 = puVar13[0xb];
  *(undefined4 *)(iVar9 + 8) = puVar13[8];
  *(undefined4 *)(iVar9 + 0xc) = uVar18;
  iVar9 = piVar8[0x25f];
  *(undefined4 *)(iVar9 + 8) = uVar19;
  *(undefined4 *)(iVar9 + 0xc) = uVar20;
  iVar9 = piVar8[0x260];
  *(undefined4 *)(iVar9 + 8) = uVar23;
  *(undefined4 *)(iVar9 + 0xc) = uVar24;
  local_b4 = s_cState_Event_0018518c;
  local_b8 = uVar15;
  func_0010BEC4((int)(piVar8 + 600),2,(int *)&local_b8);
  iVar9 = piVar8[0x25e];
  uVar18 = puVar13[0xd];
  uVar19 = puVar13[0xe];
  uVar20 = puVar13[0xf];
  *(undefined4 *)(iVar9 + 0x10) = puVar13[0xc];
  *(undefined4 *)(iVar9 + 0x14) = uVar18;
  iVar9 = piVar8[0x25f];
  *(undefined4 *)(iVar9 + 0x10) = uVar19;
  *(undefined4 *)(iVar9 + 0x14) = uVar20;
  iVar9 = piVar8[0x260];
  *(undefined4 *)(iVar9 + 0x10) = uVar23;
  *(undefined4 *)(iVar9 + 0x14) = uVar24;
  local_b4 = s_cState_EventEnd_0018519c;
  local_b8 = uVar15;
  func_0010BEC4((int)(piVar8 + 600),3,(int *)&local_b8);
  iVar9 = piVar8[0x25e];
  uVar18 = puVar13[0x11];
  uVar19 = puVar13[0x12];
  uVar20 = puVar13[0x13];
  uVar23 = puVar13[0x14];
  uVar24 = puVar13[0x15];
  *(undefined4 *)(iVar9 + 0x18) = puVar13[0x10];
  *(undefined4 *)(iVar9 + 0x1c) = uVar18;
  iVar9 = piVar8[0x25f];
  *(undefined4 *)(iVar9 + 0x18) = uVar19;
  *(undefined4 *)(iVar9 + 0x1c) = uVar20;
  iVar9 = piVar8[0x260];
  *(undefined4 *)(iVar9 + 0x18) = uVar23;
  *(undefined4 *)(iVar9 + 0x1c) = uVar24;
  local_b4 = s_cState_Hide_00185564;
  local_b8 = uVar15;
  func_0010BEC4((int)(piVar8 + 600),4,(int *)&local_b8);
  iVar9 = piVar8[0x25e];
  uVar18 = puVar13[0x17];
  uVar19 = puVar13[0x18];
  uVar20 = puVar13[0x19];
  uVar23 = puVar13[0x1a];
  uVar24 = puVar13[0x1b];
  *(undefined4 *)(iVar9 + 0x20) = puVar13[0x16];
  *(undefined4 *)(iVar9 + 0x24) = uVar18;
  iVar9 = piVar8[0x25f];
  *(undefined4 *)(iVar9 + 0x20) = uVar19;
  *(undefined4 *)(iVar9 + 0x24) = uVar20;
  iVar9 = piVar8[0x260];
  *(undefined4 *)(iVar9 + 0x20) = uVar23;
  *(undefined4 *)(iVar9 + 0x24) = uVar24;
  local_b4 = s_cState_GuardManWait_00185570;
  local_b8 = uVar15;
  func_0010BEC4((int)(piVar8 + 600),5,(int *)&local_b8);
  iVar9 = piVar8[0x25e];
  uVar18 = puVar13[0x1e];
  uVar19 = puVar13[0x1f];
  uVar20 = puVar13[0x1d];
  uVar23 = puVar13[6];
  uVar24 = puVar13[7];
  *(undefined4 *)(iVar9 + 0x28) = puVar13[0x1c];
  *(undefined4 *)(iVar9 + 0x2c) = uVar20;
  iVar9 = piVar8[0x25f];
  *(undefined4 *)(iVar9 + 0x28) = uVar18;
  *(undefined4 *)(iVar9 + 0x2c) = uVar19;
  iVar9 = piVar8[0x260];
  *(undefined4 *)(iVar9 + 0x28) = uVar23;
  *(undefined4 *)(iVar9 + 0x2c) = uVar24;
  local_b4 = s_cState_CheckPlayer_00185584;
  local_b8 = uVar15;
  func_0010BEC4((int)(piVar8 + 600),6,(int *)&local_b8);
  iVar9 = piVar8[0x25e];
  uVar18 = puVar13[0x21];
  uVar19 = puVar13[0x22];
  uVar20 = puVar13[0x23];
  *(undefined4 *)(iVar9 + 0x30) = puVar13[0x20];
  *(undefined4 *)(iVar9 + 0x34) = uVar18;
  iVar9 = piVar8[0x25f];
  *(undefined4 *)(iVar9 + 0x30) = uVar19;
  *(undefined4 *)(iVar9 + 0x34) = uVar20;
  iVar9 = piVar8[0x260];
  *(undefined4 *)(iVar9 + 0x30) = uVar23;
  *(undefined4 *)(iVar9 + 0x34) = uVar24;
  local_b4 = s_cState_SearchPlayer_00185598;
  local_b8 = uVar15;
  func_0010BEC4((int)(piVar8 + 600),7,(int *)&local_b8);
  puVar13 = DAT_0018516c;
  iVar9 = piVar8[0x25e];
  uVar18 = DAT_0018516c[0x25];
  uVar19 = DAT_0018516c[0x26];
  uVar20 = DAT_0018516c[0x27];
  *(undefined4 *)(iVar9 + 0x38) = DAT_0018516c[0x24];
  *(undefined4 *)(iVar9 + 0x3c) = uVar18;
  iVar9 = piVar8[0x25f];
  *(undefined4 *)(iVar9 + 0x38) = uVar19;
  *(undefined4 *)(iVar9 + 0x3c) = uVar20;
  iVar9 = piVar8[0x260];
  *(undefined4 *)(iVar9 + 0x38) = uVar23;
  *(undefined4 *)(iVar9 + 0x3c) = uVar24;
  local_b4 = s_cState_SceneChange0_001855ac;
  local_b8 = uVar15;
  func_0010BEC4((int)(piVar8 + 600),8,(int *)&local_b8);
  iVar9 = piVar8[0x25e];
  uVar18 = puVar13[0x29];
  uVar19 = puVar13[0x2a];
  uVar20 = puVar13[0x2b];
  *(undefined4 *)(iVar9 + 0x40) = puVar13[0x28];
  *(undefined4 *)(iVar9 + 0x44) = uVar18;
  iVar9 = piVar8[0x25f];
  *(undefined4 *)(iVar9 + 0x40) = uVar19;
  *(undefined4 *)(iVar9 + 0x44) = uVar20;
  iVar9 = piVar8[0x260];
  *(undefined4 *)(iVar9 + 0x40) = uVar23;
  *(undefined4 *)(iVar9 + 0x44) = uVar24;
  local_b4 = s_cState_SceneChange1_001855c0;
  local_b8 = uVar15;
  func_0010BEC4((int)(piVar8 + 600),9,(int *)&local_b8);
  puVar10 = DAT_001855d4;
  iVar9 = piVar8[0x25e];
  uVar18 = puVar13[0x2d];
  uVar19 = puVar13[0x2e];
  uVar20 = puVar13[0x2f];
  *(undefined4 *)(iVar9 + 0x48) = puVar13[0x2c];
  *(undefined4 *)(iVar9 + 0x4c) = uVar18;
  iVar9 = piVar8[0x25f];
  *(undefined4 *)(iVar9 + 0x48) = uVar19;
  *(undefined4 *)(iVar9 + 0x4c) = uVar20;
  iVar9 = piVar8[0x260];
  *(undefined4 *)(iVar9 + 0x48) = uVar23;
  *(undefined4 *)(iVar9 + 0x4c) = uVar24;
  func_004C03B8((int)piVar8,puVar10);
  bVar1 = *(byte *)((int)piVar8 + 0x9f9);
  if (bVar1 < 3) {
    piVar8[0x261] = 5;
    func_00611198((int)piVar8,5,0);
  }
  else {
    if (bVar1 == 5 || bVar1 == 6) {
      *(undefined1 *)((int)piVar8 + 0x9c7) = 1;
    }
    if ((bVar1 == 4 || bVar1 == 9) || bVar1 == 6) {
      piVar8[0x22d] = (int)ALBW_AS_U32((ALBW_AS_F32(piVar8[0x22d]) * DAT_001855d8));
    }
    piVar8[0x261] = 6;
    func_00611198((int)piVar8,6,0);
  }
  iVar9 = DAT_001855dc;
  piVar8[0x22b] = piVar8[0x22b] & 0xfffffff6;
  piVar8[0x22e] = iVar9;
  func_004BDEE8((int)piVar8);
  func_004BC8D8((int)piVar8);
  if (2 < *(byte *)((int)piVar8 + 0x9f9)) {
    piVar12 = (int *)(uintptr_t)(func_0014DF18(piVar8[0xb4],1,1,0,0,0));
    piVar8[0x264] = (int)piVar12;
    uVar18 = uRam001855e4;
    uVar22 = CONCAT44(uRam001855e4,fVar21);
    fVar17 = ALBW_AS_F32(piVar8[0x273]) * fRam001855e0;
    piVar8[0x26f] = (int)ALBW_AS_U32(fVar17);
    iVar9 = piVar8[0x264];
    *(uint *)(iVar9 + 0x164) = *(uint *)(iVar9 + 0x164) | 0x40000000;
    *(undefined4 *)(iVar9 + 0x74) = uVar18;
    *(undefined4 *)(iVar9 + 0x78) = uVar18;
    *(float *)(iVar9 + 0x7c) = fVar17;
    *(float *)(piVar8[0x264] + 0x134) = fVar21;
    piVar8[0x263] = *(int *)(piVar8[0xb4] + 0x1cc);
    puVar10 = (undefined4 *)func_0010BAB4(0xa8);
    puVar13 = (undefined4 *)0x0;
    if (puVar10 != (undefined4 *)0x0) {
      pcStack_cc = (char *)((int)s_cf_001855e8);
      local_d0 = uVar15;
      puVar13 = (undefined4 *)(uintptr_t)(func_0016A2FC(puVar10,1,(undefined4)(uintptr_t)(&local_d0),1));
    }
    piVar8[0x265] = (int)puVar13;
    pcStack_cc = (char *)((int)s_cf_001855e8);
    local_d0 = uVar15;
    func_00169608((uint *)piVar8[0x265],0,(int *)&local_d0,piVar8[0x263]);
    func_0016A02C(*local_4c,-1,(int *)0xffffffff,0);
    puStack_a8 = &uStack_a4;
    auStack_b0[1] = 3;
    uStack_9c = (undefined4)((ulonglong)uVar22 >> 0x20);
    uStack_5c = 10;
    uStack_58 = 0;
    auStack_b0[0] = 1;
    uStack_a4 = 0;
    uStack_a0 = (undefined4)uVar22;
    uStack_90 = uVar15 | 0xff;
    uStack_98 = uRam001855f4;
    uStack_94 = uStack_9c;
    func_0016898C(piVar8[0x265],auStack_b0);
  }
  uVar15 = (uint)*(byte *)((int)piVar8 + 0x9fa);
  puVar10 = (undefined4 *)func_0010BAB4(0x44);
  puVar6 = PTR_0018579c;
  puVar5 = PTR_00185798;
  puVar4 = PTR_00185794;
  puVar13 = (undefined4 *)0x0;
  if (puVar10 != (undefined4 *)0x0) {
    puVar13 = (undefined4 *)(uintptr_t)(func_0010CE7C(puVar10));
    puVar13[4] = 0;
    puVar13[5] = 0;
    puVar13[6] = (undefined4)(uintptr_t)(puVar13);
    puVar10 = DAT_0018516c;
    puVar13[7] = 0;
    puVar13[8] = 0;
    *(undefined1 *)(puVar13 + 0xe) = 0;
    *puVar13 = (undefined4)(uintptr_t)(puVar4);
    uVar19 = *puVar10;
    uVar18 = puVar10[1];
    puVar10 = puVar13 + 9;
    if (puVar10 != (undefined4 *)0x0) {
      puVar13[10] = (undefined4)(uintptr_t)(puVar13);
      puVar13[0xb] = uVar19;
      puVar13[0xc] = uVar18;
      *puVar10 = (undefined4)(uintptr_t)(puVar5);
    }
    *puVar13 = (undefined4)(uintptr_t)(puVar6);
    puVar13[0xf] = 0;
    puVar13[8] = (undefined4)(uintptr_t)(puVar10);
    puVar13[0x10] = 0;
  }
  piVar8[0x266] = (int)puVar13;
  puVar10 = (undefined4 *)func_0010BAB4(0x44);
  puVar13 = (undefined4 *)0x0;
  if (puVar10 != (undefined4 *)0x0) {
    puVar13 = (undefined4 *)(uintptr_t)(func_0010CE7C(puVar10));
    puVar13[4] = 0;
    puVar13[5] = 0;
    puVar13[6] = (undefined4)(uintptr_t)(puVar13);
    puVar13[7] = 0;
    puVar10 = DAT_0018516c;
    puVar13[8] = 0;
    *(undefined1 *)(puVar13 + 0xe) = 0;
    *puVar13 = (undefined4)(uintptr_t)(puVar4);
    uVar18 = *puVar10;
    uVar19 = puVar10[1];
    puVar10 = puVar13 + 9;
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = (undefined4)(uintptr_t)(puVar5);
      puVar13[10] = (undefined4)(uintptr_t)(puVar13);
      puVar13[0xb] = uVar18;
      puVar13[0xc] = uVar19;
    }
    puVar13[8] = (undefined4)(uintptr_t)(puVar10);
    *puVar13 = (undefined4)(uintptr_t)(puVar6);
    puVar13[0xf] = 0;
    puVar13[0x10] = 0;
  }
  piVar8[0x267] = (int)puVar13;
  piVar12 = (int *)piVar8[0x1e8];
  iVar9 = piVar8[0x266];
  iVar14 = *(int *)(piVar12[0x14] + 4);
  *(undefined4 *)(iVar9 + 0x3c) =
       *(undefined4 *)(*(int *)(*(int *)(iVar14 + 0x30) + 0x24) + uVar15 * 4);
  *(undefined4 *)(iVar9 + 0x40) = 0;
  iVar9 = piVar8[0x267];
  *(undefined4 *)(iVar9 + 0x3c) =
       *(undefined4 *)(*(int *)(*(int *)(iVar14 + 0x30) + 0x24) + (uVar15 + 0x10) * 4);
  *(undefined4 *)(iVar9 + 0x40) = 0;
  func_004CE68C((int)piVar12,0,*local_50);
  func_004CE68C((int)piVar12,1,piVar8[0x267]);
  (**(code **)(*piVar12 + 0x10))(piVar12,uVar15 + 0xc4 & 0xff);
  uVar15 = func_00111A64((uint *)(*(int *)PTR_001857a0 + 0x660));
  piVar8[0x276] = (int)((ulonglong)uVar15 * 0x80000000 >> 0x20);
  return piVar8;
}

