/* compilefix: USA 00140ED8 (EU 00140ED8), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier '_IRQ'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - _IRQ / fRam00000020 (Ghidra labels of absolute addresses 0x18/0x20) -> *(float *)0x18 / *(float *)0x20: EU 001419A8 really loads [r0,#0x18]/[r0,#0x20] with r0 == 0 on every path into that block (null-object read, faults natively as it would on the 3DS) [1]
 *  - implicit float<->int conversions (Ghidra COPY between a float and an int-typed variable or
 *    pool word, e.g. `fVar = _DAT_xxx;`, `puVar[3] = fVar;`) made bit copies [36]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0013F614(int param_1);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_001512E8(int *param_1);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_00581B9C(int param_1);
extern int func_00582250(int param_1);
extern int func_00588BE4(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00657580(undefined4 *param_1,undefined1 param_2);
extern int DAT_001412ec;
extern float DAT_001412f0;
extern int DAT_001412f4;
extern int DAT_001412f8;
extern undefined4 DAT_001412fc;
extern undefined4 DAT_00141300;
extern int *DAT_00141304;
extern int DAT_00141308;
extern int *DAT_0014130c;
extern undefined4 DAT_00141310;
extern undefined4 DAT_00141314;
extern int *DAT_00141318;
extern undefined4 DAT_001416dc;
extern int *DAT_001416e0;
extern int *DAT_001416e4;
extern int *DAT_001416e8;
extern int DAT_001416ec;
extern undefined4 *DAT_001416f0;
extern undefined DAT_001416f4;
extern int DAT_001416f8;
extern undefined *DAT_001416fc;
extern int DAT_00141700;
extern char s_cState_Fall_00141a20[];
extern char s_cState_Free_00141718[];
extern char s_cState_Invisible_00141a0c[];
extern char s_cState_Lava_00141a2c[];
extern char s_cState_RailTrail_00141704[];
extern char s_cState_Wait2_001419fc[];
extern char s_cState_Wait_00141724[];

// USA 00140ED8 <- EU 00140ED8 (Ghidra, non-matching)
// GLOBAL DAT_001412ec int
// GLOBAL DAT_001412f0 float
// GLOBAL DAT_001412f4 int
// GLOBAL DAT_001412f8 int
// GLOBAL DAT_001412fc undefined4
// GLOBAL DAT_00141300 undefined4
// GLOBAL DAT_00141304 int *
// GLOBAL DAT_00141308 int
// GLOBAL DAT_0014130c int *
// GLOBAL DAT_00141310 undefined4
// GLOBAL DAT_00141314 undefined4
// GLOBAL DAT_00141318 int *
// GLOBAL DAT_001416dc undefined4
// GLOBAL DAT_001416e0 int *
// GLOBAL DAT_001416e4 int *
// GLOBAL DAT_001416e8 int *
// GLOBAL DAT_001416ec int
// GLOBAL DAT_001416f0 undefined4 *
// GLOBAL DAT_001416f4 undefined
// GLOBAL DAT_001416f8 int
// GLOBAL DAT_001416fc undefined *
// GLOBAL DAT_00141700 int
// GLOBAL EXT_00000018 undefined
// GLOBAL UNK_00000020 float
// GLOBAL s_cState_Fall_00141a20 string
// GLOBAL s_cState_Free_00141718 string
// GLOBAL s_cState_Invisible_00141a0c string
// GLOBAL s_cState_Lava_00141a2c string
// GLOBAL s_cState_RailTrail_00141704 string
// GLOBAL s_cState_Wait2_001419fc string
// GLOBAL s_cState_Wait_00141724 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * func_00140ED8(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint *puVar8;
  char *pcVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint extraout_r1;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  int iVar27;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define local_54 (*(char * *)(albw_frame + 0xc))
  #define local_50 (*(float * *)(albw_frame + 0x10))
  #define local_4c (*(int * *)(albw_frame + 0x14))
  #define local_48 (*(uint * *)(albw_frame + 0x18))
  #define local_44 (*(int * *)(albw_frame + 0x1c))
  #define local_40 ((uint *)(albw_frame + 0x20))
  piVar3 = (int *)(uintptr_t)(func_00150E40(param_1,param_2));
  iVar5 = DAT_001412ec;
  piVar3[200] = DAT_001412ec + 0x54;
  *piVar3 = iVar5;
  piVar3[0x104] = 0;
  piVar3[0x105] = 0;
  puVar4 = (undefined4 *)func_0010BAB4(100);
  iVar5 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    iVar5 = func_004EE484(puVar4);
  }
  piVar3[0x106] = iVar5;
  iVar5 = func_0054D964((int)piVar3,0);
  piVar3[0x107] = iVar5;
  puVar6 = (undefined4 *)func_0010BAB4(0x48);
  puVar4 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(uintptr_t)(func_0034CAA0(puVar6));
  }
  fVar26 = DAT_001412f0;
  piVar3[0x108] = (int)puVar4;
  piVar3[0x109] = 0;
  piVar3[0x10a] = 0;
  piVar3[0x10c] = (int)ALBW_AS_U32(fVar26);
  iVar5 = DAT_001412f4;
  piVar3[0x10d] = (int)ALBW_AS_U32(fVar26);
  piVar3[0x10e] = (int)ALBW_AS_U32(fVar26);
  piVar3[0x10f] = (int)ALBW_AS_U32(fVar26);
  iVar15 = *(int *)(iVar5 + 0xc);
  piVar3[0x112] = *(int *)(iVar5 + 8);
  piVar3[0x113] = iVar15;
  iVar15 = DAT_001412f8;
  piVar3[0x110] = DAT_001412f8;
  piVar3[0x111] = (int)piVar3;
  iVar16 = *(int *)(iVar5 + 0x10);
  piVar3[0x117] = *(int *)(iVar5 + 0x14);
  piVar3[0x116] = iVar16;
  piVar3[0x114] = iVar15;
  piVar3[0x115] = (int)piVar3;
  puVar4 = (undefined4 *)(uintptr_t)(func_0010A794(piVar3 + 0x118));
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = ALBW_AS_U32(fVar26);
  puVar4[10] = ALBW_AS_U32(fVar26);
  puVar4[0xb] = ALBW_AS_U32(fVar26);
  puVar6 = puVar4 + -0x118;
  puVar4[0xc] = ALBW_AS_U32(fVar26);
  puVar4[0xd] = ALBW_AS_U32(fVar26);
  puVar4[0xe] = ALBW_AS_U32(fVar26);
  uVar7 = DAT_001412fc;
  puVar4[0xf] = ALBW_AS_U32(fVar26);
  puVar4[0x10] = uVar7;
  puVar4[0x11] = ALBW_AS_U32(fVar26);
  puVar4[0x12] = ALBW_AS_U32(fVar26);
  puVar4[0x13] = ALBW_AS_U32(fVar26);
  puVar4[0x14] = uVar7;
  puVar4[0x15] = ALBW_AS_U32(fVar26);
  puVar4[0x16] = ALBW_AS_U32(fVar26);
  puVar4[0x17] = uVar7;
  puVar4[0x18] = ALBW_AS_U32(fVar26);
  puVar4[0x19] = ALBW_AS_U32(fVar26);
  puVar4[0x1a] = ALBW_AS_U32(fVar26);
  local_50 = (float *)(puVar4 + 0x1b);
  *local_50 = fVar26;
  puVar4[0x1c] = ALBW_AS_U32(fVar26);
  puVar4[0x1d] = ALBW_AS_U32(fVar26);
  puVar4[0x22] = 0;
  puVar4[0x23] = 0;
  local_4c = puVar4 + 0x26;
  puVar4[0x25] = 0;
  puVar4[0x26] = 1;
  puVar4[0x27] = ALBW_AS_U32(fVar26);
  puVar4[0x28] = ALBW_AS_U32(fVar26);
  puVar4[0x29] = 0;
  local_48 = param_2 + 0xb;
  puVar4[0x2a] = 0;
  local_44 = puVar4 + 0x2b;
  puVar4[0x2b] = (int)(short)param_2[0xb];
  uVar17 = DAT_00141300;
  puVar4[0x2c] = ALBW_AS_U32(fVar26);
  puVar4[0x2d] = uVar7;
  puVar4[0x2e] = uVar17;
  *(undefined1 *)(puVar4 + 0x2f) = 0;
  *(undefined1 *)((int)puVar4 + 0xbd) = 1;
  *(undefined1 *)((int)puVar4 + 0xbe) = 0;
  *(undefined1 *)((int)puVar4 + 0xbf) = 1;
  *(undefined1 *)(puVar4 + 0x30) = 0;
  *(undefined1 *)((int)puVar4 + 0xc1) = 0;
  *(undefined1 *)((int)puVar4 + 0xc2) = 0;
  *(undefined1 *)((int)puVar4 + 0xc3) = 0;
  if ((*(short *)((int)param_2 + 0x2a) == 1) && (bVar2 = func_00588BF0((int)puVar6,0), bVar2))
  goto LAB_00141968;
  if ((int)ALBW_AS_F32(param_2[0x11]) == 1) {
    if (*(int *)(*(int *)(*DAT_00141304 + 0x1c) + 4) < DAT_00141308) goto LAB_00141968;
  }
  else if (((int)ALBW_AS_F32(param_2[0x11]) == 2) &&
          (DAT_00141308 <= *(int *)(*(int *)(*DAT_00141304 + 0x1c) + 4))) goto LAB_00141968;
  puVar4[0x2a] = (uint)(*(short *)((int)param_2 + 0x2a) == 1);
  piVar3 = (int *)func_0014E428((int)puVar6,0,(int)*(short *)((int)param_2 + 0x2a),0,1,0,0);
  puVar4[-0x14] = (undefined4)(uintptr_t)(piVar3);
  if (piVar3 == (int *)0x0) goto LAB_00141968;
  (**(code **)(*piVar3 + 0x10))(piVar3,0x74);
  iVar5 = puVar4[-0x14];
  *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar5 + 0x80),puVar4[-0x1e],(float *)(puVar4 + -0x24));
  iVar5 = func_00588BE4((int)puVar6);
  piVar3 = puVar4 + -0x11;
  if (iVar5 != *DAT_0014130c) {
    puVar4[0x2d] = DAT_00141310;
  }
  iVar5 = puVar4[-0x14];
  uVar7 = puVar4[0x2d];
  *(undefined4 *)(iVar5 + 0x74) = uVar7;
  *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar5 + 0x78) = uVar7;
  *(undefined4 *)(iVar5 + 0x7c) = uVar7;
  puVar4[-0x1d] = (undefined4)(uintptr_t)(puVar4 + -4);
  *(uint *)(puVar4[-0x11] + 0x2c) = *(uint *)(puVar4[-0x11] + 0x2c) | 0x100000;
  iVar5 = func_0054DDF4((int)puVar6,0);
  puVar4[-0x30] = iVar5;
  puVar4[-0x2f] = iVar5;
  local_40[0] = puVar4[-0x65];
  func_0014EB8C(puVar4[-0x12],*piVar3,(undefined2 *)puVar4[-0x30],local_40,
                *(undefined2 *)(puVar4 + -0x103),0,(short)DAT_00141314);
  puVar4[-0xc] = ALBW_AS_U32(fVar26);
  puVar4[-0xb] = ALBW_AS_U32(fVar26);
  puVar4[-10] = ALBW_AS_U32(fVar26);
  fVar21 = func_0054DE3C((int)(uintptr_t)(puVar6),0,1);
  puVar4[-9] = ALBW_AS_U32(fVar21);
  uVar18 = param_2[0xa7];
  uVar19 = param_2[0xa8];
  if ((int)uVar18 < 0 || (int)uVar19 < 0) goto LAB_00141968;
  iVar5 = *DAT_00141318;
  iVar15 = func_00581B9C(iVar5);
  uVar13 = extraout_r1;
  if (iVar15 == 1) {
    puVar8 = (uint *)func_00582250(iVar5);
    uVar13 = *puVar8;
    if (uVar13 <= uVar18) goto LAB_001412d0;
    iVar5 = *(int *)(puVar8[2] + uVar18 * 4);
  }
  else {
LAB_001412d0:
    iVar5 = 0;
  }
  puVar4[-0x15] = iVar5;
  if (iVar5 != 0) {
    uVar13 = *(uint *)(iVar5 + 0x28);
  }
  if ((((iVar5 == 0 || uVar13 == 0) || (*(uint *)(iVar5 + 0x20) <= uVar19)) ||
      (iVar5 = *(int *)(uVar13 + uVar19 * 4), iVar5 == 0)) || (*(char *)(iVar5 + 0xb1) != '\0'))
  goto LAB_00141968;
  puVar4[-0x2d] = DAT_001416dc;
  iVar15 = func_00588BE4((int)puVar6);
  iVar16 = 0;
  if (iVar15 == *DAT_0014130c) {
    iVar15 = puVar4[-0x11];
    iVar16 = *(int *)(puVar4[-0x15] + 8);
    *(undefined2 *)(iVar15 + 0x28) = 0xa0;
    *(uint *)(iVar15 + 0x2c) = *(uint *)(iVar15 + 0x2c) & 0xffffe0ff;
    iVar15 = *(int *)(*DAT_001416e0 + 0x3dbe8);
    *(undefined1 *)((int)puVar4 + 0xbf) = *(undefined1 *)(iVar15 + 0x14);
    pcVar9 = (char *)(iVar15 + 0x14);
    *pcVar9 = *pcVar9 == '\0';
  }
  else {
    if (iVar15 == *DAT_001416e4) {
      iVar15 = puVar4[-0x11];
      iVar16 = 2;
      *(undefined2 *)(iVar15 + 0x28) = 0xe0;
    }
    else {
      if (iVar15 != *DAT_001416e8) goto LAB_00141420;
      iVar16 = 3;
      func_0013F614((int)puVar6);
      iVar15 = puVar4[-0x11];
      *(undefined2 *)(iVar15 + 0x28) = 0xe0;
    }
    *(uint *)(iVar15 + 0x2c) = *(uint *)(iVar15 + 0x2c) & 0xffffe0ff;
  }
LAB_00141420:
  puVar4[-0xd] = DAT_001416ec + iVar16 * 0x28;
  fVar22 = *(float *)(iVar5 + 0x18);
  fVar23 = *(float *)(iVar5 + 0x20);
  fVar21 = *(float *)(iVar5 + 0x1c) + ALBW_AS_F32(puVar4[-9]);
  puVar4[-0x3e] = ALBW_AS_U32(fVar22);
  puVar4[-0x3d] = ALBW_AS_U32(fVar21);
  puVar4[-0x3c] = ALBW_AS_U32(fVar23);
  puVar4[-0x24] = ALBW_AS_U32(fVar22);
  puVar4[-0x23] = ALBW_AS_U32(fVar21);
  puVar4[-0x22] = ALBW_AS_U32(fVar23);
  *(uint *)(puVar4[-0x11] + 0x2c) = *(uint *)(puVar4[-0x11] + 0x2c) | 0x2000;
  iVar15 = *piVar3;
  *(undefined4 *)(iVar15 + 4) = puVar4[-0x24];
  *(undefined4 *)(iVar15 + 8) = puVar4[-0x23];
  *(undefined4 *)(iVar15 + 0xc) = puVar4[-0x22];
  func_004356B4((int *)*piVar3);
  puVar4[0x18] = ALBW_AS_U32(fVar22);
  puVar4[0x19] = ALBW_AS_U32(fVar21);
  puVar4[0x1a] = ALBW_AS_U32(fVar23);
  puVar4[0x26] = uVar19 + 1;
  piVar3 = (int *)func_0054D89C((int)puVar6,0);
  puVar4[-0x13] = (undefined4)(uintptr_t)(piVar3);
  if (piVar3 != (int *)0x0) {
    func_001512E8(piVar3);
    iVar16 = DAT_001416f8;
    uVar7 = *DAT_001416f0;
    uVar17 = DAT_001416f0[1];
    uVar20 = DAT_001416f0[2];
    puVar4[0x21] = DAT_001416f0[3];
    puVar4[0x1e] = uVar7;
    puVar4[0x1f] = uVar17;
    puVar4[0x20] = uVar20;
    local_54 = &DAT_001416f4;
    iVar27 = 7;
    local_58 = iVar16;
    *(undefined1 *)((int)puVar4 + 6) = 7;
    puVar4[5] = (undefined4)(uintptr_t)(puVar6);
    iVar10 = func_0010BA78(0x70);
    puVar4[6] = iVar10;
    iVar15 = DAT_001412f4;
    iVar14 = 7;
    puVar4[7] = iVar10 + (uint)*(byte *)((int)puVar4 + 6) * 8;
    puVar11 = (undefined4 *)(iVar10 + -8);
    do {
      uVar7 = *(undefined4 *)(iVar15 + 0xac);
      iVar14 = iVar14 + -1;
      puVar11[2] = *(undefined4 *)(iVar15 + 0xa8);
      puVar11[3] = uVar7;
      uVar7 = *(undefined4 *)(iVar15 + 0xac);
      puVar11[4] = *(undefined4 *)(iVar15 + 0xa8);
      puVar11[5] = uVar7;
      puVar11 = puVar11 + 4;
    } while (iVar14 != 0);
    bVar1 = *(byte *)((int)puVar4 + 6);
    uVar18 = (uint)bVar1;
    puVar11 = (undefined4 *)func_0010BA78(uVar18 << 3);
    puVar4[8] = (undefined4)(uintptr_t)(puVar11);
    if (uVar18 != 0) {
      puVar12 = puVar11 + -2;
      if ((bVar1 & 1) != 0) {
        uVar7 = *(undefined4 *)(iVar15 + 0x2c);
        *puVar11 = *(undefined4 *)(iVar15 + 0x28);
        puVar11[1] = uVar7;
        puVar12 = puVar11;
      }
      for (iVar10 = (int)uVar18 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
        uVar7 = *(undefined4 *)(iVar15 + 0x2c);
        puVar12[2] = *(undefined4 *)(iVar15 + 0x28);
        puVar12[3] = uVar7;
        uVar7 = *(undefined4 *)(iVar15 + 0x2c);
        puVar12[4] = *(undefined4 *)(iVar15 + 0x28);
        puVar12[5] = uVar7;
        puVar12 = puVar12 + 4;
      }
    }
    if (0 < iVar27) {
      puVar11 = (undefined4 *)func_0010CEE0(iVar27 * 0x24 + 8,(int *)0x0,4);
      iVar10 = 0;
      if (puVar11 != (undefined4 *)0x0) {
        *puVar11 = 0x24;
        puVar11[1] = iVar27;
        iVar10 = func_00100118((int)(puVar11 + 2),DAT_001416fc,0x24,iVar27);
      }
      if (iVar10 != 0) {
        puVar4[2] = iVar27;
        puVar4[3] = iVar10;
      }
    }
    iVar10 = DAT_00141700;
    puVar4[-0x43] = (undefined4)(uintptr_t)(puVar4);
    *(undefined2 *)(iVar10 + (int)puVar6) = 7;
    local_54 = s_cState_RailTrail_00141704;
    local_58 = iVar16;
    func_0010BEC4((int)puVar4,0,&local_58);
    puVar11 = (undefined4 *)puVar4[6];
    uVar7 = *(undefined4 *)(iVar15 + 0x20);
    uVar20 = *(undefined4 *)(iVar15 + 0x1c);
    uVar17 = *(undefined4 *)(iVar15 + 0x24);
    uVar24 = *(undefined4 *)(iVar15 + 0x28);
    uVar25 = *(undefined4 *)(iVar15 + 0x2c);
    *puVar11 = *(undefined4 *)(iVar15 + 0x18);
    puVar11[1] = uVar20;
    puVar11 = (undefined4 *)puVar4[7];
    *puVar11 = uVar7;
    puVar11[1] = uVar17;
    puVar11 = (undefined4 *)puVar4[8];
    *puVar11 = uVar24;
    puVar11[1] = uVar25;
    local_54 = s_cState_Free_00141718;
    local_58 = iVar16;
    func_0010BEC4((int)puVar4,1,&local_58);
    iVar10 = puVar4[6];
    uVar7 = *(undefined4 *)(iVar15 + 0x34);
    uVar17 = *(undefined4 *)(iVar15 + 0x38);
    uVar20 = *(undefined4 *)(iVar15 + 0x3c);
    *(undefined4 *)(iVar10 + 8) = *(undefined4 *)(iVar15 + 0x30);
    *(undefined4 *)(iVar10 + 0xc) = uVar7;
    iVar10 = puVar4[7];
    *(undefined4 *)(iVar10 + 8) = uVar17;
    *(undefined4 *)(iVar10 + 0xc) = uVar20;
    iVar10 = puVar4[8];
    *(undefined4 *)(iVar10 + 8) = uVar24;
    *(undefined4 *)(iVar10 + 0xc) = uVar25;
    local_54 = s_cState_Wait_00141724;
    local_58 = iVar16;
    func_0010BEC4((int)puVar4,2,&local_58);
    iVar10 = puVar4[6];
    uVar7 = *(undefined4 *)(iVar15 + 0x44);
    uVar17 = *(undefined4 *)(iVar15 + 0x48);
    uVar20 = *(undefined4 *)(iVar15 + 0x4c);
    uVar24 = *(undefined4 *)(iVar15 + 0x50);
    uVar25 = *(undefined4 *)(iVar15 + 0x54);
    *(undefined4 *)(iVar10 + 0x10) = *(undefined4 *)(iVar15 + 0x40);
    *(undefined4 *)(iVar10 + 0x14) = uVar7;
    iVar10 = puVar4[7];
    *(undefined4 *)(iVar10 + 0x10) = uVar17;
    *(undefined4 *)(iVar10 + 0x14) = uVar20;
    iVar10 = puVar4[8];
    *(undefined4 *)(iVar10 + 0x10) = uVar24;
    *(undefined4 *)(iVar10 + 0x14) = uVar25;
    local_54 = s_cState_Wait2_001419fc;
    local_58 = iVar16;
    func_0010BEC4((int)puVar4,3,&local_58);
    iVar10 = puVar4[6];
    uVar7 = *(undefined4 *)(iVar15 + 0x5c);
    uVar17 = *(undefined4 *)(iVar15 + 0x60);
    uVar20 = *(undefined4 *)(iVar15 + 100);
    uVar24 = *(undefined4 *)(iVar15 + 0x68);
    uVar25 = *(undefined4 *)(iVar15 + 0x6c);
    *(undefined4 *)(iVar10 + 0x18) = *(undefined4 *)(iVar15 + 0x58);
    *(undefined4 *)(iVar10 + 0x1c) = uVar7;
    iVar10 = puVar4[7];
    *(undefined4 *)(iVar10 + 0x18) = uVar17;
    *(undefined4 *)(iVar10 + 0x1c) = uVar20;
    iVar10 = puVar4[8];
    *(undefined4 *)(iVar10 + 0x18) = uVar24;
    *(undefined4 *)(iVar10 + 0x1c) = uVar25;
    local_54 = s_cState_Invisible_00141a0c;
    local_58 = iVar16;
    func_0010BEC4((int)puVar4,4,&local_58);
    iVar10 = puVar4[6];
    uVar25 = *(undefined4 *)(iVar15 + 0x74);
    uVar17 = *(undefined4 *)(iVar15 + 0x28);
    uVar7 = *(undefined4 *)(iVar15 + 0x2c);
    uVar20 = *(undefined4 *)(iVar15 + 0x78);
    uVar24 = *(undefined4 *)(iVar15 + 0x7c);
    *(undefined4 *)(iVar10 + 0x20) = *(undefined4 *)(iVar15 + 0x70);
    *(undefined4 *)(iVar10 + 0x24) = uVar25;
    iVar10 = puVar4[7];
    *(undefined4 *)(iVar10 + 0x20) = uVar20;
    *(undefined4 *)(iVar10 + 0x24) = uVar24;
    iVar10 = puVar4[8];
    *(undefined4 *)(iVar10 + 0x20) = uVar17;
    *(undefined4 *)(iVar10 + 0x24) = uVar7;
    local_54 = s_cState_Fall_00141a20;
    local_58 = iVar16;
    func_0010BEC4((int)puVar4,5,&local_58);
    iVar10 = puVar4[6];
    uVar7 = *(undefined4 *)(iVar15 + 0x84);
    uVar17 = *(undefined4 *)(iVar15 + 0x88);
    uVar20 = *(undefined4 *)(iVar15 + 0x8c);
    uVar24 = *(undefined4 *)(iVar15 + 0x90);
    uVar25 = *(undefined4 *)(iVar15 + 0x94);
    *(undefined4 *)(iVar10 + 0x28) = *(undefined4 *)(iVar15 + 0x80);
    *(undefined4 *)(iVar10 + 0x2c) = uVar7;
    iVar10 = puVar4[7];
    *(undefined4 *)(iVar10 + 0x28) = uVar17;
    *(undefined4 *)(iVar10 + 0x2c) = uVar20;
    iVar10 = puVar4[8];
    *(undefined4 *)(iVar10 + 0x28) = uVar24;
    *(undefined4 *)(iVar10 + 0x2c) = uVar25;
    local_54 = s_cState_Lava_00141a2c;
    local_58 = iVar16;
    func_0010BEC4((int)puVar4,6,&local_58);
    iVar16 = puVar4[6];
    uVar17 = *(undefined4 *)(iVar15 + 0x9c);
    uVar7 = *(undefined4 *)(iVar15 + 0xa0);
    uVar24 = *(undefined4 *)(iVar15 + 0xa4);
    uVar20 = *(undefined4 *)(iVar15 + 0x28);
    uVar25 = *(undefined4 *)(iVar15 + 0x2c);
    *(undefined4 *)(iVar16 + 0x30) = *(undefined4 *)(iVar15 + 0x98);
    *(undefined4 *)(iVar16 + 0x34) = uVar17;
    iVar15 = puVar4[7];
    *(undefined4 *)(iVar15 + 0x30) = uVar7;
    *(undefined4 *)(iVar15 + 0x34) = uVar24;
    iVar15 = puVar4[8];
    *(undefined4 *)(iVar15 + 0x30) = uVar20;
    *(undefined4 *)(iVar15 + 0x34) = uVar25;
    if (*(int *)(iVar5 + 0x48) == 0) {
      func_00657580(puVar4,0);
      func_00115D70((float *)(puVar4 + -0x21),(float *)(puVar4 + 0x15),
                    *(float *)(puVar4[-0xd] + 0x18));
    }
    else {
      *local_50 = fVar22;
      local_50[1] = fVar21;
      local_50[2] = fVar23;
      *local_4c = puVar4[0x26] + -1;
      func_00657580(puVar4,2);
    }
    *(undefined1 *)((int)puVar4 + -0xcf) = 1;
    puVar4[9] = puVar4[-0x24];
    puVar4[10] = puVar4[-0x23];
    puVar4[0xb] = puVar4[-0x22];
    puVar4[0xc] = puVar4[-0x24];
    puVar4[0xd] = puVar4[-0x23];
    puVar4[0xe] = puVar4[-0x22];
    if (*(short *)((int)param_2 + 0x2e) != 0) {
      *(undefined1 *)((int)puVar4 + 0xc3) = 1;
      puVar4[-0x21] = ALBW_AS_U32(fVar26);
      puVar4[-0x20] = ALBW_AS_U32(fVar26);
      puVar4[-0x1f] = ALBW_AS_U32(fVar26);
    }
    iVar5 = (int)(short)*local_48;
    puVar4[0x2b] = iVar5;
    if (iVar5 != 0) {
      iVar15 = puVar4[-0x15];
      piVar3 = *(int **)(iVar15 + 0x28);
      if (piVar3 != (int *)0x0) {
        iVar15 = *(int *)(iVar15 + 0x20);
      }
      if ((piVar3 == (int *)0x0 || iVar15 == 0) || (*piVar3 == 0)) {
        *local_44 = iVar5 - (int)(SQRT(((*(float *)(uintptr_t)0x18) - ALBW_AS_F32(puVar4[-0x24])) * ((*(float *)(uintptr_t)0x18) - ALBW_AS_F32(puVar4[-0x24]))
                                       + ((*(float *)(uintptr_t)0x20) - ALBW_AS_F32(puVar4[-0x22])) *
                                         ((*(float *)(uintptr_t)0x20) - ALBW_AS_F32(puVar4[-0x22]))) /
                                 *(float *)(puVar4[-0xd] + 0x14));
      }
    }
    return puVar6;
  }
LAB_00141968:
  *(undefined1 *)((int)puVar4 + -0x189) = 1;
  return puVar6;
}

