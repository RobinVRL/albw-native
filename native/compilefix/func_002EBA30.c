/* compilefix: USA 002EBA30 (EU 002EBA0C), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 's_'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [2]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_002ebf73[];
extern char s_cf_002ebf74[];
#include "compilefix.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014DBF4(int *param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00260C78(float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern float func_003E19E8(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4);
extern int func_00520FC0(void);
extern int func_00556E64(int param_1);
extern int func_00556EAC(int param_1,int param_2);
extern int func_005841D8(int param_1,undefined4 param_2);
extern float func_006640EC(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int func_0068C690(float *param_1);
extern int func_0068C794(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int *DAT_002ebde4;
extern float DAT_002ebde8;
extern float DAT_002ebdec;
extern float DAT_002ebdf0;
extern float DAT_002ebdf4;
extern float DAT_002ebdf8;
extern float DAT_002ebdfc;
extern float DAT_002ebe00;
extern float DAT_002ebe04;
extern int DAT_002ebe08;
extern int *DAT_002ebe0c;
extern int DAT_002ebe10;
extern int DAT_002ebe14;
extern int DAT_002ebe18;
extern undefined4 *DAT_002ebe1c;
extern int *DAT_002ebe20;
extern int *DAT_002ebe24;
extern int DAT_002ebe28;
extern float DAT_002ebe2c;
extern int *DAT_002ebe30;
extern float DAT_002ebe34;
extern float DAT_002ebe38;
extern undefined DAT_002ebf70;
extern int DAT_002ebf90;
extern undefined4 _DAT_002ebf70;

// USA 002EBA30 <- EU 002EBA0C (Ghidra, non-matching)
// GLOBAL DAT_002ebde4 int *
// GLOBAL DAT_002ebde8 float
// GLOBAL DAT_002ebdec float
// GLOBAL DAT_002ebdf0 float
// GLOBAL DAT_002ebdf4 float
// GLOBAL DAT_002ebdf8 float
// GLOBAL DAT_002ebdfc float
// GLOBAL DAT_002ebe00 float
// GLOBAL DAT_002ebe04 float
// GLOBAL DAT_002ebe08 int
// GLOBAL DAT_002ebe0c int *
// GLOBAL DAT_002ebe10 int
// GLOBAL DAT_002ebe14 int
// GLOBAL DAT_002ebe18 int
// GLOBAL DAT_002ebe1c undefined4 *
// GLOBAL DAT_002ebe20 int *
// GLOBAL DAT_002ebe24 int *
// GLOBAL DAT_002ebe28 int
// GLOBAL DAT_002ebe2c float
// GLOBAL DAT_002ebe30 int *
// GLOBAL DAT_002ebe34 float
// GLOBAL DAT_002ebe38 float
// GLOBAL DAT_002ebf70 undefined
// GLOBAL DAT_002ebf90 int
// GLOBAL s_cf_002ebf73 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_002EBA30(int *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3,
                  float fparam_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  uint *puVar5;
  float *pfVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fparam_3_00;
  float fVar18;
  float fVar19;
  float fVar20;
  _Alignas(8) unsigned char albw_frame[0x100];
  #define local_100 (*(int *)(albw_frame + 0x0))
  #define local_fc (*(char * *)(albw_frame + 0x4))
  #define iStack_f8 (*(int *)(albw_frame + 0x8))
  #define aiStack_f4 ((int *)(albw_frame + 0xc))
  #define fStack_e8 (*(float *)(albw_frame + 0x18))
  #define local_e4 (*(int * *)(albw_frame + 0x1c))
  #define aiStack_98 ((int *)(albw_frame + 0x68))
  iVar13 = *DAT_002ebde4;
  if ((iVar13 == 0) || (bVar4 = func_00556E64(iVar13), !bVar4)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  fVar3 = DAT_002ebe38;
  fVar2 = DAT_002ebe34;
  iVar11 = DAT_002ebe08;
  fVar1 = DAT_002ebe00;
  fVar19 = DAT_002ebdfc;
  fVar20 = DAT_002ebdf8;
  fVar18 = DAT_002ebdf4;
  fVar14 = DAT_002ebdf0;
  fparam_3_00 = DAT_002ebdec;
  fVar15 = DAT_002ebde8;
  iVar8 = param_1[0x2df];
  pfVar12 = (float *)(param_1 + 0x387);
  puVar7 = (uint *)(param_1 + 0x2c3);
  if (iVar8 == 0) {
    fVar14 = *pfVar12 + -*pfVar12 * DAT_002ebe04;
    *pfVar12 = fVar14;
    if (iVar11 <= (int)ALBW_AS_U32(fVar14)) goto LAB_002ebf60;
    param_1[0x387] = (int)ALBW_AS_U32(fparam_3_00);
    puVar5 = (uint *)func_002C11E8(&iStack_f8,9,0,0);
    func_0016898C(param_1[0x36d],puVar5);
    uVar10 = func_00111A64((uint *)(*DAT_002ebe0c + 0x660));
    iVar13 = (int)((ulonglong)uVar10 * 0x3c >> 0x20) + 0x5a;
    param_1[0x2c4] = iVar13;
    if (iVar13 == 0) {
      param_1[0x2c5] = (int)ALBW_AS_U32(fparam_3_00);
    }
    else {
      fVar14 = (float)VectorUnsignedToFloat(iVar13,(byte)(in_fpscr >> 0x15) & 3);
      param_1[0x2c5] = (int)ALBW_AS_U32((fVar15 / fVar14));
    }
    iVar13 = 1;
    *puVar7 = 0;
  }
  else {
    local_e4 = param_1 + 0x232;
    if (iVar8 == 1) {
      if (((uint)param_1[0x2c3] < (uint)param_1[0x2c4]) &&
         (param_1[0x2c3] = param_1[0x2c3] + 1, (char)param_1[0x351] == '\0')) {
        uVar10 = 0;
        if ((!bVar4) && (uVar10 = func_005841D8(*DAT_002ebe20,*DAT_002ebe1c), uVar10 == 0))
        goto LAB_002ebf34;
        uVar9 = param_1[0x2c4];
        if (uVar9 != 0) {
          uVar10 = *puVar7;
        }
        fVar14 = fparam_3_00;
        if ((uVar9 != 0 && uVar10 != 0) && (fVar14 = fVar15, uVar10 < uVar9)) {
          fVar14 = (float)VectorUnsignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
          fVar14 = fVar14 * ALBW_AS_F32(param_1[0x2c5]);
        }
        fVar15 = func_003E19E8(fVar15,fVar15,fVar18,fparam_3_00,fVar14);
        *(float *)(*(int *)(param_1[0x36d] + 0x14) + 0x10) = fVar15;
        pfVar6 = (float *)func_00520FC0();
        func_00115C70(&fStack_e8,pfVar6,(float *)(param_1 + 0x38c));
        iVar11 = func_0068C690(&fStack_e8);
        func_00115C70(&fStack_e8,(float *)(param_1 + 0x377),(float *)(param_1 + 0x38c));
        iVar8 = func_0068C690(&fStack_e8);
        iVar13 = *DAT_002ebe24;
        if (0 < iVar11 - iVar8) {
          iVar13 = -iVar13;
        }
        uVar10 = (iVar11 - iVar8) + iVar13;
        pfVar6 = (float *)(DAT_002ebe28 + (uVar10 >> 0x18) * 0x10);
        fVar15 = (float)VectorUnsignedToFloat(uVar10 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
        *pfVar12 = *pfVar12 +
                   ((*pfVar6 + pfVar6[1] * fVar15 * fVar20) * DAT_002ebe2c - *pfVar12) * fVar19;
      }
      else {
        param_1[0x388] = 0;
        iVar13 = DAT_002ebe10;
        param_1[0x2c4] = 0x5a;
        param_1[0x2c5] = iVar13;
        *puVar7 = 0;
        puVar7 = (uint *)func_002C11E8(aiStack_98,1,0,0);
        func_0016898C(param_1[0x36d],puVar7);
        iVar13 = DAT_002ebe14;
        param_1[0x2df] = 2;
        param_1[0x386] = (int)ALBW_AS_U32(fVar14);
        param_1[0x387] = iVar13;
        if ((char)param_1[0x38b] == '\0') {
          param_1[0x387] = DAT_002ebe18;
        }
      }
      goto LAB_002ebf60;
    }
    if (iVar8 != 2) {
      if (iVar8 == 3) {
        iVar13 = *(int *)(param_1[0x36d] + 0x14);
        if (*(char *)(iVar13 + 0x1c) == '\0') {
          fparam_0 = *(float *)(iVar13 + 8);
          if (*(float *)(iVar13 + 0x10) < DAT_002ebdec) {
            if (fparam_0 <= DAT_002ebdec) goto LAB_002ebf34;
          }
          else if (fparam_0 == *(float *)(iVar13 + 0x14)) {
LAB_002ebf34:
            func_006640EC(local_e4,0x16,fparam_0);
            return;
          }
        }
        func_0068C794(pfVar12,DAT_002ebdec,DAT_002ebe00,DAT_002ebdec,DAT_002ebe00);
      }
      goto LAB_002ebf60;
    }
    uVar10 = *DAT_002ebe30 + param_1[0x388];
    param_1[0x388] = uVar10;
    fVar16 = ALBW_AS_F32(param_1[0x386]);
    iVar11 = DAT_002ebe28 + (uVar10 >> 0x18) * 0x10;
    fVar17 = (float)VectorUnsignedToFloat(uVar10 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    fVar18 = ((fVar16 * fVar2 - fVar16) *
             ((*(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc) * fVar17 * fVar20) - fVar3)) /
             fVar18 + fVar16;
    param_1[0x386] = (int)ALBW_AS_U32((fVar16 + (fVar14 - fVar16) * fVar1));
    iVar11 = *(int *)(param_1[0x36d] + 0x14);
    iVar11 = func_00260C78(fVar15,*(float *)(iVar11 + 8),*(float *)(iVar11 + 0xc),
                           *(float *)(iVar11 + 0x14));
    if (iVar11 != 0) {
      param_1[0x388] = 0;
    }
    if ((char)param_1[0x38b] == '\0') {
      fVar18 = -fVar18;
    }
    if (!bVar4) {
      if ((iVar13 != 0) && (bVar4 = func_00556EAC(iVar13,0x6a), fparam_0 = fVar15, bVar4))
      goto LAB_002ebf34;
      iVar13 = _DAT_002ebf70;
      if (0x28 < param_1[0x2c4] - param_1[0x2c3]) {
        param_1[0x2c4] = 0x28;
        param_1[0x2c5] = iVar13;
        *puVar7 = 0;
      }
    }
    *pfVar12 = *pfVar12 + (fVar18 - *pfVar12) * fVar19;
    if ((uint)param_1[0x2c3] < (uint)param_1[0x2c4]) {
      param_1[0x2c3] = param_1[0x2c3] + 1;
      goto LAB_002ebf60;
    }
    puVar7 = (uint *)func_002C11E8(aiStack_f4,10,0,0);
    func_0016898C(param_1[0x36d],puVar7);
    local_fc = s_cf_002ebf74;
    local_100 = DAT_002ebf90;
    func_0014DBF4(param_1,&local_100,(undefined4)(uintptr_t)(param_1 + 0x377),0);
    iVar13 = 3;
  }
  param_1[0x2df] = iVar13;
LAB_002ebf60:
  param_1[0xf8] = (int)ALBW_AS_U32(fparam_3_00);
  return;
}

