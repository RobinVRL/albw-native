/* compilefix: USA 0050C740 (EU 0050C718), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [1]
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [1]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [11]
 *  - explicit casts at pointer-type mismatches (identity on the ARM) [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_0050cf00[];
#include "compilefix.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00133870(int param_1,uint param_2,int param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_004356B4(int *param_1);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern int func_00491338(float *param_1,uint param_2,uint param_3,uint param_4);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_00491938(float *param_1,uint param_2,uint param_3,uint param_4);
extern float func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDB28(int param_1,int param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0050BE88(int *param_1);
extern int func_0050C3B4(int param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00564A78(int param_1,int *param_2);
extern int func_0066B6C4(undefined4 *param_1,undefined1 param_2);
extern int DAT_0050cb60;
extern float *DAT_0050cb64;
extern int DAT_0050cb68;
extern int DAT_0050cb6c;
extern undefined4 DAT_0050cb70;
extern undefined4 *DAT_0050cb74;
extern undefined4 DAT_0050cb78;
extern undefined4 DAT_0050cb7c;
extern int DAT_0050cb80;
extern undefined4 DAT_0050cb84;
extern int DAT_0050cb90;
extern float *DAT_0050cb94;
extern int *DAT_0050cb98;
extern float *DAT_0050cb9c;
extern int *DAT_0050cba0;
extern int *DAT_0050cba4;
extern float DAT_0050cf14;
extern float DAT_0050cf18;
extern float *DAT_0050cf1c;
extern undefined *DAT_0050d3ec;
extern int DAT_0050d3f0;
extern undefined8 *DAT_0050d400;
extern int *DAT_0050d424;
extern char s_Actor_Seesaw_kcl_0050cf00[];
extern char s_cState_Freeze_0050d404[];
extern char s_cState_Recover_0050d414[];
extern char s_cState_Wait_0050d3f4[];
extern char s_point_0050cb88[];

// USA 0050C740 <- EU 0050C718 (Ghidra, non-matching)
// GLOBAL DAT_0050cb60 int
// GLOBAL DAT_0050cb64 float *
// GLOBAL DAT_0050cb68 int
// GLOBAL DAT_0050cb6c int
// GLOBAL DAT_0050cb70 undefined4
// GLOBAL DAT_0050cb74 undefined4 *
// GLOBAL DAT_0050cb78 undefined4
// GLOBAL DAT_0050cb7c undefined4
// GLOBAL DAT_0050cb80 int
// GLOBAL DAT_0050cb84 undefined4
// GLOBAL DAT_0050cb90 int
// GLOBAL DAT_0050cb94 float *
// GLOBAL DAT_0050cb98 int *
// GLOBAL DAT_0050cb9c float *
// GLOBAL DAT_0050cba0 int *
// GLOBAL DAT_0050cba4 int *
// GLOBAL DAT_0050cf14 float
// GLOBAL DAT_0050cf18 float
// GLOBAL DAT_0050cf1c float *
// GLOBAL DAT_0050d3ec undefined *
// GLOBAL DAT_0050d3f0 int
// GLOBAL DAT_0050d400 undefined8 *
// GLOBAL DAT_0050d424 int *
// GLOBAL s_cf_0050cf00 string
// GLOBAL s_cState_Freeze_0050d404 string
// GLOBAL s_cState_Recover_0050d414 string
// GLOBAL s_cState_Wait_0050d3f4 string
// GLOBAL s_point_0050cb88 string

int * func_0050C740(undefined4 *param_1,uint *param_2)

{
  _Alignas(8) unsigned char albw_frame[0xc0]; /* entry_sp - 0xc0 .. entry_sp + 0x0 */
#define stack0xffffff48 (*(undefined4 *)(albw_frame + 0x8))
#define stack0xffffff4c (*(undefined4 *)(albw_frame + 0xc))
  uint uVar1;
  float *pfVar2;
  byte bVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 extraout_r1;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  int *piVar17;
  uint uVar18;
  int *piVar19;
  undefined4 uVar20;
  bool bVar21;
  bool bVar22;
  uint in_fpscr;
  uint uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined8 uVar27;
  char *pcVar28;
  #define local_a8 (*(float *)(albw_frame + 0x18))
  #define local_a4 (*(float *)(albw_frame + 0x1c))
  #define local_a0 (*(float *)(albw_frame + 0x20))
  #define local_9c (*(undefined4 * *)(albw_frame + 0x24))
  #define local_98 (*(float *)(albw_frame + 0x28))
  #define local_94 (*(float *)(albw_frame + 0x2c))
  #define local_90 (*(float *)(albw_frame + 0x30))
  #define local_8c (*(float *)(albw_frame + 0x34))
  #define local_88 (*(float *)(albw_frame + 0x38))
  #define local_84 ((uint *)(albw_frame + 0x3c))
  #define local_78 (*(int *)(albw_frame + 0x48))
  #define local_74 (*(char * *)(albw_frame + 0x4c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x60))
  #define local_5c (*(undefined1 *)(albw_frame + 0x64))
  #define local_48 (*(int *)(albw_frame + 0x78))
  #define local_44 (*(uint * *)(albw_frame + 0x7c))
  piVar4 = (int *)(uintptr_t)(func_00150E40(param_1,param_2));
  iVar7 = DAT_0050cb60;
  piVar4[200] = DAT_0050cb60 + 0x54;
  *piVar4 = iVar7;
  piVar4[0x103] = 0;
  piVar4[0x104] = 0;
  puVar5 = (undefined4 *)func_0010BAB4(0x48);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)(uintptr_t)(func_004EDC9C(puVar5));
  }
  piVar4[0x105] = (int)puVar6;
  puVar5 = (undefined4 *)func_0010BAB4(0x48);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)(uintptr_t)(func_004EDC9C(puVar5));
  }
  piVar4[0x106] = (int)puVar6;
  iVar7 = func_0054D964((int)piVar4,0);
  piVar4[0x107] = iVar7;
  iVar7 = func_0054D964((int)piVar4,0);
  piVar4[0x108] = iVar7;
  piVar4[0x109] = 0;
  pfVar2 = DAT_0050cb64;
  *(undefined1 *)(piVar4 + 0x10a) = 1;
  *(undefined1 *)((int)piVar4 + 0x429) = 1;
  *(undefined1 *)((int)piVar4 + 0x42a) = 1;
  fVar12 = *pfVar2;
  fVar13 = pfVar2[1];
  piVar4[0x10d] = (int)ALBW_AS_U32(pfVar2[2]);
  piVar4[0x10e] = 0;
  piVar4[0x10f] = 0;
  iVar7 = DAT_0050cb68;
  piVar4[0x10b] = (int)ALBW_AS_U32(fVar12);
  piVar4[0x10c] = (int)ALBW_AS_U32(fVar13);
  piVar4[0x110] = iVar7;
  iVar11 = DAT_0050cb6c;
  uVar27 = CONCAT44(iVar7,DAT_0050cb6c);
  piVar4[0x111] = 0;
  piVar4[0x112] = iVar11;
  puVar5 = (undefined4 *)(uintptr_t)(func_0010A794(piVar4 + 0x113));
  puVar5[5] = 0;
  uVar14 = DAT_0050cb70;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = uVar14;
  puVar6 = DAT_0050cb74;
  puVar5[10] = (undefined4)(uintptr_t)(puVar5 + -0x113);
  puVar5[0xb] = 0;
  piVar4 = puVar5 + -0x113;
  puVar5[0xc] = 0;
  uVar14 = puVar6[1];
  puVar5[0xf] = *puVar6;
  puVar5[0x10] = uVar14;
  uVar14 = DAT_0050cb78;
  puVar5[0xd] = DAT_0050cb78;
  puVar5[0xe] = (undefined4)(uintptr_t)(piVar4);
  uVar15 = puVar6[2];
  uVar20 = puVar6[3];
  puVar5[0x11] = uVar14;
  puVar5[0x12] = (undefined4)(uintptr_t)(piVar4);
  puVar5[0x13] = uVar15;
  puVar5[0x14] = uVar20;
  uVar14 = puVar6[5];
  puVar5[0x17] = puVar6[4];
  puVar5[0x18] = uVar14;
  puVar5[0x15] = DAT_0050cb7c;
  puVar5[0x16] = (undefined4)(uintptr_t)(piVar4);
  iVar7 = func_0014E428((int)piVar4,1,0,0,1,0,0);
  puVar5[-0x10] = iVar7;
  *(uint *)(iVar7 + 0x164) = *(uint *)(iVar7 + 0x164) | 0x40000000;
  func_00491938((float *)(iVar7 + 0x80),0,puVar5[-0x19],0);
  iVar7 = puVar5[-0x10];
  *(uint *)(iVar7 + 0x164) = *(uint *)(iVar7 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar7 + 0x8c) = puVar5[-0x1f];
  *(undefined4 *)(iVar7 + 0x9c) = puVar5[-0x1e];
  *(undefined4 *)(iVar7 + 0xac) = puVar5[-0x1d];
  (**(code **)(*(int *)puVar5[-0x10] + 0x10))((int *)puVar5[-0x10],0x24);
  uVar14 = func_0014E904((int)piVar4,2,1);
  iVar7 = DAT_0050cb80;
  uVar18 = 0;
  puVar5[-0xf] = uVar14;
  do {
    func_00169608((uint *)puVar5[-0xf],uVar18,(int *)(iVar7 + uVar18 * 8),
                  *(int *)(puVar5[-0x5f] + 0x1c8));
    func_00133870(puVar5[-0xf],uVar18,puVar5[-0x10]);
    uVar18 = uVar18 + 1;
  } while ((int)uVar18 < 2);
  func_0016A02C(puVar5[-0xf],-1,(int *)0xffffffff,0);
  local_a0 = ALBW_AS_F32(((ulonglong)uVar27 >> 0x20));
  uVar14 = 3;
  local_60 = 10;
  local_5c = 0;
  local_a8 = 0.0;
  local_94 = ALBW_AS_F32((uVar18 | 0xff));
  local_a4 = ALBW_AS_F32(uVar27);
  local_9c = (undefined4 *)DAT_0050cb84;
  local_98 = local_a0;
  func_0016898C(puVar5[-0xf],(uint *)&stack0xffffff4c);
  iVar7 = DAT_0050cb90;
  pcVar28 = s_point_0050cb88;
  uVar18 = func_00564A78(puVar5[-0x10],(int *)&stack0xffffff48);
  puVar5[0xb] = uVar18;
  puVar8 = (uint *)(*(int *)(*(int *)(puVar5[-0x10] + 0x24) + 0xc) + uVar18 * 0x40);
  *puVar8 = *puVar8 | 0x10;
  *(undefined4 **)(puVar5[-0x10] + 0x16c) = puVar5 + 9;
  local_a4 = *DAT_0050cb64;
  local_a0 = DAT_0050cb64[1];
  local_9c = (undefined4 *)CF_FBITS(DAT_0050cb64[2]);
  piVar19 = (int *)puVar5[-0xc];
  func_00491338((float *)(piVar19 + 0x19),0,puVar5[-0x19],puVar5[0xc]);
  func_00115C54(&local_a4,(float *)(puVar5 + -0x1f),DAT_0050cb94);
  piVar17 = DAT_0050cb98;
  piVar19[1] = (int)ALBW_AS_U32(local_a4);
  piVar19[2] = (int)ALBW_AS_U32(local_a0);
  piVar19[3] = (int)local_9c;
  iVar11 = *piVar17;
  iVar16 = piVar17[1];
  piVar19[0x18] = piVar17[2];
  piVar19[0x16] = iVar11;
  piVar19[0x17] = iVar16;
  *(undefined2 *)(piVar19 + 10) = 0xa1;
  func_004356B4(piVar19);
  piVar19 = (int *)puVar5[-0xb];
  func_00491338((float *)(piVar19 + 0x19),0,puVar5[-0x19],puVar5[0xc]);
  func_00115C54(&local_a4,(float *)(puVar5 + -0x1f),DAT_0050cb9c);
  piVar17 = DAT_0050cba0;
  piVar19[1] = (int)ALBW_AS_U32(local_a4);
  piVar19[2] = (int)ALBW_AS_U32(local_a0);
  piVar19[3] = (int)local_9c;
  iVar11 = *piVar17;
  iVar16 = piVar17[1];
  piVar19[0x18] = piVar17[2];
  piVar19[0x16] = iVar11;
  piVar19[0x17] = iVar16;
  func_004356B4(piVar19);
  piVar19 = puVar5 + -0xe;
  *(undefined4 *)(puVar5[-0xe] + 0x18) = puVar5[-0xc];
  func_004ED9C8(puVar5[-0xe]);
  local_84[0] = puVar5[-0x60];
  func_004EDAD0(*piVar19,local_84);
  piVar17 = DAT_0050cba4;
  *(short *)(*piVar19 + 0x2c) = (short)param_2[0x14];
  *(undefined4 **)(*piVar19 + 0x28) = puVar5 + 0x15;
  func_004A7F00(*piVar17,*piVar19,3);
  local_74 = s_Actor_Seesaw_kcl_0050cf00;
  local_78 = iVar7;
  piVar19 = puVar5 + -0xd;
  func_004EDB28(puVar5[-0xd],(int)&local_78);
  func_00491624(&local_a8,0,puVar5[-0x19],0);
  fVar13 = DAT_0050cf18;
  fVar12 = DAT_0050cf14;
  iVar11 = *(int *)(*piVar19 + 0x14);
  fVar24 = local_a8 - *(float *)(iVar11 + 0x18);
  uVar18 = in_fpscr & 0xfffffff | (uint)(DAT_0050cf18 == fVar24) << 0x1e |
           (uint)(fVar24 <= DAT_0050cf18) << 0x1d;
  bVar3 = (byte)(uVar18 >> 0x18);
  bVar21 = (bool)(bVar3 >> 6);
  bVar22 = (bool)(bVar3 >> 5 & 1);
  if (!bVar22 || bVar21) {
    uVar18 = in_fpscr & 0xfffffff | (uint)(fVar24 == DAT_0050cf14) << 0x1e |
             (uint)(DAT_0050cf14 <= fVar24) << 0x1d;
    bVar3 = (byte)(uVar18 >> 0x18);
    bVar21 = (bool)(bVar3 >> 6);
    bVar22 = (bool)(bVar3 >> 5 & 1);
  }
  if (bVar22 && !bVar21) {
LAB_0050cd44:
    bVar21 = false;
  }
  else {
    fVar24 = local_a4 - *(float *)(iVar11 + 0x1c);
    uVar23 = uVar18 & 0xfffffff;
    uVar18 = uVar23 | (uint)(DAT_0050cf18 == fVar24) << 0x1e |
             (uint)(fVar24 <= DAT_0050cf18) << 0x1d;
    bVar3 = (byte)(uVar18 >> 0x18);
    bVar21 = (bool)(bVar3 >> 6);
    bVar22 = (bool)(bVar3 >> 5 & 1);
    if (!bVar22 || bVar21) {
      uVar18 = uVar23 | (uint)(fVar24 == DAT_0050cf14) << 0x1e |
               (uint)(DAT_0050cf14 <= fVar24) << 0x1d;
      bVar3 = (byte)(uVar18 >> 0x18);
      bVar21 = (bool)(bVar3 >> 6);
      bVar22 = (bool)(bVar3 >> 5 & 1);
    }
    if (bVar22 && !bVar21) goto LAB_0050cd44;
    fVar24 = local_a0 - *(float *)(iVar11 + 0x20);
    uVar23 = uVar18 & 0xfffffff;
    uVar18 = uVar23 | (uint)(DAT_0050cf18 == fVar24) << 0x1e |
             (uint)(fVar24 <= DAT_0050cf18) << 0x1d;
    bVar3 = (byte)(uVar18 >> 0x18);
    bVar21 = (bool)(bVar3 >> 6);
    bVar22 = (bool)(bVar3 >> 5 & 1);
    if (!bVar22 || bVar21) {
      uVar18 = uVar23 | (uint)(fVar24 == DAT_0050cf14) << 0x1e |
               (uint)(DAT_0050cf14 <= fVar24) << 0x1d;
      bVar3 = (byte)(uVar18 >> 0x18);
      bVar21 = (bool)(bVar3 >> 6);
      bVar22 = (bool)(bVar3 >> 5 & 1);
    }
    if (bVar22 && !bVar21) goto LAB_0050cd44;
    fVar24 = ALBW_AS_F32(local_9c) - *(float *)(iVar11 + 0x24);
    uVar23 = uVar18 & 0xfffffff;
    uVar18 = uVar23 | (uint)(DAT_0050cf18 == fVar24) << 0x1e |
             (uint)(fVar24 <= DAT_0050cf18) << 0x1d;
    bVar3 = (byte)(uVar18 >> 0x18);
    bVar21 = (bool)(bVar3 >> 6);
    bVar22 = (bool)(bVar3 >> 5 & 1);
    if (!bVar22 || bVar21) {
      uVar18 = uVar23 | (uint)(fVar24 == DAT_0050cf14) << 0x1e |
               (uint)(DAT_0050cf14 <= fVar24) << 0x1d;
      bVar3 = (byte)(uVar18 >> 0x18);
      bVar21 = (bool)(bVar3 >> 6);
      bVar22 = (bool)(bVar3 >> 5 & 1);
    }
    if (bVar22 && !bVar21) goto LAB_0050cd44;
    fVar24 = local_98 - *(float *)(iVar11 + 0x28);
    uVar23 = uVar18 & 0xfffffff;
    uVar18 = uVar23 | (uint)(DAT_0050cf18 == fVar24) << 0x1e |
             (uint)(fVar24 <= DAT_0050cf18) << 0x1d;
    bVar3 = (byte)(uVar18 >> 0x18);
    bVar21 = (bool)(bVar3 >> 6);
    bVar22 = (bool)(bVar3 >> 5 & 1);
    if (!bVar22 || bVar21) {
      uVar18 = uVar23 | (uint)(fVar24 == DAT_0050cf14) << 0x1e |
               (uint)(DAT_0050cf14 <= fVar24) << 0x1d;
      bVar3 = (byte)(uVar18 >> 0x18);
      bVar21 = (bool)(bVar3 >> 6);
      bVar22 = (bool)(bVar3 >> 5 & 1);
    }
    if (bVar22 && !bVar21) goto LAB_0050cd44;
    fVar24 = local_94 - *(float *)(iVar11 + 0x2c);
    uVar23 = uVar18 & 0xfffffff;
    uVar18 = uVar23 | (uint)(DAT_0050cf18 == fVar24) << 0x1e |
             (uint)(fVar24 <= DAT_0050cf18) << 0x1d;
    bVar3 = (byte)(uVar18 >> 0x18);
    bVar21 = (bool)(bVar3 >> 6);
    bVar22 = (bool)(bVar3 >> 5 & 1);
    if (!bVar22 || bVar21) {
      uVar18 = uVar23 | (uint)(fVar24 == DAT_0050cf14) << 0x1e |
               (uint)(DAT_0050cf14 <= fVar24) << 0x1d;
      bVar3 = (byte)(uVar18 >> 0x18);
      bVar21 = (bool)(bVar3 >> 6);
      bVar22 = (bool)(bVar3 >> 5 & 1);
    }
    if (bVar22 && !bVar21) goto LAB_0050cd44;
    fVar24 = local_90 - *(float *)(iVar11 + 0x30);
    uVar23 = uVar18 & 0xfffffff;
    uVar18 = uVar23 | (uint)(DAT_0050cf18 == fVar24) << 0x1e |
             (uint)(fVar24 <= DAT_0050cf18) << 0x1d;
    bVar3 = (byte)(uVar18 >> 0x18);
    bVar21 = (bool)(bVar3 >> 6);
    bVar22 = (bool)(bVar3 >> 5 & 1);
    if (!bVar22 || bVar21) {
      uVar18 = uVar23 | (uint)(fVar24 == DAT_0050cf14) << 0x1e |
               (uint)(DAT_0050cf14 <= fVar24) << 0x1d;
      bVar3 = (byte)(uVar18 >> 0x18);
      bVar21 = (bool)(bVar3 >> 6);
      bVar22 = (bool)(bVar3 >> 5 & 1);
    }
    if (bVar22 && !bVar21) goto LAB_0050cd44;
    fVar24 = local_8c - *(float *)(iVar11 + 0x34);
    uVar23 = uVar18 & 0xfffffff;
    uVar18 = uVar23 | (uint)(DAT_0050cf18 == fVar24) << 0x1e |
             (uint)(fVar24 <= DAT_0050cf18) << 0x1d;
    bVar3 = (byte)(uVar18 >> 0x18);
    bVar21 = (bool)(bVar3 >> 6);
    bVar22 = (bool)(bVar3 >> 5 & 1);
    if (!bVar22 || bVar21) {
      uVar18 = uVar23 | (uint)(fVar24 == DAT_0050cf14) << 0x1e |
               (uint)(DAT_0050cf14 <= fVar24) << 0x1d;
      bVar3 = (byte)(uVar18 >> 0x18);
      bVar21 = (bool)(bVar3 >> 6);
      bVar22 = (bool)(bVar3 >> 5 & 1);
    }
    if (bVar22 && !bVar21) goto LAB_0050cd44;
    fVar24 = local_88 - *(float *)(iVar11 + 0x38);
    uVar23 = uVar18 & 0xfffffff;
    uVar18 = uVar23 | (uint)(DAT_0050cf18 == fVar24) << 0x1e |
             (uint)(fVar24 <= DAT_0050cf18) << 0x1d;
    bVar3 = (byte)(uVar18 >> 0x18);
    bVar21 = (bool)(bVar3 >> 6);
    bVar22 = (bool)(bVar3 >> 5 & 1);
    if (!bVar22 || bVar21) {
      uVar18 = uVar23 | (uint)(fVar24 == DAT_0050cf14) << 0x1e |
               (uint)(DAT_0050cf14 <= fVar24) << 0x1d;
      bVar3 = (byte)(uVar18 >> 0x18);
      bVar21 = (bool)(bVar3 >> 6);
      bVar22 = (bool)(bVar3 >> 5 & 1);
    }
    if (bVar22 && !bVar21) goto LAB_0050cd44;
    bVar21 = true;
  }
  if (!bVar21) {
    bVar3 = *(byte *)(iVar11 + 0xa8);
    *(byte *)(iVar11 + 0xa8) = bVar3 | 8;
    fVar24 = ALBW_AS_F32(uVar27);
    bVar21 = false;
    if (local_a8 == 1.0) {
      uVar18 = uVar18 & 0xfffffff | (uint)(local_a4 == fVar24) << 0x1e;
      bVar21 = SUB41(uVar18 >> 0x1e,0);
    }
    if (bVar21) {
      uVar23 = uVar18 & 0xfffffff;
      uVar18 = uVar23 | (uint)(local_a0 == fVar24) << 0x1e;
      bVar21 = false;
      if (SUB41(uVar18 >> 0x1e,0)) {
        uVar18 = uVar23 | (uint)(ALBW_AS_F32(local_9c) == fVar24) << 0x1e;
        bVar21 = SUB41(uVar18 >> 0x1e,0);
      }
      if (!bVar21) goto LAB_0050cdcc;
      bVar21 = false;
      if (local_98 == 1.0) {
        uVar18 = uVar18 & 0xfffffff | (uint)(local_94 == fVar24) << 0x1e;
        bVar21 = SUB41(uVar18 >> 0x1e,0);
      }
      if (!bVar21) goto LAB_0050cdcc;
      uVar23 = uVar18 & 0xfffffff;
      uVar18 = uVar23 | (uint)(local_90 == fVar24) << 0x1e;
      bVar21 = false;
      if (SUB41(uVar18 >> 0x1e,0)) {
        uVar18 = uVar23 | (uint)(local_8c == fVar24) << 0x1e;
        bVar21 = SUB41(uVar18 >> 0x1e,0);
      }
      if (!bVar21 || local_88 != 1.0) goto LAB_0050cdcc;
      uVar15 = (undefined4)((ulonglong)uVar27 >> 0x20);
      *(undefined4 *)(iVar11 + 0x18) = uVar15;
      *(float *)(iVar11 + 0x1c) = fVar24;
      *(float *)(iVar11 + 0x20) = fVar24;
      bVar3 = bVar3 & 0xfb | 8;
      *(float *)(iVar11 + 0x24) = fVar24;
      *(undefined4 *)(iVar11 + 0x28) = uVar15;
      *(float *)(iVar11 + 0x2c) = fVar24;
      *(float *)(iVar11 + 0x30) = fVar24;
      *(float *)(iVar11 + 0x34) = fVar24;
      *(undefined4 *)(iVar11 + 0x38) = uVar15;
    }
    else {
LAB_0050cdcc:
      func_001151CC((undefined4 *)(iVar11 + 0x18),(undefined4 *)(&local_a8));
      bVar3 = *(byte *)(iVar11 + 0xa8) | 4;
    }
    *(byte *)(iVar11 + 0xa8) = bVar3;
  }
  pfVar2 = DAT_0050cf1c;
  iVar11 = *(int *)(puVar5[-0xd] + 0x14);
  fVar24 = ALBW_AS_F32(param_2[4]) - *(float *)(iVar11 + 4);
  uVar23 = uVar18 & 0xfffffff | (uint)(fVar13 == fVar24) << 0x1e | (uint)(fVar24 <= fVar13) << 0x1d;
  bVar3 = (byte)(uVar23 >> 0x18);
  bVar21 = (bool)(bVar3 >> 6);
  bVar22 = (bool)(bVar3 >> 5 & 1);
  if (!bVar22 || bVar21) {
    uVar23 = uVar18 & 0xfffffff | (uint)(fVar24 == fVar12) << 0x1e |
             (uint)(fVar12 <= fVar24) << 0x1d;
    bVar3 = (byte)(uVar23 >> 0x18);
    bVar21 = (bool)(bVar3 >> 6);
    bVar22 = (bool)(bVar3 >> 5 & 1);
  }
  if (bVar22 && !bVar21) {
LAB_0050ce58:
    bVar21 = false;
  }
  else {
    fVar24 = ALBW_AS_F32(param_2[5]) - *(float *)(iVar11 + 8);
    uVar18 = uVar23 & 0xfffffff;
    uVar23 = uVar18 | (uint)(fVar13 == fVar24) << 0x1e | (uint)(fVar24 <= fVar13) << 0x1d;
    bVar3 = (byte)(uVar23 >> 0x18);
    bVar21 = (bool)(bVar3 >> 6);
    bVar22 = (bool)(bVar3 >> 5 & 1);
    if (!bVar22 || bVar21) {
      uVar23 = uVar18 | (uint)(fVar24 == fVar12) << 0x1e | (uint)(fVar12 <= fVar24) << 0x1d;
      bVar3 = (byte)(uVar23 >> 0x18);
      bVar21 = (bool)(bVar3 >> 6);
      bVar22 = (bool)(bVar3 >> 5 & 1);
    }
    if (bVar22 && !bVar21) goto LAB_0050ce58;
    fVar24 = ALBW_AS_F32(param_2[6]) - *(float *)(iVar11 + 0xc);
    uVar18 = uVar23 & 0xfffffff;
    uVar23 = uVar18 | (uint)(fVar13 == fVar24) << 0x1e | (uint)(fVar24 <= fVar13) << 0x1d;
    bVar3 = (byte)(uVar23 >> 0x18);
    bVar21 = (bool)(bVar3 >> 6);
    bVar22 = (bool)(bVar3 >> 5 & 1);
    if (!bVar22 || bVar21) {
      uVar23 = uVar18 | (uint)(fVar24 == fVar12) << 0x1e | (uint)(fVar12 <= fVar24) << 0x1d;
      bVar3 = (byte)(uVar23 >> 0x18);
      bVar21 = (bool)(bVar3 >> 6);
      bVar22 = (bool)(bVar3 >> 5 & 1);
    }
    if (bVar22 && !bVar21) goto LAB_0050ce58;
    bVar21 = true;
  }
  if (bVar21) goto LAB_0050cf6c;
  *(byte *)(iVar11 + 0xa8) = *(byte *)(iVar11 + 0xa8) | 8;
  fVar24 = ALBW_AS_F32(param_2[4]) - *pfVar2;
  uVar18 = uVar23 & 0xfffffff;
  uVar23 = uVar18 | (uint)(fVar13 == fVar24) << 0x1e | (uint)(fVar24 <= fVar13) << 0x1d;
  bVar3 = (byte)(uVar23 >> 0x18);
  bVar21 = (bool)(bVar3 >> 6);
  bVar22 = (bool)(bVar3 >> 5 & 1);
  if (!bVar22 || bVar21) {
    uVar23 = uVar18 | (uint)(fVar24 == fVar12) << 0x1e | (uint)(fVar12 <= fVar24) << 0x1d;
    bVar3 = (byte)(uVar23 >> 0x18);
    bVar21 = (bool)(bVar3 >> 6);
    bVar22 = (bool)(bVar3 >> 5 & 1);
  }
  if (bVar22 && !bVar21) {
LAB_0050cf4c:
    *(uint *)(iVar11 + 4) = param_2[4];
    *(uint *)(iVar11 + 8) = param_2[5];
    *(uint *)(iVar11 + 0xc) = param_2[6];
    bVar3 = *(byte *)(iVar11 + 0xa8) | 2;
  }
  else {
    fVar24 = ALBW_AS_F32(param_2[5]) - pfVar2[1];
    uVar18 = uVar23 & 0xfffffff;
    uVar23 = uVar18 | (uint)(fVar13 == fVar24) << 0x1e | (uint)(fVar24 <= fVar13) << 0x1d;
    bVar3 = (byte)(uVar23 >> 0x18);
    bVar21 = (bool)(bVar3 >> 6);
    bVar22 = (bool)(bVar3 >> 5 & 1);
    if (!bVar22 || bVar21) {
      uVar23 = uVar18 | (uint)(fVar24 == fVar12) << 0x1e | (uint)(fVar12 <= fVar24) << 0x1d;
      bVar3 = (byte)(uVar23 >> 0x18);
      bVar21 = (bool)(bVar3 >> 6);
      bVar22 = (bool)(bVar3 >> 5 & 1);
    }
    if (bVar22 && !bVar21) goto LAB_0050cf4c;
    fVar24 = ALBW_AS_F32(param_2[6]) - pfVar2[2];
    uVar18 = uVar23 & 0xfffffff;
    uVar23 = uVar18 | (uint)(fVar13 == fVar24) << 0x1e | (uint)(fVar24 <= fVar13) << 0x1d;
    bVar3 = (byte)(uVar23 >> 0x18);
    bVar21 = (bool)(bVar3 >> 6);
    bVar22 = (bool)(bVar3 >> 5 & 1);
    if (!bVar22 || bVar21) {
      uVar23 = uVar18 | (uint)(fVar24 == fVar12) << 0x1e | (uint)(fVar12 <= fVar24) << 0x1d;
      bVar3 = (byte)(uVar23 >> 0x18);
      bVar21 = (bool)(bVar3 >> 6);
      bVar22 = (bool)(bVar3 >> 5 & 1);
    }
    if (bVar22 && !bVar21) goto LAB_0050cf4c;
    *(float *)(iVar11 + 4) = *pfVar2;
    *(float *)(iVar11 + 8) = pfVar2[1];
    *(float *)(iVar11 + 0xc) = pfVar2[2];
    bVar3 = *(byte *)(iVar11 + 0xa8) & 0xfd;
  }
  *(byte *)(iVar11 + 0xa8) = bVar3;
LAB_0050cf6c:
  func_0043625C(*(int **)(puVar5[-0xd] + 0x14),puVar5 + -0x1f);
  func_004ED9C8(*piVar19);
  local_84[0] = puVar5[-0x60];
  func_004EDAD0(*piVar19,local_84);
  *(short *)(*piVar19 + 0x2c) = (short)param_2[0x14];
  func_004A7F00(*piVar17,*piVar19,2);
  *(undefined1 *)((int)puVar5 + 6) = 3;
  puVar5[5] = (undefined4)(uintptr_t)(piVar4);
  local_9c = puVar5;
  iVar11 = func_0010BA78(0x30);
  puVar5[6] = iVar11;
  puVar6 = DAT_0050cb74;
  puVar5[7] = iVar11 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar16 = 3;
  puVar9 = (undefined4 *)(iVar11 + -8);
  do {
    uVar15 = puVar6[0x17];
    iVar16 = iVar16 + -1;
    puVar9[2] = puVar6[0x16];
    puVar9[3] = uVar15;
    uVar15 = puVar6[0x17];
    puVar9[4] = puVar6[0x16];
    puVar9[5] = uVar15;
    puVar9 = puVar9 + 4;
  } while (iVar16 != 0);
  bVar3 = *(byte *)((int)puVar5 + 6);
  uVar18 = (uint)bVar3;
  puVar9 = (undefined4 *)func_0010BA78(uVar18 << 3);
  puVar5[8] = (undefined4)(uintptr_t)(puVar9);
  if (uVar18 != 0) {
    puVar10 = puVar9 + -2;
    if ((bVar3 & 1) != 0) {
      uVar15 = puVar6[0xb];
      *puVar9 = puVar6[10];
      puVar9[1] = uVar15;
      puVar10 = puVar9;
    }
    for (iVar11 = (int)uVar18 >> 1; iVar11 != 0; iVar11 = iVar11 + -1) {
      uVar15 = puVar6[0xb];
      puVar10[2] = puVar6[10];
      puVar10[3] = uVar15;
      uVar15 = puVar6[0xb];
      puVar10[4] = puVar6[10];
      puVar10[5] = uVar15;
      puVar10 = puVar10 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  iVar11 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 3;
    iVar11 = func_00100118((int)(puVar6 + 2),DAT_0050d3ec,0x24,3);
  }
  if (iVar11 != 0) {
    puVar5[2] = 3;
    puVar5[3] = iVar11;
  }
  iVar11 = DAT_0050d3f0;
  puVar5[-0x3e] = (undefined4)(uintptr_t)(local_9c);
  *(undefined2 *)(iVar11 + (int)piVar4) = 3;
  local_44 = (uint *)s_cState_Wait_0050d3f4;
  local_48 = iVar7;
  iVar11 = puVar5[3];
  puVar8 = *(uint **)(iVar11 + 4);
  (**(code **)(iVar7 + 8))(&local_48);
  uVar18 = 0;
  do {
    if (*(char *)((int)local_44 + uVar18) == '\0') {
      if ((int)uVar18 < 0x40001) goto LAB_0050d144;
      break;
    }
    uVar18 = uVar18 + 1;
  } while ((int)uVar18 < 0x40001);
  uVar18 = 0;
LAB_0050d144:
  iVar11 = *(int *)(iVar11 + 8);
  if (iVar11 <= (int)uVar18) {
    uVar18 = iVar11 - 1;
  }
  (**(code **)(local_48 + 8))(&local_48);
  func_0010E3C4(puVar8,local_44,uVar18);
  *(undefined1 *)((int)puVar8 + uVar18) = 0;
  puVar6 = (undefined4 *)puVar5[6];
  uVar27 = *DAT_0050d400;
  uVar15 = *(undefined4 *)(DAT_0050d400 + 1);
  uVar20 = *(undefined4 *)((int)DAT_0050d400 + 0xc);
  uVar25 = *(undefined4 *)(DAT_0050d400 + 2);
  uVar26 = *(undefined4 *)((int)DAT_0050d400 + 0x14);
  *puVar6 = (int)uVar27;
  puVar6[1] = (int)((ulonglong)uVar27 >> 0x20);
  puVar6 = (undefined4 *)puVar5[7];
  *puVar6 = uVar15;
  puVar6[1] = uVar20;
  puVar6 = (undefined4 *)puVar5[8];
  *puVar6 = uVar25;
  puVar6[1] = uVar26;
  local_44 = (uint *)s_cState_Freeze_0050d404;
  local_48 = iVar7;
  if ((uint)puVar5[2] < 2) {
    iVar11 = puVar5[3];
  }
  else {
    iVar11 = puVar5[3] + 0x24;
  }
  puVar8 = *(uint **)(iVar11 + 4);
  (**(code **)(iVar7 + 8))(&local_48);
  uVar18 = 0;
  do {
    if (*(char *)((int)local_44 + uVar18) == '\0') {
      if ((int)uVar18 < 0x40001) goto LAB_0050d1fc;
      break;
    }
    uVar18 = uVar18 + 1;
  } while ((int)uVar18 < 0x40001);
  uVar18 = 0;
LAB_0050d1fc:
  if (*(int *)(iVar11 + 8) <= (int)uVar18) {
    uVar18 = *(int *)(iVar11 + 8) - 1;
  }
  (**(code **)(local_48 + 8))(&local_48);
  func_0010E3C4(puVar8,local_44,uVar18);
  *(undefined1 *)((int)puVar8 + uVar18) = 0;
  puVar6 = DAT_0050cb74;
  iVar11 = puVar5[6];
  uVar27 = *(undefined8 *)(DAT_0050cb74 + 10);
  uVar15 = DAT_0050cb74[0xd];
  uVar20 = DAT_0050cb74[0xe];
  uVar25 = DAT_0050cb74[0xf];
  *(undefined4 *)(iVar11 + 8) = DAT_0050cb74[0xc];
  *(undefined4 *)(iVar11 + 0xc) = uVar15;
  iVar11 = puVar5[7];
  *(undefined4 *)(iVar11 + 8) = uVar20;
  *(undefined4 *)(iVar11 + 0xc) = uVar25;
  iVar11 = puVar5[8];
  *(int *)(iVar11 + 8) = (int)uVar27;
  *(int *)(iVar11 + 0xc) = (int)((ulonglong)uVar27 >> 0x20);
  local_44 = (uint *)s_cState_Recover_0050d414;
  local_48 = iVar7;
  uVar18 = puVar5[2];
  if (uVar18 < 3) {
    iVar11 = puVar5[3];
    uVar1 = uVar18;
  }
  else {
    iVar11 = iVar7;
    uVar1 = puVar5[3];
  }
  if (2 < uVar18) {
    iVar11 = uVar1 + 0x48;
  }
  puVar8 = *(uint **)(iVar11 + 4);
  (**(code **)(iVar7 + 8))(&local_48);
  uVar18 = 0;
  do {
    if (*(char *)((int)local_44 + uVar18) == '\0') {
      if ((int)uVar18 < 0x40001) goto LAB_0050d2c8;
      break;
    }
    uVar18 = uVar18 + 1;
  } while ((int)uVar18 < 0x40001);
  uVar18 = 0;
LAB_0050d2c8:
  if (*(int *)(iVar11 + 8) <= (int)uVar18) {
    uVar18 = *(int *)(iVar11 + 8) - 1;
  }
  (**(code **)(local_48 + 8))(&local_48);
  func_0010E3C4(puVar8,local_44,uVar18);
  *(undefined1 *)((int)puVar8 + uVar18) = 0;
  iVar7 = puVar5[6];
  uVar15 = puVar6[0x13];
  piVar17 = (int *)puVar6[0x14];
  uVar20 = puVar6[0x15];
  uVar25 = puVar6[0x12];
  uVar26 = puVar6[0x11];
  *(undefined4 *)(iVar7 + 0x10) = puVar6[0x10];
  *(undefined4 *)(iVar7 + 0x14) = uVar26;
  iVar7 = puVar5[7];
  *(undefined4 *)(iVar7 + 0x10) = uVar25;
  *(undefined4 *)(iVar7 + 0x14) = uVar15;
  iVar7 = puVar5[8];
  *(int **)(iVar7 + 0x10) = piVar17;
  *(undefined4 *)(iVar7 + 0x14) = uVar20;
  func_0066B6C4(local_9c,0);
  if ((short)param_2[10] == 0) {
    iVar7 = *DAT_0050d424;
  }
  else {
    fVar12 = (float)VectorSignedToFloat(*DAT_0050d424,(byte)(uVar23 >> 0x15) & 3);
    iVar7 = (int)-fVar12;
  }
  puVar5[-10] = iVar7;
  puVar5[0xc] = iVar7;
  func_00169A80((int *)puVar5[-0xf],extraout_r1,uVar25,piVar17);
  func_00168E9C((int *)puVar5[-0xf],puVar5[-0x10],(int *)0x0);
  func_0050BE88(piVar4);
  func_00115C54((float *)&stack0xffffff4c,(float *)(puVar5 + -0x1f),(float *)(puVar5 + -8));
  iVar7 = puVar5[-0x10];
  *(uint *)(iVar7 + 0x164) = *(uint *)(iVar7 + 0x164) | 0x40000000;
  *(char **)(iVar7 + 0x8c) = pcVar28;
  *(undefined4 *)(iVar7 + 0x9c) = uVar14;
  *(float **)(iVar7 + 0xac) = &local_a8;
  func_004CEAF0(puVar5[-0x10]);
  func_0050C3B4((int)piVar4);
  return piVar4;
}

