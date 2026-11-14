/* compilefix: USA 002F25E0 (EU 002F25BC), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [1]
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [2]
 *  - implicit float<->int conversions (Ghidra COPY between a float and an int-typed variable or
 *    pool word, e.g. `fVar = _DAT_xxx;`, `puVar[3] = fVar;`) made bit copies [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_002f297f[];
extern char s_cf_002f2980[];
#include "compilefix.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014EB3C(int param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_002ECA34(int param_1);
extern int func_0039DC1C(int param_1,int param_2,int param_3);
extern int func_003A42B0(int param_1,int param_2);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00548E78(int param_1,undefined4 param_2,undefined4 param_3);
extern float func_0058A404(int param_1);
extern int func_0058A8F0(int param_1);
extern int func_0058AB74(int param_1);
extern float func_006640EC(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int func_0068C690(float *param_1);
extern int DAT_002f2924;
extern int *DAT_002f2928;
extern float DAT_002f292c;
extern float DAT_002f2930;
extern int *DAT_002f2934;
extern float DAT_002f2938;
extern int DAT_002f293c;
extern float DAT_002f2940;
extern float DAT_002f2944;
extern float DAT_002f2948;
extern float DAT_002f294c;
extern float DAT_002f2950;
extern float *DAT_002f2954;
extern int *DAT_002f2978;
extern undefined DAT_002f297c;
extern float DAT_002f2af4;
extern float DAT_002f2af8;
extern char s_SE_MediumGanon_ATTACK_TSUKI_2_002f2958[];
extern undefined4 _DAT_002f297c;

// USA 002F25E0 <- EU 002F25BC (Ghidra, non-matching)
// GLOBAL DAT_002f2924 int
// GLOBAL DAT_002f2928 int *
// GLOBAL DAT_002f292c float
// GLOBAL DAT_002f2930 float
// GLOBAL DAT_002f2934 int *
// GLOBAL DAT_002f2938 float
// GLOBAL DAT_002f293c int
// GLOBAL DAT_002f2940 float
// GLOBAL DAT_002f2944 float
// GLOBAL DAT_002f2948 float
// GLOBAL DAT_002f294c float
// GLOBAL DAT_002f2950 float
// GLOBAL DAT_002f2954 float *
// GLOBAL DAT_002f2978 int *
// GLOBAL DAT_002f297c undefined
// GLOBAL DAT_002f2af4 float
// GLOBAL DAT_002f2af8 float
// GLOBAL s_cf_002f297f string
// GLOBAL s_SE_MediumGanon_ATTACK_TSUKI_2_002f2958 string

/* WARNING: Removing unreachable block (ram,0x002f26b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_002F25E0(int *param_1)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint extraout_r1;
  uint uVar7;
  char cVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fparam_0;
  undefined8 uVar12;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int * *)(albw_frame + 0x8))
  #define local_44 (*(char * *)(albw_frame + 0xc))
  #define aiStack_40 ((int *)(albw_frame + 0x10))
  fVar9 = func_0058A404((int)param_1);
  iVar4 = DAT_002f2924;
  cVar8 = (int)ALBW_AS_U32(fVar9) <= DAT_002f2924;
  if (((bool)cVar8) && ((int)ALBW_AS_U32(fVar9) < 0x3f000001)) {
    cVar8 = '\x02';
  }
  iVar1 = func_0052FBA0(*DAT_002f2928 + 0x3dbbc,param_1[0x324]);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  uVar12 = func_0058AB74((int)param_1);
  fVar11 = DAT_002f2930;
  local_48 = param_1 + 0x232;
  fVar10 = DAT_002f292c;
  switch((int)uVar12) {
  case 3:
    iVar4 = func_0058A8F0((int)param_1);
    if (iVar4 != 0) {
      func_004FABDC((int)param_1,4,0,0);
      func_00111A64((uint *)(*DAT_002f2934 + 0x660));
      param_1[0x2ca] = 0x28;
      fVar9 = (float)VectorUnsignedToFloat(0x28,(byte)(in_fpscr >> 0x15) & 3);
      param_1[0x2cb] = (int)ALBW_AS_U32((fVar10 / fVar9));
      param_1[0x2c9] = 0;
    }
  case 4:
    if ((uint)param_1[0x2c3] < (uint)param_1[0x2c4]) {
      param_1[0x2c3] = param_1[0x2c3] + 1;
      pfVar2 = (float *)func_00520FC0();
      uVar7 = param_1[0x2c4];
      uVar3 = extraout_r1;
      if (uVar7 != 0) {
        uVar3 = param_1[0x2c3];
      }
      fVar9 = fVar11;
      if ((uVar7 != 0 && uVar3 != 0) && (fVar9 = fVar10, uVar3 < uVar7)) {
        fVar9 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
        fVar9 = fVar9 * ALBW_AS_F32(param_1[0x2c5]);
      }
      fparam_0 = (fVar10 - fVar9) * DAT_002f2938;
      iVar4 = DAT_002f293c + ((uint)param_1[0xfa] >> 0x18) * 0x10;
      fVar9 = (float)VectorUnsignedToFloat(param_1[0xfa] & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      fVar9 = (fVar10 + DAT_002f2944 *
                        (fVar10 - (*(float *)(iVar4 + 8) +
                                  *(float *)(iVar4 + 0xc) * fVar9 * DAT_002f2940)) * DAT_002f2938) *
              DAT_002f2948;
      func_0014EB3C((int)param_1);
      func_00115C70((float *)&local_48,pfVar2,(float *)(param_1 + 0xf4));
      local_44 = (char *)CF_FBITS(fVar11);
      iVar4 = func_0068C690((float *)&local_48);
      func_0051D2F4(param_1 + 0xfa,iVar4,0,(int)fVar9,fparam_0);
    }
    if ((uint)param_1[0x2ca] <= (uint)param_1[0x2c9]) {
      if (iVar1 != 0) {
        func_0039DC1C(iVar1,2,0x1e);
      }
      local_44 = s_SE_MediumGanon_ATTACK_TSUKI_2_002f2958;
      local_48 = DAT_002f2978;
      func_00150A84(param_1,(int *)&local_48,0);
      func_004D80A4((float *)(param_1 + 0xf7),param_1[0xfa],ALBW_AS_F32(_DAT_002f297c));
      param_1[0xf8] = (int)ALBW_AS_U32(fVar11);
      func_004FABDC((int)param_1,5,2,0);
      if (param_1[0xd1] != 0) {
        func_004A1B9C(aiStack_40,param_1[0xd1],(uint *)(s_cf_002f2980));
      }
      return func_003A42B0((int)(param_1 + 0x23b),0);
    }
    param_1[0x2c9] = param_1[0x2c9] + 1;
    return func_004D838C((float *)(param_1 + 0xf7),DAT_002f2954,DAT_002f2950,fVar11,DAT_002f294c);
  case 5:
    fVar9 = DAT_002f292c;
    iVar4 = func_0058A8F0((int)param_1);
    if (iVar4 != 0) {
      func_004FABDC((int)param_1,6,0,0);
      if (iVar1 != 0) {
        func_0039DC1C(iVar1,0,0);
      }
      iVar4 = func_00548E78((int)param_1,0,0xc);
      param_1[0x2ca] = iVar4;
      if (iVar4 == 0) {
        param_1[0x2cb] = (int)ALBW_AS_U32(fVar11);
      }
      else {
        fVar10 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
        param_1[0x2cb] = (int)ALBW_AS_U32((fVar9 / fVar10));
      }
      param_1[0x2c9] = 0;
    }
    break;
  case 6:
    if ((uint)param_1[0x2c9] < (uint)param_1[0x2ca]) {
      param_1[0x2c9] = param_1[0x2c9] + 1;
    }
    else {
      if (((char)param_1[0x350] != '\0') && (cVar8 != '\0')) {
        uVar3 = func_00111A64((uint *)(*DAT_002f2934 + 0x660));
        iVar4 = func_00548E78((int)param_1,0x19,0x4b);
        if ((int)((ulonglong)uVar3 * 100 >> 0x20) < iVar4) {
          *(undefined1 *)(param_1 + 0x350) = 0;
          func_006640EC(local_48,7,fVar9);
          return 0;
        }
      }
      func_004FABDC((int)param_1,7,0x18,0);
    }
    break;
  case 7:
    iVar5 = func_0058A8F0((int)param_1);
    if (iVar5 != 0) {
      if ((char)param_1[0x350] != '\0') {
        *(undefined1 *)(param_1 + 0x350) = 0;
        fVar9 = func_0058A404((int)param_1);
        if ((int)ALBW_AS_U32(fVar9) <= iVar4) {
          uVar6 = func_002ECA34((int)param_1);
          func_006640EC(local_48,(char)uVar6,fVar9);
          break;
        }
      }
      func_006640EC(local_48,2,fVar9);
    }
    break;
  default:
    goto LAB_002f2898;
  }
  func_004D838C((float *)(param_1 + 0xf7),DAT_002f2954,DAT_002f2af8,fVar11,DAT_002f2af4);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x509) != '\0')) {
    param_1[0xf7] = (int)ALBW_AS_U32(fVar11);
    param_1[0xf8] = (int)ALBW_AS_U32(fVar11);
    param_1[0xf9] = (int)ALBW_AS_U32(fVar11);
    return 0;
  }
LAB_002f2898:
  return 0;
}

