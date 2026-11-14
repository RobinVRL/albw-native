/* compilefix: USA 002ECAFC (EU 002ECAD8), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [2]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [1]
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
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00548E78(int param_1,undefined4 param_2,undefined4 param_3);
extern float func_0058A404(int param_1);
extern int func_0058A8F0(int param_1);
extern int func_0058AB74(int param_1);
extern float func_0058AC38(int param_1);
extern float func_006640EC(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int func_0068C690(float *param_1);
extern int DAT_002ecf58;
extern int *DAT_002ecf5c;
extern float DAT_002ecf60;
extern float DAT_002ecf64;
extern float DAT_002ecf68;
extern int DAT_002ecf6c;
extern float DAT_002ecf70;
extern float DAT_002ecf74;
extern undefined DAT_002ecf78;
extern float DAT_002ecf98;
extern int *DAT_002ecf9c;
extern int DAT_002ed3d0;
extern float DAT_002ed3f8;
extern undefined4 DAT_003a42c0;
extern char s_SE_MediumGanon_ATTACK_HARAI_2_MI_002ed3d4[];
extern char s_cLSE_MediumGanon_ATTACK_HARAI_002ecf7a[];
extern undefined4 _DAT_002ecf78;

// USA 002ECAFC <- EU 002ECAD8 (Ghidra, non-matching)
// GLOBAL DAT_002ecf58 int
// GLOBAL DAT_002ecf5c int *
// GLOBAL DAT_002ecf60 float
// GLOBAL DAT_002ecf64 float
// GLOBAL DAT_002ecf68 float
// GLOBAL DAT_002ecf6c int
// GLOBAL DAT_002ecf70 float
// GLOBAL DAT_002ecf74 float
// GLOBAL DAT_002ecf78 undefined
// GLOBAL DAT_002ecf98 float
// GLOBAL DAT_002ecf9c int *
// GLOBAL DAT_002ed3d0 int
// GLOBAL DAT_002ed3f8 float
// GLOBAL DAT_003a42c0 undefined4
// GLOBAL s_SE_MediumGanon_ATTACK_HARAI_2_MI_002ed3d4 string
// GLOBAL s_cLSE_MediumGanon_ATTACK_HARAI_002ecf7a string

/* WARNING: Removing unreachable block (ram,0x003a42a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_002ECAFC(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar8;
  int iVar9;
  uint in_fpscr;
  float fVar10;
  float fparam_0;
  undefined8 uVar11;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  fVar10 = func_0058A404((int)param_1);
  if (DAT_002ecf58 < (int)ALBW_AS_U32(fVar10)) {
    iVar9 = 0;
  }
  else if ((int)ALBW_AS_U32(fVar10) < 0x3f000001) {
    iVar9 = 2;
  }
  else {
    iVar9 = 1;
  }
  iVar3 = func_0052FBA0(*DAT_002ecf5c + 0x3dbbc,param_1[0x324]);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  uVar11 = func_0058AB74((int)param_1);
  switch((int)uVar11) {
  case 8:
  case 9:
    iVar9 = func_0058A8F0((int)param_1);
    if (iVar9 != 0) {
      uVar11 = func_0058AB74((int)param_1);
      if ((int)uVar11 == 9) {
        iVar9 = func_00548E78((int)param_1,0,0);
        param_1[0x2ca] = iVar9;
        if (iVar9 == 0) goto LAB_002ecc04;
LAB_002ecbec:
        fVar10 = (float)VectorUnsignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
        param_1[0x2cb] = (int)ALBW_AS_U32((DAT_002ecf60 / fVar10));
      }
      else {
        iVar9 = func_00548E78((int)param_1,0x2d,0x1e);
        param_1[0x2ca] = iVar9;
        if (iVar9 != 0) goto LAB_002ecbec;
LAB_002ecc04:
        param_1[0x2cb] = (int)ALBW_AS_U32(DAT_002ecf64);
      }
      param_1[0x2c9] = 0;
      func_004FABDC((int)param_1,10,0xffffffff,0);
    }
  case 10:
    if ((uint)param_1[0x2c3] < (uint)param_1[0x2c4]) {
      param_1[0x2c3] = param_1[0x2c3] + 1;
      pfVar4 = (float *)func_00520FC0();
      uVar8 = param_1[0x2c4];
      uVar6 = extraout_r1;
      if (uVar8 != 0) {
        uVar6 = param_1[0x2c3];
      }
      fVar10 = DAT_002ecf64;
      if ((uVar8 != 0 && uVar6 != 0) && (fVar10 = DAT_002ecf60, uVar6 < uVar8)) {
        fVar10 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
        fVar10 = fVar10 * ALBW_AS_F32(param_1[0x2c5]);
      }
      fparam_0 = (DAT_002ecf60 - fVar10) * DAT_002ecf68;
      iVar9 = DAT_002ecf6c + ((uint)param_1[0xfa] >> 0x18) * 0x10;
      fVar10 = (float)VectorUnsignedToFloat(param_1[0xfa] & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      fVar10 = (DAT_002ecf60 +
               DAT_002ecf74 *
               (DAT_002ecf60 -
               (*(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc) * fVar10 * DAT_002ecf70)) *
               DAT_002ecf68) * ALBW_AS_F32(_DAT_002ecf78);
      func_0014EB3C((int)param_1);
      func_00115C70(&local_28,pfVar4,(float *)(param_1 + 0xf4));
      local_24 = (char *)CF_FBITS(DAT_002ecf64);
      iVar9 = func_0068C690(&local_28);
      func_0051D2F4(param_1 + 0xfa,iVar9,0,(int)fVar10,fparam_0);
    }
    uVar6 = param_1[0x2c9];
    if ((uint)param_1[0x2ca] <= uVar6) {
      if (iVar3 != 0) {
        func_0039DC1C(iVar3,3,0x1e);
      }
      local_24 = s_cLSE_MediumGanon_ATTACK_HARAI_002ecf7a + 2;
      local_28 = DAT_002ecf98;
      func_00150A84(param_1,(int *)&local_28,0);
      func_004FABDC((int)param_1,0xb,2,0);
      return func_003A42B0((int)(param_1 + 0x23b),0);
    }
    break;
  case 0xb:
    iVar9 = func_0058A8F0((int)param_1);
    if (iVar9 != 0) {
      func_004FABDC((int)param_1,0xc,0,0);
      if (iVar3 != 0) {
        func_0039DC1C(iVar3,0,0);
      }
      iVar9 = func_00548E78((int)param_1,0xf,0);
      param_1[0x2ca] = iVar9;
joined_r0x002ed24c:
      if (iVar9 == 0) {
        param_1[0x2cb] = (int)ALBW_AS_U32(DAT_002ecf64);
      }
      else {
        fVar10 = (float)VectorUnsignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
        param_1[0x2cb] = (int)ALBW_AS_U32((DAT_002ecf60 / fVar10));
      }
      param_1[0x2c9] = 0;
      return 0;
    }
    if (iVar3 == 0) {
      return 0;
    }
    cVar1 = *(char *)(iVar3 + 0x509);
    goto joined_r0x002ed284;
  case 0xc:
    uVar6 = param_1[0x2c9];
    if ((uint)param_1[0x2ca] <= uVar6) {
      if ((char)param_1[0x350] == '\0') {
        return func_004FABDC((int)param_1,0xd,0x18,0);
      }
      *(undefined1 *)(param_1 + 0x350) = 0;
      piVar2 = DAT_002ecf9c;
      if (iVar9 != 0) {
        uVar6 = func_00111A64((uint *)(*DAT_002ecf9c + 0x660));
        iVar9 = func_00548E78((int)param_1,0x19,0x4b);
        if ((int)((ulonglong)uVar6 * 100 >> 0x20) < iVar9) {
          uVar6 = func_00111A64((uint *)(*piVar2 + 0x660));
          iVar9 = func_00548E78((int)param_1,0x32,0x50);
          if (iVar9 <= (int)((ulonglong)uVar6 * 100 >> 0x20)) {
            fVar10 = func_0058AC38((int)(uintptr_t)(param_1));
            iVar9 = (int)fVar10 + 0x1e;
            fVar10 = (float)(int)fVar10;
            if (iVar9 == 0) {
              fVar10 = DAT_002ecf64;
            }
            param_1[0x2ca] = iVar9;
            if (iVar9 == 0) {
              param_1[0x2cb] = (int)ALBW_AS_U32(fVar10);
            }
            else {
              fVar10 = (float)VectorUnsignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
              param_1[0x2cb] = (int)ALBW_AS_U32((DAT_002ecf60 / fVar10));
            }
            param_1[0x2c9] = 0;
            func_004FABDC((int)param_1,0xe,8,0);
            param_1[0x247] = 2;
            return 0;
          }
LAB_002ed390:
          func_006640EC(param_1 + 0x232,8,fVar10);
          return 0;
        }
      }
      goto LAB_002ed3ac;
    }
    break;
  case 0xd:
    iVar3 = func_0058A8F0((int)param_1);
    if (iVar3 == 0) {
      return 0;
    }
    if ((char)param_1[0x350] == '\0') {
LAB_002ed024:
      func_006640EC(param_1 + 0x232,2,fVar10);
      return 0;
    }
    *(undefined1 *)(param_1 + 0x350) = 0;
    if (iVar9 != 0) {
      uVar6 = func_00111A64((uint *)(*DAT_002ecf9c + 0x660));
      iVar9 = func_00548E78((int)param_1,0x23,0x3c);
      if ((int)((ulonglong)uVar6 * 100 >> 0x20) < iVar9) goto LAB_002ed390;
    }
LAB_002ed3ac:
    uVar7 = func_002ECA34((int)param_1);
    func_006640EC(param_1 + 0x232,(char)uVar7,fVar10);
    return 0;
  case 0xe:
    iVar9 = func_0058A8F0((int)param_1);
    if (iVar9 != 0) {
      func_004FABDC((int)param_1,0xf,0,0);
      iVar9 = func_00548E78((int)param_1,10,0);
      if (iVar9 == 0) {
        fVar10 = DAT_002ecf64;
      }
      param_1[0x2ca] = iVar9;
      if (iVar9 == 0) {
        param_1[0x2cb] = (int)ALBW_AS_U32(fVar10);
      }
      else {
        fVar10 = (float)VectorUnsignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
        param_1[0x2cb] = (int)ALBW_AS_U32((DAT_002ecf60 / fVar10));
      }
      param_1[0x2c9] = 0;
    }
  case 0xf:
    if ((uint)param_1[0x2c3] < (uint)param_1[0x2c4]) {
      param_1[0x2c3] = param_1[0x2c3] + 1;
      pfVar4 = (float *)func_00520FC0();
      iVar9 = DAT_002ed3d0;
      uVar8 = param_1[0x2c4];
      uVar6 = extraout_r1_00;
      if (uVar8 != 0) {
        uVar6 = param_1[0x2c3];
      }
      fVar10 = DAT_002ecf64;
      if ((uVar8 != 0 && uVar6 != 0) && (fVar10 = DAT_002ecf60, uVar6 < uVar8)) {
        fVar10 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
        fVar10 = fVar10 * ALBW_AS_F32(param_1[0x2c5]);
      }
      fVar10 = (DAT_002ecf60 - fVar10) * DAT_002ecf68;
      func_0014EB3C((int)param_1);
      func_00115C70(&local_28,pfVar4,(float *)(param_1 + 0xf4));
      local_24 = (char *)CF_FBITS(DAT_002ecf64);
      iVar5 = func_0068C690(&local_28);
      func_0051D2F4(param_1 + 0xfa,iVar5,0,iVar9,fVar10);
    }
    uVar6 = param_1[0x2c9];
    if ((uint)param_1[0x2ca] <= uVar6) {
      if (iVar3 != 0) {
        func_0039DC1C(iVar3,3,0x1e);
      }
      local_24 = s_SE_MediumGanon_ATTACK_HARAI_2_MI_002ed3d4;
      local_28 = DAT_002ecf98;
      func_00150A84(param_1,(int *)&local_28,0);
      func_004FABDC((int)param_1,0x10,2,0);
      return func_003A42B0((int)(param_1 + 0x23b),0);
    }
    break;
  case 0x10:
    iVar9 = func_0058A8F0((int)param_1);
    if (iVar9 != 0) {
      func_004FABDC((int)param_1,0x11,0,0);
      if (iVar3 != 0) {
        func_0039DC1C(iVar3,0,0);
      }
      iVar9 = func_00548E78((int)param_1,0x14,10);
      param_1[0x2ca] = iVar9;
      goto joined_r0x002ed24c;
    }
    if (iVar3 == 0) {
      return 0;
    }
    cVar1 = *(char *)(iVar3 + 0x509);
joined_r0x002ed284:
    if (cVar1 == '\0') {
      return 0;
    }
    return func_00115DAC((float *)(param_1 + 0xf4),(float *)(iVar3 + 0x484),(float *)(param_1 + 0xf4),
                  DAT_002ed3f8);
  case 0x11:
    uVar6 = param_1[0x2c9];
    if ((uint)param_1[0x2ca] <= uVar6) {
      if ((char)param_1[0x350] == '\0') {
        return func_004FABDC((int)param_1,0x12,0x18,0);
      }
      *(undefined1 *)(param_1 + 0x350) = 0;
      if (iVar9 != 0) {
        uVar6 = func_00111A64((uint *)(*DAT_002ecf9c + 0x660));
        iVar9 = func_00548E78((int)param_1,0x19,0x4b);
        if ((int)((ulonglong)uVar6 * 100 >> 0x20) < iVar9) goto LAB_002ed390;
      }
      goto LAB_002ed3ac;
    }
    break;
  case 0x12:
    iVar3 = func_0058A8F0((int)param_1);
    if (iVar3 != 0) {
      if ((char)param_1[0x350] == '\0') goto LAB_002ed024;
      *(undefined1 *)(param_1 + 0x350) = 0;
      if (iVar9 != 0) {
        uVar6 = func_00111A64((uint *)(*DAT_002ecf9c + 0x660));
        iVar9 = func_00548E78((int)param_1,0x23,0x3c);
        if ((int)((ulonglong)uVar6 * 100 >> 0x20) < iVar9) goto LAB_002ed390;
      }
      goto LAB_002ed3ac;
    }
  default:
    goto switchD_002ecb48_default;
  }
  param_1[0x2c9] = uVar6 + 1;
switchD_002ecb48_default:
  return 0;
}

