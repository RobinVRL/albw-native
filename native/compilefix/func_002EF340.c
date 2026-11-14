/* compilefix: USA 002EF340 (EU 002EF31C), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [2]
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [3]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_002ef66b[];
extern char s_cf_002ef90b[];
extern char s_cf_002ef90c[];
#include "compilefix.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014EB3C(int param_1);
extern int func_002F618C(int param_1,float fparam_0);
extern int func_00352198(int param_1,int *param_2);
extern int func_0039DF7C(int param_1);
extern int func_003A42B0(int param_1,int param_2);
extern float func_003E19E8(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4);
extern int func_004D8054(float *param_1,uint param_2,float fparam_0);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FB4E0(int param_1,float fparam_0);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0058A8F0(int param_1);
extern float func_0058AA40(int param_1);
extern int func_0058AB74(int param_1);
extern float func_006640EC(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int func_00668934(undefined4 *param_1,undefined1 param_2);
extern int func_0068A3EC(float *param_1,float fparam_0);
extern int func_0068A560(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_0068C690(float *param_1);
extern int *DAT_002ef654;
extern float DAT_002ef658;
extern float DAT_002ef65c;
extern float DAT_002ef660;
extern int DAT_002ef664;
extern undefined DAT_002ef668;
extern int DAT_002ef674;
extern float DAT_002ef678;
extern float DAT_002ef67c;
extern int DAT_002ef680;
extern float DAT_002ef684;
extern float DAT_002ef688;
extern int DAT_002ef68c;
extern undefined4 DAT_002ef690;
extern undefined DAT_002ef908;
extern undefined4 DAT_002ef914;
extern char s__WarpIn_002ef66b[];
extern undefined4 _DAT_002ef668;
extern undefined4 _DAT_002ef908;

// USA 002EF340 <- EU 002EF31C (Ghidra, non-matching)
// GLOBAL DAT_002ef654 int *
// GLOBAL DAT_002ef658 float
// GLOBAL DAT_002ef65c float
// GLOBAL DAT_002ef660 float
// GLOBAL DAT_002ef664 int
// GLOBAL DAT_002ef668 undefined
// GLOBAL DAT_002ef674 int
// GLOBAL DAT_002ef678 float
// GLOBAL DAT_002ef67c float
// GLOBAL DAT_002ef680 int
// GLOBAL DAT_002ef684 float
// GLOBAL DAT_002ef688 float
// GLOBAL DAT_002ef68c int
// GLOBAL DAT_002ef690 undefined4
// GLOBAL DAT_002ef908 undefined
// GLOBAL DAT_002ef914 undefined4
// GLOBAL s_cf_002ef90b string
// GLOBAL s_cf_002ef66b string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_002EF340(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  uint uVar8;
  uint *puVar9;
  int *piVar10;
  uint in_fpscr;
  float in_s0;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 ((float *)(albw_frame + 0xc))
  #define local_2c (*(float *)(albw_frame + 0x14))
  iVar2 = func_0052FBA0(*DAT_002ef654 + 0x3dbbc,*(uint *)(param_1 + 0xc90));
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  pfVar3 = (float *)func_00520FC0();
  fVar12 = DAT_002ef660;
  fVar14 = DAT_002ef65c;
  fVar13 = DAT_002ef658;
  piVar10 = (int *)(param_1 + 0xb7c);
  puVar9 = (uint *)(param_1 + 0xb0c);
  switch(*(undefined4 *)(param_1 + 0xb7c)) {
  case 0:
    fVar13 = DAT_002ef65c;
    fVar14 = DAT_002ef658;
    fVar11 = func_0058AA40(param_1);
    uVar1 = _DAT_002ef668;
    if (DAT_002ef664 < (int)ALBW_AS_U32(fVar11)) {
      *(undefined4 *)(param_1 + 0xb10) = 10;
      *(undefined4 *)(param_1 + 0xb14) = uVar1;
      *puVar9 = 0;
      local_3c = s__WarpIn_002ef66b + 1;
      local_40 = fVar12;
      func_00352198(param_1 + 0x324,(int *)&local_40);
      *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff7b | 1;
      *piVar10 = *(int *)(param_1 + 0xb7c) + 1;
    }
    else if (((iVar2 != 0) && (*(char *)(iVar2 + 0x410) == '\0')) &&
            (fVar12 = func_0058AA40(param_1), DAT_002ef674 < (int)ALBW_AS_U32(fVar12))) {
      local_40 = *(float *)(param_1 + 0x3d0);
      uStack_38 = *(undefined4 *)(param_1 + 0x3d8);
      local_3c = (char *)CF_FBITS((*(float *)(param_1 + 0x3d4) + DAT_002ef678));
      func_004D8054(&local_40,*(uint *)(param_1 + 1000),DAT_002ef67c);
      func_00115C70(local_34,&local_40,(float *)(param_1 + 0xe30));
      if (DAT_002ef680 < (int)ALBW_AS_U32((local_34[0] * local_34[0] + local_2c * local_2c))) {
        func_0068A3EC(local_34,DAT_002ef684);
      }
      func_00115C54(&local_40,(float *)(param_1 + 0xe30),local_34);
      *(float *)(iVar2 + 0x460) = local_40;
      *(char **)(iVar2 + 0x464) = local_3c;
      *(undefined4 *)(iVar2 + 0x468) = uStack_38;
      func_00668934((undefined4 *)(iVar2 + 0x40c),1);
    }
    if (*(uint *)(param_1 + 0xb0c) < *(uint *)(param_1 + 0xb10)) {
      *(uint *)(param_1 + 0xb0c) = *(uint *)(param_1 + 0xb0c) + 1;
      pfVar4 = (float *)func_00520FC0();
      iVar2 = DAT_002ef68c;
      pfVar7 = *(float **)(param_1 + 0xb10);
      pfVar3 = pfVar4;
      if (pfVar7 != (float *)0x0) {
        pfVar3 = (float *)*puVar9;
      }
      fVar12 = fVar14;
      if ((pfVar7 != (float *)0x0 && pfVar3 != (float *)0x0) && (fVar12 = fVar13, pfVar3 < pfVar7))
      {
        fVar12 = (float)VectorUnsignedToFloat((uint32_t)(uintptr_t)(pfVar3),(byte)(in_fpscr >> 0x15) & 3);
        fVar12 = fVar12 * *(float *)(param_1 + 0xb14);
      }
      fVar13 = (fVar13 - fVar12) * DAT_002ef688;
      func_0014EB3C(param_1);
      func_00115C70(&local_40,pfVar4,(float *)(param_1 + 0x3d0));
      local_3c = (char *)CF_FBITS(fVar14);
      iVar5 = func_0068C690(&local_40);
      return func_0051D2F4((int *)(param_1 + 1000),iVar5,0,iVar2,fVar13);
    }
    return func_003A42B0(param_1 + 0x8ec,0);
  case 1:
    uVar6 = *(uint *)(param_1 + 0xb0c);
    uVar8 = *(uint *)(param_1 + 0xb10);
    if (uVar6 < uVar8) {
      uVar6 = uVar6 + 1;
      *(uint *)(param_1 + 0xb0c) = uVar6;
    }
    if (uVar8 != 0) {
      uVar6 = *puVar9;
    }
    fVar12 = fVar13;
    if ((uVar8 != 0 && uVar6 != 0) && (fVar12 = fVar14, uVar6 < uVar8)) {
      fVar12 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
      fVar12 = fVar12 * *(float *)(param_1 + 0xb14);
    }
    func_002F618C(param_1,fVar14 - fVar12);
    uVar1 = DAT_002ef690;
    if (*(uint *)(param_1 + 0xb10) <= *(uint *)(param_1 + 0xb0c)) {
      *(undefined4 *)(param_1 + 0xb10) = 0x28;
      *(undefined4 *)(param_1 + 0xb14) = uVar1;
      *puVar9 = 0;
      func_004FABDC(param_1,0x14,0,0);
      func_004FB4E0(param_1,fVar13);
      *piVar10 = *(int *)(param_1 + 0xb7c) + 1;
    }
    break;
  case 2:
    if (*(uint *)(param_1 + 0xb0c) < *(uint *)(param_1 + 0xb10)) {
      *(uint *)(param_1 + 0xb0c) = *(uint *)(param_1 + 0xb0c) + 1;
      func_00115C70(&local_40,pfVar3,(float *)(param_1 + 0xbb4));
      iVar5 = func_0068C690(&local_40);
      *(int *)(param_1 + 0xc88) = iVar5;
      *(int *)(param_1 + 1000) = iVar5;
    }
    if (((*(uint *)(param_1 + 0xb10) <= *(uint *)(param_1 + 0xb0c)) && (iVar2 != 0)) &&
       (iVar2 = func_0039DF7C(iVar2), uVar1 = _DAT_002ef908, iVar2 != 0)) {
      *(undefined4 *)(param_1 + 0xb10) = 0x23;
      *(undefined4 *)(param_1 + 0xb14) = uVar1;
      *puVar9 = 0;
      func_004FB4E0(param_1,fVar14);
      local_3c = s_cf_002ef90c;
      local_40 = fVar12;
      func_00352198(param_1 + 0x324,(int *)&local_40);
      *piVar10 = *(int *)(param_1 + 0xb7c) + 1;
    }
    break;
  case 3:
    uVar6 = *(uint *)(param_1 + 0xb0c);
    uVar8 = *(uint *)(param_1 + 0xb10);
    if (uVar6 < uVar8) {
      uVar6 = uVar6 + 1;
      *(uint *)(param_1 + 0xb0c) = uVar6;
    }
    if (uVar8 != 0) {
      uVar6 = *puVar9;
    }
    fVar12 = fVar13;
    if ((uVar8 != 0 && uVar6 != 0) && (fVar12 = fVar14, uVar6 < uVar8)) {
      fVar12 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
      fVar12 = fVar12 * *(float *)(param_1 + 0xb14);
    }
    func_002F618C(param_1,fVar12);
    uVar1 = DAT_002ef914;
    if ((*(uint *)(param_1 + 0xb10) <= *(uint *)(param_1 + 0xb0c)) &&
       (*(char *)(iVar2 + 0x410) == '\0')) {
      *piVar10 = *(int *)(param_1 + 0xb7c) + 1;
      *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x80;
      *(undefined4 *)(param_1 + 0xb10) = 0x1e;
      *(undefined4 *)(param_1 + 0xb14) = uVar1;
      *puVar9 = 0;
    }
    break;
  case 4:
    uVar15 = func_0058AB74(param_1);
    if ((((int)uVar15 == 0x14) || (uVar15 = func_0058AB74(param_1), (int)uVar15 == 0x16)) &&
       (iVar2 = func_0058A8F0(param_1), iVar2 != 0)) {
      func_004FABDC(param_1,0,0xffffffff,0);
    }
    if (*(uint *)(param_1 + 0xb10) <= *(uint *)(param_1 + 0xb0c)) {
      func_006640EC((undefined4 *)(param_1 + 0x8c8),2,in_s0);
      return 0;
    }
    *(uint *)(param_1 + 0xb0c) = *(uint *)(param_1 + 0xb0c) + 1;
  }
  uVar6 = *(uint *)(param_1 + 0xb9c);
  uVar8 = *(uint *)(param_1 + 0xba0);
  if (uVar6 < uVar8) {
    uVar6 = uVar6 + 1;
    *(uint *)(param_1 + 0xb9c) = uVar6;
  }
  if (uVar8 != 0) {
    uVar6 = *(uint *)(param_1 + 0xb9c);
  }
  fVar12 = fVar13;
  if ((uVar8 != 0 && uVar6 != 0) && (fVar12 = fVar14, uVar6 < uVar8)) {
    fVar12 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
    fVar12 = fVar12 * *(float *)(param_1 + 0xba4);
  }
  fVar13 = func_003E19E8(fVar13,fVar13,fVar14,fVar13,fVar12);
  return func_0068A560((float *)(param_1 + 0x3d0),(float *)(param_1 + 0xba8),(float *)(param_1 + 0xbb4),
                fVar13);
}

