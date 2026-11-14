/* compilefix: USA 00145CEC (EU 00145CEC), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [27]
 *  - explicit casts at pointer-type mismatches (identity on the ARM) [14]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
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

// USA 00145CEC <- EU 00145CEC (Ghidra, non-matching)
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

void func_00145CEC(int param_1)

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
  #define local_254 (*(float * *)(albw_frame + 0xc))
  #define local_250 (*(float * *)(albw_frame + 0x10))
  #define local_24c (*(float * *)(albw_frame + 0x14))
  #define local_248 (*(float * *)(albw_frame + 0x18))
  #define local_244 (*(float * *)(albw_frame + 0x1c))
  #define local_240 (*(float * *)(albw_frame + 0x20))
  #define local_23c (*(float * *)(albw_frame + 0x24))
  #define local_238 (*(float * *)(albw_frame + 0x28))
  #define local_234 (*(float * *)(albw_frame + 0x2c))
  #define local_230 (*(float * *)(albw_frame + 0x30))
  #define local_22c (*(float * *)(albw_frame + 0x34))
  #define local_228 (*(int *)(albw_frame + 0x38))
  #define local_224 (*(int *)(albw_frame + 0x3c))
  #define local_220 (*(undefined4 *)(albw_frame + 0x40))
  #define local_21c (*(undefined4 *)(albw_frame + 0x44))
  #define uStack_218 (*(uint *)(albw_frame + 0x48))
  #define local_214 (*(float * *)(albw_frame + 0x4c))
  #define local_210 (*(undefined4 *)(albw_frame + 0x50))
  #define local_20c (*(float * *)(albw_frame + 0x54))
  #define local_208 (*(float * *)(albw_frame + 0x58))
  #define local_204 (*(float * *)(albw_frame + 0x5c))
  #define local_200 (*(undefined1 *)(albw_frame + 0x60))
  #define local_1ff (*(undefined1 *)(albw_frame + 0x61))
  #define local_1fc (*(int *)(albw_frame + 0x64))
  #define local_1f4 (*(uint *)(albw_frame + 0x6c))
  #define local_1f0 (*(float * *)(albw_frame + 0x70))
  #define pfStack_1ec (*(float * *)(albw_frame + 0x74))
  #define local_1e8 (*(float * *)(albw_frame + 0x78))
  #define local_1e4 (*(float * *)(albw_frame + 0x7c))
  #define local_1e0 (*(float * *)(albw_frame + 0x80))
  #define local_1dc (*(float * *)(albw_frame + 0x84))
  #define local_1d8 (*(float * *)(albw_frame + 0x88))
  #define local_1d4 (*(float * *)(albw_frame + 0x8c))
  #define local_1d0 (*(float * *)(albw_frame + 0x90))
  #define local_1cc (*(int *)(albw_frame + 0x94))
  #define local_1c8 (*(float * *)(albw_frame + 0x98))
  #define local_1c4 (*(float * *)(albw_frame + 0x9c))
  #define local_1c0 (*(float * *)(albw_frame + 0xa0))
  #define local_1bc (*(float * *)(albw_frame + 0xa4))
  #define local_1b8 (*(float * *)(albw_frame + 0xa8))
  #define local_1b4 (*(float * *)(albw_frame + 0xac))
  #define local_1b0 (*(float * *)(albw_frame + 0xb0))
  #define local_1ac (*(float * *)(albw_frame + 0xb4))
  #define local_1a8 (*(float * *)(albw_frame + 0xb8))
  #define local_1a4 (*(float * *)(albw_frame + 0xbc))
  #define local_1a0 (*(float * *)(albw_frame + 0xc0))
  #define local_19c (*(float * *)(albw_frame + 0xc4))
  #define local_198 (*(float * *)(albw_frame + 0xc8))
  #define pfStack_194 (*(float * *)(albw_frame + 0xcc))
  #define local_190 (*(float * *)(albw_frame + 0xd0))
  #define local_18c (*(int *)(albw_frame + 0xd4))
  #define local_188 (*(float * *)(albw_frame + 0xd8))
  #define local_184 (*(float * *)(albw_frame + 0xdc))
  #define local_180 (*(float *)(albw_frame + 0xe0))
  #define local_17c (*(float * *)(albw_frame + 0xe4))
  #define local_178 (*(float * *)(albw_frame + 0xe8))
  #define local_174 (*(float * *)(albw_frame + 0xec))
  #define local_170 (*(float *)(albw_frame + 0xf0))
  #define local_16c (*(float * *)(albw_frame + 0xf4))
  #define local_168 (*(float * *)(albw_frame + 0xf8))
  #define local_164 (*(float * *)(albw_frame + 0xfc))
  #define local_160 (*(float *)(albw_frame + 0x100))
  #define local_15c (*(float *)(albw_frame + 0x104))
  #define local_158 (*(float * *)(albw_frame + 0x108))
  #define local_154 (*(float * *)(albw_frame + 0x10c))
  #define local_150 (*(float * *)(albw_frame + 0x110))
  #define local_14c (*(float * *)(albw_frame + 0x114))
  #define local_148 (*(float * *)(albw_frame + 0x118))
  #define local_144 (*(float * *)(albw_frame + 0x11c))
  #define local_140 (*(float * *)(albw_frame + 0x120))
  #define local_13c (*(float * *)(albw_frame + 0x124))
  #define local_138 (*(float * *)(albw_frame + 0x128))
  #define local_134 (*(float * *)(albw_frame + 0x12c))
  #define local_130 (*(float * *)(albw_frame + 0x130))
  #define local_12c (*(float * *)(albw_frame + 0x134))
  #define local_128 (*(float * *)(albw_frame + 0x138))
  #define local_124 (*(float * *)(albw_frame + 0x13c))
  #define pfStack_120 (*(float * *)(albw_frame + 0x140))
  #define local_11c (*(float * *)(albw_frame + 0x144))
  #define local_118 (*(float *)(albw_frame + 0x148))
  #define local_114 (*(float *)(albw_frame + 0x14c))
  #define local_110 (*(float *)(albw_frame + 0x150))
  #define local_10c (*(float *)(albw_frame + 0x154))
  #define local_108 (*(float *)(albw_frame + 0x158))
  #define local_104 (*(float *)(albw_frame + 0x15c))
  #define local_100 (*(float * *)(albw_frame + 0x160))
  #define pfStack_fc (*(float * *)(albw_frame + 0x164))
  #define local_f8 (*(float * *)(albw_frame + 0x168))
  #define local_f4 (*(float * *)(albw_frame + 0x16c))
  #define pfStack_f0 (*(float * *)(albw_frame + 0x170))
  #define fStack_ec (*(float *)(albw_frame + 0x174))
  #define local_e8 ((byte *)(albw_frame + 0x178))
  #define local_e4 (*(float * *)(albw_frame + 0x17c))
  #define local_e0 (*(float * *)(albw_frame + 0x180))
  #define local_dc (*(float *)(albw_frame + 0x184))
  #define local_d8 (*(float * *)(albw_frame + 0x188))
  #define local_d4 (*(float * *)(albw_frame + 0x18c))
  #define local_d0 (*(float * *)(albw_frame + 0x190))
  #define local_cc (*(float * *)(albw_frame + 0x194))
  #define local_c8 (*(float * *)(albw_frame + 0x198))
  #define local_c4 (*(float * *)(albw_frame + 0x19c))
  #define local_c0 (*(float * *)(albw_frame + 0x1a0))
  #define pfStack_bc (*(float * *)(albw_frame + 0x1a4))
  #define local_b8 (*(float * *)(albw_frame + 0x1a8))
  #define local_b4 (*(float * *)(albw_frame + 0x1ac))
  #define local_b0 (*(undefined4 *)(albw_frame + 0x1b0))
  #define local_ac (*(float * *)(albw_frame + 0x1b4))
  #define local_a8 (*(float * *)(albw_frame + 0x1b8))
  #define local_a4 (*(float * *)(albw_frame + 0x1bc))
  #define local_a0 (*(float * *)(albw_frame + 0x1c0))
  #define local_9c (*(undefined4 *)(albw_frame + 0x1c4))
  #define local_98 (*(int *)(albw_frame + 0x1c8))
  #define local_94 (*(float * *)(albw_frame + 0x1cc))
  #define uStack_90 (*(undefined4 *)(albw_frame + 0x1d0))
  #define uStack_8c (*(undefined4 *)(albw_frame + 0x1d4))
  #define local_88 (*(float * *)(albw_frame + 0x1d8))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0x1dc))
  #define uStack_80 (*(undefined4 *)(albw_frame + 0x1e0))
  #define local_7c (*(float * *)(albw_frame + 0x1e4))
  #define uStack_78 (*(undefined4 *)(albw_frame + 0x1e8))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x1ec))
  #define local_70 (*(float * *)(albw_frame + 0x1f0))
  #define pfStack_6c (*(float * *)(albw_frame + 0x1f4))
  #define pfStack_68 (*(float * *)(albw_frame + 0x1f8))
  if (*(uint *)(param_1 + 0x4a8) == 0) {
    puVar5 = *(undefined4 **)(*DAT_00146174 + 0x1c);
    local_134 = (float *)*puVar5;
    pfVar39 = (float *)puVar5[1];
    local_1d4 = (float *)puVar5[2];
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
    local_134 = (float *)puVar5[0xf4];
    pfVar39 = (float *)puVar5[0xf5];
    local_1d4 = (float *)puVar5[0xf6];
  }
  func_00115154((float *)&local_23c,(float *)&local_238,*(uint *)(param_1 + 1000));
  fVar36 = ALBW_AS_F32(local_134) + ALBW_AS_F32(local_23c) * DAT_00146180;
  fVar32 = ALBW_AS_F32(local_1d4) + ALBW_AS_F32(local_238) * DAT_00146180;
  fVar30 = DAT_00146188;
  pfVar41 = DAT_00146184;
  fVar27 = func_004906A8(DAT_00146188);
  local_244 = (float *)CF_FBITS(func_00490628(fVar27 * ALBW_AS_F32(pfVar41)));
  uVar20 = 1;
  uVar21 = unaff_r7 & 0xffff0000 | 0xffff;
  fVar36 = fVar36 * (ALBW_AS_F32(DAT_0014618c) / ALBW_AS_F32(local_244)) + DAT_00146190;
  fVar32 = fVar32 * (ALBW_AS_F32(DAT_0014618c) / ALBW_AS_F32(local_244)) + DAT_00146190;
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
  local_1c8 = (float *)(param_1 + 0x484);
  uVar42 = CONCAT44(DAT_00146198,DAT_00146194);
  fVar27 = (float)VectorSignedToFloat(iVar6,(byte)(uVar26 >> 0x15) & 3);
  *local_1c8 = fVar36 * ALBW_AS_F32(local_244);
  *(float **)(param_1 + 0x488) = pfVar39;
  local_130 = DAT_0014618c;
  *(float *)(param_1 + 0x48c) = fVar27 * ALBW_AS_F32(local_244);
  pfVar38 = DAT_001461a0;
  pfVar43 = DAT_0014619c;
  local_1e4 = *(float **)(param_1 + 0x484);
  local_1e0 = *(float **)(param_1 + 0x488);
  local_1a8 = *(float **)(param_1 + 0x48c);
  local_128 = DAT_0014618c;
  local_9c = 0x7f;
  local_228 = 0;
  local_1c4 = (float *)0x87;
  local_220 = 0;
  local_210 = 0;
  local_200 = 0;
  local_1ff = 1;
  local_224 = param_1 + 0x40c;
  local_248 = (float *)0x0;
  local_21c = *(undefined4 *)(param_1 + 0x2cc);
  local_208 = &local_10c;
  local_20c = &local_118;
  local_214 = (float *)0x87;
  *(float **)(param_1 + 0x47c) = DAT_0014619c;
  *(float **)(param_1 + 0x480) = pfVar38;
  uVar44 = CONCAT44(fVar30,pfVar41);
  local_1f4 = *(int *)(param_1 + 1000) + 0x20000000U >> 0x1e;
  local_98 = param_1 + 0x41c;
  fparam_0 = DAT_001461a4;
  fVar30 = DAT_001461a8;
  uStack_218 = uVar21;
  local_204 = pfVar41;
  local_18c = local_224;
  local_12c = pfVar41;
  do {
    pfVar37 = local_1c8;
    pfVar33 = fparam_0;
    func_00115D70((float *)&local_d8,(float *)&local_130,ALBW_AS_F32(fparam_0));
    ppfVar11 = &local_1a4;
    local_1a4 = local_d8;
    local_1a0 = local_d4;
    local_19c = local_d0;
    func_00115C70((float *)&local_1f0,pfVar37,(float *)ppfVar11);
    pfVar37 = local_1c8;
    func_00115D70((float *)&local_cc,(float *)&local_130,ALBW_AS_F32(pfVar33));
    ppfVar12 = &local_1a4;
    local_1a4 = local_cc;
    local_1a0 = local_c8;
    local_19c = local_c4;
    func_00115C54((float *)&local_198,pfVar37,(float *)ppfVar11);
    piVar18 = DAT_001461b0;
    uVar15 = 1;
    uVar19 = 0;
    local_108 = ALBW_AS_F32(pfVar39) + fVar30;
    local_114 = ALBW_AS_F32(pfVar39) + DAT_001461ac;
    pfVar37 = pfVar43;
    pfVar29 = pfVar38;
    fVar27 = DAT_001461ac;
    do {
      uVar13 = 0;
      fVar36 = (float)VectorSignedToFloat(uVar19,(byte)(uVar26 >> 0x15) & 3);
      local_10c = ALBW_AS_F32(local_1f0) + (ALBW_AS_F32(local_198) - ALBW_AS_F32(local_1f0)) * fVar36;
      local_118 = local_10c;
      do {
        if ((uVar13 < 2) || (uVar19 < 2)) {
          fVar36 = (float)VectorSignedToFloat(uVar13,(byte)(uVar26 >> 0x15) & 3);
          local_110 = ALBW_AS_F32(local_1e8) + (ALBW_AS_F32(local_190) - ALBW_AS_F32(local_1e8)) * fVar36;
          local_104 = local_110;
          func_0014F0B0(param_1);
          pfVar33 = *(float **)(param_1 + 0x470);
          *(float **)(param_1 + 0x470) = pfVar38;
          uVar40 = *(undefined4 *)(param_1 + 0x47c);
          *(undefined1 *)(param_1 + 0x474) = 0;
          *(undefined1 *)(param_1 + 0x4a1) = 0;
          ppfVar11 = (float **)&DAT_00000007;
          func_004A8030(*piVar18,&local_228,7);
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
            local_224 = local_98;
            local_108 = *(float *)(param_1 + 0x470) + ALBW_AS_F32(((ulonglong)uVar42 >> 0x20));
            local_114 = *(float *)(param_1 + 0x470) + ALBW_AS_F32(uVar42);
            local_214 = (float *)local_9c;
            iVar6 = func_004A8030(*piVar18,&local_228,7);
            local_214 = local_1c4;
            if ((iVar6 != 0) &&
               (bVar23 = *(char *)(param_1 + 0x4a1) != '\0', uVar16 = (uint)bVar23, !bVar23)) {
              uVar15 = uVar16;
            }
            local_224 = local_18c;
            local_108 = ALBW_AS_F32(pfVar39) + fVar30;
            local_114 = ALBW_AS_F32(pfVar39) + fVar27;
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
              local_e8[iVar14 + iVar6] = (byte)uVar16;
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
    pfVar29 = local_1c8;
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
      if (local_248 != (float *)0x0) {
        uVar19 = 1;
        *local_1c8 = in_s30;
        local_1c8[1] = ALBW_AS_F32(local_230);
        local_1c8[2] = ALBW_AS_F32(local_1d8);
        pfVar37 = local_1d0;
        goto LAB_00146630;
      }
    }
    else {
      if (!bVar22 || !bVar23) goto LAB_00146630;
      local_248 = (float *)0x1;
      local_230 = (float *)CF_FBITS(local_1c8[1]);
      in_s30 = *local_1c8;
      local_1d8 = (float *)CF_FBITS(local_1c8[2]);
      uVar19 = 0;
      local_1d0 = pfVar37;
    }
    if (local_1f4 == 0) {
      uVar21 = 0;
      ppfVar12 = (float **)0x1;
      uVar16 = 2;
      ppfVar11 = (float **)0x3;
    }
    else if (local_1f4 == 1) {
      ppfVar12 = (float **)0x0;
      uVar21 = 2;
      ppfVar11 = (float **)0x1;
      uVar16 = 3;
    }
    else if (local_1f4 == 2) {
      ppfVar12 = (float **)0x2;
      uVar21 = 3;
      ppfVar11 = (float **)0x0;
      uVar16 = 1;
    }
    else if (local_1f4 == 3) {
      uVar21 = 1;
      ppfVar12 = (float **)0x3;
      uVar16 = 0;
      ppfVar11 = (float **)0x2;
    }
    bVar3 = local_e8[(int)ppfVar11];
    bVar4 = false;
    if (bVar3 != 0) {
      ppfVar11 = (float **)(uint)local_e8[uVar16];
    }
    if ((((bVar3 == 0 || ppfVar11 == (float **)0x0) || uVar20 == 0) || (uVar15 != 0)) ||
       (pfVar28 = DAT_0014618c, bVar22 && bVar23)) {
      if (local_e8[(int)ppfVar12] == 0) {
        if (local_e8[uVar21] == 0) goto LAB_00146630;
        bVar24 = local_e8[uVar16] == 0;
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
        if (local_e8[uVar21] == 0) {
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
        uVar44 = CONCAT44(fVar32,fVar36 + ALBW_AS_F32(local_244));
      }
    }
    else {
      fVar36 = fVar36 + ALBW_AS_F32(local_244);
      uVar44 = CONCAT44(fVar32,fVar36);
      fVar32 = ALBW_AS_F32(local_244) * fVar32 * DAT_001465f4;
      uVar15 = uVar13 | (uint)(fVar36 < fVar32) << 0x1f | (uint)(fVar36 == fVar32) << 0x1e;
      uVar26 = uVar15 | (uint)(NAN(fVar36) || NAN(fVar32)) << 0x1c;
      bVar3 = (byte)(uVar15 >> 0x18);
      if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(uVar26 >> 0x1c) & 1)) break;
    }
    if (bVar4) {
      pfVar37 = pfVar41;
      func_00115154((float *)&local_250,(float *)&local_254,*(int *)(param_1 + 1000) + 0x40000000);
      pfVar33 = local_1c8;
      local_e4 = (float *)CF_FBITS((ALBW_AS_F32(local_250) * ALBW_AS_F32(local_244)));
      local_dc = ALBW_AS_F32(local_254) * ALBW_AS_F32(local_244);
      local_e0 = pfVar37;
      func_00115D70((float *)&local_1c0,(float *)&local_e4,ALBW_AS_F32(pfVar28));
      local_124 = local_1c0;
      pfStack_120 = local_1bc;
      local_11c = local_1b8;
      func_00115C54(pfVar33,pfVar33,(float *)&local_124);
    }
    else {
      local_1b4 = (float *)CF_FBITS((ALBW_AS_F32(local_23c) * ALBW_AS_F32(local_244)));
      local_1ac = (float *)CF_FBITS((ALBW_AS_F32(local_238) * ALBW_AS_F32(local_244)));
      local_1b0 = pfVar41;
      func_00115D70((float *)&local_c0,(float *)&local_1b4,ALBW_AS_F32(pfVar28));
      local_1c0 = local_c0;
      local_1bc = pfStack_bc;
      local_1b8 = local_b8;
      func_00115C54(pfVar29,pfVar29,(float *)&local_1c0);
    }
    uVar20 = 0;
  } while( true );
  if (local_248 != (float *)0x0) {
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
          local_124 = (float *)*puVar5;
          pfStack_120 = (float *)puVar5[1];
          local_11c = (float *)puVar5[2];
          local_1c0 = pfVar33;
          local_1bc = pfVar29;
          local_1b8 = pfVar33;
          func_00115D70((float *)&local_e4,(float *)&local_1c0,fVar36);
          local_1b4 = local_e4;
          local_1b0 = local_e0;
          local_1ac = (float *)CF_FBITS(local_dc);
          func_00115C70((float *)&local_248,(float *)&local_124,(float *)&local_1b4);
          local_1c0 = pfVar33;
          local_1bc = pfVar29;
          local_1b8 = pfVar33;
          func_00115D70((float *)&local_d8,(float *)&local_1c0,fVar36);
          local_1b4 = local_d8;
          local_1b0 = local_d4;
          local_1ac = local_d0;
          func_00115C54((float *)&local_254,(float *)&local_124,(float *)&local_1b4);
          uVar20 = uVar26 & 0xfffffff;
          uVar26 = uVar20 | (uint)(ALBW_AS_F32(local_248) == in_s30) << 0x1e |
                   (uint)(in_s30 <= ALBW_AS_F32(local_248)) << 0x1d;
          bVar3 = (byte)(uVar26 >> 0x18);
          bVar23 = (bool)(bVar3 >> 6);
          bVar22 = (bool)(bVar3 >> 5 & 1);
          if (!bVar22 || bVar23) {
            uVar26 = uVar20 | (uint)(in_s30 == ALBW_AS_F32(local_254)) << 0x1e |
                     (uint)(ALBW_AS_F32(local_254) <= in_s30) << 0x1d;
            bVar3 = (byte)(uVar26 >> 0x18);
            bVar23 = (bool)(bVar3 >> 6);
            bVar22 = (bool)(bVar3 >> 5 & 1);
          }
          if (!bVar22 || bVar23) {
            uVar20 = uVar26 & 0xfffffff;
            uVar21 = uVar20 | (uint)(ALBW_AS_F32(local_1d8) < ALBW_AS_F32(local_240)) << 0x1f;
            uVar26 = uVar21 | (uint)(NAN(ALBW_AS_F32(local_1d8)) || NAN(ALBW_AS_F32(local_240))) << 0x1c;
            if (((byte)(uVar21 >> 0x1f) == ((byte)(uVar26 >> 0x1c) & 1)) &&
               (uVar26 = uVar20 | (uint)(ALBW_AS_F32(local_1d8) == ALBW_AS_F32(local_24c)) << 0x1e |
                         (uint)(ALBW_AS_F32(local_24c) <= ALBW_AS_F32(local_1d8)) << 0x1d,
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
    *local_1c8 = in_s30;
    local_1c8[1] = ALBW_AS_F32(local_230);
    local_1c8[2] = ALBW_AS_F32(local_1d8);
    pfVar37 = local_1d0;
  }
LAB_00146630:
  if (*(short *)(param_1 + 0x49c) < 0) {
    *(undefined2 *)(param_1 + 0x49c) = 0;
  }
  local_1cc = (int)*(char *)(param_1 + 0x4a0);
  local_254 = (float *)(int)(short)(*(short *)(param_1 + 0x49c) - (ushort)(local_1cc != 0));
  local_1d8 = (float *)0x0;
  local_1dc = (float *)(int)*(short *)(param_1 + 0x4a4);
  if (uVar19 != 0) {
    local_1c0 = *(float **)(param_1 + 0x484);
    local_1b8 = *(float **)(param_1 + 0x48c);
    local_234 = local_134;
    local_22c = local_1d4;
    uVar15 = uVar26 & 0xfffffff | (uint)(ALBW_AS_F32(pfVar39) < ALBW_AS_F32(pfVar37)) << 0x1f |
             (uint)(ALBW_AS_F32(pfVar39) == ALBW_AS_F32(pfVar37)) << 0x1e;
    uVar26 = uVar15 | (uint)(NAN(ALBW_AS_F32(pfVar39)) || NAN(ALBW_AS_F32(pfVar37))) << 0x1c;
    bVar3 = (byte)(uVar15 >> 0x18);
    local_1bc = pfVar37;
    if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(uVar26 >> 0x1c) & 1)) {
      local_1bc = pfVar39;
    }
    local_1d8 = (float *)0x1;
    local_230 = local_1bc;
    bVar23 = func_00148614(param_1,(undefined4 *)(&local_234),(undefined4 *)(&local_1c0),local_1f4);
    if (!bVar23) {
      uVar19 = 0;
    }
  }
  *(short *)(param_1 + 0x49c) = (short)uVar19;
  *(undefined1 *)(param_1 + 0x4a0) = 0;
  if (uVar19 != 0) {
    local_234 = *(float **)(param_1 + 0x484);
    local_22c = *(float **)(param_1 + 0x48c);
    uVar35 = ZEXT48(fparam_0);
    local_1c0 = (float *)CF_FBITS(-ALBW_AS_F32(local_238));
    local_1b8 = local_23c;
    pfVar33 = pfVar41;
    local_230 = pfVar37;
    local_1bc = pfVar41;
    func_00115D70((float *)&local_124,(float *)&local_1c0,ALBW_AS_F32(fparam_0));
    local_1a4 = local_124;
    local_1a0 = pfStack_120;
    local_19c = local_11c;
    func_00115C54((float *)&local_250,(float *)&local_234,(float *)&local_1a4);
    local_1b8 = (float *)CF_FBITS(-ALBW_AS_F32(local_23c));
    local_1c0 = local_238;
    local_1bc = pfVar33;
    func_00115D70((float *)&local_124,(float *)&local_1c0,ALBW_AS_F32(uVar35));
    local_1a4 = local_124;
    local_1a0 = pfStack_120;
    local_19c = local_11c;
    func_00115C54((float *)&local_1b4,(float *)&local_234,(float *)&local_1a4);
    if (local_1f4 == 0) {
LAB_001468ac:
      local_250 = local_234;
      local_1b4 = local_234;
    }
    else if (local_1f4 == 1) {
LAB_001468bc:
      local_248 = local_22c;
      local_1ac = local_22c;
    }
    else {
      if (local_1f4 == 2) goto LAB_001468ac;
      if (local_1f4 == 3) goto LAB_001468bc;
    }
    bVar23 = func_00148614(param_1,(undefined4 *)(&local_250),(undefined4 *)(&local_1b4),4);
    if (bVar23) {
      *(float **)(param_1 + 0x488) = pfVar37;
      local_1fc = 1;
      do {
        pfVar33 = local_1c8;
        fVar36 = ALBW_AS_F32(((ulonglong)uVar44 >> 0x20));
        uVar34 = CONCAT44(fVar36,pfVar41);
        local_a8 = (float *)CF_FBITS((ALBW_AS_F32(local_23c) * fVar36));
        local_a0 = (float *)CF_FBITS((ALBW_AS_F32(local_238) * fVar36));
        fVar36 = (float)VectorSignedToFloat(local_1fc,(byte)(uVar26 >> 0x15) & 3);
        local_a4 = pfVar41;
        func_00115D70((float *)&local_94,(float *)&local_a8,fVar36);
        local_1b4 = local_94;
        local_1b0 = (float *)uStack_90;
        local_1ac = (float *)uStack_8c;
        func_00115C54((float *)&local_c0,pfVar33,(float *)&local_1b4);
        local_a8 = local_23c;
        local_a4 = (float *)uVar34;
        local_a0 = local_238;
        func_00115D70((float *)&local_88,(float *)&local_a8,ALBW_AS_F32(uVar35));
        local_1b4 = local_88;
        local_1b0 = (float *)uStack_84;
        local_1ac = (float *)uStack_80;
        func_00115C54((float *)&local_c0,(float *)&local_c0,(float *)&local_1b4);
        local_a8 = (float *)CF_FBITS(-ALBW_AS_F32(local_238));
        local_a4 = (float *)uVar34;
        local_a0 = local_23c;
        func_00115D70((float *)&local_7c,(float *)&local_a8,ALBW_AS_F32(uVar35));
        local_1b4 = local_7c;
        local_1b0 = (float *)uStack_78;
        local_1ac = (float *)uStack_74;
        func_00115C54((float *)&local_234,(float *)&local_c0,(float *)&local_1b4);
        local_a0 = (float *)CF_FBITS(-ALBW_AS_F32(local_23c));
        local_a8 = local_238;
        local_a4 = (float *)uVar34;
        func_00115D70((float *)&local_70,(float *)&local_a8,ALBW_AS_F32(uVar35));
        local_1b4 = local_70;
        local_1b0 = pfStack_6c;
        local_1ac = pfStack_68;
        func_00115C54((float *)&local_1a4,(float *)&local_c0,(float *)&local_1b4);
        local_108 = ALBW_AS_F32(pfVar39) + fVar30;
        local_114 = ALBW_AS_F32(pfVar39) + fVar27;
        iVar6 = 0;
        do {
          if (uVar19 == 0) goto LAB_00146cb4;
          fVar36 = ALBW_AS_F32(((ulonglong)uVar34 >> 0x20));
          local_d8 = (float *)CF_FBITS((ALBW_AS_F32(local_23c) * fVar36));
          local_d0 = (float *)CF_FBITS((ALBW_AS_F32(local_238) * fVar36));
          fVar36 = (float)VectorSignedToFloat(iVar6,(byte)(uVar26 >> 0x15) & 3);
          local_d4 = (float *)uVar34;
          func_00115D70((float *)&local_100,(float *)&local_d8,fVar36);
          local_124 = local_100;
          pfStack_120 = pfStack_fc;
          local_11c = local_f8;
          func_00115D70((float *)&local_124,(float *)&local_124,ALBW_AS_F32(uVar35));
          func_00115C70((float *)&local_e4,(float *)&local_234,(float *)&local_124);
          func_00115C70((float *)&local_1c0,(float *)&local_1a4,(float *)&local_124);
          iVar14 = 0;
          do {
            if (uVar19 == 0) break;
            if ((iVar6 == 0 || iVar14 == 0) || iVar14 == 1) {
              fVar36 = (float)VectorSignedToFloat(iVar14,(byte)(uVar26 >> 0x15) & 3);
              local_118 = ALBW_AS_F32(local_e4) + (ALBW_AS_F32(local_1c0) - ALBW_AS_F32(local_e4)) * fVar36;
              local_110 = local_dc + (ALBW_AS_F32(local_1b8) - local_dc) * fVar36;
              local_10c = local_118;
              local_104 = local_110;
              func_0014F0B0(param_1);
              *(float **)(param_1 + 0x470) = pfVar38;
              *(undefined1 *)(param_1 + 0x474) = 0;
              *(undefined1 *)(param_1 + 0x4a1) = 0;
              func_004A8030(*piVar18,&local_228,3);
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
                  local_224 = local_98;
                  local_108 = *(float *)(param_1 + 0x470) + ALBW_AS_F32(((ulonglong)uVar42 >> 0x20));
                  local_114 = *(float *)(param_1 + 0x470) + ALBW_AS_F32(uVar42);
                  local_214 = (float *)local_9c;
                  iVar7 = func_004A8030(*piVar18,&local_228,4);
                  local_214 = local_1c4;
                  if ((iVar7 != 0) && (*(char *)(param_1 + 0x4a1) == '\0')) {
                    uVar19 = 0;
                  }
                  local_114 = ALBW_AS_F32(pfVar39) + fVar27;
                  local_224 = local_18c;
                  local_108 = ALBW_AS_F32(pfVar39) + fVar30;
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
          local_b4 = local_23c;
          local_b0 = (undefined4)uVar34;
          local_ac = local_238;
          func_00115C70((float *)&local_234,(float *)&local_234,(float *)&local_b4);
          local_b4 = local_23c;
          local_b0 = (undefined4)uVar34;
          local_ac = local_238;
          func_00115C70((float *)&local_1a4,(float *)&local_1a4,(float *)&local_b4);
          uVar19 = 1;
          iVar6 = 0;
          do {
            fVar36 = ALBW_AS_F32(((ulonglong)uVar34 >> 0x20));
            local_d8 = (float *)CF_FBITS((ALBW_AS_F32(local_23c) * fVar36));
            local_d0 = (float *)CF_FBITS((ALBW_AS_F32(local_238) * fVar36));
            fVar36 = (float)VectorSignedToFloat(iVar6,(byte)(uVar26 >> 0x15) & 3);
            local_d4 = (float *)uVar34;
            func_00115D70((float *)&local_f4,(float *)&local_d8,fVar36);
            local_e4 = local_f4;
            local_e0 = pfStack_f0;
            local_dc = fStack_ec;
            func_00115C70((float *)&local_124,(float *)&local_234,(float *)&local_e4);
            func_00115C70((float *)&local_1c0,(float *)&local_1a4,(float *)&local_e4);
            iVar14 = 0;
            do {
              if (uVar19 == 0) break;
              if ((iVar6 == 0 || iVar14 == 0) || iVar14 == 1) {
                fVar36 = (float)VectorSignedToFloat(iVar14,(byte)(uVar26 >> 0x15) & 3);
                local_118 = ALBW_AS_F32(local_124) + (ALBW_AS_F32(local_1c0) - ALBW_AS_F32(local_124)) * fVar36;
                local_110 = ALBW_AS_F32(local_11c) + (ALBW_AS_F32(local_1b8) - ALBW_AS_F32(local_11c)) * fVar36;
                local_10c = local_118;
                local_104 = local_110;
                func_0014F0B0(param_1);
                *(float **)(param_1 + 0x470) = pfVar38;
                *(undefined1 *)(param_1 + 0x474) = 0;
                *(undefined1 *)(param_1 + 0x4a1) = 0;
                func_004A8030(*piVar18,&local_228,3);
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
                    local_224 = local_98;
                    local_108 = *(float *)(param_1 + 0x470) + ALBW_AS_F32(((ulonglong)uVar42 >> 0x20));
                    local_114 = *(float *)(param_1 + 0x470) + ALBW_AS_F32(uVar42);
                    local_214 = (float *)local_9c;
                    iVar7 = func_004A8030(*piVar18,&local_228,4);
                    local_214 = local_1c4;
                    if ((iVar7 != 0) && (*(char *)(param_1 + 0x4a1) == '\0')) {
                      uVar19 = 0;
                    }
                    local_114 = ALBW_AS_F32(pfVar39) + fVar27;
                    local_224 = local_18c;
                    local_108 = ALBW_AS_F32(pfVar39) + fVar30;
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
                local_250 = local_234;
                local_24c = local_230;
                local_248 = local_22c;
                local_1c0 = local_1a4;
                local_1bc = local_1a0;
                local_1b8 = local_19c;
                if (local_1f4 == 0) {
LAB_00146f10:
                  local_250 = local_c0;
                  local_1c0 = local_c0;
                }
                else if (local_1f4 == 1) {
LAB_00146f20:
                  local_248 = local_b8;
                  local_1b8 = local_b8;
                }
                else {
                  if (local_1f4 == 2) goto LAB_00146f10;
                  if (local_1f4 == 3) goto LAB_00146f20;
                }
                bVar23 = func_00148614(param_1,(undefined4 *)(&local_250),(undefined4 *)(&local_1c0),4);
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
          local_250 = local_234;
          local_24c = local_230;
          local_248 = local_22c;
          local_cc = local_1a4;
          local_c8 = local_1a0;
          local_c4 = local_19c;
          if (local_1f4 == 0) {
LAB_00146c5c:
            local_250 = local_c0;
            local_cc = local_c0;
          }
          else if (local_1f4 == 1) {
LAB_00146c6c:
            local_248 = local_b8;
            local_c4 = local_b8;
          }
          else {
            if (local_1f4 == 2) goto LAB_00146c5c;
            if (local_1f4 == 3) goto LAB_00146c6c;
          }
          bVar23 = func_00148614(param_1,(undefined4 *)(&local_250),(undefined4 *)(&local_cc),4);
          if (!bVar23) goto LAB_00146cb4;
LAB_00146c98:
          *(short *)(param_1 + 0x49c) = *(short *)(param_1 + 0x49c) + 1;
        }
        if (*(char *)(param_1 + 0x4a0) != '\0') break;
        iVar14 = local_1fc + 1;
        bVar23 = SBORROW4(iVar14,0x10);
        iVar6 = local_1fc + -0xf;
        if (iVar14 < 0x10) {
          bVar23 = SBORROW4(iVar14,8);
          iVar6 = local_1fc + -7;
        }
        local_1fc = iVar14;
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
  local_24c = pfVar33;
  if ((int)pfVar33 < (int)local_254) {
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
    } while ((int)pfVar33 < (int)local_254);
  }
  if ((local_1cc != 0) && ((*(char *)(param_1 + 0x4a0) == '\0' || (local_24c != local_254)))) {
    piVar8 = piVar17;
    if (local_254 < &DataAbort) {
      piVar8 = piVar17 + (int)local_254 * 2;
    }
    iVar6 = *piVar8;
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x1c) == piVar8[1])) {
      *(uint *)(iVar6 + 0x3c) = *(uint *)(iVar6 + 0x3c) & 0xffffffbb | 8;
      func_004A3700(iVar6);
    }
  }
  pfVar33 = local_254;
  if ((int)local_254 < (int)local_24c) {
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
        func_004A1B9C((int *)&local_248,*(int *)(param_1 + 0x344),(uint *)s_Sight_001473e8);
        *piVar8 = (int)local_248;
        piVar8[1] = (int)local_244;
      }
      pfVar33 = (float *)((int)pfVar33 + 1);
    } while ((int)pfVar33 < (int)local_24c);
  }
  if ((*(char *)(param_1 + 0x4a0) != '\0') && ((local_1cc == 0 || (local_24c != local_254)))) {
    piVar8 = piVar17;
    if (local_24c < &DataAbort) {
      piVar8 = piVar17 + (int)local_24c * 2;
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
      func_004A1B9C((int *)&local_250,*(int *)(param_1 + 0x344),(uint *)s_SightHalf_001473f0);
      *piVar8 = (int)local_250;
      piVar8[1] = (int)local_24c;
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
      local_1c4 = (float *)CF_FBITS((ALBW_AS_F32(local_23c) * fVar31));
      local_1bc = (float *)CF_FBITS((ALBW_AS_F32(local_238) * fVar31));
      fVar32 = (float)VectorSignedToFloat(uVar15,(byte)(uVar26 >> 0x15) & 3);
      pfVar37 = pfVar41;
      local_1c0 = pfVar41;
      func_00115D70((float *)&local_cc,(float *)&local_1c4,fVar32);
      local_248 = local_cc;
      local_244 = local_c8;
      local_240 = local_c4;
      func_00115C54((float *)&local_e4,local_1c8,(float *)&local_248);
      if (((int)*(short *)(param_1 + 0x49c) - 1U == uVar15) && (*(char *)(param_1 + 0x4a0) != '\0'))
      {
        local_1b8 = (float *)CF_FBITS((ALBW_AS_F32(local_23c) * fVar31));
        local_1b0 = (float *)CF_FBITS((ALBW_AS_F32(local_238) * fVar31));
        local_1b4 = pfVar37;
        func_00115D88((float *)&local_c0,(float *)&local_1b8,fVar27);
        local_d8 = local_c0;
        local_d4 = pfStack_bc;
        local_d0 = local_b8;
        func_00115C70((float *)&local_e4,(float *)&local_e4,(float *)&local_d8);
        uVar20 = uVar26 & 0xfffffff;
        uVar21 = uVar20 | (uint)(ALBW_AS_F32(local_23c) < ALBW_AS_F32(pfVar37)) << 0x1f |
                 (uint)(ALBW_AS_F32(local_23c) == ALBW_AS_F32(pfVar37)) << 0x1e;
        uVar26 = uVar21 | (uint)(NAN(ALBW_AS_F32(local_23c)) || NAN(ALBW_AS_F32(pfVar37))) << 0x1c;
        bVar3 = (byte)(uVar21 >> 0x18);
        pfVar29 = local_23c;
        if ((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(uVar26 >> 0x1c) & 1)) {
          pfVar29 = (float *)CF_FBITS(-ALBW_AS_F32(local_23c));
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
          local_1d0 = DAT_001473fc;
          if ((*piVar8 != 0) && (*(int *)(*piVar8 + 0x1c) == piVar8[1])) {
            uVar20 = uVar20 | (uint)(fVar36 < ALBW_AS_F32(pfVar37)) << 0x1f |
                     (uint)(fVar36 == ALBW_AS_F32(pfVar37)) << 0x1e;
            uVar26 = uVar20 | (uint)(NAN(fVar36) || NAN(ALBW_AS_F32(pfVar37))) << 0x1c;
            bVar3 = (byte)(uVar20 >> 0x18);
            fVar32 = fVar36;
            if ((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(uVar26 >> 0x1c) & 1)) {
              fVar32 = ALBW_AS_F32(uVar35);
            }
            local_14c = pfVar37;
            local_148 = pfVar33;
            if (DAT_0014740c < (int)ALBW_AS_U32(fVar32)) {
              local_14c = pfVar33;
              local_148 = pfVar37;
            }
            local_144 = pfVar37;
            func_00115E10((float *)&local_124,(float *)&local_14c,DAT_001473fc);
            local_158 = local_124;
            local_154 = pfStack_120;
            local_150 = local_11c;
            func_00115DC8((float *)&local_158);
            func_00115E10((float *)&local_1a4,local_1d0,(float *)&local_158);
            local_140 = local_1a4;
            local_13c = local_1a0;
            local_138 = local_19c;
            func_00115DC8((float *)&local_140);
            local_188 = local_158;
            local_178 = local_154;
            local_168 = local_150;
            local_184 = local_140;
            local_174 = local_13c;
            local_164 = local_138;
            local_180 = *local_1d0;
            local_170 = local_1d0[1];
            local_160 = local_1d0[2];
            local_17c = local_e4;
            local_16c = local_e0;
            local_15c = local_dc;
            func_004A2E80(*piVar8,(float *)&local_188,ALBW_AS_F32(pfVar33));
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
          func_004A2F38(iVar6,(undefined4 *)(&local_e4));
        }
      }
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)*(short *)(param_1 + 0x49c));
  }
  *(undefined2 *)(param_1 + 0x4a4) = 0;
  pfVar33 = pfVar41;
  if (local_1d8 == (float *)0x0 && *(short *)(param_1 + 0x49c) == 0) {
    *local_1c8 = ALBW_AS_F32(local_1e4);
    fVar27 = DAT_001478c0;
    local_1c8[1] = ALBW_AS_F32(local_1e0);
    local_1c8[2] = ALBW_AS_F32(local_1a8);
    local_1c4 = local_1e4;
    local_1c0 = local_1e0;
    local_1bc = local_1a8;
    local_240 = (float *)0x0;
    do {
      pfVar37 = local_1c8;
      if (*(char *)(param_1 + 0x4a3) == '\0') {
        iVar6 = 1;
      }
      else {
        iVar6 = 8;
      }
      if (iVar6 <= (int)local_240) break;
      fVar36 = ALBW_AS_F32(((ulonglong)uVar44 >> 0x20));
      bVar23 = true;
      local_1b8 = (float *)CF_FBITS((ALBW_AS_F32(local_23c) * fVar36));
      local_1b0 = (float *)CF_FBITS((ALBW_AS_F32(local_238) * fVar36));
      fVar36 = (float)VectorSignedToFloat((uint32_t)(uintptr_t)(local_240),(byte)(uVar26 >> 0x15) & 3);
      local_1b4 = pfVar41;
      func_00115D70((float *)&local_254,(float *)&local_1b8,fVar36);
      local_234 = local_254;
      local_230 = local_250;
      local_22c = local_24c;
      func_00115C54((float *)&local_1c4,pfVar37,(float *)&local_234);
      func_00115D70((float *)&local_1a4,(float *)&local_130,ALBW_AS_F32(fparam_0));
      local_234 = local_1a4;
      local_230 = local_1a0;
      local_22c = local_19c;
      func_00115C70((float *)&local_1f0,(float *)&local_1c4,(float *)&local_234);
      func_00115D70((float *)&local_124,(float *)&local_130,ALBW_AS_F32(fparam_0));
      local_234 = local_124;
      local_230 = pfStack_120;
      local_22c = local_11c;
      func_00115C54((float *)&local_198,(float *)&local_1c4,(float *)&local_234);
      iVar6 = DAT_001478c4;
      local_108 = ALBW_AS_F32(pfVar39) + fVar30;
      local_114 = ALBW_AS_F32(pfVar39) + fVar27;
      uVar15 = 0;
      pfVar29 = pfVar38;
      pfVar37 = pfVar43;
      do {
        uVar20 = 0;
        fVar36 = (float)VectorSignedToFloat(uVar15,(byte)(uVar26 >> 0x15) & 3);
        local_118 = ALBW_AS_F32(local_1f0) + (ALBW_AS_F32(local_198) - ALBW_AS_F32(local_1f0)) * fVar36;
        local_10c = local_118;
        do {
          if ((uVar20 < 2) || (uVar15 < 2)) {
            fVar36 = (float)VectorSignedToFloat(uVar20,(byte)(uVar26 >> 0x15) & 3);
            local_110 = ALBW_AS_F32(local_1e8) + (ALBW_AS_F32(local_190) - ALBW_AS_F32(local_1e8)) * fVar36;
            local_104 = local_110;
            func_0014F0B0(param_1);
            *(float **)(param_1 + 0x470) = pfVar38;
            *(undefined1 *)(param_1 + 0x474) = 0;
            *(undefined1 *)(param_1 + 0x4a1) = 0;
            *(float **)(param_1 + 0x47c) = pfVar43;
            *(float **)(param_1 + 0x480) = pfVar38;
            func_004A8030(*piVar18,&local_228,7);
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
      if (local_240 == (float *)0x0) {
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
        if (local_1f4 == 3) {
          if (iVar6 != 0) goto LAB_0014777c;
          iVar6 = 1;
        }
        else {
          if ((local_1f4 == 1) && (iVar6 == 1)) break;
          pfVar37 = local_1f0;
          if (iVar6 != 0) {
LAB_0014777c:
            pfVar37 = local_198;
          }
          iVar14 = 0;
LAB_00147784:
          do {
            if (!bVar23) break;
            pfVar29 = local_190;
            if (local_1f4 == 2) {
              if (iVar14 == 0) {
                iVar14 = 1;
                goto LAB_00147784;
              }
            }
            else {
              if ((local_1f4 == 0) && (iVar14 == 1)) break;
              if (iVar14 == 0) {
                pfVar29 = local_1e8;
              }
            }
            local_1a4 = pfVar37;
            local_1a0 = pfVar33;
            local_19c = pfVar29;
            bVar23 = func_00588EEC(*puVar5,(float *)&local_1a4,fVar36);
            iVar14 = iVar14 + 1;
            bVar23 = !bVar23;
          } while (iVar14 < 2);
          iVar6 = iVar6 + 1;
          if (1 < iVar6) break;
        }
      } while (bVar23);
      if (bVar23) break;
      if (local_1d8 == (float *)0x0 && local_240 == (float *)0x0) {
        local_1a4 = local_1e4;
        local_19c = local_1a8;
        local_254 = local_134;
        local_24c = local_1d4;
        uVar15 = uVar26 & 0xfffffff | (uint)(ALBW_AS_F32(pfVar39) < ALBW_AS_F32(pfVar33)) << 0x1f |
                 (uint)(ALBW_AS_F32(pfVar39) == ALBW_AS_F32(pfVar33)) << 0x1e;
        uVar26 = uVar15 | (uint)(NAN(ALBW_AS_F32(pfVar39)) || NAN(ALBW_AS_F32(pfVar33))) << 0x1c;
        bVar3 = (byte)(uVar15 >> 0x18);
        local_1a0 = pfVar33;
        if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(uVar26 >> 0x1c) & 1)) {
          local_1a0 = pfVar39;
        }
        local_250 = local_1a0;
        bVar23 = func_00148614(param_1,(undefined4 *)(&local_254),(undefined4 *)(&local_1a4),local_1f4);
        if (!bVar23) break;
      }
      local_254 = local_1f0;
      local_250 = pfStack_1ec;
      local_24c = local_1e8;
      local_1a4 = local_198;
      local_1a0 = pfStack_194;
      local_19c = local_190;
      if (local_1f4 == 0) {
LAB_001478e0:
        local_254 = local_1c4;
        local_1a4 = local_1c4;
      }
      else if (local_1f4 == 1) {
LAB_001478f0:
        local_24c = local_1bc;
        local_19c = local_1bc;
      }
      else {
        if (local_1f4 == 2) goto LAB_001478e0;
        if (local_1f4 == 3) goto LAB_001478f0;
      }
      bVar23 = func_00148614(param_1,(undefined4 *)(&local_254),(undefined4 *)(&local_1a4),4);
      if (!bVar23) break;
      *(short *)(param_1 + 0x4a4) = *(short *)(param_1 + 0x4a4) + 1;
      local_240 = (float *)((int)local_240 + 1);
    } while ((int)local_240 < 0x10);
  }
  uVar15 = (uint)*(short *)(param_1 + 0x4a4);
  piVar18 = (int *)(param_1 + 0x56c);
  if ((int)uVar15 < (int)local_1dc) {
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
    } while ((int)uVar15 < (int)local_1dc);
  }
  uVar15 = (uint)((ulonglong)uVar44 >> 0x20);
  pfVar39 = local_1dc;
  if ((int)local_1dc < (int)*(short *)(param_1 + 0x4a4)) {
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
        func_004A1B9C((int *)&local_250,*(int *)(param_1 + 0x344),(uint *)s_SightEdge_00147b8c);
        *piVar17 = (int)local_250;
        piVar17[1] = (int)local_24c;
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
    local_24c = local_1a8;
    local_254 = local_1e4;
    *local_1c8 = ALBW_AS_F32(local_1e4);
    local_1c8[1] = ALBW_AS_F32(pfVar33);
    local_1c8[2] = ALBW_AS_F32(local_1a8);
    if (0 < *(short *)(param_1 + 0x4a4)) {
      uVar35 = (ulonglong)uVar15;
      local_250 = pfVar33;
      do {
        local_234 = (float *)CF_FBITS((ALBW_AS_F32(local_23c) * ALBW_AS_F32(uVar35)));
        local_22c = (float *)CF_FBITS((ALBW_AS_F32(local_238) * ALBW_AS_F32(uVar35)));
        fVar30 = (float)VectorSignedToFloat(uVar20,(byte)(uVar26 >> 0x15) & 3);
        local_230 = pfVar41;
        func_00115D70((float *)&local_1d8,(float *)&local_234,fVar30);
        local_1e4 = local_1d8;
        local_1e0 = local_1d4;
        local_1dc = local_1d0;
        func_00115C54((float *)&local_254,local_1c8,(float *)&local_1e4);
        piVar17 = piVar18;
        if (uVar20 < 0x10) {
          piVar17 = piVar18 + uVar20 * 2;
        }
        iVar6 = *piVar17;
        if ((iVar6 != 0) && (*(int *)(iVar6 + 0x1c) == piVar17[1])) {
          func_004A2F38(iVar6,(undefined4 *)(&local_254));
        }
        uVar20 = uVar20 + 1;
      } while ((int)uVar20 < (int)*(short *)(param_1 + 0x4a4));
    }
  }
  return;
}

