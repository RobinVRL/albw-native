/* compilefix: USA 00342C24 (EU 00342C00), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [3]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [12]
 *  - explicit casts at pointer-type mismatches (identity on the ARM) [7]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern int func_001DCE44(int param_1,int param_2,int param_3);
extern int func_001DDB70(int param_1,int param_2,int param_3);
extern int func_001DE0E8(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_001E44C4(int param_1,float *param_2,undefined4 param_3);
extern int func_001E9098(int *param_1,float *param_2,int param_3,float fparam_0);
extern int func_001EA96C();
extern float func_001FE4C0(int param_1,float fparam_0);
extern int func_002D18BC(int *param_1);
extern int func_002D2A74(int *param_1,uint param_2);
extern float func_002D3194(int *param_1,undefined4 *param_2,int param_3,int *param_4,uint param_5, float fparam_0);
extern int func_003402A8(int param_1);
extern int func_003408B4(int param_1);
extern int func_0034097C(int param_1);
extern int func_00341328(int param_1);
extern int func_00341458(int param_1);
extern int func_00341C30(int param_1);
extern int func_00341D28(int param_1,int param_2,int param_3);
extern int func_0035227C(int param_1,undefined4 param_2);
extern int func_0038ADC0(byte *param_1,int param_2,int param_3);
extern int func_0038AF14(undefined1 *param_1);
extern int func_004331A0(undefined4 *param_1);
extern int func_00436384(undefined4 *param_1,undefined4 *param_2);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_0049F5FC(undefined4 *param_1);
extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern int func_004A8564(int param_1,undefined4 *param_2,uint param_3,undefined4 param_4);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_004EAA74(undefined4 param_1,int param_2,undefined4 param_3,int *param_4);
extern int func_0053ECEC(int param_1);
extern int func_0053F5E0(int param_1);
extern int func_0053F608(int param_1);
extern int func_0053F72C(int param_1);
extern int func_0053FB04(int param_1);
extern int func_00540084(int param_1);
extern int func_0055B350(int param_1);
extern undefined DAT_0000000f;
extern float DAT_00342f5c;
extern float DAT_00342f60;
extern int * * * * * * *DAT_00342f64;
extern float DAT_00342f68;
extern float DAT_00342f6c;
extern int * * * * * * *DAT_00342f70;
extern float DAT_00343328;
extern int * * * * * * *DAT_0034332c;
extern int * * * * * * *DAT_00343330;
extern int *DAT_00343334;
extern uint DAT_00343338;
extern float DAT_0034333c;
extern float DAT_00343340;
extern float DAT_00343344;
extern float DAT_0034380c;
extern undefined4 *DAT_00343810;
extern uint DAT_00343814;
extern int * * * * * * *DAT_00343818;
extern int * * * * * * *DAT_0034381c;
extern int * * * * * * *DAT_00343820;
extern int * * * * * * *DAT_00343824;
extern int *DAT_00343828;
extern int * * * * * * *DAT_0034382c;
extern int * * * * * * *DAT_00343830;
extern float DAT_00343cf0;
extern int * * * * * * *DAT_00343cf4;
extern float DAT_00343cf8;
extern float DAT_00343cfc;
extern float DAT_00343d00;
extern undefined4 *DAT_00343d04;
extern undefined4 *DAT_00343d08;
extern float DAT_00343d0c;
extern float DAT_00343d10;
extern int * * * * * * *DAT_00343d14;
extern float DAT_0034419c;
extern float *DAT_003441a0;
extern undefined4 *DAT_003441a4;

// USA 00342C24 <- EU 00342C00 (Ghidra, non-matching)
// GLOBAL DAT_0000000f undefined
// GLOBAL DAT_00342f5c float
// GLOBAL DAT_00342f60 float
// GLOBAL DAT_00342f64 int * * * * * * *
// GLOBAL DAT_00342f68 float
// GLOBAL DAT_00342f6c float
// GLOBAL DAT_00342f70 int * * * * * * *
// GLOBAL DAT_00343328 float
// GLOBAL DAT_0034332c int * * * * * * *
// GLOBAL DAT_00343330 int * * * * * * *
// GLOBAL DAT_00343334 int *
// GLOBAL DAT_00343338 uint
// GLOBAL DAT_0034333c float
// GLOBAL DAT_00343340 float
// GLOBAL DAT_00343344 float
// GLOBAL DAT_0034380c float
// GLOBAL DAT_00343810 undefined4 *
// GLOBAL DAT_00343814 uint
// GLOBAL DAT_00343818 int * * * * * * *
// GLOBAL DAT_0034381c int * * * * * * *
// GLOBAL DAT_00343820 int * * * * * * *
// GLOBAL DAT_00343824 int * * * * * * *
// GLOBAL DAT_00343828 int *
// GLOBAL DAT_0034382c int * * * * * * *
// GLOBAL DAT_00343830 int * * * * * * *
// GLOBAL DAT_00343cf0 float
// GLOBAL DAT_00343cf4 int * * * * * * *
// GLOBAL DAT_00343cf8 float
// GLOBAL DAT_00343cfc float
// GLOBAL DAT_00343d00 float
// GLOBAL DAT_00343d04 undefined4 *
// GLOBAL DAT_00343d08 undefined4 *
// GLOBAL DAT_00343d0c float
// GLOBAL DAT_00343d10 float
// GLOBAL DAT_00343d14 int * * * * * * *
// GLOBAL DAT_0034419c float
// GLOBAL DAT_003441a0 float *
// GLOBAL DAT_003441a4 undefined4 *
// GLOBAL EXT_0000000c undefined

undefined4 func_00342C24(int param_1,uint param_2,float fparam_0,float fparam_1)

{
  _Alignas(8) unsigned char albw_frame[0x160]; /* entry_sp - 0x160 .. entry_sp + 0x0 */
#define stack0xfffffea0 (*(undefined4 *)(albw_frame + 0x0))
  short sVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int *****pppppiVar8;
  int *piVar9;
  byte bVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int *******in_r3;
  float *pfVar13;
  float *pfVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  int *******pppppppiVar21;
  int *******pppppppiVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  int *******pppppppiVar29;
  int *******pppppppiVar30;
  longlong lVar31;
  int *******pppppppiVar32;
  undefined8 uVar33;
  float fparam_0_00;
  int *******pppppppiVar34;
  ulonglong uVar35;
  float in_stack_fffffea0;
  undefined2 uVar36;
  #define local_15c (*(int ****** *)(albw_frame + 0x4))
  #define local_158 (*(int ****** *)(albw_frame + 0x8))
  #define local_154 (*(int ****** *)(albw_frame + 0xc))
  #define local_150 (*(int ****** *)(albw_frame + 0x10))
  #define local_14c (*(int ****** *)(albw_frame + 0x14))
  #define local_148 (*(int ****** *)(albw_frame + 0x18))
  #define local_144 (*(int ****** *)(albw_frame + 0x1c))
  #define local_140 (*(undefined4 *)(albw_frame + 0x20))
  #define local_13c (*(int ****** *)(albw_frame + 0x24))
  #define local_138 (*(int ****** *)(albw_frame + 0x28))
  #define local_134 (*(int ****** *)(albw_frame + 0x2c))
  #define local_130 (*(float *)(albw_frame + 0x30))
  #define local_12c (*(int ****** *)(albw_frame + 0x34))
  #define local_128 (*(int ****** *)(albw_frame + 0x38))
  #define local_124 (*(int ****** *)(albw_frame + 0x3c))
  #define local_120 (*(int ****** *)(albw_frame + 0x40))
  #define local_11c (*(int ****** *)(albw_frame + 0x44))
  #define local_118 (*(int ****** *)(albw_frame + 0x48))
  #define local_114 (*(int ****** *)(albw_frame + 0x4c))
  #define local_110 (*(int ****** *)(albw_frame + 0x50))
  #define local_10c (*(float *)(albw_frame + 0x54))
  #define local_108 (*(float *)(albw_frame + 0x58))
  #define local_104 (*(int ****** *)(albw_frame + 0x5c))
  #define local_100 (*(int ****** *)(albw_frame + 0x60))
  #define local_fc (*(int ****** *)(albw_frame + 0x64))
  #define local_f8 (*(int ****** *)(albw_frame + 0x68))
  #define local_f4 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_f0 (*(int ****** *)(albw_frame + 0x70))
  #define local_ec (*(int ****** *)(albw_frame + 0x74))
  #define local_e8 (*(undefined4 *)(albw_frame + 0x78))
  #define local_e4 (*(undefined4 *)(albw_frame + 0x7c))
  #define puStack_e0 (*(undefined1 * *)(albw_frame + 0x80))
  #define auStack_dc ((undefined1 *)(albw_frame + 0x84))
  #define local_cc (*(undefined4 *)(albw_frame + 0x94))
  #define local_c8 (*(undefined1 *)(albw_frame + 0x98))
  #define local_c7 (*(undefined1 *)(albw_frame + 0x99))
  #define local_c6 (*(undefined1 *)(albw_frame + 0x9a))
  #define local_c5 (*(undefined1 *)(albw_frame + 0x9b))
  #define local_c4 (*(int ***** *)(albw_frame + 0x9c))
  #define local_c0 (*(int *)(albw_frame + 0xa0))
  #define local_bc (*(int *)(albw_frame + 0xa4))
  #define local_b8 (*(int ***** *)(albw_frame + 0xa8))
  #define uStack_b4 (*(undefined4 *)(albw_frame + 0xac))
  #define fStack_b0 (*(float *)(albw_frame + 0xb0))
  #define local_98 (*(float * *)(albw_frame + 0xc8))
  #define local_94 (*(int ***** *)(albw_frame + 0xcc))
  #define uStack_90 (*(undefined4 *)(albw_frame + 0xd0))
  #define local_8c (*(float *)(albw_frame + 0xd4))
  #define local_84 (*(int * *)(albw_frame + 0xdc))
  #define local_80 (*(int ***** *)(albw_frame + 0xe0))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0xe4))
  #define fStack_78 (*(float *)(albw_frame + 0xe8))
  #define local_74 (*(float *)(albw_frame + 0xec))
  #define fStack_70 (*(float *)(albw_frame + 0xf0))
  #define fStack_6c (*(float *)(albw_frame + 0xf4))
  #define local_64 (*(float *)(albw_frame + 0xfc))
  #define fStack_60 (*(float *)(albw_frame + 0x100))
  #define fStack_5c (*(float *)(albw_frame + 0x104))
  uVar36 = (undefined2)((uint)ALBW_AS_U32(in_stack_fffffea0) >> 0x10);
  if ((*(int *)(*(int *)(param_1 + 0x4c) + 4) == 0x3f800000) &&
     (*(short *)(*(int *)(*(int *)(param_1 + 0x24) + 0x614) + 0x42) != 0x67)) {
    *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x14) = 0;
  }
  if (*(char *)(param_1 + 0x4d4) != '\0') {
    **(int **)(param_1 + 0x48) = *(int *)(param_1 + 0x4f0) + **(int **)(param_1 + 0x48);
  }
  pppppppiVar30 = DAT_00342f64;
  fVar26 = DAT_00342f60;
  fparam_0_00 = DAT_00342f5c;
  if (*(char *)(*(int *)(param_1 + 0x24) + 0x6c6) != '\0') {
    return 0;
  }
  local_98 = (float *)(param_1 + 0x51c);
  if (*(int *)(*(int *)(param_1 + 0x4c) + 4) == 0x3f800000) {
    if (param_2 == 0) {
      bVar17 = (*(byte *)(param_1 + 0x324) & 1) == 0;
      bVar15 = (*(byte *)(param_1 + 0x324) & 8) == 0;
      bVar16 = bVar17 && bVar15;
      if (bVar17 && bVar15) {
        bVar16 = *(char *)(param_1 + 0x168) == '\0';
      }
      if (((((!bVar16) && (*(char *)(param_1 + 0x52b) == '\0')) &&
           (((*(uint *)(param_1 + 0x328) & 2) == 0 || (*(char *)(param_1 + 0x33c) != '\t')))) &&
          (((*(uint *)(param_1 + 0x328) & 0x80) == 0 || (*(char *)(param_1 + 0x33c) != '\f')))) ||
         (*(char *)(param_1 + 0x52c) != '\0')) goto LAB_00342d34;
      if (((*(uint *)(param_1 + 0x328) & 0x80) == 0) || (*(char *)(param_1 + 0x33c) != '\f')) {
        if (((*(uint *)(param_1 + 0x328) & 2) != 0) && (*(char *)(param_1 + 0x33c) == '\t')) {
          func_00115DAC(*(float **)(param_1 + 0x44),*(float **)(param_1 + 0x60),
                        *(float **)(param_1 + 0x44),DAT_00342f60);
        }
      }
      else {
        func_00115DAC(*(float **)(param_1 + 0x44),*(float **)(param_1 + 0x60),
                      *(float **)(param_1 + 0x44),DAT_00342f68);
      }
LAB_00342dc4:
      func_00115C54(*(float **)(param_1 + 0x44),*(float **)(param_1 + 0x44),
                    (float *)(param_1 + 0x510));
      func_00115C54(*(float **)(param_1 + 0x44),*(float **)(param_1 + 0x44),local_98);
      fparam_0 = *(float *)(param_1 + 0x530);
      func_00115D70(*(float **)(param_1 + 0x44),*(float **)(param_1 + 0x44),fparam_0);
    }
    else if (param_2 == 1) {
LAB_00342d34:
      fparam_0 = *(float *)(param_1 + 0x158) +
                 (ALBW_AS_F32(DAT_00342f64) - *(float *)(param_1 + 0x158)) * DAT_00342f5c;
      func_00115DAC(*(float **)(param_1 + 0x44),*(float **)(param_1 + 0x60),
                    *(float **)(param_1 + 0x44),fparam_0);
      if (param_2 == 0) goto LAB_00342dc4;
    }
  }
  else {
    **(undefined4 **)(param_1 + 0x44) = **(undefined4 **)(param_1 + 0x60);
    *(undefined4 *)(*(int *)(param_1 + 0x44) + 8) = *(undefined4 *)(*(int *)(param_1 + 0x60) + 8);
  }
  *(undefined1 *)(param_1 + 0x168) = 0;
  *(undefined1 *)(param_1 + 0x169) = 0;
  *(undefined1 *)(param_1 + 0x16a) = 0;
  pppppppiVar29 = DAT_00342f70;
  lVar31 = (ulonglong)(uint)ALBW_AS_U32(DAT_00342f6c) << 0x20;
  pfVar13 = (float *)(param_1 + 0x4d8);
  fVar18 = DAT_00342f6c;
  if (*(int *)(*(int *)(param_1 + 0x4c) + 4) == 0x3f800000) {
    fVar18 = **(float **)(param_1 + 0x44);
    bVar16 = false;
    if (fVar18 == ALBW_AS_F32(DAT_00342f70)) {
      bVar16 = (*(float **)(param_1 + 0x44))[2] == ALBW_AS_F32(DAT_00342f70);
    }
    if (bVar16) {
      bVar16 = false;
      if (*pfVar13 == ALBW_AS_F32(DAT_00342f70)) {
        bVar16 = *(float *)(param_1 + 0x4e0) == ALBW_AS_F32(DAT_00342f70);
      }
      if (!bVar16) goto LAB_00342e60;
    }
    else {
LAB_00342e60:
      if ((*(byte *)(param_1 + 0x324) & 1) == 0) {
        **(float **)(param_1 + 0x3c) =
             fVar18 + *(float *)(param_1 + 0x4d8) + **(float **)(param_1 + 0x3c);
        *(float *)(*(int *)(param_1 + 0x3c) + 8) =
             *(float *)(*(int *)(param_1 + 0x44) + 8) + *(float *)(param_1 + 0x4e0) +
             *(float *)(*(int *)(param_1 + 0x3c) + 8);
      }
      else {
        lVar31 = CONCAT44(DAT_00342f6c,DAT_00342f70);
        local_128 = *(int *******)(param_1 + 0x32c);
        local_130 = -*(float *)(param_1 + 0x334);
        local_12c = (int ******)DAT_00342f70;
        uVar3 = func_0055B350(param_1 + 0x324);
        func_00115154(&local_10c,&local_108,uVar3);
        local_100 = (int ******)lVar31;
        local_fc = local_100;
        local_f8 = local_100;
        func_00115E10((float *)&local_150,&local_130,(float *)(param_1 + 0x32c));
        local_15c = (int ******)lVar31;
        local_158 = local_148;
        pppppppiVar22 = (int *******)local_150;
        if (ALBW_AS_F32(local_150) != ALBW_AS_F32(local_15c) || ALBW_AS_F32(local_148) != ALBW_AS_F32(local_15c)) {
          func_00115DC8((float *)&stack0xfffffea0);
          bVar10 = *(byte *)(param_1 + 0x324);
          if (((bVar10 & 1) == 0) ||
             ((pppppppiVar21 = pppppppiVar30, (bVar10 & 2) != 0 && ((bVar10 & 4) == 0)))) {
            pppppppiVar21 = *(int ********)(param_1 + 0x15c);
          }
          pppppppiVar22 = (int *******)local_150;
          func_00115D70((float *)&local_118,(float *)&stack0xfffffea0,
                        ALBW_AS_F32(pppppppiVar21) * DAT_00343328);
          local_150 = local_118;
          local_14c = local_114;
          local_148 = local_110;
          func_00115D70((float *)&local_118,(float *)&local_150,local_10c);
          local_140 = (undefined4)(uintptr_t)((int *******)local_118);
          local_13c = local_114;
          local_138 = local_110;
          func_00115D70((float *)&local_118,(float *)&local_140,local_108);
          local_124 = local_118;
          local_120 = local_114;
          local_11c = local_110;
          in_r3 = (int *******)local_110;
          func_00115C54((float *)&local_100,(float *)&local_100,(float *)&local_124);
        }
        uVar36 = (undefined2)((uint)pppppppiVar22 >> 0x10);
        func_00115DAC(*(float **)(param_1 + 0x44),(float *)&local_100,*(float **)(param_1 + 0x44),
                      *(float *)(param_1 + 0x158) +
                      (ALBW_AS_F32(pppppppiVar30) - *(float *)(param_1 + 0x158)) * fparam_0_00);
        fVar18 = **(float **)(param_1 + 0x44);
        fVar27 = (*(float **)(param_1 + 0x44))[2];
        **(float **)(param_1 + 0x3c) =
             **(float **)(param_1 + 0x3c) + (fVar18 + *(float *)(param_1 + 0x4d8)) * local_108;
        *(float *)(*(int *)(param_1 + 0x3c) + 8) =
             *(float *)(*(int *)(param_1 + 0x3c) + 8) +
             (*(float *)(*(int *)(param_1 + 0x44) + 8) + *(float *)(param_1 + 0x4e0)) * local_108;
        fVar19 = **(float **)(param_1 + 0x44);
        fVar23 = (*(float **)(param_1 + 0x44))[2];
        fVar23 = SQRT(fVar19 * fVar19 + fVar23 * fVar23);
        fVar19 = SQRT(*pfVar13 * *pfVar13 +
                      *(float *)(param_1 + 0x4e0) * *(float *)(param_1 + 0x4e0));
        if (ALBW_AS_F32(lVar31) <= ALBW_AS_F32(local_128) * fVar18 - local_130 * fVar27) {
          *(float *)(*(int *)(param_1 + 0x3c) + 4) =
               *(float *)(*(int *)(param_1 + 0x3c) + 4) -
               (fVar23 + fVar19) * local_10c * ALBW_AS_F32(((ulonglong)lVar31 >> 0x20));
          *(undefined1 *)(param_1 + 0x16a) = 1;
        }
        else {
          *(float *)(*(int *)(param_1 + 0x3c) + 4) =
               *(float *)(*(int *)(param_1 + 0x3c) + 4) + (fVar23 + fVar19) * local_10c;
          *(undefined1 *)(param_1 + 0x169) = 1;
        }
      }
    }
    fVar18 = ALBW_AS_F32(((ulonglong)lVar31 >> 0x20));
    fparam_0 = *(float *)(*(int *)(param_1 + 0x44) + 4) + *(float *)(param_1 + 0x4dc) +
               *(float *)(*(int *)(param_1 + 0x3c) + 4);
    *(float *)(*(int *)(param_1 + 0x3c) + 4) = fparam_0;
  }
  func_003402A8(param_1);
  pppppppiVar22 = DAT_0034332c;
  uVar33 = CONCAT44(fVar26,DAT_0034332c);
  bVar16 = *(int *)(*(int *)(param_1 + 0x4c) + 4) == 0x3f800000;
  *(bool *)(param_1 + 0x16c) = bVar16;
  if (bVar16) {
    puVar4 = (undefined4 *)(uintptr_t)(func_004331A0((undefined4 *)(&puStack_e0)));
    pbVar5 = (byte *)func_00436384((undefined4 *)(&local_10c),puVar4);
    func_00110D44((undefined4 *)(&local_15c),pbVar5,0x2a);
    local_140 = (undefined4)(uintptr_t)(*(int ********)(param_1 + 0x3c));
    in_r3 = (int *******)0x0;
    local_13c = *(int *******)(param_1 + 0x40);
    local_148 = (int ******)DAT_00343330;
    local_150 = *(int *******)(param_1 + 100);
    local_130 = fVar18;
    local_12c = (int ******)pppppppiVar29;
    local_128 = (int ******)pppppppiVar22;
    local_124 = (int ******)pppppppiVar29;
    func_004A8564(*DAT_00343334,(undefined4 *)(&local_15c),0xff,0);
  }
  fVar26 = DAT_0034333c;
  if (DAT_00343338 <= *(uint *)(*(int *)(param_1 + 0x3c) + 4)) {
    *(undefined1 *)(param_1 + 0x4b8) = 1;
    return 0;
  }
  if (param_2 == 1) {
    *(undefined1 *)(param_1 + 0x324) = *(undefined1 *)(param_1 + 0x300);
    *(undefined1 *)(param_1 + 0x325) = *(undefined1 *)(param_1 + 0x301);
    *(undefined2 *)(param_1 + 0x326) = *(undefined2 *)(param_1 + 0x302);
    *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(param_1 + 0x304);
    *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_1 + 0x314);
    *(undefined1 *)(param_1 + 0x33c) = *(undefined1 *)(param_1 + 0x318);
    *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_1 + 0x31c);
    *(undefined1 *)(param_1 + 0x344) = *(undefined1 *)(param_1 + 800);
    *(undefined2 *)(param_1 + 0x345) = *(undefined2 *)(param_1 + 0x321);
    *(undefined1 *)(param_1 + 0x347) = *(undefined1 *)(param_1 + 0x323);
    *(int ********)(param_1 + 0x32c) = pppppppiVar29;
    *(int ********)(param_1 + 0x330) = pppppppiVar30;
    *(int ********)(param_1 + 0x334) = pppppppiVar29;
    iVar6 = func_00540084(*(int *)(*(int *)(param_1 + 0x24) + 0x614));
    if (iVar6 != 0) {
      puVar12 = *(undefined4 **)(param_1 + 0x3c);
      in_r3 = &local_128;
      local_128 = (int ******)*puVar12;
      local_120 = (int ******)puVar12[2];
      puVar4 = *(undefined4 **)(param_1 + 0x3c);
      local_11c = (int ******)*puVar4;
      local_114 = (int ******)puVar4[2];
      local_124 = (int ******)CF_FBITS((ALBW_AS_F32(puVar12[1]) + ALBW_AS_F32(pppppppiVar30)));
      local_118 = (int ******)CF_FBITS((ALBW_AS_F32(puVar4[1]) - DAT_00343340));
      local_158 = (int ******)&DAT_0000000f;
      puVar4 = (undefined4 *)(uintptr_t)(func_004331A0((undefined4 *)(&local_10c)));
      func_00436384((undefined4 *)(&local_154),puVar4);
      fVar18 = DAT_00343344;
      piVar9 = DAT_00343334;
      local_150 = (int ******)(param_1 + 0x184);
      local_12c = (int ******)CONCAT31((*(undefined4 *)((char *)&local_12c + 1) & 0xFFFFFF),1);
      *(float *)(param_1 + 0x1d8) = DAT_00343344;
      local_138 = (int ******)&local_11c;
      local_134 = (int ******)&local_128;
      iVar6 = func_004A8030(*piVar9,(int *)&local_154,(uint)local_158);
      if (iVar6 != 0) {
        fVar18 = *(float *)(param_1 + 0x1d8);
      }
      fparam_0 = *(float *)(*(int *)(param_1 + 0x3c) + 4);
      if (fparam_0 <= fVar18) {
        fparam_0 = fparam_0 + fVar26;
        if (fVar18 < fparam_0) {
          *(float *)(*(int *)(param_1 + 0x3c) + 4) = fVar18;
        }
      }
    }
    if (*(int *)(*(int *)(param_1 + 0x4c) + 4) == 0x3f800000) {
      sVar1 = *(short *)(*(int *)(*(int *)(param_1 + 0x24) + 0x614) + 0x42);
      if ((sVar1 != 99) && ((sVar1 != 100 && sVar1 != 0x65) && sVar1 != 0x66)) {
        func_00341D28(param_1,1,0);
      }
    }
    else {
      func_003408B4(param_1);
    }
    sVar1 = *(short *)(*(int *)(*(int *)(param_1 + 0x24) + 0x614) + 0x42);
    if ((sVar1 == 0x66 || sVar1 == 100) || (sVar1 == 0x65 || sVar1 == 99)) {
      func_0038AF14((undefined1 *)(param_1 + 0x324));
      local_13c = (int ******)0x0;
      local_138 = (int ******)0x0;
      local_130 = 0.0;
      local_12c = (int ******)0x0;
      local_128 = (int ******)((uint)local_128 & 0xffffff00);
      local_15c = (int ******)*DAT_00343810;
      local_158 = (int ******)DAT_00343810[1];
      local_154 = (int ******)DAT_00343810[2];
      local_118 = (int ******)0xa2;
      local_140 = (undefined4)(uintptr_t)((int *******)CONCAT22((short)((uint)local_140 >> 0x10),0xa2));
      fVar18 = DAT_0034380c;
      local_144 = (int ******)pppppppiVar29;
      func_0038ADC0((byte *)(param_1 + 0x324),(int)&stack0xfffffea0,0);
      uVar36 = (undefined2)((uint)ALBW_AS_U32(fVar18) >> 0x10);
    }
  }
  else if (param_2 == 0) {
    if (*(int *)(*(int *)(param_1 + 0x4c) + 4) == 0x3f800000) {
      func_0034097C(param_1);
    }
    else {
      func_003408B4(param_1);
    }
    func_0035227C(*(int *)(param_1 + 0x24) + 0x324,(uint)*(byte *)(param_1 + 0x33c));
  }
  iVar6 = func_0053F608(*(int *)(*(int *)(param_1 + 0x24) + 0x614));
  uVar35 = (ulonglong)DAT_00343814;
  pppppppiVar22 = (int *******)local_118;
  if (iVar6 == 0) {
LAB_00343850:
    local_118 = (int ******)pppppppiVar22;
    func_001FE4C0(*(int *)(param_1 + 0x50),fparam_0);
  }
  else {
    puStack_e0 = auStack_dc;
    local_84 = (int *)(int)**(char **)(param_1 + 0x4c);
    local_f8 = (int ******)0x0;
    local_f4 = 0;
    local_e4 = 4;
    local_c8 = 0;
    local_c7 = 0;
    local_e8 = 0;
    local_c6 = 0;
    local_cc = 0;
    local_c5 = 0;
    local_c4 = (int *****)0x0;
    local_c0 = 0;
    local_bc = 0;
    local_114 = (int ******)pppppppiVar29;
    local_104 = (int ******)pppppppiVar30;
    local_100 = (int ******)pppppppiVar30;
    local_fc = (int ******)pppppppiVar30;
    local_ec = (int ******)pppppppiVar30;
    func_00115C70((float *)&local_b8,*(float **)(param_1 + 0x3c),*(float **)(param_1 + 0x40));
    in_r3 = (int *******)&local_80;
    local_80 = local_b8;
    uStack_7c = uStack_b4;
    fStack_78 = fStack_b0;
    pppppppiVar21 = DAT_00343818;
    pppppppiVar34 = DAT_0034381c;
    pppppppiVar22 = DAT_00343820;
    if ((*(int *)(*(int *)(param_1 + 0x4c) + 4) == 0x3f800000) ||
       (cVar2 = func_0053F5E0(*(int *)(*(int *)(param_1 + 0x24) + 0x614)), cVar2 == '\x0f')) {
      cVar2 = func_0053F5E0(*(int *)(*(int *)(param_1 + 0x24) + 0x614));
      if (cVar2 == '\x0f') goto LAB_00343850;
      func_002D2A74(*(int **)(param_1 + 0x28),1);
      *(int ********)(param_1 + 0x54) = pppppppiVar29;
      puVar4 = *(undefined4 **)(param_1 + 0x3c);
      local_15c = (int ******)*puVar4;
      local_154 = (int ******)puVar4[2];
      local_158 = (int ******)pppppppiVar29;
      if (((*(char *)(*DAT_00343828 + 0x18) == '\x0e') && ((*(uint *)(param_1 + 0x328) & 2) != 0))
         && (*(char *)(param_1 + 0x33c) == '\f')) {
        local_158 = (int ******)DAT_0034382c;
      }
      local_158 = (int ******)CF_FBITS((ALBW_AS_F32(local_158) + ALBW_AS_F32(puVar4[1])));
      pppppppiVar32 = pppppppiVar29;
      local_114 = (int ******)pppppppiVar29;
      puVar4 = (undefined4 *)func_0053ECEC(*(int *)(param_1 + 0x38));
      local_150 = (int ******)*puVar4;
      local_14c = (int ******)puVar4[4];
      local_148 = (int ******)puVar4[8];
      local_144 = (int ******)puVar4[1];
      local_140 = (undefined4)(uintptr_t)((int *******)puVar4[5]);
      local_13c = (int ******)puVar4[9];
      local_138 = (int ******)puVar4[2];
      local_134 = (int ******)puVar4[6];
      local_130 = ALBW_AS_F32(puVar4[10]);
      local_f8 = (int ******)0x0;
      local_f4 = 0;
      local_c0 = 0;
      local_12c = (int ******)pppppppiVar32;
      local_128 = (int ******)pppppppiVar32;
      func_00115D70((float *)&local_94,(float *)&local_144,ALBW_AS_F32(((ulonglong)uVar33 >> 0x20)));
      local_b8 = local_94;
      uStack_b4 = uStack_90;
      fStack_b0 = local_8c;
      func_00115C54((float *)&local_15c,(float *)&local_15c,(float *)&local_b8);
      local_10c = ALBW_AS_F32(uVar33);
      local_f0 = (int ******)DAT_00343830;
      local_c4 = (int *****)&local_80;
      local_c5 = *(undefined1 *)(param_1 + 0x16c);
      local_cc = *(undefined4 *)(param_1 + 0x30);
      local_124 = (int ******)pppppppiVar32;
      local_120 = (int ******)pppppppiVar32;
      local_11c = (int ******)pppppppiVar32;
      local_110 = (int ******)pppppppiVar21;
      local_108 = local_10c;
      local_fc = (int ******)pppppppiVar34;
    }
    else {
      func_00341C30(param_1);
      pppppppiVar32 = pppppppiVar29;
      local_124 = (int ******)pppppppiVar29;
      local_120 = (int ******)pppppppiVar29;
      local_11c = (int ******)pppppppiVar29;
      func_001E44C4(*(int *)(param_1 + 0x4c),(float *)&local_124,*(int *)(param_1 + 0x50) + 0x3b40);
      local_12c = (int ******)**(undefined4 **)(param_1 + 0x44);
      local_128 = (int ******)(*(undefined4 **)(param_1 + 0x44))[1];
      iVar6 = *(int *)(param_1 + 0x50);
      local_150 = *(int *******)(iVar6 + 0x3b4c);
      local_14c = *(int *******)(iVar6 + 0x3b50);
      local_148 = *(int *******)(iVar6 + 0x3b54);
      local_144 = *(int *******)(iVar6 + 0x3b58);
      local_140 = (undefined4)(uintptr_t)(*(int ********)(iVar6 + 0x3b5c));
      local_13c = *(int *******)(iVar6 + 0x3b60);
      local_138 = *(int *******)(iVar6 + 0x3b64);
      local_134 = *(int *******)(iVar6 + 0x3b68);
      local_130 = *(float *)(iVar6 + 0x3b6c);
      iVar6 = *(int *)(param_1 + 0x50);
      local_15c = *(int *******)(iVar6 + 0x3b40);
      local_158 = *(int *******)(iVar6 + 0x3b44);
      local_154 = *(int *******)(iVar6 + 0x3b48);
      local_c0 = *(int *)(param_1 + 0x50) + 0x3ba4;
      local_bc = *(int *)(param_1 + 0x50) + 0x3ba8;
      local_10c = ALBW_AS_F32(uVar33);
      local_ec = *(int *******)(param_1 + 0x58);
      local_c8 = *(short *)(*(int *)(*(int *)(param_1 + 0x24) + 0x614) + 0x42) == 0x5f;
      local_c7 = *(undefined1 *)(param_1 + 0x52a);
      local_c6 = 1;
      local_c5 = 0;
      local_cc = *(undefined4 *)(param_1 + 0x30);
      fVar18 = **(float **)(param_1 + 0x44);
      if (fVar18 <= ALBW_AS_F32(pppppppiVar32)) {
        fVar18 = -fVar18;
      }
      local_110 = (int ******)pppppppiVar21;
      local_108 = local_10c;
      local_fc = (int ******)pppppppiVar34;
      local_f0 = (int ******)pppppppiVar30;
      func_002D3194(*(int **)(param_1 + 0x28),(undefined4 *)(&local_15c),
                    (int)*(short *)(*(int *)(*(int *)(param_1 + 0x24) + 0x614) + 0x42),local_84,
                    CONCAT22(uVar36,*(undefined2 *)(*(int *)(param_1 + 0x50) + 0x3bac)),fVar18);
      local_104 = (int ******)DAT_00343824;
      local_100 = (int ******)DAT_00343824;
    }
    local_118 = (int ******)pppppppiVar22;
    func_001EA96C(*(undefined4 *)(param_1 + 0x50),&local_15c);
    if ((*(char *)(*(int *)(param_1 + 0x50) + 0x3bae) == '\x02') &&
       (ALBW_AS_F32(local_12c) != ALBW_AS_F32(pppppppiVar29) || ALBW_AS_F32(local_128) != ALBW_AS_F32(pppppppiVar29))) {
      local_12c = (int ******)pppppppiVar29;
      local_128 = (int ******)pppppppiVar29;
      func_001EA96C(*(undefined4 *)(param_1 + 0x50),&local_15c);
    }
    iVar6 = *(int *)(param_1 + 0x50);
    *(undefined1 *)(*(int *)(param_1 + 0x4c) + 1) = 0;
    *(bool *)(*(int *)(param_1 + 0x4c) + 2) = *(char *)(iVar6 + 0x3bae) != '\0';
    if (*(char *)(iVar6 + 0x3bae) == '\0') {
      iVar6 = *(int *)(param_1 + 0x4c);
      if (*(int *)(iVar6 + 4) == 0x3f800000) {
        *(undefined1 *)(iVar6 + 3) = 0;
      }
      else {
        bVar10 = *(char *)(iVar6 + 3) + 1;
        *(byte *)(iVar6 + 3) = bVar10;
        if (2 < bVar10) {
          func_001DCE44(*(int *)(param_1 + 0x24),1,0);
        }
      }
      iVar6 = *(int *)(param_1 + 0x4c);
      uVar11 = *DAT_00343d04;
      in_r3 = (int *******)DAT_00343d04[1];
      *(undefined4 *)(iVar6 + 0x10) = DAT_00343d04[2];
      *(undefined4 *)(iVar6 + 8) = uVar11;
      *(int ********)(iVar6 + 0xc) = in_r3;
    }
    else {
      uVar28 = *(undefined4 *)(iVar6 + 0x3b74);
      iVar7 = *(int *)(param_1 + 0x4c);
      uVar11 = *(undefined4 *)(iVar6 + 0x3b78);
      uVar20 = *(undefined4 *)(iVar6 + 0x3b88);
      uVar24 = *(undefined4 *)(iVar6 + 0x3b8c);
      uVar25 = *(undefined4 *)(iVar6 + 0x3b90);
      *(undefined4 *)(iVar7 + 0x18) = *(undefined4 *)(iVar6 + 0x3b70);
      *(undefined4 *)(iVar7 + 0x1c) = uVar28;
      *(undefined4 *)(iVar7 + 0x20) = uVar11;
      *(undefined4 *)(iVar7 + 0x24) = uVar20;
      *(undefined4 *)(iVar7 + 0x28) = uVar24;
      *(undefined4 *)(iVar7 + 0x2c) = uVar25;
      iVar7 = *(int *)(param_1 + 0x4c);
      uVar25 = *(undefined4 *)(iVar6 + 0x3b80);
      uVar28 = *(undefined4 *)(iVar6 + 0x3b84);
      uVar24 = *(undefined4 *)(iVar6 + 0x3b94);
      uVar11 = *(undefined4 *)(iVar6 + 0x3b98);
      uVar20 = *(undefined4 *)(iVar6 + 0x3b9c);
      *(undefined4 *)(iVar7 + 0x30) = *(undefined4 *)(iVar6 + 0x3b7c);
      *(undefined4 *)(iVar7 + 0x34) = uVar25;
      *(undefined4 *)(iVar7 + 0x38) = uVar28;
      *(undefined4 *)(iVar7 + 0x3c) = uVar24;
      *(undefined4 *)(iVar7 + 0x40) = uVar11;
      *(undefined4 *)(iVar7 + 0x44) = uVar20;
      if (*(int *)(*(int *)(param_1 + 0x4c) + 4) == 0x3f800000) {
        pppppppiVar21 = *(int ********)(*(int *)(param_1 + 0x50) + 0x3b5c);
        pppppppiVar22 = pppppppiVar29;
        if ((ALBW_AS_F32(pppppppiVar29) <= ALBW_AS_F32(pppppppiVar21)) &&
           (pppppppiVar22 = pppppppiVar21, ALBW_AS_F32(pppppppiVar30) < ALBW_AS_F32(pppppppiVar21))) {
          pppppppiVar22 = pppppppiVar30;
        }
        *(int ********)(param_1 + 0x58) = pppppppiVar22;
        iVar7 = *(int *)(param_1 + 0x4c);
        uVar11 = *(undefined4 *)(iVar6 + 0x3b68);
        in_r3 = *(int ********)(iVar6 + 0x3b6c);
        *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar6 + 0x3b64);
        *(undefined4 *)(iVar7 + 0xc) = uVar11;
        *(int ********)(iVar7 + 0x10) = in_r3;
        if ((*(ushort *)(iVar6 + 0x3bac) & 0x7e0) == 0x1e0) {
          *(undefined1 *)(*(int *)(param_1 + 0x50) + 0x3bae) = 0;
        }
      }
      else {
        *(undefined1 *)(*(int *)(param_1 + 0x4c) + 3) = 0;
        pfVar14 = *(float **)(param_1 + 0x3c);
        func_00115D70(&local_74,(float *)(iVar6 + 0x3b64),DAT_00343cf0);
        local_64 = local_74;
        fStack_60 = fStack_70;
        fStack_5c = fStack_6c;
        func_00115C54(&local_74,(float *)(iVar6 + 0x3b40),&local_64);
        *pfVar14 = local_74;
        pfVar14[1] = fStack_70;
        pfVar14[2] = fStack_6c;
        local_b8 = *(int ******)(param_1 + 0x48);
        pppppiVar8 = (int *****)func_004904CC(*(float *)(iVar6 + 0x3b4c),*(float *)(iVar6 + 0x3b54))
        ;
        *local_b8 = (int ****)pppppiVar8;
        if (local_84 != (int *)0x0) {
          **(int **)(param_1 + 0x48) = **(int **)(param_1 + 0x48) + -0x80000000;
        }
        fVar18 = DAT_00343cf8;
        iVar7 = *(int *)(param_1 + 0x4c);
        uVar11 = *(undefined4 *)(iVar6 + 0x3b68);
        in_r3 = *(int ********)(iVar6 + 0x3b6c);
        pppppppiVar22 = pppppppiVar30;
        if (local_84 != (int *)0x0) {
          pppppppiVar22 = DAT_00343cf4;
        }
        *(float *)(iVar7 + 8) = *(float *)(iVar6 + 0x3b64);
        *(undefined4 *)(iVar7 + 0xc) = uVar11;
        *(int ********)(iVar7 + 0x10) = in_r3;
        *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x14) = *(undefined4 *)(iVar6 + 0x3ba4);
        iVar7 = func_001E9098(*(int **)(param_1 + 0x50),(float *)&local_94,
                              (int)*(char *)(param_1 + 0x52e),ALBW_AS_F32(pppppppiVar22) * fVar18);
        if (iVar7 == 0) {
          iVar7 = func_004904CC(*(float *)(iVar6 + 0x3b64),*(float *)(iVar6 + 0x3b6c));
          *(int *)(param_1 + 0x5c) = iVar7;
        }
        else {
          iVar7 = func_004904CC(ALBW_AS_F32(local_94),local_8c);
          *(int *)(param_1 + 0x5c) = iVar7;
        }
        if ((*(ushort *)(iVar6 + 0x3bac) & 0x7e0) == 0x1e0) {
          *(undefined1 *)(*(int *)(param_1 + 0x4c) + 1) = 1;
        }
        fVar18 = **(float **)(param_1 + 0x44);
        bVar16 = DAT_00343cfc == fVar18;
        bVar17 = fVar18 <= DAT_00343cfc;
        if (!bVar17 || bVar16) {
          bVar16 = fVar18 == DAT_00343d00;
          bVar17 = DAT_00343d00 <= fVar18;
        }
        if (bVar17 && !bVar16) {
          pppppppiVar21 = *(int ********)(*(int *)(param_1 + 0x50) + 0x3b5c);
          pppppppiVar22 = pppppppiVar29;
          if ((ALBW_AS_F32(pppppppiVar29) <= ALBW_AS_F32(pppppppiVar21)) &&
             (pppppppiVar22 = pppppppiVar21, ALBW_AS_F32(pppppppiVar30) < ALBW_AS_F32(pppppppiVar21))) {
            pppppppiVar22 = pppppppiVar30;
          }
          *(float *)(param_1 + 0x58) =
               *(float *)(param_1 + 0x58) +
               (ALBW_AS_F32(pppppppiVar22) - *(float *)(param_1 + 0x58)) * ALBW_AS_F32(uVar35);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x52e) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    if (*(int *)(*(int *)(param_1 + 0x4c) + 4) != 0x3f800000) {
      func_002D18BC(*(int **)(param_1 + 0x28));
    }
    iVar7 = *(int *)(param_1 + 0x50);
    iVar6 = 0;
    piVar9 = (int *)*DAT_00343d08;
    if (0 < *piVar9) {
      do {
        in_r3 = (int *******)piVar9[3];
        puVar4 = *(undefined4 **)(piVar9[2] + iVar6 * 4);
        iVar6 = iVar6 + 1;
        *puVar4 = (undefined4)(uintptr_t)(in_r3);
        piVar9[3] = (int)puVar4;
      } while (iVar6 < *piVar9);
    }
    *piVar9 = 0;
    iVar6 = 0;
    if (0 < piVar9[5]) {
      do {
        in_r3 = (int *******)piVar9[8];
        puVar4 = *(undefined4 **)(piVar9[7] + iVar6 * 4);
        iVar6 = iVar6 + 1;
        *puVar4 = (undefined4)(uintptr_t)(in_r3);
        piVar9[8] = (int)puVar4;
      } while (iVar6 < piVar9[5]);
    }
    piVar9[5] = 0;
    piVar9[10] = 0;
    func_0049F5FC((undefined4 *)(iVar7 + 8));
    func_0049F5FC((undefined4 *)(iVar7 + 0x18));
  }
  fVar18 = ALBW_AS_F32(uVar35);
  fVar19 = ALBW_AS_F32(((ulonglong)uVar33 >> 0x20));
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x3cc)) {
    do {
      iVar7 = param_1 + iVar6 * 0xc;
      *(int ********)(iVar7 + 0x34c) = pppppppiVar29;
      func_00115DC8((float *)(iVar7 + 0x348));
      fVar18 = ALBW_AS_F32(uVar35);
      fVar19 = ALBW_AS_F32(((ulonglong)uVar33 >> 0x20));
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x3cc));
  }
  pppppppiVar30 = DAT_00343d14;
  fVar27 = DAT_00343d10;
  fVar23 = DAT_00343d0c;
  if ((1 < param_2) || (*(int *)(*(int *)(param_1 + 0x4c) + 4) != 0x3f800000)) goto LAB_00344074;
  if (*(char *)(param_1 + 0x52c) == '\0') {
    iVar6 = *(int *)(*(int *)(param_1 + 0x24) + 0x614);
    uVar3 = (uint)*(short *)(iVar6 + 0x42);
    if ((uVar3 != 0x4e) && ((uVar3 != 4 && uVar3 != 5) && uVar3 != 0x3b)) {
      if (((*(uint *)(param_1 + 0x328) & 0x80) == 0) ||
         (in_r3 = (int *******)(uint)*(byte *)(param_1 + 0x33c),
         in_r3 != (int *******)&PrefetchAbort)) {
        pppppppiVar22 = pppppppiVar30;
        if (((*(uint *)(param_1 + 0x328) & 2) == 0) || (*(char *)(param_1 + 0x33c) != '\t')) {
          if ((uVar3 != 0x3d) && (*local_98 == ALBW_AS_F32(pppppppiVar29))) {
            bVar16 = false;
            if (local_98[1] == ALBW_AS_F32(pppppppiVar29)) {
              bVar16 = local_98[2] == ALBW_AS_F32(pppppppiVar29);
            }
            if (bVar16) {
              if (*(char *)(param_1 + 0x4b9) != '\0') {
                bVar16 = uVar3 == 7;
                if (bVar16) {
                  uVar3 = (uint)*(ushort *)(iVar6 + 0x40);
                }
                if (!bVar16 || uVar3 != 0x45) goto LAB_00343f18;
                **(undefined4 **)(param_1 + 0x44) = (undefined4)(uintptr_t)(pppppppiVar29);
                pfVar14 = *(float **)(param_1 + 0x44);
LAB_00343fe4:
                pfVar14[2] = ALBW_AS_F32(pppppppiVar29);
                goto LAB_00343fe8;
              }
LAB_00343f18:
              if (param_2 != 1) {
                bVar10 = *(byte *)(param_1 + 0x324);
                if ((bVar10 & 1) == 0) {
                  bVar16 = (bVar10 & 8) == 0;
                  if (bVar16) {
                    bVar10 = *(byte *)(param_1 + 0x168);
                  }
                  if (bVar16 && bVar10 == 0) goto LAB_00343fe8;
                }
                if (*(char *)(param_1 + 0x52b) != '\0') goto LAB_00343fe8;
              }
              if (((*(byte *)(param_1 + 0x324) & 2) == 0) || ((*(byte *)(param_1 + 0x324) & 4) != 0)
                 ) {
                *(float *)(param_1 + 0x158) = *(float *)(param_1 + 0x4d0) * fVar26;
              }
              else {
                *(int ********)(param_1 + 0x158) = pppppppiVar29;
              }
              pfVar14 = *(float **)(param_1 + 0x60);
              bVar16 = false;
              if (*pfVar14 == ALBW_AS_F32(pppppppiVar29)) {
                bVar16 = pfVar14[1] == ALBW_AS_F32(pppppppiVar29);
              }
              bVar17 = false;
              if (bVar16) {
                bVar17 = pfVar14[2] == ALBW_AS_F32(pppppppiVar29);
              }
              if (bVar17) {
                pfVar14 = *(float **)(param_1 + 0x44);
                fVar26 = pfVar14[2] - *(float *)(param_1 + 0x4e0);
                if (SQRT((*pfVar14 - *pfVar13) * (*pfVar14 - *pfVar13) + fVar26 * fVar26) <
                    *(float *)(param_1 + 0x158) * fVar23) {
                  *pfVar14 = ALBW_AS_F32(pppppppiVar29);
                  pfVar14[1] = ALBW_AS_F32(pppppppiVar29);
                  goto LAB_00343fe4;
                }
              }
              pfVar14 = *(float **)(param_1 + 0x44);
              pppppppiVar21 = &local_154;
              fVar18 = *(float *)(param_1 + 0x158);
              local_150 = (int ******)pppppppiVar29;
              local_14c = (int ******)pppppppiVar29;
              goto LAB_00344194;
            }
          }
          pppppppiVar21 = &local_15c;
          pfVar14 = *(float **)(param_1 + 0x44);
          local_15c = (int ******)pppppppiVar29;
          local_158 = (int ******)*(int ********)(*(int *)(param_1 + 0x44) + 4);
        }
        else {
          pfVar14 = *(float **)(param_1 + 0x60);
          pppppppiVar21 = &local_158;
          bVar16 = false;
          if (*pfVar14 == ALBW_AS_F32(pppppppiVar29)) {
            bVar16 = pfVar14[1] == ALBW_AS_F32(pppppppiVar29);
          }
          bVar17 = bVar16;
          if (bVar16) {
            bVar17 = pfVar14[2] == ALBW_AS_F32(pppppppiVar29);
          }
          pfVar14 = *(float **)(param_1 + 0x44);
          if (bVar16) {
            bVar16 = bVar17;
          }
          fVar18 = DAT_0034419c;
          if (!bVar16) {
            fVar18 = fVar19;
          }
          fVar18 = *(float *)(param_1 + 0x4fc) * fVar18;
          local_158 = (int ******)pppppppiVar29;
          local_150 = (int ******)pppppppiVar29;
        }
      }
      else {
        pfVar14 = *(float **)(param_1 + 0x44);
        pppppppiVar21 = &local_158;
        fVar18 = *(float *)(param_1 + 0x500) * DAT_0034419c;
        pppppppiVar22 = pppppppiVar29;
        local_158 = (int ******)pppppppiVar29;
        local_150 = (int ******)pppppppiVar29;
      }
LAB_00344194:
      local_154 = (int ******)pppppppiVar29;
      func_004D838C(pfVar14,(float *)pppppppiVar21,fVar18,ALBW_AS_F32(pppppppiVar22),fVar27);
    }
  }
  else {
    bVar10 = *(byte *)(param_1 + 0x324);
    if (*(short *)(*(int *)(*(int *)(param_1 + 0x24) + 0x614) + 0x42) == 0x45) {
      if (((bVar10 & 2) == 0) || ((bVar10 & 4) != 0)) {
        *(float *)(param_1 + 0x158) = *(float *)(param_1 + 0x4d0) * fVar26;
      }
      else {
        *(int ********)(param_1 + 0x158) = pppppppiVar29;
      }
      pfVar14 = *(float **)(param_1 + 0x60);
      bVar16 = false;
      if (*pfVar14 == ALBW_AS_F32(pppppppiVar29)) {
        bVar16 = pfVar14[1] == ALBW_AS_F32(pppppppiVar29);
      }
      bVar17 = false;
      if (bVar16) {
        bVar17 = pfVar14[2] == ALBW_AS_F32(pppppppiVar29);
      }
      if ((!bVar17) ||
         (pfVar14 = *(float **)(param_1 + 0x44), fVar26 = pfVar14[2] - *(float *)(param_1 + 0x4e0),
         *(float *)(param_1 + 0x158) * fVar23 <=
         SQRT((*pfVar14 - *pfVar13) * (*pfVar14 - *pfVar13) + fVar26 * fVar26))) {
        local_154 = (int ******)pppppppiVar29;
        local_150 = (int ******)pppppppiVar29;
        local_14c = (int ******)pppppppiVar29;
        func_004D838C(*(float **)(param_1 + 0x44),(float *)&local_154,*(float *)(param_1 + 0x158),
                      ALBW_AS_F32(pppppppiVar30),fVar27);
      }
      else {
        *pfVar14 = ALBW_AS_F32(pppppppiVar29);
        pfVar14[1] = ALBW_AS_F32(pppppppiVar29);
        pfVar14[2] = ALBW_AS_F32(pppppppiVar29);
      }
    }
    else {
      if (((bVar10 & 2) == 0) || ((bVar10 & 4) != 0)) {
        *(float *)(param_1 + 0x158) = *(float *)(param_1 + 0x4d0) * fVar26;
      }
      else {
        *(int ********)(param_1 + 0x158) = pppppppiVar29;
      }
      pfVar14 = *(float **)(param_1 + 0x60);
      bVar16 = false;
      if (*pfVar14 == ALBW_AS_F32(pppppppiVar29)) {
        bVar16 = pfVar14[1] == ALBW_AS_F32(pppppppiVar29);
      }
      bVar17 = false;
      if (bVar16) {
        bVar17 = pfVar14[2] == ALBW_AS_F32(pppppppiVar29);
      }
      if ((!bVar17) ||
         (pfVar14 = *(float **)(param_1 + 0x44), fVar26 = pfVar14[2] - *(float *)(param_1 + 0x4e0),
         *(float *)(param_1 + 0x158) * fVar23 <=
         SQRT((*pfVar14 - *pfVar13) * (*pfVar14 - *pfVar13) + fVar26 * fVar26))) {
        local_150 = *(int *******)(*(int *)(param_1 + 0x44) + 4);
        local_154 = (int ******)pppppppiVar29;
        local_14c = (int ******)pppppppiVar29;
        func_004D838C(*(float **)(param_1 + 0x44),(float *)&local_154,*(float *)(param_1 + 0x158),
                      ALBW_AS_F32(pppppppiVar30),fVar27);
      }
      else {
        *pfVar14 = ALBW_AS_F32(pppppppiVar29);
        *(int ********)(*(int *)(param_1 + 0x44) + 8) = pppppppiVar29;
      }
    }
  }
LAB_00343fe8:
  bVar16 = false;
  if (*pfVar13 == ALBW_AS_F32(pppppppiVar29)) {
    bVar16 = *(float *)(param_1 + 0x4dc) == ALBW_AS_F32(pppppppiVar29);
  }
  bVar17 = false;
  if (bVar16) {
    bVar17 = *(float *)(param_1 + 0x4e0) == ALBW_AS_F32(pppppppiVar29);
  }
  if ((bVar17) && (iVar6 = func_0053F72C(*(int *)(*(int *)(param_1 + 0x24) + 0x614)), iVar6 != 0)) {
    func_004D838C(*(float **)(param_1 + 0x44),DAT_003441a0,fparam_0_00,ALBW_AS_F32(pppppppiVar30),fVar27);
  }
  bVar16 = func_0053FB04(*(int *)(*(int *)(param_1 + 0x24) + 0x614));
  if (bVar16) {
    bVar17 = (*(byte *)(param_1 + 0x324) & 1) == 0;
    bVar15 = (*(byte *)(param_1 + 0x324) & 8) == 0;
    bVar16 = bVar17 && bVar15;
    if (bVar17 && bVar15) {
      bVar16 = *(char *)(param_1 + 0x168) == '\0';
    }
    if (!bVar16) {
      func_00341458(param_1);
    }
  }
LAB_00344074:
  func_001DE0E8(*(int *)(param_1 + 0x24),(uint)*(byte *)(param_1 + 0x33c),
                (uint)*(byte *)(param_1 + 0x325));
  uVar3 = (uint)*(byte *)(param_1 + 0x534);
  func_001DDB70(*(int *)(param_1 + 0x24),(uint)(uVar3 != 0),uVar3);
  func_00341328(param_1);
  return func_004EAA74(*DAT_003441a4,(uint)*(byte *)(param_1 + 0x33c),uVar3,(int *)in_r3);
}

