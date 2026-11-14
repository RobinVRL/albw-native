/* compilefix: USA 002ED8E0 (EU 002ED8BC), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [1]
 *  - implicit float<->int conversions (Ghidra COPY between a float and an int-typed variable or
 *    pool word, e.g. `fVar = _DAT_xxx;`, `puVar[3] = fVar;`) made bit copies [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_0014EB3C(int param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_002ECA34(int param_1);
extern int func_0039DC1C(int param_1,int param_2,int param_3);
extern int func_003A42B0(int param_1,int param_2);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
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
extern int DAT_002edbf8;
extern int *DAT_002edbfc;
extern int *DAT_002edc00;
extern float DAT_002edc04;
extern float DAT_002edc08;
extern float DAT_002edc0c;
extern int DAT_002edc10;
extern float DAT_002edc14;
extern float DAT_002edc18;
extern undefined DAT_002edc1c;
extern int *DAT_002edc3c;
extern float DAT_002edd88;
extern char s_AttackTsuki_002edc40[];
extern char s_cLSE_MediumGanon_ATTACK_TSUKI_002edc1e[];
extern undefined4 _DAT_002edc1c;

// USA 002ED8E0 <- EU 002ED8BC (Ghidra, non-matching)
// GLOBAL DAT_002edbf8 int
// GLOBAL DAT_002edbfc int *
// GLOBAL DAT_002edc00 int *
// GLOBAL DAT_002edc04 float
// GLOBAL DAT_002edc08 float
// GLOBAL DAT_002edc0c float
// GLOBAL DAT_002edc10 int
// GLOBAL DAT_002edc14 float
// GLOBAL DAT_002edc18 float
// GLOBAL DAT_002edc1c undefined
// GLOBAL DAT_002edc3c int *
// GLOBAL DAT_002edd88 float
// GLOBAL s_AttackTsuki_002edc40 string
// GLOBAL s_cLSE_MediumGanon_ATTACK_TSUKI_002edc1e string

/* WARNING: Removing unreachable block (ram,0x002ed9b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_002ED8E0(int *param_1)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
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
  iVar5 = DAT_002edbf8;
  cVar8 = (int)ALBW_AS_U32(fVar9) <= DAT_002edbf8;
  if (((bool)cVar8) && ((int)ALBW_AS_U32(fVar9) < 0x3f000001)) {
    cVar8 = '\x02';
  }
  iVar2 = func_0052FBA0(*DAT_002edbfc + 0x3dbbc,param_1[0x324]);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  uVar12 = func_0058AB74((int)param_1);
  piVar1 = DAT_002edc00;
  local_48 = param_1 + 0x232;
  fVar10 = DAT_002edc08;
  fVar11 = DAT_002edc04;
  switch((int)uVar12) {
  case 3:
    iVar5 = func_0058A8F0((int)param_1);
    if (iVar5 != 0) {
      func_004FABDC((int)param_1,4,0,0);
      func_00111A64((uint *)(*piVar1 + 0x660));
      param_1[0x2ca] = 5;
      fVar9 = (float)VectorUnsignedToFloat(5,(byte)(in_fpscr >> 0x15) & 3);
      param_1[0x2cb] = (int)ALBW_AS_U32((fVar10 / fVar9));
      param_1[0x2c9] = 0;
    }
  case 4:
    if ((uint)param_1[0x2c3] < (uint)param_1[0x2c4]) {
      param_1[0x2c3] = param_1[0x2c3] + 1;
      pfVar3 = (float *)func_00520FC0();
      uVar7 = param_1[0x2c4];
      uVar4 = extraout_r1;
      if (uVar7 != 0) {
        uVar4 = param_1[0x2c3];
      }
      fVar9 = fVar11;
      if ((uVar7 != 0 && uVar4 != 0) && (fVar9 = fVar10, uVar4 < uVar7)) {
        fVar9 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
        fVar9 = fVar9 * ALBW_AS_F32(param_1[0x2c5]);
      }
      iVar5 = DAT_002edc10 + ((uint)param_1[0xfa] >> 0x18) * 0x10;
      fparam_0 = (fVar10 - fVar9) * DAT_002edc0c;
      fVar9 = (float)VectorUnsignedToFloat(param_1[0xfa] & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      fVar9 = (fVar10 + DAT_002edc18 *
                        (fVar10 - (*(float *)(iVar5 + 8) +
                                  *(float *)(iVar5 + 0xc) * fVar9 * DAT_002edc14)) * DAT_002edc0c) *
              ALBW_AS_F32(_DAT_002edc1c);
      func_0014EB3C((int)param_1);
      func_00115C70((float *)&local_48,pfVar3,(float *)(param_1 + 0xf4));
      local_44 = (char *)CF_FBITS(fVar11);
      iVar5 = func_0068C690((float *)&local_48);
      func_0051D2F4(param_1 + 0xfa,iVar5,0,(int)fVar9,fparam_0);
    }
    uVar4 = param_1[0x2c9];
    if ((uint)param_1[0x2ca] <= uVar4) {
      if (iVar2 != 0) {
        func_0039DC1C(iVar2,1,0x1e);
      }
      local_44 = s_cLSE_MediumGanon_ATTACK_TSUKI_002edc1e + 2;
      local_48 = DAT_002edc3c;
      func_00150A84(param_1,(int *)&local_48,0);
      func_004FABDC((int)param_1,5,2,0);
      if (param_1[0xd1] != 0) {
        func_004A1B9C(aiStack_40,param_1[0xd1],(uint *)s_AttackTsuki_002edc40);
      }
      return func_003A42B0((int)(param_1 + 0x23b),0);
    }
    goto LAB_002edae0;
  case 5:
    fVar9 = DAT_002edc08;
    fVar10 = DAT_002edc04;
    iVar5 = func_0058A8F0((int)param_1);
    if (iVar5 != 0) {
      func_004FABDC((int)param_1,6,0,0);
      if (iVar2 != 0) {
        func_0039DC1C(iVar2,0,0);
      }
      iVar5 = func_00548E78((int)param_1,0,0);
      param_1[0x2ca] = iVar5;
      if (iVar5 == 0) {
        param_1[0x2cb] = (int)ALBW_AS_U32(fVar10);
      }
      else {
        fVar10 = (float)VectorUnsignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
        param_1[0x2cb] = (int)ALBW_AS_U32((fVar9 / fVar10));
      }
      param_1[0x2c9] = 0;
      return 0;
    }
    if ((iVar2 != 0) && (*(char *)(iVar2 + 0x509) != '\0')) {
      return func_00115DAC((float *)(param_1 + 0xf4),(float *)(iVar2 + 0x484),(float *)(param_1 + 0xf4),
                    DAT_002edd88);
    }
    break;
  case 6:
    uVar4 = param_1[0x2c9];
    if ((uint)param_1[0x2ca] <= uVar4) {
      if (((char)param_1[0x350] != '\0') && (cVar8 != '\0')) {
        uVar4 = func_00111A64((uint *)(*DAT_002edc00 + 0x660));
        iVar5 = func_00548E78((int)param_1,0x19,0x4b);
        if ((int)((ulonglong)uVar4 * 100 >> 0x20) < iVar5) {
          *(undefined1 *)(param_1 + 0x350) = 0;
          func_006640EC(local_48,7,fVar9);
          return 0;
        }
      }
      return func_004FABDC((int)param_1,7,0x18,0);
    }
LAB_002edae0:
    param_1[0x2c9] = uVar4 + 1;
    break;
  case 7:
    iVar2 = func_0058A8F0((int)param_1);
    if (iVar2 != 0) {
      if ((char)param_1[0x350] != '\0') {
        *(undefined1 *)(param_1 + 0x350) = 0;
        fVar9 = func_0058A404((int)param_1);
        if ((int)ALBW_AS_U32(fVar9) <= iVar5) {
          uVar6 = func_002ECA34((int)param_1);
          func_006640EC(local_48,(char)uVar6,fVar9);
          return 0;
        }
      }
      func_006640EC(local_48,2,fVar9);
      return 0;
    }
  }
  return 0;
}

