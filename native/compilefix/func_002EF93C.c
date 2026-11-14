/* compilefix: USA 002EF93C (EU 002EF918), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 's_'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [2]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [2]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_002efd23[];
extern char s_cf_002efd24[];
#include "compilefix.h"

extern int func_00100174(int *param_1);
extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014DBF4(int *param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00260C78(float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int func_00292084(int param_1,int param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_002F3468(int param_1,int param_2);
extern int func_0033CF40(int param_1);
extern int func_00520FC0(void);
extern int func_0052FCA4(int param_1,undefined4 *param_2,int *param_3);
extern int func_00556E94(int param_1);
extern float func_006640EC(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int func_0068C690(float *param_1);
extern int func_0068C794(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int *DAT_002efcf4;
extern float DAT_002efcf8;
extern float DAT_002efcfc;
extern float DAT_002efd00;
extern float DAT_002efd04;
extern float DAT_002efd08;
extern float DAT_002efd0c;
extern float DAT_002efd10;
extern int DAT_002efd14;
extern int DAT_002efd18;
extern int *DAT_002efd1c;
extern undefined DAT_002efd20;
extern int DAT_002efd40;
extern int *DAT_002efd44;
extern uint DAT_002efd48;
extern float DAT_002efd4c;
extern undefined4 DAT_002efe84;
extern int *DAT_002efe88;
extern uint *DAT_002efe8c;
extern undefined4 *DAT_002efe90;
extern undefined4 DAT_002efe94;
extern undefined4 _DAT_002efd20;

// USA 002EF93C <- EU 002EF918 (Ghidra, non-matching)
// GLOBAL DAT_002efcf4 int *
// GLOBAL DAT_002efcf8 float
// GLOBAL DAT_002efcfc float
// GLOBAL DAT_002efd00 float
// GLOBAL DAT_002efd04 float
// GLOBAL DAT_002efd08 float
// GLOBAL DAT_002efd0c float
// GLOBAL DAT_002efd10 float
// GLOBAL DAT_002efd14 int
// GLOBAL DAT_002efd18 int
// GLOBAL DAT_002efd1c int *
// GLOBAL DAT_002efd20 undefined
// GLOBAL DAT_002efd40 int
// GLOBAL DAT_002efd44 int *
// GLOBAL DAT_002efd48 uint
// GLOBAL DAT_002efd4c float
// GLOBAL DAT_002efe84 undefined4
// GLOBAL DAT_002efe88 int *
// GLOBAL DAT_002efe8c uint *
// GLOBAL DAT_002efe90 undefined4 *
// GLOBAL DAT_002efe94 undefined4
// GLOBAL s_cf_002efd23 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * func_002EF93C(int *param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  uint *puVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  bool bVar14;
  uint in_fpscr;
  float in_s0;
  float fVar15;
  float fparam_2;
  float fVar16;
  float fVar17;
  float fparam_1;
  float fparam_3;
  _Alignas(8) unsigned char albw_frame[0x110];
  #define fStack_110 (*(float *)(albw_frame + 0x0))
  #define fStack_10c (*(float *)(albw_frame + 0x4))
  #define local_108 (*(undefined4 *)(albw_frame + 0x8))
  #define local_104 (*(char *)(albw_frame + 0xc))
  #define local_fc (*(int *)(albw_frame + 0x14))
  #define local_f4 (*(int * *)(albw_frame + 0x1c))
  #define local_ec (*(int *)(albw_frame + 0x24))
  #define local_b4 (*(float * *)(albw_frame + 0x5c))
  #define local_a8 (*(float * *)(albw_frame + 0x68))
  #define iStack_9c (*(int *)(albw_frame + 0x74))
  #define local_98 (*(int *)(albw_frame + 0x78))
  #define local_94 (*(char * *)(albw_frame + 0x7c))
  local_ec = *DAT_002efcf4;
  if ((local_ec == 0) || (bVar5 = func_00556E94(local_ec), !bVar5)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  func_002F3468((int)param_1,0);
  local_b4 = (float *)(param_1 + 0x377);
  func_00115C70(&fStack_110,local_b4,(float *)(param_1 + 0x38c));
  iVar6 = func_0068C690(&fStack_110);
  pfVar7 = (float *)func_00520FC0();
  func_00115C70(&fStack_10c,pfVar7,(float *)(param_1 + 0x38c));
  iVar8 = func_0068C690(&fStack_10c);
  fparam_1 = DAT_002efcf8;
  uVar13 = iVar8 - iVar6;
  local_fc = (uVar13 ^ (int)uVar13 >> 0x1f) - ((int)uVar13 >> 0x1f);
  iVar6 = param_1[0x36d];
  bVar2 = false;
  iVar8 = **(int **)(iVar6 + 0x14);
  if ((char)param_1[0x351] == '\x01') {
    if ((int)uVar13 < 0) {
      *(undefined1 *)(param_1 + 0x38b) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x38b) = 0;
    }
    param_1[0x2df] = 1;
    fVar16 = DAT_002efd04;
    if ((char)param_1[0x38b] == '\0') {
      param_1[0x387] = (int)ALBW_AS_U32(fparam_1);
    }
    else {
      param_1[0x387] = (int)ALBW_AS_U32(DAT_002efd04);
      in_s0 = fVar16;
    }
  }
  local_f4 = param_1 + 0x2d5;
  fVar16 = DAT_002efd00;
  fparam_2 = DAT_002efcfc;
  if (iVar8 == 6) {
    iVar11 = *(int *)(iVar6 + 0x14);
    fVar16 = DAT_002efcfc;
    if (*(char *)(iVar11 + 0x1c) == '\0') {
      in_s0 = *(float *)(iVar11 + 8);
      if (NAN(*(float *)(iVar11 + 0x10)) || NAN(DAT_002efcfc)) {
        in_fpscr = in_fpscr & 0xfffffff | (uint)(in_s0 == DAT_002efcfc) << 0x1e |
                   (uint)(DAT_002efcfc <= in_s0) << 0x1d;
        bVar1 = (byte)(in_fpscr >> 0x18);
        if (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) goto LAB_002efa88;
      }
      else {
        in_fpscr = in_fpscr & 0xfffffff | (uint)(in_s0 == *(float *)(iVar11 + 0x14)) << 0x1e;
        if (SUB41(in_fpscr >> 0x1e,0)) {
LAB_002efa88:
          puVar9 = (uint *)func_002C11E8(&iStack_9c,0,0,0);
          func_0016898C(param_1[0x36d],puVar9);
          param_1[0x2df] = 0;
          goto LAB_002efaf8;
        }
      }
    }
    iVar6 = *(int *)(iVar6 + 0x14);
    in_s0 = DAT_002efd08;
    iVar6 = func_00260C78(DAT_002efd08,*(float *)(iVar6 + 8),*(float *)(iVar6 + 0xc),
                          *(float *)(iVar6 + 0x14));
    if (iVar6 != 0 && bVar5) {
      func_00292084(local_ec,0xfffffff8);
      local_f4[1] = 0;
      local_f4[2] = (int)ALBW_AS_U32(fparam_2);
      *local_f4 = 0;
    }
  }
LAB_002efaf8:
  uVar3 = DAT_002efd48;
  fVar17 = DAT_002efd10;
  fparam_3 = DAT_002efd0c;
  local_a8 = (float *)(param_1 + 0x387);
  if (param_1[0x2df] == 0) {
    bVar14 = param_1[0x2d6] == param_1[0x2d5];
    if ((uint)param_1[0x2d6] <= (uint)param_1[0x2d5]) {
      bVar14 = !bVar5;
    }
    if (bVar14) {
      if ((uint)param_1[0x2c3] < (uint)param_1[0x2c4]) {
        param_1[0x2c3] = param_1[0x2c3] + 1;
      }
      else {
        uVar13 = func_00111A64((uint *)(*DAT_002efd44 + 0x660));
        iVar6 = (int)((ulonglong)uVar3 * (ulonglong)uVar13 >> 0x20) + 0x5a;
        param_1[0x2c4] = iVar6;
        if (iVar6 == 0) {
          param_1[0x2c5] = (int)ALBW_AS_U32(fparam_2);
        }
        else {
          fVar15 = (float)VectorUnsignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
          param_1[0x2c5] = (int)ALBW_AS_U32((DAT_002efd4c / fVar15));
        }
        param_1[0x2c3] = 0;
        *(bool *)(param_1 + 0x38b) = (char)param_1[0x38b] == '\0';
      }
    }
    else {
      bVar2 = true;
      iVar6 = DAT_002efd14;
      if ((char)param_1[0x38b] == '\0') {
        iVar6 = DAT_002efd18;
      }
      if ((int)uVar13 < iVar6) {
        *(undefined1 *)(param_1 + 0x38b) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 0x38b) = 0;
      }
      if (((bVar5) && (local_fc < *DAT_002efd1c)) && (iVar8 != 6)) {
        param_1[0x387] = _DAT_002efd20;
        if ((char)param_1[0x38b] == '\0') {
          param_1[0x387] = (int)ALBW_AS_U32(fVar17);
        }
        puVar9 = (uint *)func_002C11E8((int *)&fStack_110,6,0,0);
        func_0016898C(param_1[0x36d],puVar9);
        local_94 = s_cf_002efd24;
        local_98 = DAT_002efd40;
        func_0014DBF4(param_1,&local_98,(undefined4)(uintptr_t)(local_b4),0);
      }
    }
    if ((char)param_1[0x38b] == '\0') {
      fVar16 = -fVar16;
    }
    if (bVar2) {
      fVar16 = fVar16 * fVar17;
    }
    fVar17 = fparam_2;
    func_0068C794(local_a8,fVar16,fparam_1,fparam_2,fparam_3);
  }
  else {
    fVar16 = in_s0;
    fVar17 = fparam_2;
    if (param_1[0x2df] == 1) {
      func_0068C794(local_a8,fparam_2,fparam_1,fparam_2,DAT_002efd0c);
      iVar6 = *(int *)(param_1[0x36d] + 0x14);
      fVar16 = fparam_2;
      if (*(char *)(iVar6 + 0x1c) == '\0') {
        fVar16 = *(float *)(iVar6 + 8);
        if (*(float *)(iVar6 + 0x10) < fVar17) {
          if (fVar17 < fVar16) goto LAB_002efd84;
        }
        else if (fVar16 != *(float *)(iVar6 + 0x14)) goto LAB_002efd84;
        puVar9 = (uint *)func_002C11E8((int *)&fStack_110,0,0,0);
        func_0016898C(param_1[0x36d],puVar9);
        param_1[0x2df] = 0;
      }
    }
  }
LAB_002efd84:
  piVar4 = DAT_002efe88;
  local_104 = (char)param_1[0x38b];
  piVar10 = (int *)(int)local_104;
  if ((char)param_1[0x233] == '\x17') {
    local_108 = DAT_002efe84;
    piVar10 = (int *)(uintptr_t)(func_0052FCA4(*DAT_002efe88 + 0x3dbbc,&local_108,*(int **)(*DAT_002efe88 + 0x3dbc0)));
    if ((piVar10 != *(int **)(*piVar4 + 0x3dbc8)) &&
       (puVar12 = (undefined4 *)*piVar10, puVar12 != (undefined4 *)0x0)) {
      if (((*DAT_002efe8c & 1) == 0) && (iVar6 = func_00100174((int *)DAT_002efe8c), iVar6 != 0)) {
        *DAT_002efe90 = DAT_002efe94;
      }
      piVar10 = (int *)(**(code **)*puVar12)(puVar12,DAT_002efe90);
      if (piVar10 == (int *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      if (puVar12 != (undefined4 *)0x0) {
        iVar6 = func_0033CF40((int)puVar12);
        piVar10 = (int *)0x0;
        if (iVar6 != 0) {
          param_1[0x32a] = puVar12[0xb3];
          piVar10 = param_1 + 0x232;
          func_006640EC(piVar10,0x1d,fVar16);
          return piVar10;
        }
      }
    }
  }
  param_1[0xf8] = (int)ALBW_AS_U32(fVar17);
  return piVar10;
}

