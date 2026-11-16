/* compilefix: USA 0021AEFC (EU 0021AEFC), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [3]
 *  - call to a callee the dump names FUN_<EU> (mapped to func_<USA> without a declaration; implicit int(...) would promote float args): extern prototype from the callee's Ghidra signature [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "../include/ghidra_concat44.h"
#include "compilefix.h"
/* callee named FUN_<EU> in the dump: prototype from its own Ghidra signature */
extern void func_004F500C(int *param_1,undefined4 param_2,undefined4 param_3,float *param_4);

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_001512B4(int param_1,float *param_2);
extern int func_001512E8(int *param_1);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004905E0(float fparam_0);
extern int func_00491A18(float *param_1,uint *param_2,float *param_3);
extern int func_004CEAF0(int param_1);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_00588BE4(int param_1);
extern int func_0058AB74(int param_1);
extern uint DAT_0021b29c;
extern int DAT_0021b2a0;
extern float DAT_0021b2a4;
extern float DAT_0021b2a8;
extern float DAT_0021b2ac;
extern undefined4 DAT_0021b2b0;
extern float DAT_0021b2b4;
extern float DAT_0021b2b8;
extern float DAT_0021b2bc;
extern float DAT_0021b2c0;
extern int DAT_0021b50c;
extern int *DAT_0021b510;
extern float *DAT_0021b514;

// USA 0021AEFC <- EU 0021AEFC (Ghidra, non-matching)
// GLOBAL DAT_0021b29c uint
// GLOBAL DAT_0021b2a0 int
// GLOBAL DAT_0021b2a4 float
// GLOBAL DAT_0021b2a8 float
// GLOBAL DAT_0021b2ac float
// GLOBAL DAT_0021b2b0 undefined4
// GLOBAL DAT_0021b2b4 float
// GLOBAL DAT_0021b2b8 float
// GLOBAL DAT_0021b2bc float
// GLOBAL DAT_0021b2c0 float
// GLOBAL DAT_0021b50c int
// GLOBAL DAT_0021b510 int *
// GLOBAL DAT_0021b514 float *

void func_0021AEFC(int *param_1,undefined4 param_2,undefined4 param_3,float *param_4)

{
  char cVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float *pfVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fparam_2;
  float fparam_1;
  float fparam_0;
  undefined8 uVar22;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define fStack_c8 (*(float *)(albw_frame + 0x8))
  #define piStack_c4 (*(int * *)(albw_frame + 0xc))
  #define fStack_c0 (*(float *)(albw_frame + 0x10))
  #define fStack_bc (*(float *)(albw_frame + 0x14))
  #define fStack_b8 (*(float *)(albw_frame + 0x18))
  #define fStack_b4 (*(float *)(albw_frame + 0x1c))
  #define piStack_b0 (*(int * *)(albw_frame + 0x20))
  #define fStack_a8 (*(float *)(albw_frame + 0x28))
  #define fStack_a4 (*(float *)(albw_frame + 0x2c))
  #define uStack_a0 (*(undefined4 *)(albw_frame + 0x30))
  #define apfStack_98 ((float * *)(albw_frame + 0x38))
  #define piStack_64 (*(int * *)(albw_frame + 0x6c))
  #define pfStack_60 (*(float * *)(albw_frame + 0x70))
  #define auStack_5c ((uint *)(albw_frame + 0x74))
  func_004F500C(param_1,param_2,param_3,param_4);
  iVar14 = 0;
  piStack_c4 = param_1 + 0x239;
  uVar12 = param_1[0x4d3];
  lVar17 = (ulonglong)(uint)param_1[0x4ca] << 0x20;
  uVar11 = uVar12 + (uint)((ulonglong)uVar12 * (ulonglong)DAT_0021b29c >> 0x25) * -100;
  piStack_b0 = piStack_c4;
  func_001512E8((int *)param_1[0x238]);
  bVar16 = uVar12 < 100;
  pfVar2 = (float *)(param_1 + 0x269);
  pfVar3 = pfVar2;
  if (bVar16) {
    pfVar3 = pfVar2 + uVar12 * 6;
  }
  fVar5 = ALBW_AS_F32(param_1[0xf5]);
  pfVar9 = (float *)param_1[0xf6];
  *pfVar3 = ALBW_AS_F32(param_1[0xf4]);
  pfVar3[1] = fVar5;
  pfVar3[2] = ALBW_AS_F32(pfVar9);
  pfVar3 = pfVar2;
  if (bVar16) {
    pfVar3 = pfVar2 + uVar12 * 6;
  }
  pfVar3[3] = ALBW_AS_F32(param_1[0xfa]);
  pfVar3 = pfVar2;
  if (bVar16) {
    pfVar3 = pfVar2 + uVar12 * 6;
  }
  pfVar3[4] = *(float *)(DAT_0021b2a0 + (int)param_1);
  uVar22 = func_0058AB74((int)param_1);
  fVar18 = DAT_0021b2a4;
  if ((int)uVar22 == 1) {
    if (uVar12 < 100) {
      fVar5 = ALBW_AS_F32((uVar12 * 3));
    }
    pfVar3 = pfVar2;
    if (uVar12 < 100) {
      pfVar3 = pfVar2 + (int)ALBW_AS_U32(fVar5) * 2;
    }
    pfVar3[5] = *(float *)(*(int *)(param_1[0x104] + 0x14) + 8);
  }
  else {
    pfVar3 = pfVar2;
    if (uVar12 < 100) {
      pfVar3 = pfVar2 + uVar12 * 6;
    }
    pfVar3[5] = DAT_0021b2a4;
  }
  iVar15 = 0;
  fVar5 = ALBW_AS_F32(param_1[0x4cb]);
  if (ALBW_AS_F32(param_1[0x4cb]) < DAT_0021b2a8) {
    fVar5 = DAT_0021b2a8;
  }
  piStack_64 = param_1 + 0x200;
  pfStack_60 = (float *)(param_1 + 0x4c4);
  uVar20 = DAT_0021b2b0;
  fVar21 = DAT_0021b2b4;
  fparam_2 = DAT_0021b2b8;
  fparam_1 = DAT_0021b2bc;
  fparam_0 = DAT_0021b2c0;
  fVar19 = DAT_0021b2ac;
  do {
    fVar8 = ALBW_AS_F32(((ulonglong)lVar17 >> 0x20));
    iVar4 = 0;
    if (0 < (int)fVar8) {
      do {
        uVar11 = uVar11 - 1;
        if ((int)uVar11 < 0) {
          uVar11 = 99;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)fVar8);
    }
    pfVar13 = (float *)(piStack_b0 + iVar14 * 0xc);
    pfVar3 = pfVar2;
    if (uVar11 < 100) {
      pfVar3 = pfVar2 + uVar11 * 6;
    }
    cVar1 = *(char *)((int)param_1 + 0x1376);
    if (cVar1 == '\0') {
      fVar10 = pfVar3[1];
      fVar6 = pfVar3[2];
      lVar17 = (ulonglong)(uint)ALBW_AS_U32((fVar8 * fVar19)) << 0x20;
      *pfVar13 = *pfVar3;
      pfVar13[1] = fVar10;
      pfVar13[2] = fVar6;
      if ((char)piStack_64[0x30] == '\x03') {
        pfVar13[1] = ALBW_AS_F32(param_1[0xf5]) + fVar21;
      }
      pfVar13[7] = pfVar3[3];
    }
    else if (cVar1 == '\x01') {
      fVar8 = fVar8 * fVar19;
      if (iVar15 == 0) {
        func_00115C70(&fStack_c0,pfVar13,(float *)(param_1 + 0xf4));
        lVar17 = CONCAT44(fVar8,SQRT((*pfVar13 - ALBW_AS_F32(param_1[0xf4])) *
                                     (*pfVar13 - ALBW_AS_F32(param_1[0xf4])) +
                                     (pfVar13[2] - ALBW_AS_F32(param_1[0xf6])) *
                                     (pfVar13[2] - ALBW_AS_F32(param_1[0xf6]))));
        fStack_a8 = fVar18;
        fStack_a4 = fVar18;
        uStack_a0 = uVar20;
        func_004D7F70(&fStack_a8,param_1[0xfa]);
        func_00115C54(&fStack_a8,&fStack_a8,(float *)(param_1 + 0xf4));
      }
      else {
        uVar12 = iVar15 - 1;
        if (4 < uVar12) {
          uVar12 = 4;
        }
        pfVar9 = &fStack_c0;
        apfStack_98[0] = (float *)(piStack_c4 + uVar12 * 0xc);
        func_00115C70(pfVar9,pfVar13,apfStack_98[0]);
        lVar17 = CONCAT44(fVar8,SQRT((*pfVar13 - *apfStack_98[0]) * (*pfVar13 - *apfStack_98[0]) +
                                     (pfVar13[2] - apfStack_98[0][2]) *
                                     (pfVar13[2] - apfStack_98[0][2])));
        fStack_a8 = fVar18;
        fStack_a4 = fVar18;
        uStack_a0 = uVar20;
        func_004D7F70(&fStack_a8,param_1[0xfa]);
        func_00115C54(&fStack_a8,&fStack_a8,apfStack_98[0]);
      }
      if (fStack_b8 == fVar18 && fStack_c0 == fVar18) {
        uVar12 = 0;
      }
      else if (fStack_b8 < fVar18) {
        if (fStack_c0 < fVar18) {
          if (fStack_c0 < fStack_b8) {
            iVar4 = func_004905E0(fStack_b8 / fStack_c0);
            uVar12 = 0xc0000000 - iVar4;
          }
          else {
            iVar4 = func_004905E0(fStack_c0 / fStack_b8);
            uVar12 = iVar4 + 0x80000000;
          }
        }
        else {
          fVar8 = -fStack_b8;
          if (fVar8 < fStack_c0) {
            iVar4 = func_004905E0(fVar8 / fStack_c0);
            uVar12 = iVar4 + 0x40000000;
          }
          else {
            iVar4 = func_004905E0(fStack_c0 / fVar8);
            uVar12 = 0x80000000 - iVar4;
          }
        }
      }
      else if (fStack_c0 < fVar18) {
        fVar8 = -fStack_c0;
        if (fStack_b8 < fVar8) {
          iVar4 = func_004905E0(fStack_b8 / fVar8);
          uVar12 = iVar4 + 0xc0000000;
        }
        else {
          iVar4 = func_004905E0(fVar8 / fStack_b8);
          uVar12 = -iVar4;
        }
      }
      else if (fStack_b8 < fStack_c0) {
        iVar4 = func_004905E0(fStack_b8 / fStack_c0);
        uVar12 = 0x40000000 - iVar4;
      }
      else {
        uVar12 = func_004905E0(fStack_c0 / fStack_b8);
      }
      func_00115154(&fStack_b4,&fStack_c8,uVar12);
      if (DAT_0021b50c < (int)lVar17) {
        lVar17 = CONCAT44((int)((ulonglong)lVar17 >> 0x20),uVar20);
      }
      fStack_c0 = ALBW_AS_F32(lVar17) * fStack_b4;
      fStack_b8 = ALBW_AS_F32(lVar17) * fStack_c8;
      fStack_bc = fVar18;
      func_00115C54(&fStack_c0,&fStack_c0,&fStack_a8);
      func_004D838C(pfVar13,&fStack_c0,fVar5,fparam_1,fparam_2);
      pfVar13[1] = pfVar3[1];
    }
    else if (cVar1 == '\x02') {
      func_004D838C(pfVar13,(float *)(param_1 + 0xf4),fparam_0,fparam_1,fparam_2);
      pfVar13[1] = ALBW_AS_F32(param_1[0xf5]) + fVar21;
    }
    iVar4 = *(int *)((int)ALBW_AS_U32(pfVar13[4]) + 0x14);
    if (*(float *)(iVar4 + 8) != pfVar3[5]) {
      *(float *)(iVar4 + 8) = pfVar3[5];
      *(undefined1 *)(iVar4 + 0x26) = 1;
    }
    uVar7 = 0;
    func_00168E9C((int *)CF_FBITS(pfVar13[4]),(int)ALBW_AS_U32(pfVar13[3]),(int *)0x0);
    iVar4 = func_00588BE4((int)param_1);
    if (iVar4 == *DAT_0021b510) {
      func_00169A80((int *)CF_FBITS(pfVar13[5]),*DAT_0021b510,uVar7,(int *)pfVar9);
      func_00168E9C((int *)CF_FBITS(pfVar13[5]),(int)ALBW_AS_U32(pfVar13[3]),(int *)0x0);
    }
    param_1[0x4ce] = (int)ALBW_AS_U32(pfVar3[5]);
    fVar8 = pfVar13[1];
    fVar10 = pfVar13[2];
    *pfStack_60 = *pfVar13;
    pfStack_60[1] = fVar8;
    pfStack_60[2] = fVar10;
    fVar8 = pfVar13[3];
    *(uint *)((int)ALBW_AS_U32(fVar8) + 0x164) = *(uint *)((int)ALBW_AS_U32(fVar8) + 0x164) | 0x40000000;
    func_004D8AEC((float *)((int)ALBW_AS_U32(fVar8) + 0x80),(uint)ALBW_AS_U32(pfVar13[7]),pfVar13);
    auStack_5c[2] = param_1[0x4d4];
    auStack_5c[0] = 0;
    auStack_5c[1] = 0;
    func_00491A18((float *)apfStack_98,auStack_5c,DAT_0021b514);
    fVar8 = pfVar13[3];
    pfVar9 = (float *)((int)ALBW_AS_U32(fVar8) + 0x80);
    *(uint *)((int)ALBW_AS_U32(fVar8) + 0x164) = *(uint *)((int)ALBW_AS_U32(fVar8) + 0x164) | 0x40000000;
    func_001157FC(pfVar9,(float *)((int)ALBW_AS_U32(fVar8) + 0x80),(float *)apfStack_98);
    func_004CEAF0((int)ALBW_AS_U32(pfVar13[3]));
    func_001512B4((int)ALBW_AS_U32(pfVar13[6]),pfVar13);
    iVar14 = iVar14 + 1;
    iVar15 = iVar15 + 1;
  } while (iVar14 != 4);
  return;
}

