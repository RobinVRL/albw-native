/* compilefix: USA 002F08B0 (EU 002F088C), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [1]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [5]
 *  - implicit float<->int conversions (Ghidra COPY between a float and an int-typed variable or
 *    pool word, e.g. `fVar = _DAT_xxx;`, `puVar[3] = fVar;`) made bit copies [2]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0014DBF4(int *param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_001EA96C();
extern float func_001FE4C0(int param_1,float fparam_0);
extern int func_00260C78(float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int func_00292084(int param_1,int param_2);
extern float func_002C1540(int param_1,float fparam_0);
extern int func_002C15CC(int param_1,float fparam_0);
extern int func_002EEBB8(int param_1);
extern int func_002FF5BC(int param_1);
extern int func_002FF74C(int param_1,int param_2,int param_3);
extern int func_00300218(int param_1);
extern int func_0049F5FC(undefined4 *param_1);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_0051E6D0(int param_1,float *param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_00520FD4(void);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0053F480(int param_1);
extern int func_00556B54(int param_1);
extern int func_00556E64(int param_1);
extern int func_00556EAC(int param_1,int param_2);
extern float fRam002f1024;
extern float DAT_002f0bb4;
extern int *DAT_002f0bb8;
extern float DAT_002f0bbc;
extern float DAT_002f0bc0;
extern undefined4 DAT_002f0bc4;
extern float DAT_002f0bc8;
extern float DAT_002f0bcc;
extern undefined4 *DAT_002f0bd0;
extern undefined4 DAT_002f0bd4;
extern undefined4 DAT_002f0bd8;
extern undefined4 DAT_002f0bdc;
extern undefined4 DAT_002f0be0;
extern int *DAT_002f1018;
extern float DAT_002f101c;
extern float DAT_002f1020;
extern undefined4 *DAT_002f1028;
extern float DAT_002f142c;
extern int *DAT_002f1430;
extern float DAT_002f1434;
extern undefined DAT_002f1438;
extern float DAT_002f1458;
extern undefined DAT_002f145c;
extern undefined DAT_002f147c;
extern int *DAT_002f149c;
extern char s_ASE_MediumGanonFlat_FS_RUN_002f145f[];
extern char s_BSE_MediumGanonFlat_FS_WALK_002f143b[];
extern char s__SE_MediumGanonFlat_FS_RUSH_002f147f[];
extern undefined4 _DAT_002f1438;
extern undefined4 _DAT_002f145c;
extern undefined4 _DAT_002f147c;

// USA 002F08B0 <- EU 002F088C (Ghidra, non-matching)
// GLOBAL DAT_002f0bb4 float
// GLOBAL DAT_002f0bb8 int *
// GLOBAL DAT_002f0bbc float
// GLOBAL DAT_002f0bc0 float
// GLOBAL DAT_002f0bc4 undefined4
// GLOBAL DAT_002f0bc8 float
// GLOBAL DAT_002f0bcc float
// GLOBAL DAT_002f0bd0 undefined4 *
// GLOBAL DAT_002f0bd4 undefined4
// GLOBAL DAT_002f0bd8 undefined4
// GLOBAL DAT_002f0bdc undefined4
// GLOBAL DAT_002f0be0 undefined4
// GLOBAL DAT_002f1018 int *
// GLOBAL DAT_002f101c float
// GLOBAL DAT_002f1020 float
// GLOBAL DAT_002f1028 undefined4 *
// GLOBAL DAT_002f142c float
// GLOBAL DAT_002f1430 int *
// GLOBAL DAT_002f1434 float
// GLOBAL DAT_002f1438 undefined
// GLOBAL DAT_002f1458 float
// GLOBAL DAT_002f145c undefined
// GLOBAL DAT_002f147c undefined
// GLOBAL DAT_002f149c int *
// GLOBAL UNK_002f1024 float
// GLOBAL s_;SE_MediumGanonFlat_FS_RUSH_002f147f string
// GLOBAL s_ASE_MediumGanonFlat_FS_RUN_002f145f string
// GLOBAL s_BSE_MediumGanonFlat_FS_WALK_002f143b string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_002F08B0(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,float fparam_0)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  int extraout_r1;
  uint uVar8;
  undefined1 *puVar9;
  int *piVar10;
  float *pfVar11;
  int *piVar12;
  float *pfVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  _Alignas(8) unsigned char albw_frame[0xf0];
  #define local_f0 (*(int * *)(albw_frame + 0x0))
  #define local_ec (*(char * *)(albw_frame + 0x4))
  #define local_e8 (*(float *)(albw_frame + 0x8))
  #define local_e4 (*(int * *)(albw_frame + 0xc))
  #define local_e0 (*(char * *)(albw_frame + 0x10))
  #define local_dc (*(float *)(albw_frame + 0x14))
  #define local_d8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_d4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_d0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_cc (*(undefined4 *)(albw_frame + 0x24))
  #define local_c8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_c4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_c0 (*(undefined4 *)(albw_frame + 0x30))
  #define local_bc (*(float *)(albw_frame + 0x34))
  #define local_b8 (*(float *)(albw_frame + 0x38))
  #define local_b4 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_b0 (*(undefined4 *)(albw_frame + 0x40))
  #define local_ac (*(undefined4 *)(albw_frame + 0x44))
  #define local_a8 (*(undefined4 *)(albw_frame + 0x48))
  #define local_a4 (*(float *)(albw_frame + 0x4c))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x50))
  #define local_9c (*(undefined4 *)(albw_frame + 0x54))
  #define local_98 (*(undefined4 *)(albw_frame + 0x58))
  #define local_94 (*(float *)(albw_frame + 0x5c))
  #define local_90 (*(float *)(albw_frame + 0x60))
  #define local_8c (*(float *)(albw_frame + 0x64))
  #define local_88 (*(undefined4 *)(albw_frame + 0x68))
  #define local_84 (*(int *)(albw_frame + 0x6c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x70))
  #define local_7c (*(float *)(albw_frame + 0x74))
  #define local_78 (*(undefined4 *)(albw_frame + 0x78))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_70 (*(undefined1 * *)(albw_frame + 0x80))
  #define auStack_6c ((undefined1 *)(albw_frame + 0x84))
  #define local_5c (*(undefined4 *)(albw_frame + 0x94))
  #define local_58 (*(undefined1 *)(albw_frame + 0x98))
  #define local_57 (*(undefined1 *)(albw_frame + 0x99))
  #define local_56 (*(undefined1 *)(albw_frame + 0x9a))
  #define local_55 (*(undefined1 *)(albw_frame + 0x9b))
  #define local_54 (*(undefined4 *)(albw_frame + 0x9c))
  #define local_50 (*(int *)(albw_frame + 0xa0))
  #define local_4c (*(int *)(albw_frame + 0xa4))
  #define local_48 (*(int *)(albw_frame + 0xa8))
  #define local_44 (*(int *)(albw_frame + 0xac))
  #define local_40 (*(int * *)(albw_frame + 0xb0))
  #define local_3c (*(int * *)(albw_frame + 0xb4))
  fVar16 = DAT_002f0bb4;
  local_40 = param_1 + 0x371;
  local_3c = param_1 + 0x370;
  pfVar14 = (float *)(param_1 + 0x37d);
  piVar12 = param_1 + 0x2d5;
  pfVar13 = (float *)(param_1 + 0x37a);
  pfVar11 = (float *)(param_1 + 0x377);
  pfVar6 = (float *)(param_1 + 0x373);
  if (*(char *)((int)param_1 + 0xe0e) == '\0') {
    *(undefined1 *)(param_1 + 899) = 0;
    iVar7 = param_1[3];
    iVar3 = param_1[0xf6];
    fVar15 = ALBW_AS_F32(param_1[0xf4]);
    *pfVar13 = fVar15;
    param_1[0x37b] = iVar7;
    param_1[0x37c] = iVar3;
    *pfVar14 = fVar15;
    param_1[0x37e] = iVar7;
    param_1[0x37f] = iVar3;
    *pfVar11 = fVar15;
    param_1[0x378] = iVar7;
    param_1[0x379] = iVar3;
    param_1[0x374] = (int)ALBW_AS_U32(fVar15);
    param_1[0x375] = iVar7;
    param_1[0x376] = iVar3;
    iVar7 = param_1[0x371];
    if (iVar7 != 0) {
      *(uint *)(iVar7 + 0x164) = *(uint *)(iVar7 + 0x164) | 1;
      func_004CF478(param_1[0x371],0);
    }
    iVar7 = func_0052FBA0(*DAT_002f1018 + 0x3dbbc,param_1[0x32b]);
    if (iVar7 != 0) {
      *(undefined1 *)(iVar7 + 0x40e) = 0;
    }
    param_1[0x2d6] = 0;
    param_1[0x2d7] = (int)ALBW_AS_U32(fVar16);
    *piVar12 = 0;
    *(undefined1 *)((int)param_1 + 0xe0d) = 0;
    func_001FE4C0(param_1[0x373],fVar15);
    if (param_1[0x370] != 0) {
      func_00300218(param_1[0x370]);
    }
    iVar7 = param_1[0x32c];
    if (iVar7 != 0) {
      if (*(int *)(iVar7 + 0x1c) == param_1[0x32d]) {
        iVar3 = *(int *)(iVar7 + 0x20);
        if (((iVar3 != 0) && (*(int *)(iVar7 + 0x24) == *(int *)(iVar3 + 0xc))) &&
           (0 < *(int *)(iVar3 + 4))) {
          *(undefined1 *)(iVar3 + 0x280) = 1;
        }
        *(uint *)(iVar7 + 0x3c) = *(uint *)(iVar7 + 0x3c) & 0xfffffffb | 8;
      }
      param_1[0x32c] = 0;
      param_1[0x32d] = 0;
    }
    return 0;
  }
  iVar7 = param_1[0x370];
  local_48 = *DAT_002f0bb8;
  if (iVar7 != 0) {
    fVar15 = DAT_002f0bbc - ALBW_AS_F32(param_1[900]);
    *(float *)(iVar7 + 0x16c) = DAT_002f0bb4;
    *(float *)(iVar7 + 0x170) = fVar15;
    *(float *)(iVar7 + 0x174) = fVar16;
    fVar15 = DAT_002f0bc0;
    iVar7 = *local_3c;
    if (*(float *)(iVar7 + 0x164) != DAT_002f0bc0) {
      *(uint *)(iVar7 + 0x188) = *(uint *)(iVar7 + 0x188) | 8;
    }
    *(float *)(iVar7 + 0x164) = fVar15;
    *(undefined4 *)(param_1[0x370] + 0x168) = DAT_002f0bc4;
  }
  fVar15 = DAT_002f0bcc;
  local_44 = (int)(char)param_1[899];
  local_bc = fVar16;
  if (local_44 != 0) {
    local_bc = ALBW_AS_F32(param_1[0x387]);
  }
  if (local_bc != fVar16) {
    local_bc = ALBW_AS_F32(param_1[0x387]) * DAT_002f0bc8;
  }
  local_a4 = fVar16;
  local_94 = DAT_002f0bcc;
  local_90 = DAT_002f0bcc;
  local_8c = DAT_002f0bcc;
  local_88 = 0;
  local_84 = 0;
  local_7c = DAT_002f0bcc;
  local_78 = 0;
  uStack_74 = 4;
  local_58 = 0;
  local_57 = 0;
  local_56 = 0;
  local_5c = 0;
  local_55 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  puVar9 = auStack_6c;
  local_b8 = fVar16;
  local_b4 = *DAT_002f0bd0;
  local_b0 = DAT_002f0bd0[1];
  local_ac = DAT_002f0bd0[2];
  local_a0 = DAT_002f0bd8;
  local_9c = DAT_002f0bd4;
  local_f0 = param_1 + 0x36d;
  local_98 = DAT_002f0bd4;
  local_80 = DAT_002f0bdc;
  local_a8 = DAT_002f0be0;
  local_70 = puVar9;
  if (local_44 == 0) {
    local_ec = (char *)param_1[0xf4];
    local_e4 = (int *)param_1[0xf6];
    local_e8 = ALBW_AS_F32(param_1[3]) + DAT_002f101c;
    iVar7 = param_1[0x103];
    local_e0 = *(char **)(iVar7 + 0x80);
    local_dc = *(float *)(iVar7 + 0x90);
    local_d8 = *(undefined4 *)(iVar7 + 0xa0);
    local_d4 = *(undefined4 *)(iVar7 + 0x84);
    local_d0 = *(undefined4 *)(iVar7 + 0x94);
    local_cc = *(undefined4 *)(iVar7 + 0xa4);
    local_c8 = *(undefined4 *)(iVar7 + 0x88);
    local_c4 = *(undefined4 *)(iVar7 + 0x98);
    local_c0 = *(undefined4 *)(iVar7 + 0xa8);
  }
  else {
    local_84 = param_1[0x371];
    iVar7 = param_1[0x373];
    local_e0 = *(char **)(iVar7 + 0x3b4c);
    local_dc = *(float *)(iVar7 + 0x3b50);
    local_d8 = *(undefined4 *)(iVar7 + 0x3b54);
    local_d4 = *(undefined4 *)(iVar7 + 0x3b58);
    local_d0 = *(undefined4 *)(iVar7 + 0x3b5c);
    local_cc = *(undefined4 *)(iVar7 + 0x3b60);
    local_c8 = *(undefined4 *)(iVar7 + 0x3b64);
    local_c4 = *(undefined4 *)(iVar7 + 0x3b68);
    local_c0 = *(undefined4 *)(iVar7 + 0x3b6c);
    local_50 = (int)ALBW_AS_U32(*pfVar6) + 0x3ba4;
    local_4c = (int)ALBW_AS_U32(*pfVar6) + 0x3ba8;
    fVar2 = *pfVar6;
    local_ec = *(char **)((int)ALBW_AS_U32(fVar2) + 0x3b40);
    local_e8 = *(float *)((int)ALBW_AS_U32(fVar2) + 0x3b44);
    local_e4 = *(int **)((int)ALBW_AS_U32(fVar2) + 0x3b48);
    iVar3 = param_1[0x36f];
    *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
    *(char **)(iVar3 + 0x80) = local_e0;
    *(undefined4 *)(iVar3 + 0x84) = local_d4;
    *(undefined4 *)(iVar3 + 0x88) = local_c8;
    *(float *)(iVar3 + 0x8c) = *pfVar11;
    *(float *)(iVar3 + 0x90) = local_dc;
    *(undefined4 *)(iVar3 + 0x94) = local_d0;
    *(undefined4 *)(iVar3 + 0x98) = local_c4;
    *(int *)(iVar3 + 0x9c) = param_1[0x378];
    *(undefined4 *)(iVar3 + 0xa0) = local_d8;
    *(undefined4 *)(iVar3 + 0xa4) = local_cc;
    *(undefined4 *)(iVar3 + 0xa8) = local_c0;
    iVar7 = param_1[0x379];
    *(int *)(iVar3 + 0xac) = iVar7;
    if ((int *)param_1[0x36d] != (int *)0x0) {
      func_00169A80((int *)param_1[0x36d],iVar7,(undefined4)(uintptr_t)(puVar9),param_4);
      puVar9 = (undefined1 *)0x0;
      func_00168E9C((int *)*local_f0,param_1[0x36f],(int *)0x0);
      iVar7 = extraout_r1;
    }
    local_f0 = param_1 + 0x36e;
    if ((int *)param_1[0x36e] != (int *)0x0) {
      func_00169A80((int *)param_1[0x36e],iVar7,(undefined4)(uintptr_t)(puVar9),param_4);
      func_00168E9C((int *)*local_f0,param_1[0x36f],(int *)0x0);
    }
    func_004CEAF0(param_1[0x36f]);
  }
  iVar7 = param_1[0x371];
  fVar2 = DAT_002f1020;
  if (iVar7 != 0) {
    if ((char)param_1[0x38b] == '\0') {
      fVar5 = fVar15;
      func_002C1540(iVar7,fVar15);
      fVar15 = fVar16;
      iVar7 = *local_40;
      fVar16 = fVar15;
    }
    else {
      func_002C1540(iVar7,DAT_002f1020);
      iVar7 = *local_40;
      fVar5 = fVar15;
    }
    func_002C15CC(iVar7,fVar15);
    uVar8 = *(uint *)(param_1[0x371] + 0x164);
    if (*(char *)((int)param_1 + 0xe0d) == '\x01') {
      uVar8 = uVar8 & 0xfffffffe;
    }
    else {
      uVar8 = uVar8 | 1;
    }
    *(uint *)(param_1[0x371] + 0x164) = uVar8;
    func_004CF478(param_1[0x371],(int)*(char *)((int)param_1 + 0xe0d));
    if (*(char *)((int)param_1 + 0xe0d) != '\0') {
      fVar15 = SQRT((*pfVar11 - ALBW_AS_F32(param_1[0x374])) * (*pfVar11 - ALBW_AS_F32(param_1[0x374])) +
                    (ALBW_AS_F32(param_1[0x379]) - ALBW_AS_F32(param_1[0x376])) *
                    (ALBW_AS_F32(param_1[0x379]) - ALBW_AS_F32(param_1[0x376])));
      if ((char)param_1[0x38b] == '\0') {
        fVar15 = ALBW_AS_F32(param_1[0x372]) + fVar15 * fRam002f1024;
        param_1[0x372] = (int)ALBW_AS_U32(fVar15);
        if (0x3f7fffff < (int)ALBW_AS_U32(fVar15)) {
          fVar15 = fVar15 - fVar5;
          goto LAB_002f0e44;
        }
      }
      else {
        fVar15 = ALBW_AS_F32(param_1[0x372]) - fVar15 * fRam002f1024;
        param_1[0x372] = (int)ALBW_AS_U32(fVar15);
        if (fVar15 <= fVar16) {
          fVar15 = fVar15 + fVar5;
LAB_002f0e44:
          param_1[0x372] = (int)ALBW_AS_U32(fVar15);
        }
      }
      for (uVar8 = 0; uVar8 < (uint)(*(int **)(param_1[0x371] + 0x20))[1]; uVar8 = uVar8 + 1) {
        iVar7 = **(int **)(param_1[0x371] + 0x20) + uVar8 * 0x154;
        if (*(int *)(iVar7 + 0x148) != 0) {
          *(float *)(iVar7 + 0x110) = fVar15;
          *(undefined4 *)(iVar7 + 0x114) = *(undefined4 *)(iVar7 + 0x114);
        }
      }
      for (iVar7 = 0; iVar7 < *(int *)(*(int *)(param_1[0x371] + 0x20) + 4); iVar7 = iVar7 + 1) {
        iVar3 = **(int **)(param_1[0x371] + 0x20) + iVar7 * 0x154;
        *(float *)(iVar3 + 0x104) = fVar5;
        *(float *)(iVar3 + 0x108) = fVar5;
      }
    }
  }
  if (param_1[0x36f] != 0) {
    func_004CF478(param_1[0x36f],1);
  }
  if (param_1[0x370] != 0) {
    func_002FF74C(param_1[0x370],param_1[0x36f],1);
    func_002FF5BC(*local_3c);
  }
  func_001EA96C(param_1[0x373],&local_ec);
  local_f0 = (int *)CF_FBITS(*pfVar6);
  iVar7 = 0;
  piVar4 = (int *)*DAT_002f1028;
  if (0 < *piVar4) {
    do {
      piVar10 = *(int **)(piVar4[2] + iVar7 * 4);
      iVar7 = iVar7 + 1;
      *piVar10 = piVar4[3];
      piVar4[3] = (int)piVar10;
    } while (iVar7 < *piVar4);
  }
  *piVar4 = 0;
  iVar7 = 0;
  if (0 < piVar4[5]) {
    do {
      piVar10 = *(int **)(piVar4[7] + iVar7 * 4);
      iVar7 = iVar7 + 1;
      *piVar10 = piVar4[8];
      piVar4[8] = (int)piVar10;
    } while (iVar7 < piVar4[5]);
  }
  piVar4[5] = 0;
  piVar4[10] = 0;
  func_0049F5FC(local_f0 + 2);
  func_0049F5FC(local_f0 + 6);
  if ((*(char *)(param_1[0x373] + 0x3bae) == '\x01') ||
     ((*(char *)((int)param_1 + 0xe0d) == '\x01' && (*(char *)(param_1[0x373] + 0x3bae) == '\x02')))
     ) {
    *(undefined1 *)((int)param_1 + 0xe0d) = 1;
    iVar3 = param_1[3];
    *(undefined1 *)(param_1 + 899) = 1;
    fVar15 = DAT_002f142c;
    param_1[0x374] = (int)ALBW_AS_U32(*pfVar11);
    param_1[0x375] = param_1[0x378];
    param_1[0x376] = param_1[0x379];
    iVar7 = param_1[0x373];
    *pfVar11 = *(float *)(iVar7 + 0x3b40);
    param_1[0x378] = *(int *)(iVar7 + 0x3b44);
    param_1[0x379] = *(int *)(iVar7 + 0x3b48);
    *pfVar14 = *pfVar13;
    param_1[0x37e] = param_1[0x37b];
    param_1[0x37f] = param_1[0x37c];
    fVar5 = *pfVar6;
    func_00115D70((float *)&local_e4,(float *)((int)ALBW_AS_U32(fVar5) + 0x3b64),fVar15);
    local_f0 = local_e4;
    local_ec = local_e0;
    local_e8 = local_dc;
    func_00115C54((float *)&local_e4,(float *)((int)ALBW_AS_U32(fVar5) + 0x3b40),(float *)&local_f0);
    *pfVar13 = ALBW_AS_F32(local_e4);
    param_1[0x37c] = (int)ALBW_AS_U32(local_dc);
    param_1[0x37b] = iVar3;
    bVar1 = func_00520FD4();
    if (bVar1) {
      pfVar6 = (float *)func_00520FC0();
      fVar15 = SQRT((*pfVar11 - *pfVar6) * (*pfVar11 - *pfVar6) +
                    (ALBW_AS_F32(param_1[0x379]) - pfVar6[2]) * (ALBW_AS_F32(param_1[0x379]) - pfVar6[2]));
      bVar1 = SBORROW4((int)ALBW_AS_U32(fVar15),0x3fc00000);
      iVar7 = (int)ALBW_AS_U32(fVar15) + -0x3fc00000;
      if ((int)ALBW_AS_U32(fVar15) < 0x3fc00000) {
        bVar1 = SBORROW4(param_1[900],0x3f000000);
        iVar7 = param_1[900] + -0x3f000000;
      }
      if (((iVar7 < 0 != bVar1) && (local_48 != 0)) &&
         (iVar7 = func_00292084(local_48,0xfffffff8), iVar7 != 0)) {
        param_1[0x2d6] = 0;
        param_1[0x2d7] = (int)ALBW_AS_U32(fVar16);
        *piVar12 = 0;
      }
    }
  }
  else if (local_44 == 0) {
    *(undefined1 *)(param_1 + 899) = 0;
    fVar15 = ALBW_AS_F32(param_1[0xf4]);
    iVar7 = param_1[3];
    iVar3 = param_1[0xf6];
    *pfVar13 = fVar15;
    param_1[0x37b] = iVar7;
    param_1[0x37c] = iVar3;
    *pfVar14 = fVar15;
    param_1[0x37e] = iVar7;
    param_1[0x37f] = iVar3;
    *pfVar11 = fVar15;
    param_1[0x378] = iVar7;
    param_1[0x379] = iVar3;
    param_1[0x374] = (int)ALBW_AS_U32(fVar15);
    param_1[0x375] = iVar7;
    param_1[0x376] = iVar3;
  }
  piVar4 = DAT_002f1430;
  iVar7 = param_1[0x36d];
  if (**(int **)(iVar7 + 0x14) == 0) {
    iVar7 = *(int *)(iVar7 + 0x14);
    iVar7 = func_00260C78(DAT_002f1434,*(float *)(iVar7 + 8),*(float *)(iVar7 + 0xc),
                          *(float *)(iVar7 + 0x14));
    if (iVar7 == 0) {
      iVar7 = *(int *)(param_1[0x36d] + 0x14);
      iVar7 = func_00260C78(ALBW_AS_F32(_DAT_002f1438),*(float *)(iVar7 + 8),*(float *)(iVar7 + 0xc),
                            *(float *)(iVar7 + 0x14));
      if (iVar7 == 0) goto LAB_002f12b8;
    }
    local_ec = s_BSE_MediumGanonFlat_FS_WALK_002f143b + 1;
    local_f0 = piVar4;
    func_0014DBF4(param_1,(int *)&local_f0,(undefined4)(uintptr_t)(pfVar11),0);
  }
  else if (**(int **)(iVar7 + 0x14) == 1) {
    iVar7 = *(int *)(iVar7 + 0x14);
    iVar7 = func_00260C78(DAT_002f1458,*(float *)(iVar7 + 8),*(float *)(iVar7 + 0xc),
                          *(float *)(iVar7 + 0x14));
    if (iVar7 == 0) {
      iVar7 = *(int *)(param_1[0x36d] + 0x14);
      iVar7 = func_00260C78(ALBW_AS_F32(_DAT_002f145c),*(float *)(iVar7 + 8),*(float *)(iVar7 + 0xc),
                            *(float *)(iVar7 + 0x14));
      if (iVar7 == 0) goto LAB_002f12b8;
    }
    local_f0 = piVar4;
    if ((char)param_1[0x233] == '\x19') {
      local_ec = s__SE_MediumGanonFlat_FS_RUSH_002f147f + 1;
      func_0014DBF4(param_1,(int *)&local_f0,(undefined4)(uintptr_t)(pfVar11),0);
    }
    else {
      local_ec = s_ASE_MediumGanonFlat_FS_RUN_002f145f + 1;
      func_0014DBF4(param_1,(int *)&local_f0,(undefined4)(uintptr_t)(pfVar11),0);
    }
  }
LAB_002f12b8:
  iVar3 = func_0052FBA0(*DAT_002f1018 + 0x3dbbc,param_1[0x32b]);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = local_48;
  }
  if (iVar3 == 0 || iVar7 == 0) goto LAB_002f1320;
  bVar1 = func_00556E64(iVar7);
  iVar7 = _DAT_002f147c;
  if (bVar1) {
    param_1[0x2d6] = 0xf0;
    param_1[0x2d7] = iVar7;
LAB_002f1304:
    *piVar12 = 0;
  }
  else {
    bVar1 = func_00556EAC(local_48,0);
    if ((((!bVar1) && (bVar1 = func_00556EAC(local_48,1), !bVar1)) &&
        (bVar1 = func_00556EAC(local_48,0x68), !bVar1)) &&
       ((iVar7 = func_0053F480(local_48), iVar7 == 0 && (bVar1 = func_00556B54(local_48), !bVar1))))
    {
      param_1[0x2d6] = 0;
      param_1[0x2d7] = (int)ALBW_AS_U32(fVar16);
      *piVar12 = 0;
    }
    iVar7 = func_0051E6D0(*DAT_002f149c,pfVar11,fVar2);
    if (iVar7 == 0) {
      param_1[0x2d6] = 0;
      param_1[0x2d7] = (int)ALBW_AS_U32(fVar16);
      *piVar12 = 0;
    }
    func_00115C70((float *)&local_f0,*(float **)(local_48 + 0x1c),(float *)(param_1 + 0x38c));
    if ((int)ALBW_AS_U32((ALBW_AS_F32(local_f0) * ALBW_AS_F32(local_f0) + local_e8 * local_e8)) < 0x3e800000) {
      param_1[0x2d6] = 0;
      param_1[0x2d7] = (int)ALBW_AS_U32(fVar16);
      goto LAB_002f1304;
    }
  }
  if ((uint)param_1[0x2d5] < (uint)param_1[0x2d6]) {
    param_1[0x2d5] = param_1[0x2d5] + 1;
  }
LAB_002f1320:
  return func_002EEBB8((int)param_1);
}

