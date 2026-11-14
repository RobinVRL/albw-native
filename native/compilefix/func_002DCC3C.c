/* compilefix: USA 002DCC3C (EU 002DCC18), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [4]
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [2]
 *  - explicit casts at pointer-type mismatches (identity on the ARM) [2]
 *  - implicit float<->int conversions (Ghidra COPY between a float and an int-typed variable or
 *    pool word, e.g. `fVar = _DAT_xxx;`, `puVar[3] = fVar;`) made bit copies [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_002dd437[];
extern char s_cf_002dd438[];
#include "compilefix.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0028D7A4(int param_1,float fparam_0);
extern int func_002D55D0(int param_1,uint param_2);
extern int func_00377288(undefined4 *param_1,undefined4 param_2);
extern int func_004E9BEC(int param_1,int *param_2,int param_3);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_0053EDD8(int param_1);
extern int func_005465D0(int param_1,int param_2,uint *param_3,float fparam_0,float fparam_1);
extern int func_0054C998(int param_1,int param_2);
extern int func_0068C690(float *param_1);
extern float DAT_002dcf0c;
extern float DAT_002dcf10;
extern int *DAT_002dcf14;
extern float DAT_002dcf18;
extern float DAT_002dcf1c;
extern int DAT_002dcf20;
extern float DAT_002dcf24;
extern float DAT_002dcf28;
extern char *DAT_002dcf2c;
extern char *DAT_002dcf30;
extern int DAT_002dcf44;
extern float DAT_002dcf48;
extern undefined4 DAT_002dd258;
extern float DAT_002dd25c;
extern float DAT_002dd260;
extern undefined4 DAT_002dd264;
extern char *DAT_002dd268;
extern float DAT_002dd42c;
extern char *DAT_002dd430;
extern undefined DAT_002dd434;
extern char s_SE_PL_SWIM_WAVE_002dcf34[];
extern undefined4 _DAT_002dd434;

// USA 002DCC3C <- EU 002DCC18 (Ghidra, non-matching)
// GLOBAL DAT_002dcf0c float
// GLOBAL DAT_002dcf10 float
// GLOBAL DAT_002dcf14 int *
// GLOBAL DAT_002dcf18 float
// GLOBAL DAT_002dcf1c float
// GLOBAL DAT_002dcf20 int
// GLOBAL DAT_002dcf24 float
// GLOBAL DAT_002dcf28 float
// GLOBAL DAT_002dcf2c char *
// GLOBAL DAT_002dcf30 char *
// GLOBAL DAT_002dcf44 int
// GLOBAL DAT_002dcf48 float
// GLOBAL DAT_002dd258 undefined4
// GLOBAL DAT_002dd25c float
// GLOBAL DAT_002dd260 float
// GLOBAL DAT_002dd264 undefined4
// GLOBAL DAT_002dd268 char *
// GLOBAL DAT_002dd42c float
// GLOBAL DAT_002dd430 char *
// GLOBAL DAT_002dd434 undefined
// GLOBAL s_cf_002dd437 string
// GLOBAL s_SE_PL_SWIM_WAVE_002dcf34 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_002DCC3C(int param_1,undefined4 param_2)

{
  int *piVar1;
  char *pcVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;
  char *pcVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(char * *)(albw_frame + 0x0))
  #define local_6c (*(char * *)(albw_frame + 0x4))
  #define local_68 (*(char * *)(albw_frame + 0x8))
  #define local_54 (*(char *)(albw_frame + 0x1c))
  #define local_52 (*(ushort *)(albw_frame + 0x1e))
  #define afStack_50 ((float *)(albw_frame + 0x20))
  uVar3 = DAT_002dd258;
  pcVar2 = DAT_002dcf30;
  pcVar15 = DAT_002dcf2c;
  fVar18 = DAT_002dcf28;
  fVar17 = DAT_002dcf24;
  iVar6 = DAT_002dcf20;
  fVar13 = DAT_002dcf1c;
  fVar14 = DAT_002dcf18;
  piVar1 = DAT_002dcf14;
  fVar12 = DAT_002dcf10;
  fVar16 = DAT_002dcf0c;
  switch(param_2) {
  case 0x3f:
    iVar6 = *(int *)(param_1 + 0x50);
    if (((*(uint *)(iVar6 + 0x328) & 0x80) == 0) || (*(char *)(iVar6 + 0x33c) != '\f')) {
      bVar10 = (*(byte *)(iVar6 + 0x324) & 1) == 0;
      bVar9 = (*(byte *)(iVar6 + 0x324) & 8) == 0;
      bVar11 = bVar10 && bVar9;
      if (bVar10 && bVar9) {
        bVar11 = *(char *)(iVar6 + 0x168) == '\0';
      }
      if ((!bVar11) && (0xe < *(uint *)(*(int *)(param_1 + 0x2c) + 0x44))) {
        fVar16 = *(float *)(*(int *)(param_1 + 0x48) + 0x24);
joined_r0x002dcf04:
        if (fVar16 <= ALBW_AS_F32(DAT_002dcf2c)) goto LAB_002dcce0;
        break;
      }
    }
    *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0x20) = 10;
    uVar7 = func_0054C998(*(int *)(param_1 + 0x48),**(int **)(param_1 + 0x3c));
    func_0051D2CC(*(int **)(param_1 + 0x3c),uVar7,fVar16);
    fVar12 = *(float *)(*(int *)(param_1 + 0x48) + 0x24) * fVar12;
    func_00115154((float *)&local_70,(float *)&local_6c,uVar7);
    **(float **)(param_1 + 0x38) = fVar12 * ALBW_AS_F32(local_70);
    *(float *)(*(int *)(param_1 + 0x38) + 8) = fVar12 * ALBW_AS_F32(local_6c);
    if (fVar12 != ALBW_AS_F32(pcVar15)) {
      local_6c = s_SE_PL_SWIM_WAVE_002dcf34;
      local_70 = pcVar2;
      func_004E9BEC(*piVar1,(int *)&local_70,0);
    }
    func_00377288((undefined4 *)(&local_70),**(undefined4 **)(param_1 + 0x3c));
    if ((DAT_002dcf44 < *(int *)(*(int *)(param_1 + 0x48) + 0x24)) &&
       (iVar6 = func_005465D0(param_1,(int)&local_70,*(uint **)(param_1 + 0x3c),fVar13,fVar14),
       iVar6 != 0)) {
      iVar6 = *(int *)(param_1 + 0x70);
      if (iVar6 == -1) {
        if ((local_54 == '\x13') && ((local_52 & 0x1f) == 2)) goto LAB_002dcde4;
      }
      else if (-1 < iVar6) {
LAB_002dcde4:
        *(int *)(param_1 + 0x70) = iVar6 + 1;
        if (9 < iVar6 + 1) {
LAB_002dcdf4:
          iVar6 = func_0068C690(afStack_50);
          *(int *)(param_1 + 0x58) = iVar6 + -0x80000000;
          *(undefined1 *)(*(int *)(param_1 + 0x50) + 0x166) = 0;
          return func_002D55D0(param_1,0x41);
        }
      }
    }
    uVar7 = **(uint **)(*(int *)(param_1 + 0x48) + 0x14);
    if ((uVar7 & 2) != 0) {
      return func_002D55D0(param_1,0x40);
    }
    if ((uVar7 & 1) == 0) {
      fVar16 = **(float **)(param_1 + 0x34);
      fVar12 = (*(float **)(param_1 + 0x34))[2];
      fVar18 = fVar18 + SQRT(fVar16 * fVar16 + fVar12 * fVar12) * DAT_002dcf48;
      func_0028D7A4(*(int *)(param_1 + 0x4c) + 0x3c,fVar18);
      return func_0028D7A4(*(int *)(param_1 + 0x4c) + 0x5c,fVar18);
    }
LAB_002dcfd8:
    return func_002D55D0(param_1,0x42);
  case 0x40:
    iVar5 = *(int *)(param_1 + 0x50);
    if (((*(uint *)(iVar5 + 0x328) & 0x80) == 0) || (*(char *)(iVar5 + 0x33c) != '\f')) {
      bVar10 = (*(byte *)(iVar5 + 0x324) & 1) == 0;
      bVar9 = (*(byte *)(iVar5 + 0x324) & 8) == 0;
      bVar11 = bVar10 && bVar9;
      if (bVar10 && bVar9) {
        bVar11 = *(char *)(iVar5 + 0x168) == '\0';
      }
      if (!bVar11) {
        fVar16 = *(float *)(*(int *)(param_1 + 0x48) + 0x24);
        goto joined_r0x002dcf04;
      }
    }
    *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0x20) = 10;
    *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x500) = uVar3;
    if (*(uint *)(*(int *)(param_1 + 0x2c) + 0x44) < 5) {
      func_00377288((undefined4 *)(&local_70),**(undefined4 **)(param_1 + 0x3c));
      iVar5 = func_005465D0(param_1,(int)&local_70,*(uint **)(param_1 + 0x3c),fVar13,fVar14);
      if (((iVar5 != 0) && (local_54 == '\x13')) && ((local_52 & 0x1f) == 2)) goto LAB_002dcdf4;
    }
    if ((**(uint **)(*(int *)(param_1 + 0x48) + 0x14) & 1) == 0) {
      cVar4 = '\0';
      if (0 < *(int *)(param_1 + 0x74)) {
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
        uVar7 = **(uint **)(param_1 + 0x3c);
        pfVar8 = (float *)(iVar6 + (uVar7 >> 0x18) * 0x10);
        fVar14 = (float)VectorUnsignedToFloat(uVar7 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
        fVar13 = (float)VectorUnsignedToFloat(uVar7 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
        local_70 = (char *)CF_FBITS(((*pfVar8 + pfVar8[1] * fVar14 * fVar17) * DAT_002dd25c));
        local_68 = (char *)CF_FBITS(((pfVar8[2] + pfVar8[3] * fVar13 * fVar17) * DAT_002dd25c));
        local_6c = pcVar15;
        if (*(char *)(param_1 + 0x78) != '\0') {
          func_00115D70((float *)&local_70,(float *)&local_70,DAT_002dd260);
        }
        func_00115C54(*(float **)(param_1 + 0x34),*(float **)(param_1 + 0x34),(float *)&local_70);
        cVar4 = '\x01';
      }
      if ((*(int *)(param_1 + 0x74) != 0) || (*(uint *)(*(int *)(param_1 + 0x2c) + 0x44) < 0x1d)) {
        bVar11 = cVar4 == '\0';
        if (bVar11) {
          cVar4 = *(char *)(param_1 + 0x78);
        }
        if (!bVar11 || cVar4 != '\0') {
          return 0;
        }
        uVar7 = func_0054C998(*(int *)(param_1 + 0x48),**(int **)(param_1 + 0x3c));
        func_0051D2CC(*(int **)(param_1 + 0x3c),uVar7,fVar16);
        fVar12 = *(float *)(*(int *)(param_1 + 0x48) + 0x24) * fVar12;
        func_00115154((float *)&local_70,(float *)&local_6c,uVar7);
        **(float **)(param_1 + 0x38) = fVar12 * ALBW_AS_F32(local_70);
        *(float *)(*(int *)(param_1 + 0x38) + 8) = fVar12 * ALBW_AS_F32(local_6c);
        return 0;
      }
LAB_002dd348:
      return func_002D55D0(param_1,0x3f);
    }
    goto LAB_002dcfd8;
  case 0x41:
    fVar16 = DAT_002dcf24;
    func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x58),DAT_002dcf18);
    *(undefined1 *)(*(int *)(param_1 + 0x50) + 0x166) = 0;
    uVar7 = *(uint *)(*(int *)(param_1 + 0x2c) + 0x44);
    if (uVar7 < 0xb) {
      local_6c = DAT_002dd268;
      local_70 = pcVar15;
      local_68 = pcVar15;
      func_00115C54(*(float **)(param_1 + 0x34),*(float **)(param_1 + 0x34),(float *)&local_70);
    }
    else if (uVar7 < 0x15) {
      uVar7 = **(uint **)(param_1 + 0x3c);
      pfVar8 = (float *)(iVar6 + (uVar7 >> 0x18) * 0x10);
      fVar12 = (float)VectorUnsignedToFloat(uVar7 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      fVar14 = (float)VectorUnsignedToFloat(uVar7 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      local_70 = (char *)CF_FBITS(((*pfVar8 + pfVar8[1] * fVar12 * fVar16) * DAT_002dd42c));
      local_68 = (char *)CF_FBITS(((pfVar8[2] + pfVar8[3] * fVar14 * fVar16) * DAT_002dd42c));
      local_6c = DAT_002dd430;
      func_00115C54(*(float **)(param_1 + 0x34),*(float **)(param_1 + 0x34),(float *)&local_70);
    }
    iVar6 = *(int *)(param_1 + 0x50);
    if (((*(byte *)(iVar6 + 0x324) & 1) == 0 && (*(byte *)(iVar6 + 0x324) & 8) == 0) &&
       (*(char *)(iVar6 + 0x168) == '\0')) {
      return 0;
    }
    if (*(uint *)(*(int *)(param_1 + 0x2c) + 0x44) < 0x15) {
      return 0;
    }
    *(undefined1 *)(iVar6 + 0x166) = 1;
    if (((*(uint *)(*(int *)(param_1 + 0x50) + 0x328) & 0x80) != 0) &&
       (*(char *)(*(int *)(param_1 + 0x50) + 0x33c) == '\f')) goto LAB_002dd348;
    if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= ALBW_AS_F32(pcVar15)) {
LAB_002dcce0:
      uVar7 = 0;
      goto LAB_002dcce4;
    }
    break;
  case 0x42:
    fVar16 = DAT_002dcf10;
    fVar12 = DAT_002dcf0c;
    iVar6 = func_0053EDD8(*(int *)(param_1 + 0x4c) + 0x3c);
    if (iVar6 != 0) goto LAB_002dd348;
    if (((*(uint *)(*(int *)(param_1 + 0x50) + 0x328) & 0x80) != 0) &&
       (*(char *)(*(int *)(param_1 + 0x50) + 0x33c) == '\f')) {
      if (*(uint *)(*(int *)(param_1 + 0x2c) + 0x44) < 200) {
        uVar7 = func_0054C998(*(int *)(param_1 + 0x48),**(int **)(param_1 + 0x3c));
        func_0051D2CC(*(int **)(param_1 + 0x3c),uVar7,fVar12);
        fVar16 = *(float *)(*(int *)(param_1 + 0x48) + 0x24) * fVar16;
        func_00115154((float *)&local_70,(float *)&local_6c,uVar7);
        **(float **)(param_1 + 0x38) = fVar16 * ALBW_AS_F32(local_70);
        *(float *)(*(int *)(param_1 + 0x38) + 8) = fVar16 * ALBW_AS_F32(local_6c);
      }
      *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x4d0) = DAT_002dd264;
      return 0;
    }
    if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= ALBW_AS_F32(pcVar15)) goto LAB_002dcce0;
    break;
  case 0x43:
    func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x58),ALBW_AS_F32(_DAT_002dd434));
    local_6c = s_cf_002dd438;
    local_70 = pcVar2;
    func_004E9BEC(*piVar1,(int *)&local_70,0);
    iVar6 = *(int *)(param_1 + 0x50);
    if (*(char *)(iVar6 + 0x529) != '\0') {
      iVar6 = func_0068C690((float *)(iVar6 + 0x51c));
      *(int *)(param_1 + 0x58) = iVar6;
      *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0xa8) = 0;
      return 0;
    }
    if (5 < *(int *)(*(int *)(param_1 + 0x2c) + 0xa8)) {
      if (((*(uint *)(iVar6 + 0x328) & 0x80) != 0) && (*(char *)(iVar6 + 0x33c) == '\f')) {
        return func_002D55D0(param_1,0x3f);
      }
      return func_002D55D0(param_1,(uint)(ALBW_AS_F32(pcVar15) < *(float *)(*(int *)(param_1 + 0x48) + 0x24)));
    }
  default:
    return 0;
  }
  uVar7 = 1;
LAB_002dcce4:
  return func_002D55D0(param_1,uVar7);
}

