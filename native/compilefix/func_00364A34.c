/* compilefix: USA 00364A34 (EU 00364A10), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 'NAN'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [1]
 *  - Ghidra NAN(x)/INFINITY -> __builtin_isnan(x) (vcmp unordered) / +inf [1]
 *  - Ghidra -NAN/NAN constant -> the exact words 0xFFFFFFFF/0x7FFFFFFF (mvn in the ARM) [1]
 *  - explicit casts at pointer-type mismatches (identity on the ARM) [2]
 *  - implicit float<->int conversions (Ghidra COPY between a float and an int-typed variable or
 *    pool word, e.g. `fVar = _DAT_xxx;`, `puVar[3] = fVar;`) made bit copies [2]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites, this function's sites checked);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#define CF_MATHCONST
extern char s_cf_0036587f[];
#include "compilefix.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014D994(float *param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_00165E28(int param_1,undefined2 param_2);
extern int func_001DC4C8(int param_1,undefined4 param_2);
extern int func_001DC928(int param_1,int param_2);
extern int func_001DCF28(int param_1,undefined1 param_2);
extern int func_001DE2B0(int param_1,int param_2);
extern int func_001DE2E8(int param_1,int param_2,undefined4 *param_3);
extern int func_001DE330(int param_1,int param_2);
extern int func_0028C76C(int param_1);
extern int func_002D1418(int *param_1);
extern int func_002D404C(int param_1);
extern int func_002D55D0(int param_1,uint param_2);
extern int func_002D55E8(int param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004CDA44(int param_1,int *param_2);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_004EAF8C(int param_1,int *param_2,int param_3);
extern int func_004EB8A8(int param_1);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_0052E8A0(int param_1);
extern int func_0052EE94(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0053EDD8(int param_1);
extern int func_0054C9CC(int param_1);
extern int func_00552FC0(uint param_1);
extern float DAT_00364dc8;
extern float DAT_00364dcc;
extern float DAT_00364dd0;
extern undefined4 DAT_00364dd4;
extern float DAT_00364dd8;
extern float DAT_00364ddc;
extern float DAT_00364de0;
extern int *DAT_00364de4;
extern int *DAT_00364de8;
extern int *DAT_00365100;
extern float DAT_0036510c;
extern float DAT_00365110;
extern int DAT_00365114;
extern float DAT_00365118;
extern float DAT_0036511c;
extern float DAT_00365120;
extern float DAT_00365124;
extern float DAT_00365128;
extern float DAT_003654f4;
extern float DAT_003654f8;
extern int DAT_003654fc;
extern float DAT_00365500;
extern float DAT_00365504;
extern float DAT_00365508;
extern int *DAT_0036550c;
extern float DAT_00365860;
extern int *DAT_00365864;
extern uint *DAT_00365868;
extern undefined4 *DAT_0036586c;
extern undefined4 DAT_00365870;
extern float DAT_00365874;
extern float DAT_00365878;
extern undefined DAT_0036587c;
extern int DAT_00365894;
extern float DAT_00365c14;
extern float DAT_00365c18;
extern float DAT_00365c1c;
extern float DAT_00365c20;
extern undefined4 DAT_00365c24;
extern float DAT_00365c28;
extern undefined4 DAT_00365c2c;
extern int *DAT_00365c30;
extern char s_Valley_00365104[];
extern char s__SE_PV_RECOVER_ICE_0036587f[];
extern undefined4 _DAT_0036587c;

// USA 00364A34 <- EU 00364A10 (Ghidra, non-matching)
// GLOBAL DAT_00364dc8 float
// GLOBAL DAT_00364dcc float
// GLOBAL DAT_00364dd0 float
// GLOBAL DAT_00364dd4 undefined4
// GLOBAL DAT_00364dd8 float
// GLOBAL DAT_00364ddc float
// GLOBAL DAT_00364de0 float
// GLOBAL DAT_00364de4 int *
// GLOBAL DAT_00364de8 int *
// GLOBAL DAT_00365100 int *
// GLOBAL DAT_0036510c float
// GLOBAL DAT_00365110 float
// GLOBAL DAT_00365114 int
// GLOBAL DAT_00365118 float
// GLOBAL DAT_0036511c float
// GLOBAL DAT_00365120 float
// GLOBAL DAT_00365124 float
// GLOBAL DAT_00365128 float
// GLOBAL DAT_003654f4 float
// GLOBAL DAT_003654f8 float
// GLOBAL DAT_003654fc int
// GLOBAL DAT_00365500 float
// GLOBAL DAT_00365504 float
// GLOBAL DAT_00365508 float
// GLOBAL DAT_0036550c int *
// GLOBAL DAT_00365860 float
// GLOBAL DAT_00365864 int *
// GLOBAL DAT_00365868 uint *
// GLOBAL DAT_0036586c undefined4 *
// GLOBAL DAT_00365870 undefined4
// GLOBAL DAT_00365874 float
// GLOBAL DAT_00365878 float
// GLOBAL DAT_0036587c undefined
// GLOBAL DAT_00365894 int
// GLOBAL DAT_00365c14 float
// GLOBAL DAT_00365c18 float
// GLOBAL DAT_00365c1c float
// GLOBAL DAT_00365c20 float
// GLOBAL DAT_00365c24 undefined4
// GLOBAL DAT_00365c28 float
// GLOBAL DAT_00365c2c undefined4
// GLOBAL DAT_00365c30 int *
// GLOBAL s_cf_0036587f string
// GLOBAL s_Valley_00365104 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_00364A34(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  undefined4 *puVar6;
  float *pfVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(undefined4 *)(albw_frame + 0x4))
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  *(undefined1 *)(*(int *)(param_1 + 0x50) + 0x52d) = *(undefined1 *)(param_1 + 0x9b);
  fVar4 = DAT_00365508;
  fVar3 = DAT_00365504;
  fVar15 = DAT_003654f4;
  fVar2 = DAT_0036511c;
  fVar13 = DAT_0036510c;
  fVar16 = DAT_00364ddc;
  fVar17 = DAT_00364dcc;
  fVar14 = DAT_00364dc8;
  switch(param_2) {
  case 0xb:
  case 0xc:
    iVar10 = func_002D55E8(param_1);
    if (iVar10 != 0) break;
    func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x58),DAT_00364dc8);
    iVar10 = func_0053EDD8(*(int *)(param_1 + 0x4c) + 0x5c);
    if (iVar10 == 0) goto LAB_00364b44;
    bVar5 = func_0052E8A0(*(int *)(param_1 + 0x28));
    if (bVar5) {
LAB_00365848:
      func_002D55D0(param_1,0x98);
      break;
    }
    if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= DAT_00364dcc) goto LAB_00364b2c;
    goto LAB_00364b24;
  case 0xd:
  case 0xe:
    iVar10 = func_002D55E8(param_1);
    if (iVar10 != 0) break;
    func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x58),DAT_00364dc8);
    iVar10 = func_0053EDD8(*(int *)(param_1 + 0x4c) + 0x5c);
    if (iVar10 == 0) goto LAB_00364b44;
    bVar5 = func_0052E8A0(*(int *)(param_1 + 0x28));
    if (bVar5) goto LAB_00365848;
    if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= DAT_00364dcc) goto LAB_00364b2c;
    goto LAB_00364b24;
  case 0xf:
  case 0x10:
    iVar10 = func_002D55E8(param_1);
    if (iVar10 == 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x50) + 0x52c) = 1;
      bVar5 = func_0052E8A0(*(int *)(param_1 + 0x28));
      if ((bVar5) && (*(float *)(*(int *)(param_1 + 0x34) + 4) < DAT_00364dcc)) {
        *(float *)(*(int *)(param_1 + 0x34) + 4) = DAT_00364dcc;
      }
      func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x58),DAT_00364dc8);
      iVar10 = func_002D1418((int *)(param_1 + 0x70));
      uVar1 = DAT_00364dd4;
      if (iVar10 == 0) {
        iVar10 = func_002D55E8(param_1);
        if (iVar10 == 0) {
          bVar5 = func_0052E8A0(*(int *)(param_1 + 0x28));
          if (bVar5) {
            func_002D55D0(param_1,0x98);
          }
          else {
            func_002D55D0(param_1,(uint)(DAT_00364dcc < *(float *)(*(int *)(param_1 + 0x48) + 0x24))
                         );
          }
          fVar17 = DAT_00364dd8;
          fVar14 = DAT_00364dcc;
          iVar10 = *(int *)(param_1 + 0x50);
          *(undefined1 *)(iVar10 + 0x167) = 0;
          *(float *)(iVar10 + 0x17c) = fVar14;
          *(float *)(iVar10 + 0x180) = fVar17;
        }
      }
      else {
        *(float *)(*(int *)(param_1 + 0x50) + 0x4d0) = DAT_00364dd0;
        iVar10 = *(int *)(param_1 + 0x50);
        uVar9 = *(undefined4 *)(param_1 + 0xe8);
        *(undefined1 *)(iVar10 + 0x167) = 1;
        *(undefined4 *)(iVar10 + 0x17c) = uVar9;
        *(undefined4 *)(iVar10 + 0x180) = uVar1;
      }
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0xac) = 0;
    }
    break;
  case 0x11:
    iVar10 = *(int *)(*(int *)(param_1 + 0x28) + 0x618);
    uVar8 = *(uint *)(iVar10 + 0x30);
    if (uVar8 < 2) {
      uVar8 = 1;
    }
    *(uint *)(iVar10 + 0x30) = uVar8;
    func_0051D2CC(*(int **)(param_1 + 0x3c),0,fVar16);
    *(float *)(*(int *)(param_1 + 0x34) + 4) =
         *(float *)(*(int *)(param_1 + 0x34) + 4) + DAT_00364de0;
    *(undefined1 *)(*DAT_00364de4 + 0xfa9) = 1;
    fVar14 = DAT_00364dcc;
    uVar8 = *(uint *)(*(int *)(param_1 + 0x2c) + 0x44);
    if (uVar8 < 0x78) {
      if (uVar8 == 0x3c) {
        iVar10 = *(int *)(*(int *)(param_1 + 0x28) + 0x344);
        if (iVar10 != 0) {
          func_004A1B9C((int *)&local_30,iVar10,(uint *)s_Valley_00365104);
        }
        *(undefined1 *)(*(int *)(param_1 + 0x28) + 0x6bc) = 0;
      }
    }
    else {
      if ((*(char *)(*(int *)(param_1 + 0x50) + 0x80) == *(char *)(*DAT_00364de8 + 0x18)) &&
         (*(int *)(*(int *)(param_1 + 0x50) + 0x84) == *(int *)(*DAT_00364de8 + 0x1c))) {
        pfVar7 = *(float **)(param_1 + 0x34);
        *pfVar7 = DAT_00364dcc;
        pfVar7[1] = fVar14;
        pfVar7[2] = fVar14;
        if (*(char *)(*(int *)(param_1 + 0x2c) + 0xb0) == '\0') {
          func_002D404C(*(int *)(param_1 + 0x28));
        }
        func_002D55D0(param_1,0);
        func_001DC4C8(*(int *)(param_1 + 0x28),**(undefined4 **)(param_1 + 0x3c));
        *(undefined1 *)(*(int *)(param_1 + 0x28) + 0x6bc) = 1;
      }
      else {
        func_002D55D0(param_1,0x28);
      }
      func_004EB8A8(*DAT_00365100);
    }
    break;
  case 0x12:
    pfVar7 = *(float **)(param_1 + 0x34);
    *pfVar7 = DAT_00364dcc;
    pfVar7[1] = fVar17;
    pfVar7[2] = fVar17;
    func_0051D2CC(*(int **)(param_1 + 0x3c),0,fVar13);
    if (*(uint *)(*(int *)(param_1 + 0x2c) + 0x44) < 0x3c) break;
    if ((*(char *)(*(int *)(param_1 + 0x50) + 0x80) != *(char *)(*DAT_00364de8 + 0x18)) ||
       (*(int *)(*(int *)(param_1 + 0x50) + 0x84) != *(int *)(*DAT_00364de8 + 0x1c))) {
      func_002D55D0(param_1,0x28);
      break;
    }
    pfVar7 = *(float **)(param_1 + 0x34);
    *pfVar7 = fVar17;
    pfVar7[1] = fVar17;
    pfVar7[2] = fVar17;
    if (*(char *)(*(int *)(param_1 + 0x2c) + 0xb0) == '\0') {
      func_002D404C(*(int *)(param_1 + 0x28));
    }
    goto LAB_00364ee8;
  case 0x13:
    func_0051D2CC(*(int **)(param_1 + 0x3c),0,DAT_00364dc8);
    fVar16 = DAT_00365110;
    fVar17 = DAT_00364dd8;
    fVar14 = DAT_00364dcc;
    *(float *)(*(int *)(param_1 + 0x34) + 4) = DAT_00364dcc;
    fVar13 = (float)VectorUnsignedToFloat
                              (*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x44),
                               (byte)(in_fpscr >> 0x15) & 3);
    fVar16 = fVar17 + fVar13 * fVar16;
    if ((int)ALBW_AS_U32(fVar16) < DAT_00365114) {
      fVar16 = DAT_00365118;
    }
    *(float *)(*(int *)(param_1 + 0x28) + 0x6d0) = fVar16;
    if (*(uint *)(*(int *)(param_1 + 0x2c) + 0x44) < 0x5a) break;
    pfVar7 = *(float **)(param_1 + 0x34);
    *pfVar7 = fVar14;
    pfVar7[1] = fVar14;
    pfVar7[2] = fVar14;
    if (*(char *)(*(int *)(param_1 + 0x2c) + 0xb0) == '\0') {
      func_002D404C(*(int *)(param_1 + 0x28));
    }
    *(float *)(*(int *)(param_1 + 0x4c) + 0xfc) = fVar17;
    func_001DC928(*(int *)(param_1 + 0x28),1);
    *(float *)(*(int *)(param_1 + 0x28) + 0x6d0) = fVar17;
    goto LAB_00364ee8;
  case 0x14:
    *(undefined1 *)(*DAT_00364de4 + 0xfa9) = 1;
    func_0051D2CC(*(int **)(param_1 + 0x3c),0,fVar14);
    fVar16 = DAT_00364dd8;
    fVar17 = DAT_00364dd0;
    fVar14 = DAT_00364dcc;
    *(float *)(*(int *)(param_1 + 0x4c) + 0x100) = DAT_00364dcc;
    fVar13 = DAT_00365120;
    fVar17 = (fVar17 * ((*(float *)(*(int *)(param_1 + 0x30) + 4) - *(float *)(param_1 + 0xe8)) -
                       fVar14)) / DAT_0036511c + fVar16;
    if ((int)ALBW_AS_U32(fVar17) < 0x3f800000) {
      fVar17 = fVar16;
    }
    *(float *)(*(int *)(param_1 + 0x4c) + 0xfc) = fVar17;
    fVar17 = DAT_0036510c;
    func_0014D994((float *)(param_1 + 0xf8),*(float *)(param_1 + 0xf4),DAT_0036510c,fVar13);
    if (*(uint *)(*(int *)(param_1 + 0x2c) + 0x44) < 4) {
      fVar13 = DAT_00365124;
      if (*(char *)(param_1 + 0x99) != '\0') {
        fVar13 = DAT_00365128;
      }
      *(float *)(*(int *)(param_1 + 0x34) + 4) = *(float *)(*(int *)(param_1 + 0x34) + 4) + fVar13;
    }
    fVar13 = *(float *)(*(int *)(param_1 + 0x34) + 4);
    if (fVar13 < fVar14) {
      *(float *)(*(int *)(param_1 + 0x34) + 4) = fVar13 * fVar17;
      *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
    }
    if (0 < *(int *)(param_1 + 0xf0)) {
      *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
    }
    if (*(int *)(param_1 + 0xf0) < 0x4b) break;
    pfVar7 = *(float **)(param_1 + 0x34);
    *pfVar7 = fVar14;
    pfVar7[1] = fVar14;
    pfVar7[2] = fVar14;
    if (*(char *)(*(int *)(param_1 + 0x2c) + 0xb0) == '\0') {
      func_002D404C(*(int *)(param_1 + 0x28));
    }
    *(float *)(*(int *)(param_1 + 0x4c) + 0xfc) = fVar16;
    func_0028C76C(*(int *)(param_1 + 0x4c));
    *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xca) = 1;
LAB_00364ee8:
    func_002D55D0(param_1,0);
    func_001DC4C8(*(int *)(param_1 + 0x28),**(undefined4 **)(param_1 + 0x3c));
    break;
  case 0x15:
    iVar10 = func_002D55E8(param_1);
    if (iVar10 != 0) break;
    bVar5 = func_0052E8A0(*(int *)(param_1 + 0x28));
    fVar14 = DAT_00364dcc;
    if (bVar5) {
      pfVar7 = *(float **)(param_1 + 0x34);
      *pfVar7 = DAT_00364dcc;
      pfVar7[1] = fVar14;
      pfVar7[2] = fVar14;
    }
    if (*(uint *)(*(int *)(param_1 + 0x2c) + 0x44) < 0x3c) goto LAB_00364b44;
    bVar5 = func_0052E8A0(*(int *)(param_1 + 0x28));
    if (bVar5) goto LAB_00365848;
    if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= DAT_00364dcc) goto LAB_00364b2c;
    goto LAB_00364b24;
  case 0x16:
    iVar10 = func_002D55E8(param_1);
    if (iVar10 != 0) break;
    bVar5 = func_0052E8A0(*(int *)(param_1 + 0x28));
    fVar14 = DAT_003654f4;
    if (bVar5) {
      pfVar7 = *(float **)(param_1 + 0x34);
      *pfVar7 = DAT_003654f4;
      pfVar7[1] = fVar14;
      pfVar7[2] = fVar14;
    }
    if (*(uint *)(*(int *)(param_1 + 0x2c) + 0x44) < 0x5a) goto LAB_00364b44;
    *(undefined1 *)(param_1 + 0x98) = 0;
    bVar5 = func_0052E8A0(*(int *)(param_1 + 0x28));
    if (bVar5) goto LAB_00365848;
    if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= DAT_003654f4) goto LAB_00364b2c;
    goto LAB_00364b24;
  case 0x17:
    iVar10 = func_002D55E8(param_1);
    if (iVar10 != 0) break;
    func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x58),DAT_003654f8);
    if (*(int *)(param_1 + 0x90) < 0xf) {
      func_00115C54(*(float **)(param_1 + 0x34),*(float **)(param_1 + 0x34),
                    (float *)(param_1 + 0xd8));
      fVar14 = DAT_003654f4;
      *(float *)(param_1 + 0xd8) = DAT_003654f4;
      *(float *)(param_1 + 0xdc) = fVar14;
      *(float *)(param_1 + 0xe0) = fVar14;
      *(float *)(*(int *)(param_1 + 0x50) + 0x4d0) = DAT_0036510c;
    }
    else {
      bVar5 = func_0052E8A0(*(int *)(param_1 + 0x28));
      if (bVar5) goto LAB_00365848;
      uVar8 = func_00552FC0(*(uint *)(param_1 + 0x50));
      if (uVar8 != 0) {
        if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= DAT_003654f4) goto LAB_00364b2c;
        goto LAB_00364b24;
      }
      if (*(char *)(param_1 + 0x96) != '\0') {
        fVar14 = *(float *)(param_1 + 0xe8) - *(float *)(*(int *)(param_1 + 0x30) + 4);
        if (fVar14 <= DAT_003654f4) {
          fVar14 = -fVar14;
        }
        if ((int)ALBW_AS_U32(fVar14) < DAT_003654fc) {
          func_002D55D0(param_1,8);
          break;
        }
      }
    }
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
    break;
  case 0x18:
    iVar10 = func_002D55E8(param_1);
    if (iVar10 != 0) break;
    func_0051D2CC(*(int **)(param_1 + 0x3c),0,DAT_00365500);
    fVar14 = DAT_003654f4;
    *(float *)(*(int *)(param_1 + 0x4c) + 0xfc) =
         (DAT_00365508 *
         ((*(float *)(*(int *)(param_1 + 0x30) + 4) - *(float *)(param_1 + 0xe8)) - DAT_003654f4)) /
         DAT_0036511c + DAT_00365504;
    if ((fVar14 < *(float *)(*(int *)(param_1 + 0x34) + 4)) ||
       (uVar8 = func_00552FC0(*(uint *)(param_1 + 0x50)), uVar8 == 0)) break;
    if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar14) goto LAB_00364b2c;
    goto LAB_00364b24;
  case 0x19:
    *(float *)(*(int *)(param_1 + 0x4c) + 0xfc) =
         (DAT_00365508 *
         ((*(float *)(*(int *)(param_1 + 0x30) + 4) - *(float *)(param_1 + 0xe8)) - DAT_003654f4)) /
         DAT_0036511c + DAT_00365504;
    if ((fVar15 < *(float *)(*(int *)(param_1 + 0x34) + 4)) ||
       (uVar8 = func_00552FC0(*(uint *)(param_1 + 0x50)), uVar8 == 0)) break;
    if (fVar15 < *(float *)(*(int *)(param_1 + 0x48) + 0x24)) goto LAB_00364b24;
LAB_00364b2c:
    uVar8 = 0;
    goto LAB_00364b30;
  case 0x1a:
    **(int **)(param_1 + 0x3c) = *DAT_0036550c + **(int **)(param_1 + 0x3c);
    fVar14 = DAT_003654f4;
    *(float *)(*(int *)(param_1 + 0x4c) + 0xfc) =
         (fVar4 * ((*(float *)(*(int *)(param_1 + 0x30) + 4) - *(float *)(param_1 + 0xe8)) -
                  DAT_003654f4)) / fVar2 + fVar3;
    if ((*(float *)(*(int *)(param_1 + 0x34) + 4) <= fVar14) &&
       (uVar8 = func_00552FC0(*(uint *)(param_1 + 0x50)), uVar8 != 0)) {
      func_002D55D0(param_1,0x1b);
    }
    break;
  case 0x1b:
    func_0051D2CC(*(int **)(param_1 + 0x3c),0,DAT_00365860);
    if (*(int *)(*(int *)(param_1 + 0x2c) + 0x44) != 0x28) break;
    *(undefined1 *)(param_1 + 0x98) = 1;
    if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= DAT_003654f4) goto LAB_00364b2c;
    goto LAB_00364b24;
  case 0x1c:
    puVar6 = (undefined4 *)func_0052FBA0(*DAT_00365864 + 0x3dbbc,*(uint *)(param_1 + 0xa0));
    if (((*DAT_00365868 & 1) == 0) && (iVar10 = func_00100174((int *)DAT_00365868), iVar10 != 0)) {
      *DAT_0036586c = DAT_00365870;
    }
    if ((puVar6 == (undefined4 *)0x0) ||
       (iVar10 = (**(code **)*puVar6)(puVar6,DAT_0036586c), iVar10 == 0)) {
      puVar6 = (undefined4 *)0x0;
    }
    if (puVar6 == (undefined4 *)0x0) {
      func_002D55D0(param_1,0x16);
    }
    else {
      local_30 = ALBW_AS_F32(puVar6[0xf4]);
      local_28 = puVar6[0xf6];
      local_2c = *(undefined4 *)(*(int *)(param_1 + 0x30) + 4);
      func_004D838C(*(float **)(param_1 + 0x30),&local_30,ALBW_AS_F32(_DAT_0036587c),DAT_00365878,DAT_00365874);
    }
    break;
  case 0x1d:
  case 0x1e:
    func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x58),DAT_00365860);
    iVar10 = func_0053EDD8(*(int *)(param_1 + 0x4c) + 0x5c);
    if (iVar10 == 0) {
LAB_00364b44:
      iVar10 = *(int *)(param_1 + 0x50);
      goto LAB_00365b10;
    }
    if (((*(uint *)(*(int *)(param_1 + 0x50) + 0x328) & 0x80) != 0) &&
       (*(char *)(*(int *)(param_1 + 0x50) + 0x33c) == '\f')) {
      bVar5 = func_0052EE94(*(int *)(param_1 + 0x28));
      if (bVar5) {
        func_002D55D0(param_1,0x3f);
      }
      else {
        func_002D55D0(param_1,0x12);
      }
      break;
    }
    if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= DAT_003654f4) goto LAB_00364b2c;
    goto LAB_00364b24;
  case 0x1f:
  case 0x20:
    iVar10 = func_002D55E8(param_1);
    fVar14 = DAT_003654f8;
    if (iVar10 != 0) break;
    *(undefined1 *)(*(int *)(param_1 + 0x50) + 0x52c) = 1;
    func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x58),fVar14);
    iVar10 = func_0053EDD8(*(int *)(param_1 + 0x4c) + 0x5c);
    if (iVar10 == 0) goto LAB_00364b44;
    bVar5 = func_0052E8A0(*(int *)(param_1 + 0x28));
    if (bVar5) goto LAB_00365848;
    if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= DAT_003654f4) goto LAB_00364b2c;
    goto LAB_00364b24;
  case 0x21:
    iVar10 = func_002D55E8(param_1);
    if (iVar10 != 0) break;
    func_001DE2B0(*(int *)(param_1 + 0x28),1);
    local_30 = CF_NAN_NEG;
    fVar14 = DAT_003654f4;
    func_001DE2E8(*(int *)(param_1 + 0x28),0,(undefined4 *)(&local_30));
    local_30 = CF_NAN_NEG;
    func_001DE2E8(*(int *)(param_1 + 0x28),1,(undefined4 *)(&local_30));
    func_001DCF28(*(int *)(param_1 + 0x28),1);
    if (*(uint *)(*(int *)(param_1 + 0x2c) + 0x44) < 0x3c) break;
    func_001DE330(*(int *)(param_1 + 0x28),0);
    func_001DE330(*(int *)(param_1 + 0x28),1);
    func_001DE2B0(*(int *)(param_1 + 0x28),0);
    func_001DCF28(*(int *)(param_1 + 0x28),0);
    local_24 = s__SE_PV_RECOVER_ICE_0036587f + 1;
    local_28 = DAT_00365894;
    func_004EAF8C(*DAT_00365100,&local_28,0);
    bVar5 = func_0052E8A0(*(int *)(param_1 + 0x28));
    if (bVar5) goto LAB_00365848;
    if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar14) goto LAB_00364b2c;
    goto LAB_00364b24;
  case 0x22:
    pfVar7 = *(float **)(param_1 + 0x34);
    *pfVar7 = DAT_003654f4;
    pfVar7[1] = fVar15;
    pfVar7[2] = fVar15;
    break;
  case 0x23:
    if (-1 < *(int *)(param_1 + 0xe4)) {
      *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + -1;
    }
    goto LAB_00365a10;
  case 0x24:
    func_0051D2CC(*(int **)(param_1 + 0x3c),0,DAT_00365c14);
    uVar1 = DAT_00365c24;
    fVar17 = DAT_00365c1c;
    fVar14 = DAT_00365c18;
    fVar16 = (ALBW_AS_F32(_DAT_0036587c) *
             ((*(float *)(*(int *)(param_1 + 0x30) + 4) - *(float *)(param_1 + 0xe8)) - DAT_00365c18
             )) / DAT_00365c20 + DAT_00365c1c;
    if ((int)ALBW_AS_U32(fVar16) < 0x3f800000) {
      fVar16 = DAT_00365c1c;
    }
    *(float *)(*(int *)(param_1 + 0x4c) + 0xfc) = fVar16;
    *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x100) = uVar1;
    if ((5 < *(uint *)(*(int *)(param_1 + 0x2c) + 0x44)) &&
       (uVar8 = func_00552FC0(*(uint *)(param_1 + 0x50)), uVar8 != 0)) {
      *(float *)(*(int *)(param_1 + 0x4c) + 0x100) = fVar14;
      *(float *)(*(int *)(param_1 + 0x4c) + 0xfc) = fVar17;
      func_002D55D0(param_1,0x25);
    }
    break;
  case 0x25:
    iVar10 = func_0053EDD8(*(int *)(param_1 + 0x4c) + 0x3c);
    if (iVar10 == 0) break;
    *(float *)(*(int *)(param_1 + 0x4c) + 0x100) = DAT_00365c1c;
    if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= DAT_00365c18) goto LAB_00364b2c;
LAB_00364b24:
    uVar8 = 1;
LAB_00364b30:
    func_002D55D0(param_1,uVar8);
    break;
  case 0x26:
    iVar10 = func_0053EDD8(*(int *)(param_1 + 0x4c) + 0x3c);
    if (iVar10 != 0) {
      *(float *)(*(int *)(param_1 + 0x4c) + 0x100) = DAT_00365c1c;
      iVar10 = func_002D55D0(param_1,0x23);
      if (iVar10 != 0) {
        *(undefined4 *)(iVar10 + 0x10) = *(undefined4 *)(param_1 + 0xec);
      }
      break;
    }
LAB_00365a10:
    *(float *)(*(int *)(param_1 + 0x4c) + 0x100) = DAT_00365c18;
    break;
  case 0x27:
    func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x58),DAT_00365c28);
    iVar10 = func_002D55E8(param_1);
    if (iVar10 != 0) break;
    if (((*(char *)(param_1 + 0x95) != '\0') &&
        (DAT_00365c18 < *(float *)(*(int *)(param_1 + 0x48) + 0x24))) &&
       (iVar10 = func_0054C9CC(*(int *)(param_1 + 0x48)), iVar10 == 0)) {
      func_002D55D0(param_1,1);
      break;
    }
    iVar10 = func_0053EDD8(*(int *)(param_1 + 0x4c) + 0x3c);
    if (iVar10 != 0) {
      iVar10 = func_0054C9CC(*(int *)(param_1 + 0x48));
      if (iVar10 != 0) {
        func_002D55D0(param_1,0x32);
        break;
      }
      if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= DAT_00365c18) goto LAB_00364b2c;
      goto LAB_00364b24;
    }
    iVar10 = *(int *)(param_1 + 0x50);
    if (((*(uint *)(iVar10 + 0x328) & 2) != 0) && (*(char *)(iVar10 + 0x33c) == '\t')) {
      *(float *)(iVar10 + 0x4fc) = DAT_00365c20;
      break;
    }
LAB_00365b10:
    *(undefined4 *)(iVar10 + 0x4d0) = DAT_00365c2c;
    break;
  case 0x28:
    *(undefined1 *)(param_1 + 0x9a) = 1;
    iVar10 = *(int *)(*(int *)(param_1 + 0x28) + 0x618);
    uVar8 = *(uint *)(iVar10 + 0x30);
    if (uVar8 < 2) {
      uVar8 = 1;
    }
    *(uint *)(iVar10 + 0x30) = uVar8;
    *(undefined1 *)(*(int *)(param_1 + 0x28) + 0x6bc) = 0;
    uVar8 = func_00552FC0(*(uint *)(param_1 + 0x50));
    if (uVar8 == 0) {
      iVar10 = *(int *)(*(int *)(param_1 + 0x2c) + 0x68);
      if ((*(int *)(*DAT_00365c30 + 0x44) != 0) && (*(int *)(*DAT_00365c30 + 0x44) == iVar10)) {
        func_00165E28(iVar10,0);
      }
    }
    break;
  case 0x29:
    uVar8 = func_00552FC0(*(uint *)(param_1 + 0x50));
    if (uVar8 == 0) {
      piVar11 = *(int **)(*(int *)(param_1 + 0x2c) + 0x68);
      piVar12 = *(int **)(*DAT_00365c30 + 0x44);
      if ((piVar12 != (int *)0x0) && (piVar12 == piVar11)) {
        func_004CDA44(*DAT_00365c30,piVar11);
      }
    }
  }
  bVar5 = func_0052E8A0(*(int *)(param_1 + 0x28));
  bVar5 = !bVar5;
  if (!bVar5 && param_2 != 0x18) {
    if ((!bVar5 && param_2 != 0x18) && (bVar5 || 0x17 < param_2)) {
      if (param_2 == 0x1a || param_2 == 0x24) {
        return;
      }
      if (param_2 == 0x29) {
        return;
      }
    }
    else {
      if (param_2 == 0x11 || param_2 == 0x12) {
        return;
      }
      if (param_2 == 0x13 || param_2 == 0x14) {
        return;
      }
    }
    *(float *)(*(int *)(param_1 + 0x34) + 4) = DAT_00365c18;
  }
  return;
}

