/* compilefix: USA 0019FDC0 (EU 0019FDC0), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [13]
 *  - call to a callee the dump names FUN_<EU> (mapped to func_<USA> without a declaration; implicit int(...) would promote float args): extern prototype from the callee's Ghidra signature [1]
 *  - implicit float<->int conversions (Ghidra COPY between a float and an int-typed variable or
 *    pool word, e.g. `fVar = _DAT_xxx;`, `puVar[3] = fVar;`) made bit copies [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "../include/ghidra_concat44.h"
#include "compilefix.h"
/* callee named FUN_<EU> in the dump: prototype from its own Ghidra signature */
extern void func_004F500C(int *param_1,undefined4 param_2,undefined4 param_3,float *param_4);

extern int func_00110848(int param_1);
extern int func_00115C8C(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0014DBF4(int *param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_001A0564(int *param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004FC994(uint param_1,int param_2);
extern int func_006824D4(int *param_1,float *param_2,undefined4 *param_3,float *param_4);
extern int DAT_001a0198;
extern float DAT_001a019c;
extern float DAT_001a01a0;
extern float DAT_001a01a4;
extern float DAT_001a01a8;
extern float DAT_001a01ac;
extern float DAT_001a01b0;
extern int DAT_001a01b4;
extern uint DAT_001a01b8;
extern float *DAT_001a01bc;
extern float DAT_001a01c0;
extern undefined4 DAT_001a01c4;
extern uint DAT_001a01c8;
extern undefined4 DAT_001a01cc;
extern float DAT_001a01d0;
extern float DAT_001a01d4;
extern int DAT_001a01d8;
extern int DAT_001a01dc;
extern int DAT_001a01e0;
extern char s_DeathBombEnd_001a0498[];
extern char s_SE_EN_BOSS_DIE_EXPLODE_001a04a8[];

// USA 0019FDC0 <- EU 0019FDC0 (Ghidra, non-matching)
// GLOBAL DAT_001a0198 int
// GLOBAL DAT_001a019c float
// GLOBAL DAT_001a01a0 float
// GLOBAL DAT_001a01a4 float
// GLOBAL DAT_001a01a8 float
// GLOBAL DAT_001a01ac float
// GLOBAL DAT_001a01b0 float
// GLOBAL DAT_001a01b4 int
// GLOBAL DAT_001a01b8 uint
// GLOBAL DAT_001a01bc float *
// GLOBAL DAT_001a01c0 float
// GLOBAL DAT_001a01c4 undefined4
// GLOBAL DAT_001a01c8 uint
// GLOBAL DAT_001a01cc undefined4
// GLOBAL DAT_001a01d0 float
// GLOBAL DAT_001a01d4 float
// GLOBAL DAT_001a01d8 int
// GLOBAL DAT_001a01dc int
// GLOBAL DAT_001a01e0 int
// GLOBAL s_DeathBombEnd_001a0498 string
// GLOBAL s_SE_EN_BOSS_DIE_EXPLODE_001a04a8 string

undefined4 func_0019FDC0(int *param_1,undefined4 param_2,undefined4 param_3,float *param_4)

{
  char cVar1;
  float *pfVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  undefined4 extraout_r1;
  int *extraout_r1_00;
  int *extraout_r1_01;
  int *extraout_r1_02;
  int *extraout_r1_03;
  undefined4 extraout_r1_04;
  int *piVar7;
  undefined4 uVar8;
  float *pfVar9;
  int iVar10;
  float fVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  uint in_fpscr;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fparam_0;
  float fVar24;
  ulonglong uVar25;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define fStack_c8 (*(float *)(albw_frame + 0x8))
  #define fStack_c4 (*(float *)(albw_frame + 0xc))
  #define pfStack_c0 (*(float * *)(albw_frame + 0x10))
  #define piStack_bc (*(int * *)(albw_frame + 0x14))
  #define piStack_b8 (*(int * *)(albw_frame + 0x18))
  #define pfStack_b4 (*(float * *)(albw_frame + 0x1c))
  #define iStack_a8 (*(int *)(albw_frame + 0x28))
  #define piStack_a0 (*(int * *)(albw_frame + 0x30))
  #define piStack_98 (*(int * *)(albw_frame + 0x38))
  #define fStack_94 (*(float *)(albw_frame + 0x3c))
  #define fStack_90 (*(float *)(albw_frame + 0x40))
  #define fStack_8c (*(float *)(albw_frame + 0x44))
  #define pfStack_80 (*(float * *)(albw_frame + 0x50))
  #define piStack_7c (*(int * *)(albw_frame + 0x54))
  #define piStack_78 (*(int * *)(albw_frame + 0x58))
  #define fStack_74 (*(float *)(albw_frame + 0x5c))
  #define fStack_70 (*(float *)(albw_frame + 0x60))
  #define pcStack_6c (*(char * *)(albw_frame + 0x64))
  #define fStack_68 (*(float *)(albw_frame + 0x68))
  #define fStack_60 (*(float *)(albw_frame + 0x70))
  #define fStack_5c (*(float *)(albw_frame + 0x74))
  #define pfStack_58 (*(float * *)(albw_frame + 0x78))
  func_004F500C(param_1,param_2,param_3,param_4);
  iVar14 = 0;
  piStack_a0 = param_1 + 0x284;
  iStack_a8 = 4;
  pfStack_b4 = (float *)(param_1 + 0x2cd);
  piStack_98 = param_1 + 0x140;
  uVar3 = param_1[0x46d];
  param_1[0x15d] = DAT_001a0198;
  if ((*(char *)((int)param_1 + 0x121e) != '\x03') && (0 < (short)param_1[0x142])) {
    if (param_1[0x47b] == 0) {
      fVar19 = ALBW_AS_F32(param_1[0xf5]);
      fVar16 = ALBW_AS_F32(param_1[0xf6]);
      pfVar12 = pfStack_b4;
      if (uVar3 < 100) {
        pfVar12 = pfStack_b4 + uVar3 * 4;
      }
      *pfVar12 = ALBW_AS_F32(param_1[0xf4]);
      pfVar12[1] = fVar19;
      pfVar12[2] = fVar16;
      pfVar12 = pfStack_b4;
      if (uVar3 < 100) {
        pfVar12 = pfStack_b4 + uVar3 * 4;
      }
      pfVar12[3] = ALBW_AS_F32(param_1[0xfa]);
    }
    else {
      pfVar12 = pfStack_b4;
      if (uVar3 < 100) {
        pfVar12 = pfStack_b4 + uVar3 * 4;
      }
      pfVar12[1] = ALBW_AS_F32(param_1[0xf5]);
    }
    pfVar12 = pfStack_b4;
    if (uVar3 < 100) {
      pfVar12 = pfStack_b4 + uVar3 * 4;
    }
    pfVar12[1] = pfVar12[1] + ALBW_AS_F32(param_1[0x15d]);
  }
  fVar19 = DAT_001a01b0;
  if (param_1[0x47b] == 0) {
    in_fpscr = in_fpscr & 0xfffffff | (uint)(ALBW_AS_F32(param_1[0x484]) == DAT_001a01a8) << 0x1e;
    fVar19 = DAT_001a01ac -
             (ALBW_AS_F32(param_1[0x486]) - DAT_001a019c) * *(float *)(DAT_001a01b4 + param_1[0x472] * 4);
    if (SUB41(in_fpscr >> 0x1e,0)) {
      fVar19 = fVar19 * DAT_001a01a4;
    }
  }
  pfVar12 = &fStack_94;
  iVar15 = 0;
  uVar3 = param_1[0x46d] +
          (uint)((ulonglong)(uint)param_1[0x46d] * (ulonglong)DAT_001a01b8 >> 0x25) * -100;
  fStack_94 = *DAT_001a01bc;
  fStack_90 = DAT_001a01bc[1];
  fStack_8c = DAT_001a01bc[2];
  piStack_78 = param_1 + 0x240;
  piStack_b8 = param_1 + 0x16a;
  fStack_74 = DAT_001a01d4;
  pfStack_80 = (float *)(param_1 + 0x48e);
  uVar25 = (ulonglong)DAT_001a01c8;
  uVar23 = CONCAT44(DAT_001a01cc,DAT_001a01c4);
  piStack_7c = param_1 + 0x48c;
  fVar16 = DAT_001a01a8;
  fVar20 = DAT_001a01c0;
  fparam_0 = DAT_001a01d0;
  fVar24 = DAT_001a01a0;
  fVar21 = DAT_001a019c;
  fVar22 = DAT_001a01a4;
  do {
    if (iVar14 == 3) {
      in_fpscr = in_fpscr & 0xfffffff | (uint)(ALBW_AS_F32(param_1[0x484]) == fVar16) << 0x1e;
      fVar19 = fVar20 - (ALBW_AS_F32(param_1[0x486]) - fVar21) *
                        *(float *)(DAT_001a01d8 + param_1[0x472] * 4);
      if (SUB41(in_fpscr >> 0x1e,0)) {
        fVar19 = fVar19 * fVar24;
      }
    }
    iVar5 = 0;
    if (0 < (int)fVar19) {
      do {
        uVar3 = uVar3 - 1;
        if ((int)uVar3 < 0) {
          uVar3 = 99;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)fVar19);
    }
    fVar19 = ALBW_AS_F32(param_1[0x484]) * fVar19;
    pfVar13 = (float *)(piStack_a0 + iVar14 * 0x12);
    fVar6 = ALBW_AS_F32((uint)*(byte *)((int)param_1 + 0x121e));
    pfVar9 = pfStack_b4;
    if (uVar3 < 100) {
      pfVar9 = pfStack_b4 + uVar3 * 4;
    }
    piVar7 = piStack_a0;
    if ((fVar6 != 4.2039e-45) && (fVar6 = ALBW_AS_F32((int)(short)piStack_98[2]), 0 < (int)ALBW_AS_U32(fVar6))) {
      if (param_1[0x47b] == 0) {
        fVar6 = pfVar9[1];
        fVar11 = pfVar9[2];
        *pfVar13 = *pfVar9;
        pfVar13[1] = fVar6;
        pfVar13[2] = fVar11;
        pfVar13[6] = pfVar9[3];
      }
      else {
        pfVar13[1] = pfVar9[1];
      }
      fVar6 = *pfVar13;
      piVar7 = (int *)CF_FBITS(pfVar13[1]);
      pfVar12 = (float *)CF_FBITS(pfVar13[2]);
      param_1[iVar15 * 3 + 0x45e] = (int)ALBW_AS_U32(fVar6);
      param_1[iVar15 * 3 + 0x45f] = (int)piVar7;
      param_1[iVar15 * 3 + 0x460] = (int)pfVar12;
    }
    func_00169A80((int *)CF_FBITS(pfVar13[4]),ALBW_AS_U32(fVar6),(undefined4)(uintptr_t)(piVar7),(int *)pfVar12);
    uVar8 = 0;
    func_00168E9C((int *)CF_FBITS(pfVar13[4]),(int)ALBW_AS_U32(pfVar13[3]),(int *)0x0);
    func_00169A80((int *)CF_FBITS(pfVar13[5]),extraout_r1,uVar8,(int *)pfVar12);
    func_00168E9C((int *)CF_FBITS(pfVar13[5]),(int)ALBW_AS_U32(pfVar13[3]),(int *)0x0);
    fVar6 = pfVar13[3];
    pfVar12 = (float *)((int)ALBW_AS_U32(fVar6) + 0x80);
    *(uint *)((int)ALBW_AS_U32(fVar6) + 0x164) = *(uint *)((int)ALBW_AS_U32(fVar6) + 0x164) | 0x40000000;
    pfVar9 = pfVar13;
    func_004D8AEC(pfVar12,(uint)ALBW_AS_U32(pfVar13[6]),pfVar13);
    fVar6 = pfVar13[10];
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar6 == fVar16) << 0x1e;
    if (!SUB41(in_fpscr >> 0x1e,0)) {
      pfVar12 = (float *)(DAT_001a01e0 +
                         ((uint)*(byte *)(pfVar13 + 0xc) * DAT_001a01dc >> 0x18) * 0x10);
      fVar18 = pfVar12[1];
      fVar11 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(pfVar13 + 0xc) * DAT_001a01dc & 0xffffff,
                                 (byte)(in_fpscr >> 0x15) & 3);
      fVar17 = *pfVar12;
      pfVar13[10] = fVar6 * fVar22;
      cVar1 = *(char *)(pfVar13 + 0xc);
      *(char *)(pfVar13 + 0xc) = cVar1 + -1;
      fVar6 = pfVar13[0xb] + (fVar17 + fVar18 * fVar11 * ALBW_AS_F32(uVar23)) * fVar6;
      if ((char)(cVar1 + -1) == '\0') {
        fVar6 = pfVar13[7];
        pfVar13[10] = fVar16;
      }
      fVar11 = pfVar13[3];
      pfVar12 = (float *)CF_FBITS(pfVar13[8]);
      pfVar9 = (float *)(*(uint *)((int)ALBW_AS_U32(fVar11) + 0x164) | 0x40000000);
      *(uint *)((int)ALBW_AS_U32(fVar11) + 0x164) = (uint)pfVar9;
      *(float *)((int)ALBW_AS_U32(fVar11) + 0x74) = fVar6;
      *(float **)((int)ALBW_AS_U32(fVar11) + 0x78) = pfVar12;
      *(float *)((int)ALBW_AS_U32(fVar11) + 0x7c) = fVar6;
    }
    if (((char)piStack_78[0x35] == '\x06') &&
       (func_001A0564(param_1), pfVar2 = pfStack_80, *(char *)((int)pfVar13 + 0x31) != '\0')) {
      fVar6 = *(float *)((int)ALBW_AS_U32(pfVar13[3]) + 0x74);
      if (*(char *)((int)pfVar13 + 0x32) == '\0') {
        fVar6 = ALBW_AS_F32(uVar25);
        iVar5 = *piStack_7c;
        if ((iVar5 != 0) && (*(int *)(iVar5 + 0x1c) == piStack_7c[1])) {
          iVar10 = *(int *)(iVar5 + 0x20);
          if ((iVar10 != 0) &&
             ((*(int *)(iVar5 + 0x24) == *(int *)(iVar10 + 0xc) && (0 < *(int *)(iVar10 + 4))))) {
            *(undefined1 *)(iVar10 + 0x280) = 1;
          }
          *(uint *)(iVar5 + 0x3c) = *(uint *)(iVar5 + 0x3c) & 0xfffffffb | 8;
        }
        piStack_bc = param_1 + 0xc9;
        *(undefined1 *)((int)pfVar13 + 0x32) = 1;
        pfStack_c0 = (float *)s_DeathBombEnd_001a0498;
        if (param_1[0xd1] == 0) {
          *pfStack_80 = 0.0;
          pfStack_80[1] = 0.0;
        }
        else {
          fVar11 = *pfStack_80;
          if ((fVar11 != 0.0) && (*(float *)((int)ALBW_AS_U32(fVar11) + 0x1c) == pfStack_80[1])) {
            func_00110848((int)ALBW_AS_U32(fVar11));
          }
          func_004A1B9C((int *)&fStack_c8,piStack_bc[8],(uint *)pfStack_c0);
          *pfVar2 = fStack_c8;
          pfVar2[1] = fStack_c4;
        }
        fVar11 = *pfStack_80;
        if ((fVar11 != 0.0) && (*(float *)((int)ALBW_AS_U32(fVar11) + 0x1c) == pfStack_80[1])) {
          func_004A2F38((int)ALBW_AS_U32(fVar11),(undefined4 *)(pfVar13));
        }
        func_004FC994((uint)piStack_b8,(int)ALBW_AS_U32(pfVar13[3]));
        func_004CF478((int)ALBW_AS_U32(pfVar13[3]),0);
        fStack_70 = fStack_74;
        pcStack_6c = s_SE_EN_BOSS_DIE_EXPLODE_001a04a8;
        func_0014DBF4(param_1,(int *)&fStack_70,(undefined4)(uintptr_t)(pfVar13),0);
      }
      fVar11 = pfVar13[3];
      fVar17 = pfVar13[8];
      pfVar12 = (float *)((int)ALBW_AS_U32(fVar11) + 0x164);
      pfVar9 = (float *)((int)ALBW_AS_U32(fVar11) + 0x74);
      *pfVar12 = ALBW_AS_F32(((uint)ALBW_AS_U32(*pfVar12) | 0x40000000));
      *pfVar9 = fVar6;
      *(float *)((int)ALBW_AS_U32(fVar11) + 0x78) = fVar17;
      *(float *)((int)ALBW_AS_U32(fVar11) + 0x7c) = fVar6;
    }
    func_004CEAF0((int)ALBW_AS_U32(pfVar13[3]));
    piVar7 = (int *)CF_FBITS(pfVar13[0xe]);
    fVar11 = pfVar13[3];
    fVar6 = fVar11;
    if (piVar7 == (int *)0x0) {
      fVar6 = pfVar13[0xf];
    }
    if (piVar7 != (int *)0x0 || fVar6 != 0.0) {
      fStack_70 = *pfVar13;
      pcStack_6c = (char *)CF_FBITS(pfVar13[1]);
      fStack_68 = pfVar13[2];
      if (iVar14 == 3) {
        func_00115D70(&fStack_60,(float *)(param_1 + 0x11c),ALBW_AS_F32(((ulonglong)uVar23 >> 0x20)));
        fStack_c8 = fStack_60;
        fStack_c4 = fStack_5c;
        pfStack_c0 = pfStack_58;
        pfVar9 = &fStack_c8;
        pfVar12 = pfStack_58;
        func_00115C8C(&fStack_94,(float *)((int)ALBW_AS_U32(fVar11) + 0x74),pfVar9);
        piVar7 = extraout_r1_00;
      }
      else {
        func_00115D70(&fStack_60,(float *)(param_1 + 0x11c),fparam_0);
        fStack_c8 = fStack_60;
        fStack_c4 = fStack_5c;
        pfStack_c0 = pfStack_58;
        pfVar9 = &fStack_c8;
        pfVar12 = pfStack_58;
        func_00115C8C(&fStack_94,(float *)((int)ALBW_AS_U32(fVar11) + 0x74),pfVar9);
        piVar7 = extraout_r1_01;
      }
      if ((int *)CF_FBITS(pfVar13[0xe]) != (int *)0x0) {
        pfVar12 = &fStack_70;
        pfVar9 = (float *)((int)ALBW_AS_U32(fVar11) + 0x80);
        func_006824D4((int *)CF_FBITS(pfVar13[0xe]),&fStack_94,(undefined4 *)(pfVar9),pfVar12);
        piVar7 = extraout_r1_02;
      }
      piVar4 = (int *)CF_FBITS(pfVar13[0xf]);
      if (piVar4 != (int *)0x0) {
        piVar7 = (int *)CF_FBITS(pfVar13[0xe]);
      }
      if (piVar4 != (int *)0x0 && piVar4 != piVar7) {
        pfVar12 = &fStack_70;
        pfVar9 = (float *)((int)ALBW_AS_U32(fVar11) + 0x80);
        func_006824D4(piVar4,&fStack_94,(undefined4 *)(pfVar9),pfVar12);
        piVar7 = extraout_r1_03;
      }
    }
    iVar14 = iVar14 + 1;
    iVar15 = iVar15 + 1;
  } while (iVar14 != iStack_a8);
  func_00169A80((int *)param_1[0x106],(undefined4)(uintptr_t)(piVar7),(undefined4)(uintptr_t)(pfVar9),(int *)pfVar12);
  uVar8 = 0;
  func_00168E9C((int *)param_1[0x106],param_1[0x103],(int *)0x0);
  func_00169A80((int *)param_1[0x283],extraout_r1_04,uVar8,(int *)pfVar12);
  return func_00168E9C((int *)param_1[0x283],param_1[0x103],(int *)0x0);
}

