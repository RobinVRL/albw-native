/* compilefix: USA 00354998 (EU 00354974), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [2]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "../include/ghidra_concat44.h"
#include "compilefix.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0035394C(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_003541E4(int param_1,float *param_2);
extern int func_00354280(int param_1,float *param_2);
extern int func_00355C50(int param_1);
extern int func_0048C320(int *param_1,int param_2,int param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_00521078(int param_1);
extern int func_00556B3C(int param_1);
extern int func_00556E64(int param_1);
extern float func_0058A404(int param_1);
extern int func_0058A8F0(int param_1);
extern int func_0058A960(int param_1);
extern int func_00666318(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00354cc4;
extern undefined4 DAT_00354cc8;
extern int DAT_00354ccc;
extern float DAT_00354cd0;
extern int DAT_00354cd4;
extern float *DAT_00354cd8;
extern float DAT_00354cdc;
extern undefined4 DAT_00354ce0;
extern float DAT_00354ce4;
extern int DAT_00354ce8;
extern int DAT_00354cec;
extern int DAT_00354f20;
extern float DAT_00354f24;
extern float DAT_00354f28;
extern float DAT_00354f2c;
extern int DAT_00354f30;
extern int DAT_00354f34;
extern float DAT_00354f38;
extern float DAT_00354f3c;

// USA 00354998 <- EU 00354974 (Ghidra, non-matching)
// GLOBAL DAT_00354cc4 int *
// GLOBAL DAT_00354cc8 undefined4
// GLOBAL DAT_00354ccc int
// GLOBAL DAT_00354cd0 float
// GLOBAL DAT_00354cd4 int
// GLOBAL DAT_00354cd8 float *
// GLOBAL DAT_00354cdc float
// GLOBAL DAT_00354ce0 undefined4
// GLOBAL DAT_00354ce4 float
// GLOBAL DAT_00354ce8 int
// GLOBAL DAT_00354cec int
// GLOBAL DAT_00354f20 int
// GLOBAL DAT_00354f24 float
// GLOBAL DAT_00354f28 float
// GLOBAL DAT_00354f2c float
// GLOBAL DAT_00354f30 int
// GLOBAL DAT_00354f34 int
// GLOBAL DAT_00354f38 float
// GLOBAL DAT_00354f3c float

undefined4 func_00354998(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  float *pfVar6;
  undefined1 uVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint in_fpscr;
  uint uVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(float *)(albw_frame + 0x8))
  #define local_64 (*(int *)(albw_frame + 0xc))
  #define local_5c (*(float *)(albw_frame + 0x14))
  #define local_58 (*(char * *)(albw_frame + 0x18))
  #define local_54 (*(float *)(albw_frame + 0x1c))
  #define afStack_50 ((float *)(albw_frame + 0x20))
  #define local_44 ((float *)(albw_frame + 0x2c))
  #define local_3c (*(float *)(albw_frame + 0x34))
  #define local_38 ((float *)(albw_frame + 0x38))
  #define local_30 (*(float *)(albw_frame + 0x40))
  iVar11 = *DAT_00354cc4;
  if (iVar11 == 0) {
    bVar3 = false;
LAB_003549c0:
    local_5c = 0.0;
  }
  else {
    bVar3 = func_00556E64(iVar11);
    bVar4 = func_00556B3C(iVar11);
    if (!bVar4) goto LAB_003549c0;
    local_5c = 1.4013e-45;
  }
  if ((uint)param_1[0x290] < (uint)param_1[0x291]) {
    param_1[0x290] = param_1[0x290] + 1;
  }
  iVar5 = func_0058A960((int)param_1);
  iVar9 = DAT_00354ccc;
  uVar2 = DAT_00354cc8;
  if (iVar5 != 0) {
    param_1[0x291] = 0x1e;
    param_1[0x292] = iVar9;
    param_1[0x290] = 0;
  }
  local_58 = (char *)((int)param_1 + 0x9ef);
  if (((*(char *)((int)param_1 + 0x9ee) == '\0') && (bVar3 != false)) &&
     (*(char *)((int)param_1 + 0x9ef) == '\0')) {
    *(undefined1 *)((int)param_1 + 0x9ee) = 1;
  }
  fVar13 = DAT_00354cd0;
  uVar14 = CONCAT44(uVar2,DAT_00354cd0);
  piVar10 = param_1 + 0x287;
  if ((uint)param_1[0x27e] < (uint)param_1[0x27f]) {
    param_1[0x27e] = param_1[0x27e] + 1;
  }
  uVar12 = in_fpscr & 0xfffffff | (uint)(fVar13 <= ALBW_AS_F32(param_1[0xf5]) - ALBW_AS_F32(param_1[3])) << 0x1d
  ;
  fVar15 = ALBW_AS_F32(param_1[0xf5]) - ALBW_AS_F32(param_1[3]);
  if (!SUB41(uVar12 >> 0x1d,0)) {
    fVar15 = fVar13;
  }
  if ((short)param_1[0x27a] == 0) {
    func_00354280((int)param_1,(float *)(param_1 + 0xf4));
    func_00355C50((int)param_1);
    bVar4 = func_00521078((int)param_1);
    if (((!bVar4) || (0x3f7fffff < (int)ALBW_AS_U32(fVar15))) &&
       (((param_1[0xe7] & 0x400U) == 0 && (param_1[0xe7] & 0x800U) == 0 &&
        ((DAT_00354cd4 <= (int)ALBW_AS_U32(fVar15) && ((uint)param_1[0x287] < (uint)param_1[0x288])))))) {
      param_1[0x287] = param_1[0x287] + 1;
      if (bVar4) {
        func_00115C54(&local_54,(float *)(param_1 + 2),DAT_00354cd8);
        func_00115C70(&local_68,&local_54,(float *)(param_1 + 0xf4));
        local_64 = (int)uVar14;
        func_00115DC8(&local_68);
        func_00115DAC((float *)(param_1 + 0xf7),&local_68,(float *)(param_1 + 0xf7),DAT_00354cdc);
      }
      goto LAB_00354b48;
    }
    iVar9 = (int)uVar14;
    param_1[0xf7] = iVar9;
    local_64 = DAT_00354ce0;
    param_1[0xf8] = iVar9;
    local_68 = DAT_00354ce4;
    param_1[0xf9] = iVar9;
    func_00150A84(param_1,(int *)&local_68,0);
    iVar9 = DAT_00354ce8;
    param_1[0x288] = 0xf;
    param_1[0x289] = iVar9;
    *piVar10 = 0;
    *(undefined2 *)(param_1 + 0x27a) = 1;
  }
  else {
LAB_00354b48:
    if ((short)param_1[0x27a] != 1) goto LAB_00354d80;
  }
  iVar9 = (int)uVar14;
  param_1[0xf7] = iVar9;
  param_1[0xf8] = iVar9;
  param_1[0xf9] = iVar9;
  param_1[0x277] = iVar9;
  if ((uint)param_1[0x287] < (uint)param_1[0x288]) {
    param_1[0x287] = param_1[0x287] + 1;
LAB_00354c7c:
    bVar4 = false;
    iVar9 = func_0058A8F0((int)param_1);
    if (iVar9 == 0) {
      return 0;
    }
  }
  else {
    iVar9 = param_1[0x2b8];
    if (iVar9 == 0) goto LAB_00354c7c;
    if (local_5c != 0.0) {
      *(undefined1 *)((int)param_1 + 0x9ed) = 1;
      iVar5 = 0;
      if (0 < iVar9) {
        do {
          piVar8 = *(int **)(param_1[0x2ba] + iVar5 * 4);
          iVar5 = iVar5 + 1;
          *piVar8 = param_1[699];
          param_1[699] = (int)piVar8;
        } while (iVar5 < param_1[0x2b8]);
      }
      param_1[0x2b8] = 0;
      goto LAB_00354c7c;
    }
    if (0 < iVar9) {
      piVar8 = *(int **)param_1[0x2ba];
      *piVar8 = param_1[699];
      param_1[699] = (int)piVar8;
    }
    func_0048C320(param_1 + 0x2b8,0,1);
    if (param_1[0x2b8] == 0) goto LAB_00354c7c;
    *(undefined1 *)((int)param_1 + 0x9ee) = 0;
    bVar4 = true;
  }
  iVar9 = DAT_00354cec;
  param_1[0x277] = DAT_00354cec;
  if (*(char *)((int)param_1 + 0x9ed) != '\0') {
    *(undefined1 *)((int)param_1 + 0x9ef) = 0;
    return func_00666318(param_1 + 0x297,5);
  }
  if (!bVar4) {
    cVar1 = '\0';
    if (bVar3 == false) {
      cVar1 = *(char *)((int)param_1 + 0x9ee);
    }
    if (bVar3 == false && cVar1 == '\0') {
      uVar7 = 7;
      *(undefined1 *)((int)param_1 + 0x9ef) = 0;
    }
    else {
      *local_58 = *(char *)((int)param_1 + 0x9ef) + '\x01';
      uVar7 = 3;
    }
    return func_00666318(param_1 + 0x297,uVar7);
  }
  param_1[0x163] = DAT_00354f20;
  param_1[0x275] = iVar9;
  param_1[0x276] = (int)uVar14;
  func_004FC07C((int)param_1,0,0xffffffff,0);
  *(undefined2 *)(param_1 + 0x27a) = 2;
  fVar13 = func_0058A404((int)param_1);
  fVar15 = ALBW_AS_F32(((ulonglong)uVar14 >> 0x20));
  iVar9 = (int)(fVar13 * DAT_00354f24 + (fVar15 - fVar13) * DAT_00354f24);
  param_1[0x288] = iVar9;
  if (iVar9 == 0) {
    param_1[0x289] = (int)uVar14;
  }
  else {
    fVar13 = (float)VectorUnsignedToFloat(iVar9,(byte)(uVar12 >> 0x15) & 3);
    param_1[0x289] = (int)ALBW_AS_U32((fVar15 / fVar13));
  }
  *piVar10 = 0;
  func_004FC07C((int)param_1,0,0xffffffff,0);
LAB_00354d80:
  fVar13 = ALBW_AS_F32(uVar14);
  if ((short)param_1[0x27a] == 2) {
    func_00115C54(afStack_50,(float *)(param_1 + 2),DAT_00354cd8);
    func_00115C70(local_44,(float *)(param_1 + 0xf4),afStack_50);
    fVar15 = SQRT(local_44[0] * local_44[0] + local_3c * local_3c);
    func_003541E4((int)param_1,&local_68);
    local_64 = param_1[3];
    bVar4 = fVar15 == DAT_00354f28;
    if ((int)ALBW_AS_U32(fVar15) <= (int)ALBW_AS_U32(DAT_00354f28)) {
      bVar4 = bVar3 == false;
    }
    local_5c = fVar13;
    local_58 = (char *)CF_FBITS(fVar13);
    local_54 = fVar13;
    if ((bVar4) && (iVar11 != 0)) {
      pfVar6 = *(float **)(iVar11 + 0x20);
      local_5c = *pfVar6;
      local_58 = (char *)CF_FBITS(pfVar6[1]);
      local_54 = pfVar6[2];
    }
    func_0035394C((int)param_1,&local_68,1,DAT_00354f2c);
    if ((uint)param_1[0x288] <= (uint)param_1[0x287]) {
      *(undefined2 *)(param_1 + 0x27a) = 0;
      iVar11 = DAT_00354f30;
      param_1[0x288] = 0x3c;
      param_1[0x289] = iVar11;
      *piVar10 = 0;
      *(undefined1 *)((int)param_1 + 0x9ea) = 1;
      param_1[0xf8] = DAT_00354f34;
      fVar13 = DAT_00354f38;
      func_00115DAC(&local_68,&local_5c,&local_68,DAT_00354f3c);
      func_00354280((int)param_1,&local_68);
      func_00115C70(local_38,&local_68,(float *)(param_1 + 0xf4));
      param_1[0xf7] = (int)ALBW_AS_U32((local_38[0] * fVar13));
      param_1[0xf9] = (int)ALBW_AS_U32((local_30 * fVar13));
      return func_004FABDC((int)param_1,2,0xffffffff,0);
    }
    param_1[0x287] = param_1[0x287] + 1;
  }
  return 0;
}

