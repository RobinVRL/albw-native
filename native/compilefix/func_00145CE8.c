/* compilefix: USA 00145CE8 (EU 00145CE8), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [27]
 *  - explicit casts at pointer-type mismatches (identity on the ARM) [14]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "../include/ghidra_concat44.h"
#include "compilefix.h"

extern int func_00100174(int *param_1);
extern int func_00110848(int param_1);
extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00115D88(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern int func_00148614(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4);
extern int func_0014F0B0(int param_1);
extern float func_00490628(float fparam_0);
extern float func_004906A8(float fparam_0);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2E80(int param_1,float *param_2,float fparam_0);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern int func_004A3700(int param_1);
extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588EEC(undefined4 param_1,float *param_2,float fparam_0);
extern undefined DAT_00000007;
extern int *DAT_0014616c;
extern uint *DAT_00146170;
extern int *DAT_00146174;
extern undefined4 *DAT_00146178;
extern undefined4 DAT_0014617c;
extern float DAT_00146180;
extern float *DAT_00146184;
extern float DAT_00146188;
extern float *DAT_0014618c;
extern float DAT_00146190;
extern undefined4 DAT_00146194;
extern undefined4 DAT_00146198;
extern float *DAT_0014619c;
extern float *DAT_001461a0;
extern float *DAT_001461a4;
extern float DAT_001461a8;
extern float DAT_001461ac;
extern int *DAT_001461b0;
extern int DAT_001465e8;
extern float DAT_001465ec;
extern float *DAT_001465f0;
extern float DAT_001465f4;
extern float DAT_001465f8;
extern int DAT_001473e4;
extern float *DAT_001473fc;
extern float DAT_00147400;
extern float *DAT_00147404;
extern float DAT_00147408;
extern int DAT_0014740c;
extern float DAT_001478c0;
extern int DAT_001478c4;
extern float DAT_001478c8;
extern undefined4 *DAT_001478cc;
extern int DAT_00147b98;
extern int *DAT_00147b9c;
extern float DAT_00147ba0;
extern char s_SightEdge_00147b8c[];
extern char s_SightHalf_001473f0[];
extern char s_Sight_001473e8[];

// USA 00145CE8 <- EU 00145CE8 (Ghidra, non-matching)
// GLOBAL DAT_00000007 undefined
// GLOBAL DAT_0014616c int *
// GLOBAL DAT_00146170 uint *
// GLOBAL DAT_00146174 int *
// GLOBAL DAT_00146178 undefined4 *
// GLOBAL DAT_0014617c undefined4
// GLOBAL DAT_00146180 float
// GLOBAL DAT_00146184 float *
// GLOBAL DAT_00146188 float
// GLOBAL DAT_0014618c float *
// GLOBAL DAT_00146190 float
// GLOBAL DAT_00146194 undefined4
// GLOBAL DAT_00146198 undefined4
// GLOBAL DAT_0014619c float *
// GLOBAL DAT_001461a0 float *
// GLOBAL DAT_001461a4 float *
// GLOBAL DAT_001461a8 float
// GLOBAL DAT_001461ac float
// GLOBAL DAT_001461b0 int *
// GLOBAL DAT_001465e8 int
// GLOBAL DAT_001465ec float
// GLOBAL DAT_001465f0 float *
// GLOBAL DAT_001465f4 float
// GLOBAL DAT_001465f8 float
// GLOBAL DAT_001473e4 int
// GLOBAL DAT_001473fc float *
// GLOBAL DAT_00147400 float
// GLOBAL DAT_00147404 float *
// GLOBAL DAT_00147408 float
// GLOBAL DAT_0014740c int
// GLOBAL DAT_001478c0 float
// GLOBAL DAT_001478c4 int
// GLOBAL DAT_001478c8 float
// GLOBAL DAT_001478cc undefined4 *
// GLOBAL DAT_00147b98 int
// GLOBAL DAT_00147b9c int *
// GLOBAL DAT_00147ba0 float
// GLOBAL EXT_00000010 undefined
// GLOBAL s_SightEdge_00147b8c string
// GLOBAL s_SightHalf_001473f0 string
// GLOBAL s_Sight_001473e8 string

void func_00145CE8(int param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  ushort uVar9;
  uint *puVar10;
  float **ppfVar11;
  float **ppfVar12;
  uint uVar13;
  int iVar14;
  uint unaff_r7;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  uint in_fpscr;
  uint uVar26;
  float fVar27;
  float *pfVar28;
  float *pfVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float *pfVar33;
  float fVar36;
  float *pfVar37;
  undefined8 uVar34;
  ulonglong uVar35;
  float *pfVar38;
  float *pfVar39;
  undefined4 uVar40;
  float *pfVar41;
  undefined8 uVar42;
  float *fparam_0;
  float *pfVar43;
  undefined8 uVar44;
  float in_s30;
  _Alignas(8) unsigned char albw_frame[0x260];
  #define pfStack_254 (*(float * *)(albw_frame + 0xc))
  #define pfStack_250 (*(float * *)(albw_frame + 0x10))
  #define pfStack_24c (*(float * *)(albw_frame + 0x14))
  #define pfStack_248 (*(float * *)(albw_frame + 0x18))
  #define pfStack_244 (*(float * *)(albw_frame + 0x1c))
  #define pfStack_240 (*(float * *)(albw_frame + 0x20))
  #define pfStack_23c (*(float * *)(albw_frame + 0x24))
  #define pfStack_238 (*(float * *)(albw_frame + 0x28))
  #define pfStack_234 (*(float * *)(albw_frame + 0x2c))
  #define pfStack_230 (*(float * *)(albw_frame + 0x30))
  #define pfStack_22c (*(float * *)(albw_frame + 0x34))
  #define iStack_228 (*(int *)(albw_frame + 0x38))
  #define iStack_224 (*(int *)(albw_frame + 0x3c))
  #define uStack_220 (*(undefined4 *)(albw_frame + 0x40))
  #define uStack_21c (*(undefined4 *)(albw_frame + 0x44))
  #define uStack_218 (*(uint *)(albw_frame + 0x48))
  #define pfStack_214 (*(float * *)(albw_frame + 0x4c))
  #define uStack_210 (*(undefined4 *)(albw_frame + 0x50))
  #define pfStack_20c (*(float * *)(albw_frame + 0x54))
  #define pfStack_208 (*(float * *)(albw_frame + 0x58))
  #define pfStack_204 (*(float * *)(albw_frame + 0x5c))
  #define uStack_200 (*(undefined1 *)(albw_frame + 0x60))
  #define uStack_1ff (*(undefined1 *)(albw_frame + 0x61))
  #define iStack_1fc (*(int *)(albw_frame + 0x64))
  #define uStack_1f4 (*(uint *)(albw_frame + 0x6c))
  #define pfStack_1f0 (*(float * *)(albw_frame + 0x70))
  #define pfStack_1ec (*(float * *)(albw_frame + 0x74))
  #define pfStack_1e8 (*(float * *)(albw_frame + 0x78))
  #define pfStack_1e4 (*(float * *)(albw_frame + 0x7c))
  #define pfStack_1e0 (*(float * *)(albw_frame + 0x80))
  #define pfStack_1dc (*(float * *)(albw_frame + 0x84))
  #define pfStack_1d8 (*(float * *)(albw_frame + 0x88))
  #define pfStack_1d4 (*(float * *)(albw_frame + 0x8c))
  #define pfStack_1d0 (*(float * *)(albw_frame + 0x90))
  #define iStack_1cc (*(int *)(albw_frame + 0x94))
  #define pfStack_1c8 (*(float * *)(albw_frame + 0x98))
  #define pfStack_1c4 (*(float * *)(albw_frame + 0x9c))
  #define pfStack_1c0 (*(float * *)(albw_frame + 0xa0))
  #define pfStack_1bc (*(float * *)(albw_frame + 0xa4))
  #define pfStack_1b8 (*(float * *)(albw_frame + 0xa8))
  #define pfStack_1b4 (*(float * *)(albw_frame + 0xac))
  #define pfStack_1b0 (*(float * *)(albw_frame + 0xb0))
  #define pfStack_1ac (*(float * *)(albw_frame + 0xb4))
  #define pfStack_1a8 (*(float * *)(albw_frame + 0xb8))
  #define pfStack_1a4 (*(float * *)(albw_frame + 0xbc))
  #define pfStack_1a0 (*(float * *)(albw_frame + 0xc0))
  #define pfStack_19c (*(float * *)(albw_frame + 0xc4))
  #define pfStack_198 (*(float * *)(albw_frame + 0xc8))
  #define pfStack_194 (*(float * *)(albw_frame + 0xcc))
  #define pfStack_190 (*(float * *)(albw_frame + 0xd0))
  #define iStack_18c (*(int *)(albw_frame + 0xd4))
  #define pfStack_188 (*(float * *)(albw_frame + 0xd8))
  #define pfStack_184 (*(float * *)(albw_frame + 0xdc))
  #define fStack_180 (*(float *)(albw_frame + 0xe0))
  #define pfStack_17c (*(float * *)(albw_frame + 0xe4))
  #define pfStack_178 (*(float * *)(albw_frame + 0xe8))
  #define pfStack_174 (*(float * *)(albw_frame + 0xec))
  #define fStack_170 (*(float *)(albw_frame + 0xf0))
  #define pfStack_16c (*(float * *)(albw_frame + 0xf4))
  #define pfStack_168 (*(float * *)(albw_frame + 0xf8))
  #define pfStack_164 (*(float * *)(albw_frame + 0xfc))
  #define fStack_160 (*(float *)(albw_frame + 0x100))
  #define fStack_15c (*(float *)(albw_frame + 0x104))
  #define pfStack_158 (*(float * *)(albw_frame + 0x108))
  #define pfStack_154 (*(float * *)(albw_frame + 0x10c))
  #define pfStack_150 (*(float * *)(albw_frame + 0x110))
  #define pfStack_14c (*(float * *)(albw_frame + 0x114))
  #define pfStack_148 (*(float * *)(albw_frame + 0x118))
  #define pfStack_144 (*(float * *)(albw_frame + 0x11c))
  #define pfStack_140 (*(float * *)(albw_frame + 0x120))
  #define pfStack_13c (*(float * *)(albw_frame + 0x124))
  #define pfStack_138 (*(float * *)(albw_frame + 0x128))
  #define pfStack_134 (*(float * *)(albw_frame + 0x12c))
  #define pfStack_130 (*(float * *)(albw_frame + 0x130))
  #define pfStack_12c (*(float * *)(albw_frame + 0x134))
  #define pfStack_128 (*(float * *)(albw_frame + 0x138))
  #define pfStack_124 (*(float * *)(albw_frame + 0x13c))
  #define pfStack_120 (*(float * *)(albw_frame + 0x140))
  #define pfStack_11c (*(float * *)(albw_frame + 0x144))
  #define fStack_118 (*(float *)(albw_frame + 0x148))
  #define fStack_114 (*(float *)(albw_frame + 0x14c))
  #define fStack_110 (*(float *)(albw_frame + 0x150))
  #define fStack_10c (*(float *)(albw_frame + 0x154))
  #define fStack_108 (*(float *)(albw_frame + 0x158))
  #define fStack_104 (*(float *)(albw_frame + 0x15c))
  #define pfStack_100 (*(float * *)(albw_frame + 0x160))
  #define pfStack_fc (*(float * *)(albw_frame + 0x164))
  #define pfStack_f8 (*(float * *)(albw_frame + 0x168))
  #define pfStack_f4 (*(float * *)(albw_frame + 0x16c))
  #define pfStack_f0 (*(float * *)(albw_frame + 0x170))
  #define fStack_ec (*(float *)(albw_frame + 0x174))
  #define abStack_e8 ((byte *)(albw_frame + 0x178))
  #define pfStack_e4 (*(float * *)(albw_frame + 0x17c))
  #define pfStack_e0 (*(float * *)(albw_frame + 0x180))
  #define fStack_dc (*(float *)(albw_frame + 0x184))
  #define pfStack_d8 (*(float * *)(albw_frame + 0x188))
  #define pfStack_d4 (*(float * *)(albw_frame + 0x18c))
  #define pfStack_d0 (*(float * *)(albw_frame + 0x190))
  #define pfStack_cc (*(float * *)(albw_frame + 0x194))
  #define pfStack_c8 (*(float * *)(albw_frame + 0x198))
  #define pfStack_c4 (*(float * *)(albw_frame + 0x19c))
  #define pfStack_c0 (*(float * *)(albw_frame + 0x1a0))
  #define pfStack_bc (*(float * *)(albw_frame + 0x1a4))
  #define pfStack_b8 (*(float * *)(albw_frame + 0x1a8))
  #define pfStack_b4 (*(float * *)(albw_frame + 0x1ac))
  #define uStack_b0 (*(undefined4 *)(albw_frame + 0x1b0))
  #define pfStack_ac (*(float * *)(albw_frame + 0x1b4))
  #define pfStack_a8 (*(float * *)(albw_frame + 0x1b8))
  #define pfStack_a4 (*(float * *)(albw_frame + 0x1bc))
  #define pfStack_a0 (*(float * *)(albw_frame + 0x1c0))
  #define uStack_9c (*(undefined4 *)(albw_frame + 0x1c4))
  #define iStack_98 (*(int *)(albw_frame + 0x1c8))
  #define pfStack_94 (*(float * *)(albw_frame + 0x1cc))
  #define uStack_90 (*(undefined4 *)(albw_frame + 0x1d0))
  #define uStack_8c (*(undefined4 *)(albw_frame + 0x1d4))
  #define pfStack_88 (*(float * *)(albw_frame + 0x1d8))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0x1dc))
  #define uStack_80 (*(undefined4 *)(albw_frame + 0x1e0))
  #define pfStack_7c (*(float * *)(albw_frame + 0x1e4))
  #define uStack_78 (*(undefined4 *)(albw_frame + 0x1e8))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x1ec))
  #define pfStack_70 (*(float * *)(albw_frame + 0x1f0))
  #define pfStack_6c (*(float * *)(albw_frame + 0x1f4))
  #define pfStack_68 (*(float * *)(albw_frame + 0x1f8))
  if (*(uint *)(param_1 + 0x4a8) == 0) {
    puVar5 = *(undefined4 **)(*DAT_00146174 + 0x1c);
    pfStack_134 = (float *)*puVar5;
    pfVar39 = (float *)puVar5[1];
    pfStack_1d4 = (float *)puVar5[2];
  }
  else {
    puVar5 = (undefined4 *)func_0052FBA0(*DAT_0014616c + 0x3dbbc,*(uint *)(param_1 + 0x4a8));
    if (((*DAT_00146170 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_00146170), iVar6 != 0)) {
      *DAT_00146178 = DAT_0014617c;
    }
    if ((puVar5 == (undefined4 *)0x0) ||
       (iVar6 = (**(code **)*puVar5)(puVar5,DAT_00146178), iVar6 == 0)) {
      puVar5 = (undefined4 *)0x0;
    }
    if (puVar5 == (undefined4 *)0x0) {
      return;
    }
    pfStack_134 = (float *)puVar5[0xf4];
    pfVar39 = (float *)puVar5[0xf5];
    pfStack_1d4 = (float *)puVar5[0xf6];
  }
  func_00115154((float *)&pfStack_23c,(float *)&pfStack_238,*(uint *)(param_1 + 1000));
  fVar36 = ALBW_AS_F32(pfStack_134) + ALBW_AS_F32(pfStack_23c) * DAT_00146180;
  fVar32 = ALBW_AS_F32(pfStack_1d4) + ALBW_AS_F32(pfStack_238) * DAT_00146180;
  fVar30 = DAT_00146188;
  pfVar41 = DAT_00146184;
  fVar27 = func_004906A8(DAT_00146188);
  pfStack_244 = (float *)CF_FBITS(func_00490628(fVar27 * ALBW_AS_F32(pfVar41)));
  uVar20 = 1;
  uVar21 = unaff_r7 & 0xffff0000 | 0xffff;
  fVar36 = fVar36 * (ALBW_AS_F32(DAT_0014618c) / ALBW_AS_F32(pfStack_244)) + DAT_00146190;
  fVar32 = fVar32 * (ALBW_AS_F32(DAT_0014618c) / ALBW_AS_F32(pfStack_244)) + DAT_00146190;
  iVar6 = (int)fVar36;
  fVar27 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
  uVar15 = in_fpscr & 0xfffffff | (uint)(fVar27 == fVar36) << 0x1e |
           (uint)(fVar36 <= fVar27) << 0x1d;
  bVar3 = (byte)(uVar15 >> 0x18);
  bVar23 = (bool)(bVar3 >> 6);
  if (!bVar23) {
    uVar15 = in_fpscr & 0xfffffff | (uint)(ALBW_AS_F32(pfVar41) == fVar36) << 0x1e |
             (uint)(fVar36 <= ALBW_AS_F32(pfVar41)) << 0x1d;
    bVar3 = (byte)(uVar15 >> 0x18);
    bVar23 = (bool)(bVar3 >> 6);
  }
  if ((bool)(bVar3 >> 5 & 1) && !bVar23) {
    iVar6 = iVar6 + -1;
  }
  fVar36 = (float)VectorSignedToFloat(iVar6,(byte)(uVar15 >> 0x15) & 3);
  iVar6 = (int)fVar32;
  fVar27 = (float)VectorSignedToFloat(iVar6,(byte)(uVar15 >> 0x15) & 3);
  uVar26 = uVar15 & 0xfffffff | (uint)(fVar27 == fVar32) << 0x1e | (uint)(fVar32 <= fVar27) << 0x1d;
  bVar3 = (byte)(uVar26 >> 0x18);
  bVar23 = (bool)(bVar3 >> 6);
  if (!bVar23) {
    uVar26 = uVar15 & 0xfffffff | (uint)(ALBW_AS_F32(pfVar41) == fVar32) << 0x1e |
             (uint)(fVar32 <= ALBW_AS_F32(pfVar41)) << 0x1d;
    bVar3 = (byte)(uVar26 >> 0x18);
    bVar23 = (bool)(bVar3 >> 6);
  }
  if ((bool)(bVar3 >> 5 & 1) && !bVar23) {
    iVar6 = iVar6 + -1;
  }
  pfStack_1c8 = (float *)(param_1 + 0x484);
  uVar42 = CONCAT44(DAT_00146198,DAT_00146194);
  fVar27 = (float)VectorSignedToFloat(iVar6,(byte)(uVar26 >> 0x15) & 3);
  *pfStack_1c8 = fVar36 * ALBW_AS_F32(pfStack_244);
  *(float **)(param_1 + 0x488) = pfVar39;
  pfStack_130 = DAT_0014618c;
  *(float *)(param_1 + 0x48c) = fVar27 * ALBW_AS_F32(pfStack_244);
  pfVar38 = DAT_001461a0;
  pfVar43 = DAT_0014619c;
  pfStack_1e4 = *(float **)(param_1 + 0x484);
  pfStack_1e0 = *(float **)(param_1 + 0x488);
  pfStack_1a8 = *(float **)(param_1 + 0x48c);
  pfStack_128 = DAT_0014618c;
  uStack_9c = 0x7f;
  iStack_228 = 0;
  pfStack_1c4 = (float *)0x87;
  uStack_220 = 0;
  uStack_210 = 0;
  uStack_200 = 0;
  uStack_1ff = 1;
  iStack_224 = param_1 + 0x40c;
  pfStack_248 = (float *)0x0;
  uStack_21c = *(undefined4 *)(param_1 + 0x2cc);
  pfStack_208 = &fStack_10c;
  pfStack_20c = &fStack_118;
  pfStack_214 = (float *)0x87;
  *(float **)(param_1 + 0x47c) = DAT_0014619c;
  *(float **)(param_1 + 0x480) = pfVar38;
  uVar44 = CONCAT44(fVar30,pfVar41);
  uStack_1f4 = *(int *)(param_1 + 1000) + 0x20000000U >> 0x1e;
  iStack_98 = param_1 + 0x41c;
  fparam_0 = DAT_001461a4;
  fVar30 = DAT_001461a8;
  uStack_218 = uVar21;
  pfStack_204 = pfVar41;
  iStack_18c = iStack_224;
  pfStack_12c = pfVar41;
  do {
    pfVar37 = pfStack_1c8;
    pfVar33 = fparam_0;
    func_00115D70((float *)&pfStack_d8,(float *)&pfStack_130,ALBW_AS_F32(fparam_0));
    ppfVar11 = &pfStack_1a4;
    pfStack_1a4 = pfStack_d8;
    pfStack_1a0 = pfStack_d4;
    pfStack_19c = pfStack_d0;
    func_00115C70((float *)&pfStack_1f0,pfVar37,(float *)ppfVar11);
    pfVar37 = pfStack_1c8;
    func_00115D70((float *)&pfStack_cc,(float *)&pfStack_130,ALBW_AS_F32(pfVar33));
    ppfVar12 = &pfStack_1a4;
    pfStack_1a4 = pfStack_cc;
    pfStack_1a0 = pfStack_c8;
    pfStack_19c = pfStack_c4;
    func_00115C54((float *)&pfStack_198,pfVar37,(float *)ppfVar11);
    piVar18 = DAT_001461b0;
    uVar15 = 1;
    uVar19 = 0;
    fStack_108 = ALBW_AS_F32(pfVar39) + fVar30;
    fStack_114 = ALBW_AS_F32(pfVar39) + DAT_001461ac;
    pfVar37 = pfVar43;
    pfVar29 = pfVar38;
    fVar27 = DAT_001461ac;
    do {
      uVar13 = 0;
      fVar36 = (float)VectorSignedToFloat(uVar19,(byte)(uVar26 >> 0x15) & 3);
      fStack_10c = ALBW_AS_F32(pfStack_1f0) + (ALBW_AS_F32(pfStack_198) - ALBW_AS_F32(pfStack_1f0)) * fVar36;
      fStack_118 = fStack_10c;
      do {
        if ((uVar13 < 2) || (uVar19 < 2)) {
          fVar36 = (float)VectorSignedToFloat(uVar13,(byte)(uVar26 >> 0x15) & 3);
          fStack_110 = ALBW_AS_F32(pfStack_1e8) + (ALBW_AS_F32(pfStack_190) - ALBW_AS_F32(pfStack_1e8)) * fVar36;
          fStack_104 = fStack_110;
          func_0014F0B0(param_1);
          pfVar33 = *(float **)(param_1 + 0x470);
          *(float **)(param_1 + 0x470) = pfVar38;
          uVar40 = *(undefined4 *)(param_1 + 0x47c);
          *(undefined1 *)(param_1 + 0x474) = 0;
          *(undefined1 *)(param_1 + 0x4a1) = 0;
          ppfVar11 = (float **)&DAT_00000007;
          func_004A8030(*piVar18,&iStack_228,7);
          if (uVar20 == 0) {
            *(undefined4 *)(param_1 + 0x47c) = uVar40;
          }
          uVar16 = 1;
          bVar23 = *(char *)(param_1 + 0x474) == '\0';
          cVar2 = '\0';
          if (!bVar23) {
            cVar2 = *(char *)(param_1 + 0x4a1);
          }
          if (bVar23 || cVar2 == '\0') {
            uVar15 = 0;
            *(float **)(param_1 + 0x470) = pfVar33;
            uVar16 = uVar15;
          }
          else {
            ppfVar11 = (float **)&DAT_00000007;
            iStack_224 = iStack_98;
            fStack_108 = *(float *)(param_1 + 0x470) + ALBW_AS_F32(((ulonglong)uVar42 >> 0x20));
            fStack_114 = *(float *)(param_1 + 0x470) + ALBW_AS_F32(uVar42);
            pfStack_214 = (float *)uStack_9c;
            iVar6 = func_004A8030(*piVar18,&iStack_228,7);
            pfStack_214 = pfStack_1c4;
            if ((iVar6 != 0) &&
               (bVar23 = *(char *)(param_1 + 0x4a1) != '\0', uVar16 = (uint)bVar23, !bVar23)) {
              uVar15 = uVar16;
            }
            iStack_224 = iStack_18c;
            fStack_108 = ALBW_AS_F32(pfVar39) + fVar30;
            fStack_114 = ALBW_AS_F32(pfVar39) + fVar27;
            if (uVar16 != 0) {
              pfVar28 = *(float **)(param_1 + 0x470);
              uVar1 = uVar26 & 0xfffffff | (uint)(ALBW_AS_F32(pfVar28) < ALBW_AS_F32(pfVar29)) << 0x1f |
                      (uint)(ALBW_AS_F32(pfVar28) == ALBW_AS_F32(pfVar29)) << 0x1e;
              uVar26 = uVar1 | (uint)(NAN(ALBW_AS_F32(pfVar28)) || NAN(ALBW_AS_F32(pfVar29))) << 0x1c;
              if (ALBW_AS_F32(pfVar28) < ALBW_AS_F32(pfVar37)) {
                pfVar37 = pfVar28;
              }
              bVar3 = (byte)(uVar1 >> 0x18);
              if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(uVar26 >> 0x1c) & 1)) {
                pfVar29 = pfVar28;
              }
              if (DAT_001465e8 <= (int)ALBW_AS_U32((ALBW_AS_F32(pfVar29) - ALBW_AS_F32(pfVar37)))) {
                uVar15 = 0;
              }
            }
          }
          if (uVar19 == 0) {
            if (uVar13 < 2) {
              iVar6 = 0;
              if (uVar13 != 0) goto LAB_00146254;
LAB_00146298:
              iVar14 = 0;
LAB_00146258:
              abStack_e8[iVar14 + iVar6] = (byte)uVar16;
            }
          }
          else if (uVar19 == 1) {
            if (uVar13 == 1) {
              iVar6 = 1;
LAB_00146254:
              iVar14 = 2;
              goto LAB_00146258;
            }
            if (uVar13 == 0) {
              iVar6 = 1;
              goto LAB_00146298;
            }
          }
          uVar16 = 0;
          if (uVar20 == 0 && uVar15 == 0) goto LAB_0014628c;
        }
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < 2);
      uVar16 = uVar20 | uVar15;
    } while ((uVar16 != 0) && (uVar19 = uVar19 + 1, (int)uVar19 < 2));
LAB_0014628c:
    pfVar29 = pfStack_1c8;
    fVar36 = ALBW_AS_F32(uVar44);
    uVar19 = uVar15;
    if ((uVar20 == 0) &&
       (uVar26 = uVar26 & 0xfffffff | (uint)(fVar36 == ALBW_AS_F32(pfVar41)) << 0x1e,
       SUB41(uVar26 >> 0x1e,0))) goto LAB_00146630;
    fVar31 = *(float *)(param_1 + 0x470);
    fVar32 = ALBW_AS_F32(pfVar39) - DAT_001465ec;
    uVar13 = uVar26 & 0xfffffff;
    uVar1 = uVar13 | (uint)(fVar32 < fVar31) << 0x1f | (uint)(fVar32 == fVar31) << 0x1e;
    uVar26 = uVar1 | (uint)(NAN(fVar32) || NAN(fVar31)) << 0x1c;
    bVar3 = (byte)(uVar1 >> 0x18);
    bVar23 = bVar3 >> 7 == ((byte)(uVar26 >> 0x1c) & 1);
    bVar22 = !(bool)(bVar3 >> 6 & 1);
    if (uVar15 == 0) {
      if (pfStack_248 != (float *)0x0) {
        uVar19 = 1;
        *pfStack_1c8 = in_s30;
        pfStack_1c8[1] = ALBW_AS_F32(pfStack_230);
        pfStack_1c8[2] = ALBW_AS_F32(pfStack_1d8);
        pfVar37 = pfStack_1d0;
        goto LAB_00146630;
      }
    }
    else {
      if (!bVar22 || !bVar23) goto LAB_00146630;
      pfStack_248 = (float *)0x1;
      pfStack_230 = (float *)CF_FBITS(pfStack_1c8[1]);
      in_s30 = *pfStack_1c8;
      pfStack_1d8 = (float *)CF_FBITS(pfStack_1c8[2]);
      uVar19 = 0;
      pfStack_1d0 = pfVar37;
    }
    if (uStack_1f4 == 0) {
      uVar21 = 0;
      ppfVar12 = (float **)0x1;
      uVar16 = 2;
      ppfVar11 = (float **)0x3;
    }
    else if (uStack_1f4 == 1) {
      ppfVar12 = (float **)0x0;
      uVar21 = 2;
      ppfVar11 = (float **)0x1;
      uVar16 = 3;
    }
    else if (uStack_1f4 == 2) {
      ppfVar12 = (float **)0x2;
      uVar21 = 3;
      ppfVar11 = (float **)0x0;
      uVar16 = 1;
    }
    else if (uStack_1f4 == 3) {
      uVar21 = 1;
      ppfVar12 = (float **)0x3;
      uVar16 = 0;
      ppfVar11 = (float **)0x2;
    }
    bVar3 = abStack_e8[(int)ppfVar11];
    bVar4 = false;
    if (bVar3 != 0) {
      ppfVar11 = (float **)(uint)abStack_e8[uVar16];
    }
    if ((((bVar3 == 0 || ppfVar11 == (float **)0x0) || uVar20 == 0) || (uVar15 != 0)) ||
       (pfVar28 = DAT_0014618c, bVar22 && bVar23)) {
      if (abStack_e8[(int)ppfVar12] == 0) {
        if (abStack_e8[uVar21] == 0) goto LAB_00146630;
        bVar24 = abStack_e8[uVar16] == 0;
        bVar25 = uVar20 == 0;
        if (!bVar24 && !bVar25) {
          pfVar33 = DAT_001465f0;
        }
        bVar4 = !bVar24 && !bVar25;
        pfVar28 = pfVar33;
        if (bVar24 || bVar25) goto LAB_00146630;
      }
      else {
        pfVar28 = DAT_001465f0;
        if (abStack_e8[uVar21] == 0) {
          bVar24 = bVar3 != 0;
          bVar25 = uVar20 != 0;
          if (bVar24 && bVar25) {
            pfVar33 = DAT_0014618c;
          }
          bVar4 = bVar24 && bVar25;
          pfVar28 = pfVar33;
          if (!bVar24 || !bVar25) goto LAB_00146630;
        }
      }
    }
    uVar26 = uVar13 | (uint)(fVar36 == ALBW_AS_F32(pfVar41)) << 0x1e;
    fVar32 = ALBW_AS_F32(((ulonglong)uVar44 >> 0x20));
    if (SUB41(uVar26 >> 0x1e,0)) {
      if (bVar22 && bVar23) {
        uVar44 = CONCAT44(fVar32,fVar36 + ALBW_AS_F32(pfStack_244));
      }
    }
    else {
      fVar36 = fVar36 + ALBW_AS_F32(pfStack_244);
      uVar44 = CONCAT44(fVar32,fVar36);
      fVar32 = ALBW_AS_F32(pfStack_244) * fVar32 * DAT_001465f4;
      uVar15 = uVar13 | (uint)(fVar36 < fVar32) << 0x1f | (uint)(fVar36 == fVar32) << 0x1e;
      uVar26 = uVar15 | (uint)(NAN(fVar36) || NAN(fVar32)) << 0x1c;
      bVar3 = (byte)(uVar15 >> 0x18);
      if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(uVar26 >> 0x1c) & 1)) break;
    }
    if (bVar4) {
      pfVar37 = pfVar41;
      func_00115154((float *)&pfStack_250,(float *)&pfStack_254,
                    *(int *)(param_1 + 1000) + 0x40000000);
      pfVar33 = pfStack_1c8;
      pfStack_e4 = (float *)CF_FBITS((ALBW_AS_F32(pfStack_250) * ALBW_AS_F32(pfStack_244)));
      fStack_dc = ALBW_AS_F32(pfStack_254) * ALBW_AS_F32(pfStack_244);
      pfStack_e0 = pfVar37;
      func_00115D70((float *)&pfStack_1c0,(float *)&pfStack_e4,ALBW_AS_F32(pfVar28));
      pfStack_124 = pfStack_1c0;
      pfStack_120 = pfStack_1bc;
      pfStack_11c = pfStack_1b8;
      func_00115C54(pfVar33,pfVar33,(float *)&pfStack_124);
    }
    else {
      pfStack_1b4 = (float *)CF_FBITS((ALBW_AS_F32(pfStack_23c) * ALBW_AS_F32(pfStack_244)));
      pfStack_1ac = (float *)CF_FBITS((ALBW_AS_F32(pfStack_238) * ALBW_AS_F32(pfStack_244)));
      pfStack_1b0 = pfVar41;
      func_00115D70((float *)&pfStack_c0,(float *)&pfStack_1b4,ALBW_AS_F32(pfVar28));
      pfStack_1c0 = pfStack_c0;
      pfStack_1bc = pfStack_bc;
      pfStack_1b8 = pfStack_b8;
      func_00115C54(pfVar29,pfVar29,(float *)&pfStack_1c0);
    }
    uVar20 = 0;
  } while( true );
  if (pfStack_248 != (float *)0x0) {
    uVar15 = 0;
    if (0 < *(short *)(param_1 + 0x72c)) {
      pfVar33 = DAT_0014618c;
      pfVar29 = pfVar41;
      fVar36 = DAT_001465f8;
      do {
        piVar17 = (int *)(param_1 + 0x6ec);
        if (uVar15 < 0x10) {
          piVar17 = (int *)(param_1 + 0x6ec) + uVar15;
        }
        if (*piVar17 < 3) {
          puVar5 = (undefined4 *)(param_1 + 0x5ec);
          if (uVar15 < 0x10) {
            puVar5 = (undefined4 *)(param_1 + 0x5ec) + uVar15 * 3;
          }
          pfStack_124 = (float *)*puVar5;
          pfStack_120 = (float *)puVar5[1];
          pfStack_11c = (float *)puVar5[2];
          pfStack_1c0 = pfVar33;
          pfStack_1bc = pfVar29;
          pfStack_1b8 = pfVar33;
          func_00115D70((float *)&pfStack_e4,(float *)&pfStack_1c0,fVar36);
          pfStack_1b4 = pfStack_e4;
          pfStack_1b0 = pfStack_e0;
          pfStack_1ac = (float *)CF_FBITS(fStack_dc);
          func_00115C70((float *)&pfStack_248,(float *)&pfStack_124,(float *)&pfStack_1b4);
          pfStack_1c0 = pfVar33;
          pfStack_1bc = pfVar29;
          pfStack_1b8 = pfVar33;
          func_00115D70((float *)&pfStack_d8,(float *)&pfStack_1c0,fVar36);
          pfStack_1b4 = pfStack_d8;
          pfStack_1b0 = pfStack_d4;
          pfStack_1ac = pfStack_d0;
          func_00115C54((float *)&pfStack_254,(float *)&pfStack_124,(float *)&pfStack_1b4);
          uVar20 = uVar26 & 0xfffffff;
          uVar26 = uVar20 | (uint)(ALBW_AS_F32(pfStack_248) == in_s30) << 0x1e |
                   (uint)(in_s30 <= ALBW_AS_F32(pfStack_248)) << 0x1d;
          bVar3 = (byte)(uVar26 >> 0x18);
          bVar23 = (bool)(bVar3 >> 6);
          bVar22 = (bool)(bVar3 >> 5 & 1);
          if (!bVar22 || bVar23) {
            uVar26 = uVar20 | (uint)(in_s30 == ALBW_AS_F32(pfStack_254)) << 0x1e |
                     (uint)(ALBW_AS_F32(pfStack_254) <= in_s30) << 0x1d;
            bVar3 = (byte)(uVar26 >> 0x18);
            bVar23 = (bool)(bVar3 >> 6);
            bVar22 = (bool)(bVar3 >> 5 & 1);
          }
          if (!bVar22 || bVar23) {
            uVar20 = uVar26 & 0xfffffff;
            uVar21 = uVar20 | (uint)(ALBW_AS_F32(pfStack_1d8) < ALBW_AS_F32(pfStack_240)) << 0x1f;
            uVar26 = uVar21 | (uint)(NAN(ALBW_AS_F32(pfStack_1d8)) || NAN(ALBW_AS_F32(pfStack_240))) << 0x1c;
            if (((byte)(uVar21 >> 0x1f) == ((byte)(uVar26 >> 0x1c) & 1)) &&
               (uVar26 = uVar20 | (uint)(ALBW_AS_F32(pfStack_1d8) == ALBW_AS_F32(pfStack_24c)) << 0x1e |
                         (uint)(ALBW_AS_F32(pfStack_24c) <= ALBW_AS_F32(pfStack_1d8)) << 0x1d,
               bVar3 = (byte)(uVar26 >> 0x18), !(bool)(bVar3 >> 5 & 1) || (bool)(bVar3 >> 6))) {
              uVar19 = 0;
              goto LAB_00146630;
            }
          }
        }
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < (int)*(short *)(param_1 + 0x72c));
    }
    uVar19 = 1;
    *pfStack_1c8 = in_s30;
    pfStack_1c8[1] = ALBW_AS_F32(pfStack_230);
    pfStack_1c8[2] = ALBW_AS_F32(pfStack_1d8);
    pfVar37 = pfStack_1d0;
  }
LAB_00146630:
  if (*(short *)(param_1 + 0x49c) < 0) {
    *(undefined2 *)(param_1 + 0x49c) = 0;
  }
  iStack_1cc = (int)*(char *)(param_1 + 0x4a0);
  pfStack_254 = (float *)(int)(short)(*(short *)(param_1 + 0x49c) - (ushort)(iStack_1cc != 0));
  pfStack_1d8 = (float *)0x0;
  pfStack_1dc = (float *)(int)*(short *)(param_1 + 0x4a4);
  if (uVar19 != 0) {
    pfStack_1c0 = *(float **)(param_1 + 0x484);
    pfStack_1b8 = *(float **)(param_1 + 0x48c);
    pfStack_234 = pfStack_134;
    pfStack_22c = pfStack_1d4;
    uVar15 = uVar26 & 0xfffffff | (uint)(ALBW_AS_F32(pfVar39) < ALBW_AS_F32(pfVar37)) << 0x1f |
             (uint)(ALBW_AS_F32(pfVar39) == ALBW_AS_F32(pfVar37)) << 0x1e;
    uVar26 = uVar15 | (uint)(NAN(ALBW_AS_F32(pfVar39)) || NAN(ALBW_AS_F32(pfVar37))) << 0x1c;
    bVar3 = (byte)(uVar15 >> 0x18);
    pfStack_1bc = pfVar37;
    if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(uVar26 >> 0x1c) & 1)) {
      pfStack_1bc = pfVar39;
    }
    pfStack_1d8 = (float *)0x1;
    pfStack_230 = pfStack_1bc;
    bVar23 = func_00148614(param_1,(undefined4 *)(&pfStack_234),(undefined4 *)(&pfStack_1c0),uStack_1f4);
    if (!bVar23) {
      uVar19 = 0;
    }
  }
  *(short *)(param_1 + 0x49c) = (short)uVar19;
  *(undefined1 *)(param_1 + 0x4a0) = 0;
  if (uVar19 != 0) {
    pfStack_234 = *(float **)(param_1 + 0x484);
    pfStack_22c = *(float **)(param_1 + 0x48c);
    uVar35 = ZEXT48(fparam_0);
    pfStack_1c0 = (float *)CF_FBITS(-ALBW_AS_F32(pfStack_238));
    pfStack_1b8 = pfStack_23c;
    pfVar33 = pfVar41;
    pfStack_230 = pfVar37;
    pfStack_1bc = pfVar41;
    func_00115D70((float *)&pfStack_124,(float *)&pfStack_1c0,ALBW_AS_F32(fparam_0));
    pfStack_1a4 = pfStack_124;
    pfStack_1a0 = pfStack_120;
    pfStack_19c = pfStack_11c;
    func_00115C54((float *)&pfStack_250,(float *)&pfStack_234,(float *)&pfStack_1a4);
    pfStack_1b8 = (float *)CF_FBITS(-ALBW_AS_F32(pfStack_23c));
    pfStack_1c0 = pfStack_238;
    pfStack_1bc = pfVar33;
    func_00115D70((float *)&pfStack_124,(float *)&pfStack_1c0,ALBW_AS_F32(uVar35));
    pfStack_1a4 = pfStack_124;
    pfStack_1a0 = pfStack_120;
    pfStack_19c = pfStack_11c;
    func_00115C54((float *)&pfStack_1b4,(float *)&pfStack_234,(float *)&pfStack_1a4);
    if (uStack_1f4 == 0) {
LAB_001468ac:
      pfStack_250 = pfStack_234;
      pfStack_1b4 = pfStack_234;
    }
    else if (uStack_1f4 == 1) {
LAB_001468bc:
      pfStack_248 = pfStack_22c;
      pfStack_1ac = pfStack_22c;
    }
    else {
      if (uStack_1f4 == 2) goto LAB_001468ac;
      if (uStack_1f4 == 3) goto LAB_001468bc;
    }
    bVar23 = func_00148614(param_1,(undefined4 *)(&pfStack_250),(undefined4 *)(&pfStack_1b4),4);
    if (bVar23) {
      *(float **)(param_1 + 0x488) = pfVar37;
      iStack_1fc = 1;
      do {
        pfVar33 = pfStack_1c8;
        fVar36 = ALBW_AS_F32(((ulonglong)uVar44 >> 0x20));
        uVar34 = CONCAT44(fVar36,pfVar41);
        pfStack_a8 = (float *)CF_FBITS((ALBW_AS_F32(pfStack_23c) * fVar36));
        pfStack_a0 = (float *)CF_FBITS((ALBW_AS_F32(pfStack_238) * fVar36));
        fVar36 = (float)VectorSignedToFloat(iStack_1fc,(byte)(uVar26 >> 0x15) & 3);
        pfStack_a4 = pfVar41;
        func_00115D70((float *)&pfStack_94,(float *)&pfStack_a8,fVar36);
        pfStack_1b4 = pfStack_94;
        pfStack_1b0 = (float *)uStack_90;
        pfStack_1ac = (float *)uStack_8c;
        func_00115C54((float *)&pfStack_c0,pfVar33,(float *)&pfStack_1b4);
        pfStack_a8 = pfStack_23c;
        pfStack_a4 = (float *)uVar34;
        pfStack_a0 = pfStack_238;
        func_00115D70((float *)&pfStack_88,(float *)&pfStack_a8,ALBW_AS_F32(uVar35));
        pfStack_1b4 = pfStack_88;
        pfStack_1b0 = (float *)uStack_84;
        pfStack_1ac = (float *)uStack_80;
        func_00115C54((float *)&pfStack_c0,(float *)&pfStack_c0,(float *)&pfStack_1b4);
        pfStack_a8 = (float *)CF_FBITS(-ALBW_AS_F32(pfStack_238));
        pfStack_a4 = (float *)uVar34;
        pfStack_a0 = pfStack_23c;
        func_00115D70((float *)&pfStack_7c,(float *)&pfStack_a8,ALBW_AS_F32(uVar35));
        pfStack_1b4 = pfStack_7c;
        pfStack_1b0 = (float *)uStack_78;
        pfStack_1ac = (float *)uStack_74;
        func_00115C54((float *)&pfStack_234,(float *)&pfStack_c0,(float *)&pfStack_1b4);
        pfStack_a0 = (float *)CF_FBITS(-ALBW_AS_F32(pfStack_23c));
        pfStack_a8 = pfStack_238;
        pfStack_a4 = (float *)uVar34;
        func_00115D70((float *)&pfStack_70,(float *)&pfStack_a8,ALBW_AS_F32(uVar35));
        pfStack_1b4 = pfStack_70;
        pfStack_1b0 = pfStack_6c;
        pfStack_1ac = pfStack_68;
        func_00115C54((float *)&pfStack_1a4,(float *)&pfStack_c0,(float *)&pfStack_1b4);
        fStack_108 = ALBW_AS_F32(pfVar39) + fVar30;
        fStack_114 = ALBW_AS_F32(pfVar39) + fVar27;
        iVar6 = 0;
        do {
          if (uVar19 == 0) goto LAB_00146cb4;
          fVar36 = ALBW_AS_F32(((ulonglong)uVar34 >> 0x20));
          pfStack_d8 = (float *)CF_FBITS((ALBW_AS_F32(pfStack_23c) * fVar36));
          pfStack_d0 = (float *)CF_FBITS((ALBW_AS_F32(pfStack_238) * fVar36));
          fVar36 = (float)VectorSignedToFloat(iVar6,(byte)(uVar26 >> 0x15) & 3);
          pfStack_d4 = (float *)uVar34;
          func_00115D70((float *)&pfStack_100,(float *)&pfStack_d8,fVar36);
          pfStack_124 = pfStack_100;
          pfStack_120 = pfStack_fc;
          pfStack_11c = pfStack_f8;
          func_00115D70((float *)&pfStack_124,(float *)&pfStack_124,ALBW_AS_F32(uVar35));
          func_00115C70((float *)&pfStack_e4,(float *)&pfStack_234,(float *)&pfStack_124);
          func_00115C70((float *)&pfStack_1c0,(float *)&pfStack_1a4,(float *)&pfStack_124);
          iVar14 = 0;
          do {
            if (uVar19 == 0) break;
            if ((iVar6 == 0 || iVar14 == 0) || iVar14 == 1) {
              fVar36 = (float)VectorSignedToFloat(iVar14,(byte)(uVar26 >> 0x15) & 3);
              fStack_118 = ALBW_AS_F32(pfStack_e4) + (ALBW_AS_F32(pfStack_1c0) - ALBW_AS_F32(pfStack_e4)) * fVar36;
              fStack_110 = fStack_dc + (ALBW_AS_F32(pfStack_1b8) - fStack_dc) * fVar36;
              fStack_10c = fStack_118;
              fStack_104 = fStack_110;
              func_0014F0B0(param_1);
              *(float **)(param_1 + 0x470) = pfVar38;
              *(undefined1 *)(param_1 + 0x474) = 0;
              *(undefined1 *)(param_1 + 0x4a1) = 0;
              func_004A8030(*piVar18,&iStack_228,3);
              bVar23 = *(char *)(param_1 + 0x474) != '\0';
              cVar2 = '\0';
              if (bVar23) {
                cVar2 = *(char *)(param_1 + 0x4a1);
              }
              if (bVar23 && cVar2 != '\0') {
                fVar36 = *(float *)(param_1 + 0x488) - *(float *)(param_1 + 0x470);
                fVar32 = ALBW_AS_F32(uVar34);
                uVar15 = uVar26 & 0xfffffff | (uint)(fVar36 < fVar32) << 0x1f |
                         (uint)(fVar36 == fVar32) << 0x1e;
                uVar26 = uVar15 | (uint)(NAN(fVar36) || NAN(fVar32)) << 0x1c;
                bVar3 = (byte)(uVar15 >> 0x18);
                if ((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(uVar26 >> 0x1c) & 1)) {
                  fVar36 = -fVar36;
                }
                if ((int)ALBW_AS_U32(fVar36) < DAT_001473e4) {
                  iStack_224 = iStack_98;
                  fStack_108 = *(float *)(param_1 + 0x470) + ALBW_AS_F32(((ulonglong)uVar42 >> 0x20));
                  fStack_114 = *(float *)(param_1 + 0x470) + ALBW_AS_F32(uVar42);
                  pfStack_214 = (float *)uStack_9c;
                  iVar7 = func_004A8030(*piVar18,&iStack_228,4);
                  pfStack_214 = pfStack_1c4;
                  if ((iVar7 != 0) && (*(char *)(param_1 + 0x4a1) == '\0')) {
                    uVar19 = 0;
                  }
                  fStack_114 = ALBW_AS_F32(pfVar39) + fVar27;
                  iStack_224 = iStack_18c;
                  fStack_108 = ALBW_AS_F32(pfVar39) + fVar30;
                  goto LAB_00146bf4;
                }
              }
              uVar19 = 0;
            }
LAB_00146bf4:
            iVar14 = iVar14 + 1;
          } while (iVar14 < 2);
          iVar6 = iVar6 + 1;
        } while (iVar6 < 2);
        if (uVar19 == 0) {
LAB_00146cb4:
          pfStack_b4 = pfStack_23c;
          uStack_b0 = (undefined4)uVar34;
          pfStack_ac = pfStack_238;
          func_00115C70((float *)&pfStack_234,(float *)&pfStack_234,(float *)&pfStack_b4);
          pfStack_b4 = pfStack_23c;
          uStack_b0 = (undefined4)uVar34;
          pfStack_ac = pfStack_238;
          func_00115C70((float *)&pfStack_1a4,(float *)&pfStack_1a4,(float *)&pfStack_b4);
          uVar19 = 1;
          iVar6 = 0;
          do {
            fVar36 = ALBW_AS_F32(((ulonglong)uVar34 >> 0x20));
            pfStack_d8 = (float *)CF_FBITS((ALBW_AS_F32(pfStack_23c) * fVar36));
            pfStack_d0 = (float *)CF_FBITS((ALBW_AS_F32(pfStack_238) * fVar36));
            fVar36 = (float)VectorSignedToFloat(iVar6,(byte)(uVar26 >> 0x15) & 3);
            pfStack_d4 = (float *)uVar34;
            func_00115D70((float *)&pfStack_f4,(float *)&pfStack_d8,fVar36);
            pfStack_e4 = pfStack_f4;
            pfStack_e0 = pfStack_f0;
            fStack_dc = fStack_ec;
            func_00115C70((float *)&pfStack_124,(float *)&pfStack_234,(float *)&pfStack_e4);
            func_00115C70((float *)&pfStack_1c0,(float *)&pfStack_1a4,(float *)&pfStack_e4);
            iVar14 = 0;
            do {
              if (uVar19 == 0) break;
              if ((iVar6 == 0 || iVar14 == 0) || iVar14 == 1) {
                fVar36 = (float)VectorSignedToFloat(iVar14,(byte)(uVar26 >> 0x15) & 3);
                fStack_118 = ALBW_AS_F32(pfStack_124) + (ALBW_AS_F32(pfStack_1c0) - ALBW_AS_F32(pfStack_124)) * fVar36
                ;
                fStack_110 = ALBW_AS_F32(pfStack_11c) + (ALBW_AS_F32(pfStack_1b8) - ALBW_AS_F32(pfStack_11c)) * fVar36
                ;
                fStack_10c = fStack_118;
                fStack_104 = fStack_110;
                func_0014F0B0(param_1);
                *(float **)(param_1 + 0x470) = pfVar38;
                *(undefined1 *)(param_1 + 0x474) = 0;
                *(undefined1 *)(param_1 + 0x4a1) = 0;
                func_004A8030(*piVar18,&iStack_228,3);
                bVar23 = *(char *)(param_1 + 0x474) != '\0';
                cVar2 = '\0';
                if (bVar23) {
                  cVar2 = *(char *)(param_1 + 0x4a1);
                }
                if (bVar23 && cVar2 != '\0') {
                  fVar36 = *(float *)(param_1 + 0x488) - *(float *)(param_1 + 0x470);
                  fVar32 = ALBW_AS_F32(uVar34);
                  uVar15 = uVar26 & 0xfffffff | (uint)(fVar36 < fVar32) << 0x1f |
                           (uint)(fVar36 == fVar32) << 0x1e;
                  uVar26 = uVar15 | (uint)(NAN(fVar36) || NAN(fVar32)) << 0x1c;
                  bVar3 = (byte)(uVar15 >> 0x18);
                  if ((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(uVar26 >> 0x1c) & 1)) {
                    fVar36 = -fVar36;
                  }
                  if ((int)ALBW_AS_U32(fVar36) < DAT_001473e4) {
                    iStack_224 = iStack_98;
                    fStack_108 = *(float *)(param_1 + 0x470) + ALBW_AS_F32(((ulonglong)uVar42 >> 0x20));
                    fStack_114 = *(float *)(param_1 + 0x470) + ALBW_AS_F32(uVar42);
                    pfStack_214 = (float *)uStack_9c;
                    iVar7 = func_004A8030(*piVar18,&iStack_228,4);
                    pfStack_214 = pfStack_1c4;
                    if ((iVar7 != 0) && (*(char *)(param_1 + 0x4a1) == '\0')) {
                      uVar19 = 0;
                    }
                    fStack_114 = ALBW_AS_F32(pfVar39) + fVar27;
                    iStack_224 = iStack_18c;
                    fStack_108 = ALBW_AS_F32(pfVar39) + fVar30;
                    goto LAB_00146e9c;
                  }
                }
                uVar19 = 0;
              }
LAB_00146e9c:
              iVar14 = iVar14 + 1;
            } while (iVar14 < 2);
            iVar6 = iVar6 + 1;
            if (0 < iVar6) {
              if (uVar19 != 0) {
                pfStack_250 = pfStack_234;
                pfStack_24c = pfStack_230;
                pfStack_248 = pfStack_22c;
                pfStack_1c0 = pfStack_1a4;
                pfStack_1bc = pfStack_1a0;
                pfStack_1b8 = pfStack_19c;
                if (uStack_1f4 == 0) {
LAB_00146f10:
                  pfStack_250 = pfStack_c0;
                  pfStack_1c0 = pfStack_c0;
                }
                else if (uStack_1f4 == 1) {
LAB_00146f20:
                  pfStack_248 = pfStack_b8;
                  pfStack_1b8 = pfStack_b8;
                }
                else {
                  if (uStack_1f4 == 2) goto LAB_00146f10;
                  if (uStack_1f4 == 3) goto LAB_00146f20;
                }
                bVar23 = func_00148614(param_1,(undefined4 *)(&pfStack_250),(undefined4 *)(&pfStack_1c0),4);
                if (bVar23) {
                  *(undefined1 *)(param_1 + 0x4a0) = 1;
                  goto LAB_00146c98;
                }
                uVar19 = 0;
              }
              break;
            }
          } while (uVar19 != 0);
        }
        else {
          pfStack_250 = pfStack_234;
          pfStack_24c = pfStack_230;
          pfStack_248 = pfStack_22c;
          pfStack_cc = pfStack_1a4;
          pfStack_c8 = pfStack_1a0;
          pfStack_c4 = pfStack_19c;
          if (uStack_1f4 == 0) {
LAB_00146c5c:
            pfStack_250 = pfStack_c0;
            pfStack_cc = pfStack_c0;
          }
          else if (uStack_1f4 == 1) {
LAB_00146c6c:
            pfStack_248 = pfStack_b8;
            pfStack_c4 = pfStack_b8;
          }
          else {
            if (uStack_1f4 == 2) goto LAB_00146c5c;
            if (uStack_1f4 == 3) goto LAB_00146c6c;
          }
          bVar23 = func_00148614(param_1,(undefined4 *)(&pfStack_250),(undefined4 *)(&pfStack_cc),4);
          if (!bVar23) goto LAB_00146cb4;
LAB_00146c98:
          *(short *)(param_1 + 0x49c) = *(short *)(param_1 + 0x49c) + 1;
        }
        if (*(char *)(param_1 + 0x4a0) != '\0') break;
        iVar14 = iStack_1fc + 1;
        bVar23 = SBORROW4(iVar14,0x10);
        iVar6 = iStack_1fc + -0xf;
        if (iVar14 < 0x10) {
          bVar23 = SBORROW4(iVar14,8);
          iVar6 = iStack_1fc + -7;
        }
        iStack_1fc = iVar14;
        if ((iVar6 < 0 == bVar23) || (uVar19 == 0)) break;
      } while( true );
    }
  }
  uVar9 = (ushort)*(byte *)(param_1 + 0x4a0);
  if (*(byte *)(param_1 + 0x4a0) != 0) {
    uVar9 = 1;
  }
  piVar17 = (int *)(param_1 + 0x4ec);
  pfVar33 = (float *)(int)(short)(*(short *)(param_1 + 0x49c) - uVar9);
  pfStack_24c = pfVar33;
  if ((int)pfVar33 < (int)pfStack_254) {
    do {
      piVar8 = piVar17;
      if (pfVar33 < &DataAbort) {
        piVar8 = piVar17 + (int)pfVar33 * 2;
      }
      iVar6 = *piVar8;
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0x1c) == piVar8[1])) {
        uVar15 = *(uint *)(iVar6 + 0x3c) & 0xffffffbb;
        *(uint *)(iVar6 + 0x3c) = *(uint *)(iVar6 + 0x3c) & 0xfffffffb;
        *(uint *)(iVar6 + 0x3c) = uVar15;
        *(uint *)(iVar6 + 0x3c) = uVar15 | 8;
        func_004A3700(iVar6);
      }
      pfVar33 = (float *)((int)pfVar33 + 1);
    } while ((int)pfVar33 < (int)pfStack_254);
  }
  if ((iStack_1cc != 0) && ((*(char *)(param_1 + 0x4a0) == '\0' || (pfStack_24c != pfStack_254)))) {
    piVar8 = piVar17;
    if (pfStack_254 < &DataAbort) {
      piVar8 = piVar17 + (int)pfStack_254 * 2;
    }
    iVar6 = *piVar8;
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x1c) == piVar8[1])) {
      *(uint *)(iVar6 + 0x3c) = *(uint *)(iVar6 + 0x3c) & 0xffffffbb | 8;
      func_004A3700(iVar6);
    }
  }
  pfVar33 = pfStack_254;
  if ((int)pfStack_254 < (int)pfStack_24c) {
    do {
      piVar8 = piVar17;
      if (pfVar33 < &DataAbort) {
        piVar8 = piVar17 + (int)pfVar33 * 2;
      }
      if (*(int *)(param_1 + 0x344) == 0) {
        *piVar8 = 0;
        piVar8[1] = 0;
      }
      else {
        iVar6 = *piVar8;
        if ((iVar6 != 0) && (*(int *)(iVar6 + 0x1c) == piVar8[1])) {
          func_00110848(iVar6);
        }
        func_004A1B9C((int *)&pfStack_248,*(int *)(param_1 + 0x344),(uint *)s_Sight_001473e8);
        *piVar8 = (int)pfStack_248;
        piVar8[1] = (int)pfStack_244;
      }
      pfVar33 = (float *)((int)pfVar33 + 1);
    } while ((int)pfVar33 < (int)pfStack_24c);
  }
  if ((*(char *)(param_1 + 0x4a0) != '\0') && ((iStack_1cc == 0 || (pfStack_24c != pfStack_254)))) {
    piVar8 = piVar17;
    if (pfStack_24c < &DataAbort) {
      piVar8 = piVar17 + (int)pfStack_24c * 2;
    }
    if (*(int *)(param_1 + 0x344) == 0) {
      *piVar8 = 0;
      piVar8[1] = 0;
    }
    else {
      iVar6 = *piVar8;
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0x1c) == piVar8[1])) {
        func_00110848(iVar6);
      }
      func_004A1B9C((int *)&pfStack_250,*(int *)(param_1 + 0x344),(uint *)s_SightHalf_001473f0);
      *piVar8 = (int)pfStack_250;
      piVar8[1] = (int)pfStack_24c;
    }
  }
  uVar15 = 0;
  if (0 < *(short *)(param_1 + 0x49c)) {
    fVar36 = *DAT_001473fc * DAT_00147400 + DAT_001473fc[1] * ALBW_AS_F32(DAT_00147404) +
             DAT_001473fc[2] * DAT_00147400;
    uVar35 = (ulonglong)(uint)ALBW_AS_U32(-fVar36);
    pfVar33 = DAT_00147404;
    fVar27 = DAT_00147408;
    do {
      fVar31 = ALBW_AS_F32(((ulonglong)uVar44 >> 0x20));
      pfStack_1c4 = (float *)CF_FBITS((ALBW_AS_F32(pfStack_23c) * fVar31));
      pfStack_1bc = (float *)CF_FBITS((ALBW_AS_F32(pfStack_238) * fVar31));
      fVar32 = (float)VectorSignedToFloat(uVar15,(byte)(uVar26 >> 0x15) & 3);
      pfVar37 = pfVar41;
      pfStack_1c0 = pfVar41;
      func_00115D70((float *)&pfStack_cc,(float *)&pfStack_1c4,fVar32);
      pfStack_248 = pfStack_cc;
      pfStack_244 = pfStack_c8;
      pfStack_240 = pfStack_c4;
      func_00115C54((float *)&pfStack_e4,pfStack_1c8,(float *)&pfStack_248);
      if (((int)*(short *)(param_1 + 0x49c) - 1U == uVar15) && (*(char *)(param_1 + 0x4a0) != '\0'))
      {
        pfStack_1b8 = (float *)CF_FBITS((ALBW_AS_F32(pfStack_23c) * fVar31));
        pfStack_1b0 = (float *)CF_FBITS((ALBW_AS_F32(pfStack_238) * fVar31));
        pfStack_1b4 = pfVar37;
        func_00115D88((float *)&pfStack_c0,(float *)&pfStack_1b8,fVar27);
        pfStack_d8 = pfStack_c0;
        pfStack_d4 = pfStack_bc;
        pfStack_d0 = pfStack_b8;
        func_00115C70((float *)&pfStack_e4,(float *)&pfStack_e4,(float *)&pfStack_d8);
        uVar20 = uVar26 & 0xfffffff;
        uVar21 = uVar20 | (uint)(ALBW_AS_F32(pfStack_23c) < ALBW_AS_F32(pfVar37)) << 0x1f |
                 (uint)(ALBW_AS_F32(pfStack_23c) == ALBW_AS_F32(pfVar37)) << 0x1e;
        uVar26 = uVar21 | (uint)(NAN(ALBW_AS_F32(pfStack_23c)) || NAN(ALBW_AS_F32(pfVar37))) << 0x1c;
        bVar3 = (byte)(uVar21 >> 0x18);
        pfVar29 = pfStack_23c;
        if ((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(uVar26 >> 0x1c) & 1)) {
          pfVar29 = (float *)CF_FBITS(-ALBW_AS_F32(pfStack_23c));
        }
        if ((int)pfVar29 < 0x3f000001) {
          piVar8 = piVar17;
          if (uVar15 < 0x10) {
            piVar8 = piVar17 + uVar15 * 2;
          }
          iVar6 = *piVar8;
          if ((iVar6 != 0) && (*(int *)(iVar6 + 0x1c) == piVar8[1])) goto LAB_00147444;
        }
        else {
          piVar8 = piVar17;
          if (uVar15 < 0x10) {
            piVar8 = piVar17 + uVar15 * 2;
          }
          pfStack_1d0 = DAT_001473fc;
          if ((*piVar8 != 0) && (*(int *)(*piVar8 + 0x1c) == piVar8[1])) {
            uVar20 = uVar20 | (uint)(fVar36 < ALBW_AS_F32(pfVar37)) << 0x1f |
                     (uint)(fVar36 == ALBW_AS_F32(pfVar37)) << 0x1e;
            uVar26 = uVar20 | (uint)(NAN(fVar36) || NAN(ALBW_AS_F32(pfVar37))) << 0x1c;
            bVar3 = (byte)(uVar20 >> 0x18);
            fVar32 = fVar36;
            if ((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(uVar26 >> 0x1c) & 1)) {
              fVar32 = ALBW_AS_F32(uVar35);
            }
            pfStack_14c = pfVar37;
            pfStack_148 = pfVar33;
            if (DAT_0014740c < (int)ALBW_AS_U32(fVar32)) {
              pfStack_14c = pfVar33;
              pfStack_148 = pfVar37;
            }
            pfStack_144 = pfVar37;
            func_00115E10((float *)&pfStack_124,(float *)&pfStack_14c,DAT_001473fc);
            pfStack_158 = pfStack_124;
            pfStack_154 = pfStack_120;
            pfStack_150 = pfStack_11c;
            func_00115DC8((float *)&pfStack_158);
            func_00115E10((float *)&pfStack_1a4,pfStack_1d0,(float *)&pfStack_158);
            pfStack_140 = pfStack_1a4;
            pfStack_13c = pfStack_1a0;
            pfStack_138 = pfStack_19c;
            func_00115DC8((float *)&pfStack_140);
            pfStack_188 = pfStack_158;
            pfStack_178 = pfStack_154;
            pfStack_168 = pfStack_150;
            pfStack_184 = pfStack_140;
            pfStack_174 = pfStack_13c;
            pfStack_164 = pfStack_138;
            fStack_180 = *pfStack_1d0;
            fStack_170 = pfStack_1d0[1];
            fStack_160 = pfStack_1d0[2];
            pfStack_17c = pfStack_e4;
            pfStack_16c = pfStack_e0;
            fStack_15c = fStack_dc;
            func_004A2E80(*piVar8,(float *)&pfStack_188,ALBW_AS_F32(pfVar33));
          }
        }
      }
      else {
        piVar8 = piVar17;
        if (uVar15 < 0x10) {
          piVar8 = piVar17 + uVar15 * 2;
        }
        iVar6 = *piVar8;
        if ((iVar6 != 0) && (*(int *)(iVar6 + 0x1c) == piVar8[1])) {
LAB_00147444:
          func_004A2F38(iVar6,(undefined4 *)(&pfStack_e4));
        }
      }
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)*(short *)(param_1 + 0x49c));
  }
  *(undefined2 *)(param_1 + 0x4a4) = 0;
  pfVar33 = pfVar41;
  if (pfStack_1d8 == (float *)0x0 && *(short *)(param_1 + 0x49c) == 0) {
    *pfStack_1c8 = ALBW_AS_F32(pfStack_1e4);
    fVar27 = DAT_001478c0;
    pfStack_1c8[1] = ALBW_AS_F32(pfStack_1e0);
    pfStack_1c8[2] = ALBW_AS_F32(pfStack_1a8);
    pfStack_1c4 = pfStack_1e4;
    pfStack_1c0 = pfStack_1e0;
    pfStack_1bc = pfStack_1a8;
    pfStack_240 = (float *)0x0;
    do {
      pfVar37 = pfStack_1c8;
      if (*(char *)(param_1 + 0x4a3) == '\0') {
        iVar6 = 1;
      }
      else {
        iVar6 = 8;
      }
      if (iVar6 <= (int)pfStack_240) break;
      fVar36 = ALBW_AS_F32(((ulonglong)uVar44 >> 0x20));
      bVar23 = true;
      pfStack_1b8 = (float *)CF_FBITS((ALBW_AS_F32(pfStack_23c) * fVar36));
      pfStack_1b0 = (float *)CF_FBITS((ALBW_AS_F32(pfStack_238) * fVar36));
      fVar36 = (float)VectorSignedToFloat((uint32_t)(uintptr_t)(pfStack_240),(byte)(uVar26 >> 0x15) & 3);
      pfStack_1b4 = pfVar41;
      func_00115D70((float *)&pfStack_254,(float *)&pfStack_1b8,fVar36);
      pfStack_234 = pfStack_254;
      pfStack_230 = pfStack_250;
      pfStack_22c = pfStack_24c;
      func_00115C54((float *)&pfStack_1c4,pfVar37,(float *)&pfStack_234);
      func_00115D70((float *)&pfStack_1a4,(float *)&pfStack_130,ALBW_AS_F32(fparam_0));
      pfStack_234 = pfStack_1a4;
      pfStack_230 = pfStack_1a0;
      pfStack_22c = pfStack_19c;
      func_00115C70((float *)&pfStack_1f0,(float *)&pfStack_1c4,(float *)&pfStack_234);
      func_00115D70((float *)&pfStack_124,(float *)&pfStack_130,ALBW_AS_F32(fparam_0));
      pfStack_234 = pfStack_124;
      pfStack_230 = pfStack_120;
      pfStack_22c = pfStack_11c;
      func_00115C54((float *)&pfStack_198,(float *)&pfStack_1c4,(float *)&pfStack_234);
      iVar6 = DAT_001478c4;
      fStack_108 = ALBW_AS_F32(pfVar39) + fVar30;
      fStack_114 = ALBW_AS_F32(pfVar39) + fVar27;
      uVar15 = 0;
      pfVar29 = pfVar38;
      pfVar37 = pfVar43;
      do {
        uVar20 = 0;
        fVar36 = (float)VectorSignedToFloat(uVar15,(byte)(uVar26 >> 0x15) & 3);
        fStack_118 = ALBW_AS_F32(pfStack_1f0) + (ALBW_AS_F32(pfStack_198) - ALBW_AS_F32(pfStack_1f0)) * fVar36;
        fStack_10c = fStack_118;
        do {
          if ((uVar20 < 2) || (uVar15 < 2)) {
            fVar36 = (float)VectorSignedToFloat(uVar20,(byte)(uVar26 >> 0x15) & 3);
            fStack_110 = ALBW_AS_F32(pfStack_1e8) + (ALBW_AS_F32(pfStack_190) - ALBW_AS_F32(pfStack_1e8)) * fVar36;
            fStack_104 = fStack_110;
            func_0014F0B0(param_1);
            *(float **)(param_1 + 0x470) = pfVar38;
            *(undefined1 *)(param_1 + 0x474) = 0;
            *(undefined1 *)(param_1 + 0x4a1) = 0;
            *(float **)(param_1 + 0x47c) = pfVar43;
            *(float **)(param_1 + 0x480) = pfVar38;
            func_004A8030(*piVar18,&iStack_228,7);
            if ((*(char *)(param_1 + 0x474) != '\0') && (*(char *)(param_1 + 0x4a1) == '\0')) {
              pfVar28 = *(float **)(param_1 + 0x480);
              uVar21 = uVar26 & 0xfffffff | (uint)(ALBW_AS_F32(pfVar28) < ALBW_AS_F32(pfVar29)) << 0x1f |
                       (uint)(ALBW_AS_F32(pfVar28) == ALBW_AS_F32(pfVar29)) << 0x1e;
              uVar26 = uVar21 | (uint)(NAN(ALBW_AS_F32(pfVar28)) || NAN(ALBW_AS_F32(pfVar29))) << 0x1c;
              if (ALBW_AS_F32(pfVar28) < ALBW_AS_F32(pfVar37)) {
                pfVar37 = pfVar28;
              }
              bVar3 = (byte)(uVar21 >> 0x18);
              if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(uVar26 >> 0x1c) & 1)) {
                pfVar29 = pfVar28;
              }
              if ((int)ALBW_AS_U32((ALBW_AS_F32(pfVar29) - ALBW_AS_F32(pfVar37))) < iVar6) goto LAB_001476d4;
            }
            bVar23 = false;
            goto LAB_001476f4;
          }
LAB_001476d4:
          uVar20 = uVar20 + 1;
        } while ((int)uVar20 < 2);
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < 2);
LAB_001476f4:
      puVar5 = DAT_001478cc;
      if (pfStack_240 == (float *)0x0) {
        pfVar33 = *(float **)(param_1 + 0x480);
      }
      else {
        fVar36 = ALBW_AS_F32(pfVar33) - *(float *)(param_1 + 0x480);
        uVar15 = uVar26 & 0xfffffff | (uint)(fVar36 < ALBW_AS_F32(pfVar41)) << 0x1f |
                 (uint)(fVar36 == ALBW_AS_F32(pfVar41)) << 0x1e;
        uVar26 = uVar15 | (uint)(NAN(fVar36) || NAN(ALBW_AS_F32(pfVar41))) << 0x1c;
        bVar3 = (byte)(uVar15 >> 0x18);
        if ((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(uVar26 >> 0x1c) & 1)) {
          fVar36 = -fVar36;
        }
        if (iVar6 <= (int)ALBW_AS_U32(fVar36)) break;
      }
      if (!bVar23) break;
      bVar23 = true;
      iVar6 = 0;
      fVar36 = DAT_001478c8;
      do {
        if (uStack_1f4 == 3) {
          if (iVar6 != 0) goto LAB_0014777c;
          iVar6 = 1;
        }
        else {
          if ((uStack_1f4 == 1) && (iVar6 == 1)) break;
          pfVar37 = pfStack_1f0;
          if (iVar6 != 0) {
LAB_0014777c:
            pfVar37 = pfStack_198;
          }
          iVar14 = 0;
LAB_00147784:
          do {
            if (!bVar23) break;
            pfVar29 = pfStack_190;
            if (uStack_1f4 == 2) {
              if (iVar14 == 0) {
                iVar14 = 1;
                goto LAB_00147784;
              }
            }
            else {
              if ((uStack_1f4 == 0) && (iVar14 == 1)) break;
              if (iVar14 == 0) {
                pfVar29 = pfStack_1e8;
              }
            }
            pfStack_1a4 = pfVar37;
            pfStack_1a0 = pfVar33;
            pfStack_19c = pfVar29;
            bVar23 = func_00588EEC(*puVar5,(float *)&pfStack_1a4,fVar36);
            iVar14 = iVar14 + 1;
            bVar23 = !bVar23;
          } while (iVar14 < 2);
          iVar6 = iVar6 + 1;
          if (1 < iVar6) break;
        }
      } while (bVar23);
      if (bVar23) break;
      if (pfStack_1d8 == (float *)0x0 && pfStack_240 == (float *)0x0) {
        pfStack_1a4 = pfStack_1e4;
        pfStack_19c = pfStack_1a8;
        pfStack_254 = pfStack_134;
        pfStack_24c = pfStack_1d4;
        uVar15 = uVar26 & 0xfffffff | (uint)(ALBW_AS_F32(pfVar39) < ALBW_AS_F32(pfVar33)) << 0x1f |
                 (uint)(ALBW_AS_F32(pfVar39) == ALBW_AS_F32(pfVar33)) << 0x1e;
        uVar26 = uVar15 | (uint)(NAN(ALBW_AS_F32(pfVar39)) || NAN(ALBW_AS_F32(pfVar33))) << 0x1c;
        bVar3 = (byte)(uVar15 >> 0x18);
        pfStack_1a0 = pfVar33;
        if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(uVar26 >> 0x1c) & 1)) {
          pfStack_1a0 = pfVar39;
        }
        pfStack_250 = pfStack_1a0;
        bVar23 = func_00148614(param_1,(undefined4 *)(&pfStack_254),(undefined4 *)(&pfStack_1a4),uStack_1f4);
        if (!bVar23) break;
      }
      pfStack_254 = pfStack_1f0;
      pfStack_250 = pfStack_1ec;
      pfStack_24c = pfStack_1e8;
      pfStack_1a4 = pfStack_198;
      pfStack_1a0 = pfStack_194;
      pfStack_19c = pfStack_190;
      if (uStack_1f4 == 0) {
LAB_001478e0:
        pfStack_254 = pfStack_1c4;
        pfStack_1a4 = pfStack_1c4;
      }
      else if (uStack_1f4 == 1) {
LAB_001478f0:
        pfStack_24c = pfStack_1bc;
        pfStack_19c = pfStack_1bc;
      }
      else {
        if (uStack_1f4 == 2) goto LAB_001478e0;
        if (uStack_1f4 == 3) goto LAB_001478f0;
      }
      bVar23 = func_00148614(param_1,(undefined4 *)(&pfStack_254),(undefined4 *)(&pfStack_1a4),4);
      if (!bVar23) break;
      *(short *)(param_1 + 0x4a4) = *(short *)(param_1 + 0x4a4) + 1;
      pfStack_240 = (float *)((int)pfStack_240 + 1);
    } while ((int)pfStack_240 < 0x10);
  }
  uVar15 = (uint)*(short *)(param_1 + 0x4a4);
  piVar18 = (int *)(param_1 + 0x56c);
  if ((int)uVar15 < (int)pfStack_1dc) {
    do {
      piVar17 = piVar18;
      if (uVar15 < 0x10) {
        piVar17 = piVar18 + uVar15 * 2;
      }
      iVar6 = *piVar17;
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0x1c) == piVar17[1])) {
        uVar20 = *(uint *)(iVar6 + 0x3c);
        puVar10 = (uint *)(iVar6 + 0x3c);
        *(uint *)(iVar6 + 0x3c) = uVar20 & 0xfffffffb;
        *puVar10 = uVar20 & 0xffffffbb;
        *puVar10 = *puVar10 | 8;
        func_004A3700(iVar6);
      }
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)pfStack_1dc);
  }
  uVar15 = (uint)((ulonglong)uVar44 >> 0x20);
  pfVar39 = pfStack_1dc;
  if ((int)pfStack_1dc < (int)*(short *)(param_1 + 0x4a4)) {
    do {
      piVar17 = piVar18;
      if (pfVar39 < &DataAbort) {
        piVar17 = piVar18 + (int)pfVar39 * 2;
      }
      if (*(int *)(param_1 + 0x344) == 0) {
        *piVar17 = 0;
        piVar17[1] = 0;
      }
      else {
        iVar6 = *piVar17;
        if ((iVar6 != 0) && (*(int *)(iVar6 + 0x1c) == piVar17[1])) {
          func_00110848(iVar6);
        }
        func_004A1B9C((int *)&pfStack_250,*(int *)(param_1 + 0x344),(uint *)s_SightEdge_00147b8c);
        *piVar17 = (int)pfStack_250;
        piVar17[1] = (int)pfStack_24c;
      }
      uVar15 = (uint)((ulonglong)uVar44 >> 0x20);
      pfVar39 = (float *)((int)pfVar39 + 1);
    } while ((int)pfVar39 < (int)*(short *)(param_1 + 0x4a4));
  }
  if (DAT_00147b98 <= (int)pfVar33) {
    cVar2 = *(char *)(*DAT_00147b9c + 0x18);
    iVar6 = *(int *)(*DAT_00147b9c + 0x1c);
    if (cVar2 == '\x04') {
      if (iVar6 != 0x18) goto LAB_00147a8c;
    }
    else if ((cVar2 != '\x05') || (iVar6 != 8)) goto LAB_00147a8c;
    pfVar33 = (float *)CF_FBITS((ALBW_AS_F32(pfVar33) + DAT_00147ba0));
  }
LAB_00147a8c:
  if (*(short *)(param_1 + 0x49c) == 0) {
    uVar20 = 0;
    pfStack_24c = pfStack_1a8;
    pfStack_254 = pfStack_1e4;
    *pfStack_1c8 = ALBW_AS_F32(pfStack_1e4);
    pfStack_1c8[1] = ALBW_AS_F32(pfVar33);
    pfStack_1c8[2] = ALBW_AS_F32(pfStack_1a8);
    if (0 < *(short *)(param_1 + 0x4a4)) {
      uVar35 = (ulonglong)uVar15;
      pfStack_250 = pfVar33;
      do {
        pfStack_234 = (float *)CF_FBITS((ALBW_AS_F32(pfStack_23c) * ALBW_AS_F32(uVar35)));
        pfStack_22c = (float *)CF_FBITS((ALBW_AS_F32(pfStack_238) * ALBW_AS_F32(uVar35)));
        fVar30 = (float)VectorSignedToFloat(uVar20,(byte)(uVar26 >> 0x15) & 3);
        pfStack_230 = pfVar41;
        func_00115D70((float *)&pfStack_1d8,(float *)&pfStack_234,fVar30);
        pfStack_1e4 = pfStack_1d8;
        pfStack_1e0 = pfStack_1d4;
        pfStack_1dc = pfStack_1d0;
        func_00115C54((float *)&pfStack_254,pfStack_1c8,(float *)&pfStack_1e4);
        piVar17 = piVar18;
        if (uVar20 < 0x10) {
          piVar17 = piVar18 + uVar20 * 2;
        }
        iVar6 = *piVar17;
        if ((iVar6 != 0) && (*(int *)(iVar6 + 0x1c) == piVar17[1])) {
          func_004A2F38(iVar6,(undefined4 *)(&pfStack_254));
        }
        uVar20 = uVar20 + 1;
      } while ((int)uVar20 < (int)*(short *)(param_1 + 0x4a4));
    }
  }
  return;
}

