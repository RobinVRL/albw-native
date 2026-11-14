/* compilefix: USA 00553EC4 (EU 00553E9C), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [4]
 *  - explicit casts at pointer-type mismatches (identity on the ARM) [4]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CA8(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern int func_0042CF00(int param_1,float *param_2,float *param_3,int param_4,float fparam_0);
extern int func_004323A0(undefined4 *param_1,undefined4 *param_2);
extern int func_004356B4(int *param_1);
extern int func_0048B5D4(float *param_1,float *param_2,uint param_3);
extern int func_00491B3C(float *param_1,float *param_2);
extern float DAT_00554260;
extern int * * * * * *DAT_00554264;
extern int * * * * * *DAT_00554268;
extern float DAT_0055426c;
extern float DAT_00554270;
extern uint DAT_00554274;
extern uint DAT_00554278;
extern float *DAT_0055427c;
extern float DAT_00554280;
extern uint DAT_00554284;
extern uint DAT_005547cc;
extern float *DAT_005547d0;
extern float *DAT_005547d4;
extern int DAT_005547d8;

// USA 00553EC4 <- EU 00553E9C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *
// PARAM param_6 Stack[0x4]:4 float *
// PARAM param_7 Stack[0x8]:4 int * * * *
// PARAM param_8 Stack[0xc]:4 int
// GLOBAL DAT_00554260 float
// GLOBAL DAT_00554264 int * * * * * *
// GLOBAL DAT_00554268 int * * * * * *
// GLOBAL DAT_0055426c float
// GLOBAL DAT_00554270 float
// GLOBAL DAT_00554274 uint
// GLOBAL DAT_00554278 uint
// GLOBAL DAT_0055427c float *
// GLOBAL DAT_00554280 float
// GLOBAL DAT_00554284 uint
// GLOBAL DAT_005547cc uint
// GLOBAL DAT_005547d0 float *
// GLOBAL DAT_005547d4 float *
// GLOBAL DAT_005547d8 int

/* WARNING: Type propagation algorithm not settling */

undefined4
func_00553EC4(undefined4 param_1,float *param_2,float *param_3,float *param_4,float *param_5,
             float *param_6,int ****param_7,int param_8)

{
  byte bVar1;
  int ******ppppppiVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float *pfVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint in_fpscr;
  uint uVar13;
  uint uVar14;
  float fVar15;
  int ******ppppppiVar16;
  ulonglong uVar17;
  int ******ppppppiVar18;
  int ******ppppppiVar19;
  longlong lVar20;
  float fVar21;
  _Alignas(8) unsigned char albw_frame[0x2f0];
  #define local_2ec (*(float *)(albw_frame + 0x4))
  #define fStack_2e8 (*(float *)(albw_frame + 0x8))
  #define fStack_2e4 (*(float *)(albw_frame + 0xc))
  #define local_2e0 (*(float *)(albw_frame + 0x10))
  #define fStack_2dc (*(float *)(albw_frame + 0x14))
  #define fStack_2d8 (*(float *)(albw_frame + 0x18))
  #define local_2d4 (*(float *)(albw_frame + 0x1c))
  #define fStack_2d0 (*(float *)(albw_frame + 0x20))
  #define fStack_2cc (*(float *)(albw_frame + 0x24))
  #define local_2c8 ((int ****** *)(albw_frame + 0x28))
  #define local_2b8 (*(int ****** *)(albw_frame + 0x38))
  #define local_2b4 (*(int ****** *)(albw_frame + 0x3c))
  #define local_2b0 (*(int ****** *)(albw_frame + 0x40))
  #define local_2ac (*(float *)(albw_frame + 0x44))
  #define local_2a8 (*(undefined2 *)(albw_frame + 0x48))
  #define local_2a4 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_2a0 (*(undefined4 *)(albw_frame + 0x50))
  #define local_298 (*(undefined4 *)(albw_frame + 0x58))
  #define local_294 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_290 (*(undefined1 *)(albw_frame + 0x60))
  #define local_280 ((int ****** *)(albw_frame + 0x70))
  #define local_270 (*(int ****** *)(albw_frame + 0x80))
  #define local_26c (*(int ****** *)(albw_frame + 0x84))
  #define local_268 (*(int ****** *)(albw_frame + 0x88))
  #define local_264 (*(float *)(albw_frame + 0x8c))
  #define local_260 (*(undefined2 *)(albw_frame + 0x90))
  #define local_25c (*(undefined4 *)(albw_frame + 0x94))
  #define local_258 (*(undefined4 *)(albw_frame + 0x98))
  #define local_250 (*(undefined4 *)(albw_frame + 0xa0))
  #define local_24c (*(undefined4 *)(albw_frame + 0xa4))
  #define local_248 (*(undefined1 *)(albw_frame + 0xa8))
  #define local_238 (*(float *)(albw_frame + 0xb8))
  #define local_234 (*(float *)(albw_frame + 0xbc))
  #define local_230 (*(float *)(albw_frame + 0xc0))
  #define local_228 (*(int ******* *)(albw_frame + 0xc8))
  #define local_224 (*(int ******* *)(albw_frame + 0xcc))
  #define local_220 (*(float * *)(albw_frame + 0xd0))
  #define local_21c (*(float *)(albw_frame + 0xd4))
  #define fStack_218 (*(float *)(albw_frame + 0xd8))
  #define fStack_214 (*(float *)(albw_frame + 0xdc))
  #define local_210 (*(float *)(albw_frame + 0xe0))
  #define local_20c (*(float *)(albw_frame + 0xe4))
  #define local_208 (*(float *)(albw_frame + 0xe8))
  #define local_204 (*(undefined4 *)(albw_frame + 0xec))
  #define local_200 (*(undefined4 *)(albw_frame + 0xf0))
  #define local_1f8 (*(undefined4 *)(albw_frame + 0xf8))
  #define local_1f4 (*(undefined4 *)(albw_frame + 0xfc))
  #define local_1f0 (*(undefined1 *)(albw_frame + 0x100))
  #define local_1e0 (*(float *)(albw_frame + 0x110))
  #define fStack_1dc (*(float *)(albw_frame + 0x114))
  #define local_1d8 (*(float *)(albw_frame + 0x118))
  #define local_1d4 (*(int ****** *)(albw_frame + 0x11c))
  #define local_1d0 (*(float *)(albw_frame + 0x120))
  #define fStack_1cc (*(float *)(albw_frame + 0x124))
  #define fStack_1c8 (*(float *)(albw_frame + 0x128))
  #define fStack_1c4 (*(float *)(albw_frame + 0x12c))
  #define fStack_1c0 (*(float *)(albw_frame + 0x130))
  #define fStack_1bc (*(float *)(albw_frame + 0x134))
  #define local_1b8 (*(int ****** *)(albw_frame + 0x138))
  #define local_1b4 (*(int ****** *)(albw_frame + 0x13c))
  #define local_1b0 (*(int ****** *)(albw_frame + 0x140))
  #define ppppppiStack_1ac (*(int ****** *)(albw_frame + 0x144))
  #define local_1a8 (*(int ****** *)(albw_frame + 0x148))
  #define local_1a4 (*(float *)(albw_frame + 0x14c))
  #define local_1a0 (*(int ****** *)(albw_frame + 0x150))
  #define local_19c (*(int ****** *)(albw_frame + 0x154))
  #define local_198 (*(int ****** *)(albw_frame + 0x158))
  #define afStack_190 ((float *)(albw_frame + 0x160))
  #define local_160 (*(int ****** *)(albw_frame + 0x190))
  #define local_15c (*(int ****** *)(albw_frame + 0x194))
  #define local_158 (*(int ****** *)(albw_frame + 0x198))
  #define local_154 (*(int ****** *)(albw_frame + 0x19c))
  #define ppppppiStack_150 (*(int ****** *)(albw_frame + 0x1a0))
  #define ppppppiStack_14c (*(int ****** *)(albw_frame + 0x1a4))
  #define fStack_148 (*(float *)(albw_frame + 0x1a8))
  #define local_144 (*(int ****** *)(albw_frame + 0x1ac))
  #define local_140 (*(int ****** *)(albw_frame + 0x1b0))
  #define ppppppiStack_13c (*(int ****** *)(albw_frame + 0x1b4))
  #define ppppppiStack_138 (*(int ****** *)(albw_frame + 0x1b8))
  #define local_134 (*(int ****** *)(albw_frame + 0x1bc))
  #define ppppppiStack_130 (*(int ****** *)(albw_frame + 0x1c0))
  #define ppppppiStack_12c (*(int ****** *)(albw_frame + 0x1c4))
  #define apppppiStack_128 ((int ***** *)(albw_frame + 0x1c8))
  #define local_c8 (*(int ****** *)(albw_frame + 0x228))
  #define ppppppiStack_c4 (*(int ****** *)(albw_frame + 0x22c))
  #define ppppppiStack_c0 (*(int ****** *)(albw_frame + 0x230))
  #define local_bc (*(int ****** *)(albw_frame + 0x234))
  #define ppppppiStack_b8 (*(int ****** *)(albw_frame + 0x238))
  #define ppppppiStack_b4 (*(int ****** *)(albw_frame + 0x23c))
  #define local_b0 (*(int ****** *)(albw_frame + 0x240))
  #define local_ac (*(int ****** *)(albw_frame + 0x244))
  #define local_a8 (*(int ****** *)(albw_frame + 0x248))
  #define local_a4 (*(int ****** *)(albw_frame + 0x24c))
  #define ppppppiStack_a0 (*(int ****** *)(albw_frame + 0x250))
  #define ppppppiStack_9c (*(int ****** *)(albw_frame + 0x254))
  #define local_90 (*(int ****** *)(albw_frame + 0x260))
  #define local_8c (*(float *)(albw_frame + 0x264))
  #define fStack_88 (*(float *)(albw_frame + 0x268))
  #define fStack_84 (*(float *)(albw_frame + 0x26c))
  #define fStack_80 (*(float *)(albw_frame + 0x270))
  #define fStack_7c (*(float *)(albw_frame + 0x274))
  #define fStack_78 (*(float *)(albw_frame + 0x278))
  #define afStack_74 ((float *)(albw_frame + 0x27c))
  #define local_68 (*(int ****** *)(albw_frame + 0x288))
  #define local_64 (*(int ****** *)(albw_frame + 0x28c))
  #define ppppppiStack_60 (*(int ****** *)(albw_frame + 0x290))
  #define ppppppiStack_5c (*(int ****** *)(albw_frame + 0x294))
  #define ppppppiStack_58 (*(int ****** *)(albw_frame + 0x298))
  #define ppppppiStack_54 (*(int ****** *)(albw_frame + 0x29c))
  #define ppppppiStack_50 (*(int ****** *)(albw_frame + 0x2a0))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x2bc))
  #define local_30 (*(float * *)(albw_frame + 0x2c0))
  #define pfStack_2c (*(float * *)(albw_frame + 0x2c4))
  #define pfStack_28 (*(float * *)(albw_frame + 0x2c8))
  local_1a8 = DAT_00554264;
  local_2c8[0] = DAT_00554264;
  local_2ac = DAT_00554260;
  local_298 = 0;
  local_2a4 = 0;
  local_2a8 = 0x1f;
  local_294 = 0;
  local_2a0 = 0;
  local_290 = 0;
  local_280[0] = DAT_00554264;
  local_264 = DAT_00554260;
  local_25c = 0;
  local_258 = 0;
  local_260 = 0x1f;
  local_250 = 0;
  local_24c = 0;
  local_248 = 0;
  local_2e0 = *param_4;
  fStack_2dc = param_4[1];
  fStack_2d8 = param_4[2];
  local_2d4 = *param_5;
  fStack_2d0 = param_5[1];
  fStack_2cc = param_5[2];
  fVar21 = DAT_00554260;
  uStack_34 = param_1;
  local_30 = param_2;
  pfStack_2c = param_3;
  pfStack_28 = param_4;
  func_00115DC8(&local_2d4);
  ppppppiVar2 = DAT_00554268;
  local_1d4 = DAT_00554268;
  local_1d0 = local_2e0;
  fStack_1cc = fStack_2dc;
  fStack_1c8 = fStack_2d8;
  fStack_1c4 = local_2d4;
  fStack_1c0 = fStack_2d0;
  fStack_1bc = fStack_2cc;
  fVar5 = *param_4;
  fVar6 = param_4[1];
  fVar7 = param_4[2];
  local_2ec = *param_6;
  fStack_2e8 = param_6[1];
  fStack_2e4 = param_6[2];
  func_00115DC8(&local_2ec);
  lVar20 = (ulonglong)(uint)ALBW_AS_U32(DAT_0055426c) << 0x20;
  local_90 = ppppppiVar2;
  fStack_80 = local_2ec;
  fStack_7c = fStack_2e8;
  fStack_78 = fStack_2e4;
  local_224 = local_2c8;
  local_228 = (int *******)param_7;
  local_8c = fVar5;
  fStack_88 = fVar6;
  fStack_84 = fVar7;
  func_00115D70(&local_210,&fStack_1c4,DAT_0055426c);
  local_238 = local_210;
  local_234 = local_20c;
  local_230 = local_208;
  func_00115C70(&local_210,&local_1d0,&local_238);
  local_21c = local_210;
  fStack_218 = local_20c;
  fStack_214 = local_208;
  fVar5 = DAT_00554270;
  iVar3 = func_0042CF00((int)local_228,&local_21c,&fStack_1c4,(int)local_224,DAT_00554270);
  in_fpscr = in_fpscr & 0xfffffff;
  uVar14 = in_fpscr | (uint)(*param_6 == *param_5) << 0x1e;
  if (((SUB41(uVar14 >> 0x1e,0)) &&
      (uVar14 = in_fpscr | (uint)(param_6[1] == param_5[1]) << 0x1e, SUB41(uVar14 >> 0x1e,0))) &&
     (uVar14 = in_fpscr | (uint)(param_6[2] == param_5[2]) << 0x1e, SUB41(uVar14 >> 0x1e,0))) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  if (!bVar11) {
    local_228 = local_280;
    local_220 = &local_8c;
    func_00115D70(&local_210,&fStack_80,ALBW_AS_F32(((ulonglong)lVar20 >> 0x20)));
    local_238 = local_210;
    local_234 = local_20c;
    local_230 = local_208;
    func_00115C70(&local_210,local_220,&local_238);
    local_21c = local_210;
    fStack_218 = local_20c;
    fStack_214 = local_208;
    func_0042CF00((int)param_7,&local_21c,&fStack_80,(int)local_228,fVar5);
  }
  bVar11 = false;
  if (iVar3 == 0) {
    return 2;
  }
  uVar17 = (ulonglong)DAT_00554274;
  local_1a0 = local_2b8;
  local_19c = local_2b4;
  local_198 = local_2b0;
LAB_005540f4:
  fVar6 = ALBW_AS_F32(((ulonglong)lVar20 >> 0x20));
  uVar13 = uVar14 & 0xfffffff | (uint)(*param_3 == ALBW_AS_F32(local_1a0)) << 0x1e |
           (uint)(ALBW_AS_F32(local_1a0) <= *param_3) << 0x1d;
  bVar1 = (byte)(uVar13 >> 0x18);
  bVar10 = (bool)(bVar1 >> 6);
  bVar12 = (bool)(bVar1 >> 5 & 1);
  if (!bVar12 || bVar10) {
    uVar13 = uVar14 & 0xfffffff | (uint)(ALBW_AS_F32(local_1a0) == param_3[3]) << 0x1e |
             (uint)(param_3[3] <= ALBW_AS_F32(local_1a0)) << 0x1d;
    bVar1 = (byte)(uVar13 >> 0x18);
    bVar10 = (bool)(bVar1 >> 6);
    bVar12 = (bool)(bVar1 >> 5 & 1);
  }
  if (bVar12 && !bVar10) {
LAB_00554158:
    bVar10 = false;
  }
  else {
    uVar14 = uVar13 & 0xfffffff;
    uVar13 = uVar14 | (uint)(param_3[1] == ALBW_AS_F32(local_19c)) << 0x1e |
             (uint)(ALBW_AS_F32(local_19c) <= param_3[1]) << 0x1d;
    bVar1 = (byte)(uVar13 >> 0x18);
    bVar10 = (bool)(bVar1 >> 6);
    bVar12 = (bool)(bVar1 >> 5 & 1);
    if (!bVar12 || bVar10) {
      uVar13 = uVar14 | (uint)(ALBW_AS_F32(local_19c) == param_3[4]) << 0x1e |
               (uint)(param_3[4] <= ALBW_AS_F32(local_19c)) << 0x1d;
      bVar1 = (byte)(uVar13 >> 0x18);
      bVar10 = (bool)(bVar1 >> 6);
      bVar12 = (bool)(bVar1 >> 5 & 1);
    }
    if (bVar12 && !bVar10) goto LAB_00554158;
    uVar14 = uVar13 & 0xfffffff;
    uVar13 = uVar14 | (uint)(param_3[2] == ALBW_AS_F32(local_198)) << 0x1e |
             (uint)(ALBW_AS_F32(local_198) <= param_3[2]) << 0x1d;
    bVar1 = (byte)(uVar13 >> 0x18);
    bVar10 = (bool)(bVar1 >> 6);
    bVar12 = (bool)(bVar1 >> 5 & 1);
    if (!bVar12 || bVar10) {
      uVar13 = uVar14 | (uint)(ALBW_AS_F32(local_198) == param_3[5]) << 0x1e |
               (uint)(param_3[5] <= ALBW_AS_F32(local_198)) << 0x1d;
      bVar1 = (byte)(uVar13 >> 0x18);
      bVar10 = (bool)(bVar1 >> 6);
      bVar12 = (bool)(bVar1 >> 5 & 1);
    }
    if (bVar12 && !bVar10) goto LAB_00554158;
    bVar10 = true;
  }
  if (!bVar10 && !bVar11) {
    if (param_8 == 2) {
      return 2;
    }
    uVar13 = uVar13 & 0xfffffff;
    uVar14 = uVar13 | (uint)(*param_6 == *param_5) << 0x1e;
    if (((SUB41(uVar14 >> 0x1e,0)) &&
        (uVar14 = uVar13 | (uint)(param_6[1] == param_5[1]) << 0x1e, SUB41(uVar14 >> 0x1e,0))) &&
       (uVar14 = uVar13 | (uint)(param_6[2] == param_5[2]) << 0x1e, SUB41(uVar14 >> 0x1e,0))) {
      bVar10 = true;
    }
    else {
      bVar10 = false;
    }
    if (!bVar10) goto code_r0x00554724;
    goto LAB_005547a4;
  }
  if (param_8 == 0) goto LAB_00554204;
  uVar17 = (ulonglong)DAT_00554278;
LAB_00554178:
  fVar6 = ALBW_AS_F32(((ulonglong)lVar20 >> 0x20));
  if (param_8 == 1) goto LAB_00554288;
  fVar6 = ALBW_AS_F32(uVar17);
  local_15c = (int ******)CF_FBITS(((param_3[1] + param_3[4]) * fVar6));
  local_158 = (int ******)CF_FBITS(((param_3[2] + param_3[5]) * fVar6));
  local_160 = (int ******)CF_FBITS(((*param_3 + param_3[3]) * fVar6));
  func_00115C70((float *)&local_154,(float *)&local_1a0,(float *)&local_160);
  func_00115C70(&fStack_148,param_4,(float *)&local_160);
  func_00115E10((float *)&local_1b4,(float *)&local_154,&fStack_148);
  fVar6 = ALBW_AS_F32(((ulonglong)lVar20 >> 0x20));
  uVar13 = uVar13 & 0xfffffff | (uint)(fVar21 == ALBW_AS_F32(local_1b0)) << 0x1e |
           (uint)(ALBW_AS_F32(local_1b0) <= fVar21) << 0x1d;
  bVar1 = (byte)(uVar13 >> 0x18);
  if ((bool)(bVar1 >> 5 & 1) && !(bool)(bVar1 >> 6)) goto LAB_00554204;
  param_8 = 1;
  goto LAB_00554178;
LAB_00554288:
  func_00115E10((float *)&local_bc,(float *)(param_7 + 0x16),DAT_0055427c);
  func_0048B5D4((float *)&local_1b8,DAT_0055427c,DAT_005547cc);
  func_00491B3C(afStack_190,(float *)&local_1b8);
  uVar8 = 1;
  goto LAB_005542b8;
code_r0x00554724:
  func_00115C70(&local_238,(float *)&local_270,(float *)&local_1a0);
  fVar6 = SQRT(local_238 * local_238 + local_234 * local_234 + local_230 * local_230);
  uVar13 = uVar14 & 0xfffffff | (uint)(fVar6 < fVar21) << 0x1f | (uint)(fVar6 == fVar21) << 0x1e;
  uVar14 = uVar13 | (uint)(NAN(fVar6) || NAN(fVar21)) << 0x1c;
  bVar10 = (int)ALBW_AS_U32(fVar6) < DAT_005547d8;
  bVar1 = (byte)(uVar13 >> 0x18);
  if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar14 >> 0x1c) & 1)) {
    fVar6 = ALBW_AS_F32(uVar17) / fVar6;
    local_238 = local_238 * fVar6;
    local_234 = local_234 * fVar6;
    local_230 = local_230 * fVar6;
  }
  func_00115C54((float *)&local_1a0,(float *)&local_1a0,&local_238);
  if (bVar10) {
LAB_005547a4:
    local_1a0 = local_270;
    bVar11 = true;
    local_19c = local_26c;
    local_198 = local_268;
  }
  goto LAB_005540f4;
LAB_00554204:
  uVar8 = 0;
  func_00115D70((float *)&local_160,DAT_0055427c,DAT_00554280);
  local_1b4 = local_160;
  local_1b0 = local_15c;
  ppppppiStack_1ac = local_158;
  func_00115E10((float *)&local_bc,(float *)(param_7 + 0x16),(float *)&local_1b4);
  func_0048B5D4((float *)&local_1b8,DAT_0055427c,DAT_00554284);
  func_00491B3C(afStack_190,(float *)&local_1b8);
LAB_005542b8:
  fVar7 = param_3[3] - *param_3;
  fVar15 = param_3[5] - param_3[2];
  uVar14 = uVar13 & 0xfffffff | (uint)(fVar7 < fVar15) << 0x1f | (uint)(fVar7 == fVar15) << 0x1e;
  uVar13 = uVar14 | (uint)(NAN(fVar7) || NAN(fVar15)) << 0x1c;
  bVar1 = (byte)(uVar14 >> 0x18);
  uVar14 = uVar13 >> 0x1c;
  func_00115C70(&local_1e0,(float *)&local_1a0,param_4);
  func_00115CA8(afStack_74,afStack_190,&local_1e0);
  ppppppiVar16 = local_1a0;
  ppppppiVar18 = local_198;
  ppppppiVar19 = local_19c;
  func_00115C54(&local_238,param_4,afStack_74);
  local_228 = (int *******)local_1a8;
  local_204 = 0;
  local_208 = ALBW_AS_F32(CONCAT22((*(undefined2 *)((char *)&local_208 + 2)),0x1f));
  local_200 = 0;
  local_1f8 = 0;
  local_1f4 = 0;
  local_1f0 = 0;
  local_20c = fVar21;
  if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)uVar14 & 1)) {
    uVar14 = uVar13 & 0xfffffff |
             (uint)(local_238 - *param_3 <= ALBW_AS_F32(ppppppiVar16) - *param_3) << 0x1d;
    bVar10 = !SUB41(uVar14 >> 0x1d,0);
    if (bVar10) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = 1;
    }
    fVar7 = (float)VectorSignedToFloat(uVar4,(byte)(uVar14 >> 0x15) & 3);
    func_00115D70((float *)&local_1b8,DAT_005547d4,fVar7);
    if (fVar21 <= ALBW_AS_F32(local_1b8) * local_1e0 + ALBW_AS_F32(local_1b4) * fStack_1dc +
                  ALBW_AS_F32(local_1b0) * local_1d8) {
      return 2;
    }
    local_140 = local_1b8;
    ppppppiStack_13c = local_1b4;
    ppppppiStack_138 = local_1b0;
    pfVar9 = param_3 + 3;
    if (bVar10) {
      pfVar9 = param_3;
    }
    local_134 = (int ******)
                CF_FBITS((ALBW_AS_F32(local_1b8) * *pfVar9 + ALBW_AS_F32(local_1b4) * pfVar9[1] +
                ALBW_AS_F32(local_1b0) * pfVar9[2]));
    func_004323A0((undefined4 *)(&ppppppiStack_130),(undefined4 *)(&local_140));
    func_004356B4((int *)&ppppppiStack_130);
    local_154 = local_bc;
    ppppppiStack_150 = ppppppiStack_b8;
    ppppppiStack_14c = ppppppiStack_b4;
    local_160 = ppppppiVar16;
    local_15c = ppppppiVar19;
    local_158 = ppppppiVar18;
    func_00115DC8((float *)&local_154);
    local_68 = ppppppiVar2;
    local_64 = local_160;
    ppppppiStack_60 = local_15c;
    ppppppiStack_5c = local_158;
    ppppppiStack_58 = local_154;
    ppppppiStack_54 = ppppppiStack_150;
    ppppppiStack_50 = ppppppiStack_14c;
    func_00115D70((float *)&local_b0,(float *)&ppppppiStack_58,fVar6);
    local_1b8 = local_b0;
    local_1b4 = local_ac;
    local_1b0 = local_a8;
    func_00115C70((float *)&local_b0,(float *)&local_64,(float *)&local_1b8);
    local_c8 = local_b0;
    ppppppiStack_c4 = local_ac;
    ppppppiStack_c0 = local_a8;
    iVar3 = func_0042CF00((int)&ppppppiStack_130,(float *)&local_c8,(float *)&ppppppiStack_58,
                          (int)&local_228,fVar5);
  }
  else {
    uVar14 = uVar13 & 0xfffffff |
             (uint)(local_230 - param_3[2] <= ALBW_AS_F32(ppppppiVar18) - param_3[2]) << 0x1d;
    bVar10 = !SUB41(uVar14 >> 0x1d,0);
    if (bVar10) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = 1;
    }
    fVar7 = (float)VectorSignedToFloat(uVar4,(byte)(uVar14 >> 0x15) & 3);
    func_00115D70((float *)&local_160,DAT_005547d0,fVar7);
    if (fVar21 <= ALBW_AS_F32(local_160) * local_1e0 + ALBW_AS_F32(local_15c) * fStack_1dc +
                  ALBW_AS_F32(local_158) * local_1d8) {
      return 2;
    }
    local_1b0 = local_160;
    ppppppiStack_1ac = local_15c;
    local_1a8 = local_158;
    pfVar9 = param_3 + 3;
    if (bVar10) {
      pfVar9 = param_3;
    }
    local_1a4 = ALBW_AS_F32(local_160) * *pfVar9 + ALBW_AS_F32(local_15c) * pfVar9[1] +
                ALBW_AS_F32(local_158) * pfVar9[2];
    func_004323A0((undefined4 *)(apppppiStack_128),(undefined4 *)(&local_1b0));
    func_004356B4((int *)apppppiStack_128);
    local_a4 = local_bc;
    ppppppiStack_a0 = ppppppiStack_b8;
    ppppppiStack_9c = ppppppiStack_b4;
    local_b0 = ppppppiVar16;
    local_ac = ppppppiVar19;
    local_a8 = ppppppiVar18;
    func_00115DC8((float *)&local_a4);
    local_144 = ppppppiVar2;
    local_140 = local_b0;
    ppppppiStack_13c = local_ac;
    ppppppiStack_138 = local_a8;
    local_134 = local_a4;
    ppppppiStack_130 = ppppppiStack_a0;
    ppppppiStack_12c = ppppppiStack_9c;
    local_1b4 = apppppiStack_128;
    func_00115D70((float *)&local_68,(float *)&local_134,fVar6);
    local_160 = local_68;
    local_15c = local_64;
    local_158 = ppppppiStack_60;
    func_00115C70((float *)&local_68,(float *)&local_140,(float *)&local_160);
    local_154 = local_68;
    ppppppiStack_150 = local_64;
    ppppppiStack_14c = ppppppiStack_60;
    iVar3 = func_0042CF00((int)local_1b4,(float *)&local_154,(float *)&local_134,(int)&local_228,
                          fVar5);
  }
  if (iVar3 != 0) {
    func_00115C70(local_30,&fStack_218,(float *)&local_2b8);
    func_00115C70((float *)&local_1b8,&fStack_218,param_4);
    if (fVar21 <= ALBW_AS_F32(local_1b8) * *param_6 + ALBW_AS_F32(local_1b4) * param_6[1] +
                  ALBW_AS_F32(local_1b0) * param_6[2]) {
      if (!bVar11) {
        return uVar8;
      }
      bVar11 = *param_3 == local_238;
      bVar10 = local_238 <= *param_3;
      if (!bVar10 || bVar11) {
        bVar11 = local_238 == param_3[3];
        bVar10 = param_3[3] <= local_238;
      }
      if (!bVar10 || bVar11) {
        bVar11 = param_3[1] == local_234;
        bVar10 = local_234 <= param_3[1];
        if (!bVar10 || bVar11) {
          bVar11 = local_234 == param_3[4];
          bVar10 = param_3[4] <= local_234;
        }
        if (!bVar10 || bVar11) {
          bVar11 = param_3[2] == local_230;
          bVar10 = local_230 <= param_3[2];
          if (!bVar10 || bVar11) {
            bVar11 = local_230 == param_3[5];
            bVar10 = param_3[5] <= local_230;
          }
          if (!bVar10 || bVar11) {
            return uVar8;
          }
        }
      }
    }
  }
  return 2;
}

