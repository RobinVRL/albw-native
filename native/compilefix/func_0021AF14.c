/* compilefix: USA 0021AF14 (EU 0021AF14), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [3]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "../include/ghidra_concat44.h"
#include "compilefix.h"

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

// USA 0021AF14 <- EU 0021AF14 (Ghidra, non-matching)
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

void func_0021AF14(int param_1)

{
  char cVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float *pfVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  float fVar16;
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
  #define local_c8 (*(float *)(albw_frame + 0x8))
  #define local_c4 (*(int *)(albw_frame + 0xc))
  #define local_c0 (*(float *)(albw_frame + 0x10))
  #define local_bc (*(float *)(albw_frame + 0x14))
  #define local_b8 (*(float *)(albw_frame + 0x18))
  #define local_b4 (*(float *)(albw_frame + 0x1c))
  #define local_b0 (*(int *)(albw_frame + 0x20))
  #define local_a8 (*(float *)(albw_frame + 0x28))
  #define local_a4 (*(float *)(albw_frame + 0x2c))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x30))
  #define local_98 ((float * *)(albw_frame + 0x38))
  #define local_64 (*(int *)(albw_frame + 0x6c))
  #define local_60 (*(float * *)(albw_frame + 0x70))
  #define local_5c ((uint *)(albw_frame + 0x74))
  iVar13 = 0;
  local_c4 = param_1 + 0x8e4;
  uVar11 = *(uint *)(param_1 + 0x134c);
  lVar17 = (ulonglong)*(uint *)(param_1 + 0x1328) << 0x20;
  uVar10 = uVar11 + (uint)((ulonglong)uVar11 * (ulonglong)DAT_0021b29c >> 0x25) * -100;
  local_b0 = local_c4;
  func_001512E8(*(int **)(param_1 + 0x8e0));
  bVar15 = uVar11 < 100;
  pfVar2 = (float *)(param_1 + 0x9a4);
  pfVar3 = pfVar2;
  if (bVar15) {
    pfVar3 = pfVar2 + uVar11 * 6;
  }
  fVar5 = *(float *)(param_1 + 0x3d4);
  pfVar8 = *(float **)(param_1 + 0x3d8);
  *pfVar3 = *(float *)(param_1 + 0x3d0);
  pfVar3[1] = fVar5;
  pfVar3[2] = ALBW_AS_F32(pfVar8);
  pfVar3 = pfVar2;
  if (bVar15) {
    pfVar3 = pfVar2 + uVar11 * 6;
  }
  pfVar3[3] = *(float *)(param_1 + 1000);
  pfVar3 = pfVar2;
  if (bVar15) {
    pfVar3 = pfVar2 + uVar11 * 6;
  }
  pfVar3[4] = *(float *)(DAT_0021b2a0 + param_1);
  uVar22 = func_0058AB74(param_1);
  fVar18 = DAT_0021b2a4;
  if ((int)uVar22 == 1) {
    if (uVar11 < 100) {
      fVar5 = ALBW_AS_F32((uVar11 * 3));
    }
    pfVar3 = pfVar2;
    if (uVar11 < 100) {
      pfVar3 = pfVar2 + (int)ALBW_AS_U32(fVar5) * 2;
    }
    pfVar3[5] = *(float *)(*(int *)(*(int *)(param_1 + 0x410) + 0x14) + 8);
  }
  else {
    pfVar3 = pfVar2;
    if (uVar11 < 100) {
      pfVar3 = pfVar2 + uVar11 * 6;
    }
    pfVar3[5] = DAT_0021b2a4;
  }
  iVar14 = 0;
  fVar5 = *(float *)(param_1 + 0x132c);
  if (*(float *)(param_1 + 0x132c) < DAT_0021b2a8) {
    fVar5 = DAT_0021b2a8;
  }
  local_64 = param_1 + 0x800;
  local_60 = (float *)(param_1 + 0x1310);
  uVar20 = DAT_0021b2b0;
  fVar21 = DAT_0021b2b4;
  fparam_2 = DAT_0021b2b8;
  fparam_1 = DAT_0021b2bc;
  fparam_0 = DAT_0021b2c0;
  fVar19 = DAT_0021b2ac;
  do {
    fVar7 = ALBW_AS_F32(((ulonglong)lVar17 >> 0x20));
    iVar4 = 0;
    if (0 < (int)fVar7) {
      do {
        uVar10 = uVar10 - 1;
        if ((int)uVar10 < 0) {
          uVar10 = 99;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)fVar7);
    }
    pfVar12 = (float *)(local_b0 + iVar13 * 0x30);
    pfVar3 = pfVar2;
    if (uVar10 < 100) {
      pfVar3 = pfVar2 + uVar10 * 6;
    }
    cVar1 = *(char *)(param_1 + 0x1376);
    if (cVar1 == '\0') {
      fVar9 = pfVar3[1];
      fVar16 = pfVar3[2];
      lVar17 = (ulonglong)(uint)ALBW_AS_U32((fVar7 * fVar19)) << 0x20;
      *pfVar12 = *pfVar3;
      pfVar12[1] = fVar9;
      pfVar12[2] = fVar16;
      if (*(char *)(local_64 + 0xc0) == '\x03') {
        pfVar12[1] = *(float *)(param_1 + 0x3d4) + fVar21;
      }
      pfVar12[7] = pfVar3[3];
    }
    else if (cVar1 == '\x01') {
      fVar7 = fVar7 * fVar19;
      if (iVar14 == 0) {
        func_00115C70(&local_c0,pfVar12,(float *)(param_1 + 0x3d0));
        fVar16 = *pfVar12 - *(float *)(param_1 + 0x3d0);
        fVar9 = pfVar12[2] - *(float *)(param_1 + 0x3d8);
        lVar17 = CONCAT44(fVar7,SQRT(fVar16 * fVar16 + fVar9 * fVar9));
        local_a8 = fVar18;
        local_a4 = fVar18;
        local_a0 = uVar20;
        func_004D7F70(&local_a8,*(uint *)(param_1 + 1000));
        func_00115C54(&local_a8,&local_a8,(float *)(param_1 + 0x3d0));
      }
      else {
        uVar11 = iVar14 - 1;
        if (4 < uVar11) {
          uVar11 = 4;
        }
        pfVar8 = &local_c0;
        local_98[0] = (float *)(local_c4 + uVar11 * 0x30);
        func_00115C70(pfVar8,pfVar12,local_98[0]);
        lVar17 = CONCAT44(fVar7,SQRT((*pfVar12 - *local_98[0]) * (*pfVar12 - *local_98[0]) +
                                     (pfVar12[2] - local_98[0][2]) * (pfVar12[2] - local_98[0][2])))
        ;
        local_a8 = fVar18;
        local_a4 = fVar18;
        local_a0 = uVar20;
        func_004D7F70(&local_a8,*(uint *)(param_1 + 1000));
        func_00115C54(&local_a8,&local_a8,local_98[0]);
      }
      if (local_b8 == fVar18 && local_c0 == fVar18) {
        uVar11 = 0;
      }
      else if (local_b8 < fVar18) {
        if (local_c0 < fVar18) {
          if (local_c0 < local_b8) {
            iVar4 = func_004905E0(local_b8 / local_c0);
            uVar11 = 0xc0000000 - iVar4;
          }
          else {
            iVar4 = func_004905E0(local_c0 / local_b8);
            uVar11 = iVar4 + 0x80000000;
          }
        }
        else {
          fVar7 = -local_b8;
          if (fVar7 < local_c0) {
            iVar4 = func_004905E0(fVar7 / local_c0);
            uVar11 = iVar4 + 0x40000000;
          }
          else {
            iVar4 = func_004905E0(local_c0 / fVar7);
            uVar11 = 0x80000000 - iVar4;
          }
        }
      }
      else if (local_c0 < fVar18) {
        fVar7 = -local_c0;
        if (local_b8 < fVar7) {
          iVar4 = func_004905E0(local_b8 / fVar7);
          uVar11 = iVar4 + 0xc0000000;
        }
        else {
          iVar4 = func_004905E0(fVar7 / local_b8);
          uVar11 = -iVar4;
        }
      }
      else if (local_b8 < local_c0) {
        iVar4 = func_004905E0(local_b8 / local_c0);
        uVar11 = 0x40000000 - iVar4;
      }
      else {
        uVar11 = func_004905E0(local_c0 / local_b8);
      }
      func_00115154(&local_b4,&local_c8,uVar11);
      if (DAT_0021b50c < (int)lVar17) {
        lVar17 = CONCAT44((int)((ulonglong)lVar17 >> 0x20),uVar20);
      }
      local_c0 = ALBW_AS_F32(lVar17) * local_b4;
      local_b8 = ALBW_AS_F32(lVar17) * local_c8;
      local_bc = fVar18;
      func_00115C54(&local_c0,&local_c0,&local_a8);
      func_004D838C(pfVar12,&local_c0,fVar5,fparam_1,fparam_2);
      pfVar12[1] = pfVar3[1];
    }
    else if (cVar1 == '\x02') {
      func_004D838C(pfVar12,(float *)(param_1 + 0x3d0),fparam_0,fparam_1,fparam_2);
      pfVar12[1] = *(float *)(param_1 + 0x3d4) + fVar21;
    }
    iVar4 = *(int *)((int)ALBW_AS_U32(pfVar12[4]) + 0x14);
    if (*(float *)(iVar4 + 8) != pfVar3[5]) {
      *(float *)(iVar4 + 8) = pfVar3[5];
      *(undefined1 *)(iVar4 + 0x26) = 1;
    }
    uVar6 = 0;
    func_00168E9C((int *)CF_FBITS(pfVar12[4]),(int)ALBW_AS_U32(pfVar12[3]),(int *)0x0);
    iVar4 = func_00588BE4(param_1);
    if (iVar4 == *DAT_0021b510) {
      func_00169A80((int *)CF_FBITS(pfVar12[5]),*DAT_0021b510,uVar6,(int *)pfVar8);
      func_00168E9C((int *)CF_FBITS(pfVar12[5]),(int)ALBW_AS_U32(pfVar12[3]),(int *)0x0);
    }
    *(float *)(param_1 + 0x1338) = pfVar3[5];
    fVar7 = pfVar12[1];
    fVar9 = pfVar12[2];
    *local_60 = *pfVar12;
    local_60[1] = fVar7;
    local_60[2] = fVar9;
    fVar7 = pfVar12[3];
    *(uint *)((int)ALBW_AS_U32(fVar7) + 0x164) = *(uint *)((int)ALBW_AS_U32(fVar7) + 0x164) | 0x40000000;
    func_004D8AEC((float *)((int)ALBW_AS_U32(fVar7) + 0x80),(uint)ALBW_AS_U32(pfVar12[7]),pfVar12);
    local_5c[2] = *(undefined4 *)(param_1 + 0x1350);
    local_5c[0] = 0;
    local_5c[1] = 0;
    func_00491A18((float *)local_98,local_5c,DAT_0021b514);
    fVar7 = pfVar12[3];
    pfVar8 = (float *)((int)ALBW_AS_U32(fVar7) + 0x80);
    *(uint *)((int)ALBW_AS_U32(fVar7) + 0x164) = *(uint *)((int)ALBW_AS_U32(fVar7) + 0x164) | 0x40000000;
    func_001157FC(pfVar8,(float *)((int)ALBW_AS_U32(fVar7) + 0x80),(float *)local_98);
    func_004CEAF0((int)ALBW_AS_U32(pfVar12[3]));
    func_001512B4((int)ALBW_AS_U32(pfVar12[6]),pfVar12);
    iVar13 = iVar13 + 1;
    iVar14 = iVar14 + 1;
  } while (iVar13 != 4);
  return;
}

