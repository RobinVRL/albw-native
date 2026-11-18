// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014DBF4(int *param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_00150CD0(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00260C78(float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int func_00292084(int param_1,int param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_002E8870(int param_1,int *param_2);
extern int func_002F3468(int param_1,int param_2);
extern int func_00520FC0(void);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00556E64(int param_1);
extern int func_00687EA0(undefined4 *param_1);
extern int func_0068C690(float *param_1);
extern int func_0068C794(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int *DAT_002f1eb4;
extern int DAT_002f1eb8;
extern float DAT_002f1ebc;
extern int DAT_002f1ec0;
extern int DAT_002f1ec4;
extern int *DAT_002f1ec8;
extern float DAT_002f1ecc;
extern float DAT_002f1ed0;
extern float DAT_002f1ed4;
extern int DAT_002f1ed8;
extern float DAT_002f1edc;
extern float DAT_002f1ee0;
extern float DAT_002f1ee4;
extern float DAT_002f1ee8;
extern float DAT_002f1eec;
extern float DAT_002f1ef0;
extern float DAT_002f1ef4;
extern int *DAT_002f1ef8;
extern int DAT_002f1efc;
extern int DAT_002f1f00;
extern int *DAT_002f1f20;
extern uint DAT_002f1f24;
extern int *DAT_002f2134;
extern float DAT_002f2138;
extern float DAT_002f213c;
extern float DAT_002f2140;
extern undefined DAT_002f2144;
extern char s_SE_MediumGanonFlat_ATTACK_002f1f04[];
extern char s__SE_MediumGanonFLAT_GARD_FX_002f2147[];
extern undefined4 _DAT_002f2144;

// USA 002F1B2C <- EU 002F1B08 (Ghidra, non-matching)
// GLOBAL DAT_002f1eb4 int *
// GLOBAL DAT_002f1eb8 int
// GLOBAL DAT_002f1ebc float
// GLOBAL DAT_002f1ec0 int
// GLOBAL DAT_002f1ec4 int
// GLOBAL DAT_002f1ec8 int *
// GLOBAL DAT_002f1ecc float
// GLOBAL DAT_002f1ed0 float
// GLOBAL DAT_002f1ed4 float
// GLOBAL DAT_002f1ed8 int
// GLOBAL DAT_002f1edc float
// GLOBAL DAT_002f1ee0 float
// GLOBAL DAT_002f1ee4 float
// GLOBAL DAT_002f1ee8 float
// GLOBAL DAT_002f1eec float
// GLOBAL DAT_002f1ef0 float
// GLOBAL DAT_002f1ef4 float
// GLOBAL DAT_002f1ef8 int *
// GLOBAL DAT_002f1efc int
// GLOBAL DAT_002f1f00 int
// GLOBAL DAT_002f1f20 int *
// GLOBAL DAT_002f1f24 uint
// GLOBAL DAT_002f2134 int *
// GLOBAL DAT_002f2138 float
// GLOBAL DAT_002f213c float
// GLOBAL DAT_002f2140 float
// GLOBAL DAT_002f2144 undefined
// GLOBAL s_SE_MediumGanonFlat_ATTACK_002f1f04 string

/* WARNING: Variable defined which should be unmapped: objStack_a8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_002F1B2C(int *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fparam_2;
  int iVar16;
  float fVar17;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define objStack_a8 ((uint *)(albw_frame + 0x8))
  #define local_a0 (*(float *)(albw_frame + 0x10))
  #define local_9c (*(char * *)(albw_frame + 0x14))
  #define aiStack_98 ((int *)(albw_frame + 0x18))
  #define local_44 (*(int *)(albw_frame + 0x6c))
  iVar10 = *DAT_002f1eb4;
  if ((iVar10 == 0) || (bVar2 = func_00556E64(iVar10), !bVar2)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  func_002F3468((int)param_1,0);
  objStack_a8[1] = (uint)(param_1 + 0x377);
  func_00115C70(&local_a0,(float *)objStack_a8[1],(float *)(param_1 + 0x38c));
  iVar3 = func_0068C690(&local_a0);
  pfVar4 = (float *)func_00520FC0();
  func_00115C70(&local_a0,pfVar4,(float *)(param_1 + 0x38c));
  iVar5 = func_0068C690(&local_a0);
  fVar14 = DAT_002f1ebc;
  iVar16 = DAT_002f1eb8;
  uVar11 = iVar5 - iVar3;
  local_44 = (uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f);
  iVar3 = **(int **)(param_1[0x36d] + 0x14);
  if ((char)param_1[0x351] == '\x01') {
    param_1[0x2d3] = 0x104;
    param_1[0x2d4] = iVar16;
    param_1[0x2d2] = 0;
    param_1[0x2df] = 1;
    iVar5 = DAT_002f1ec0;
    if ((char)param_1[0x38b] == '\0') {
      iVar5 = DAT_002f1ec4;
    }
    param_1[0x387] = iVar5;
  }
  fparam_2 = DAT_002f1edc;
  iVar5 = DAT_002f1ed8;
  fVar17 = DAT_002f1ed4;
  fVar12 = DAT_002f1ed0;
  fVar15 = DAT_002f1ecc;
  uVar6 = *DAT_002f1ec8 + param_1[0x388];
  param_1[0x388] = uVar6;
  iVar5 = iVar5 + (uVar6 >> 0x18) * 0x10;
  fVar13 = (float)VectorUnsignedToFloat(uVar6 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar15 = (DAT_002f1ee4 *
           ((*(float *)(iVar5 + 8) + *(float *)(iVar5 + 0xc) * fVar13 * fVar17) - fVar12)) /
           DAT_002f1ee0 + fVar15;
  if (iVar3 == 6) {
    iVar5 = *(int *)(param_1[0x36d] + 0x14);
    fVar15 = fparam_2;
    if (*(char *)(iVar5 + 0x1c) == '\0') {
      fVar12 = *(float *)(iVar5 + 8);
      if (NAN(*(float *)(iVar5 + 0x10)) || NAN(fparam_2)) {
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar12 == fparam_2) << 0x1e |
                   (uint)(fparam_2 <= fVar12) << 0x1d;
        bVar1 = (byte)(in_fpscr >> 0x18);
        if (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) goto LAB_002f1ccc;
      }
      else {
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar12 == *(float *)(iVar5 + 0x14)) << 0x1e;
        if (SUB41(in_fpscr >> 0x1e,0)) {
LAB_002f1ccc:
          puVar7 = (uint *)func_002C11E8((int *)&local_a0,0,0,0);
          func_0016898C(param_1[0x36d],puVar7);
          goto LAB_002f1d40;
        }
      }
    }
    iVar5 = *(int *)(param_1[0x36d] + 0x14);
    iVar5 = func_00260C78(DAT_002f1ee8,*(float *)(iVar5 + 8),*(float *)(iVar5 + 0xc),
                          *(float *)(iVar5 + 0x14));
    if (iVar5 != 0 && bVar2) {
      func_00292084(iVar10,0xfffffff8);
      param_1[0x2d6] = 0;
      param_1[0x2d7] = (int)ALBW_AS_U32(fparam_2);
      param_1[0x2d5] = 0;
    }
  }
LAB_002f1d40:
  uVar6 = DAT_002f1f24;
  fVar13 = DAT_002f1ef4;
  fVar17 = DAT_002f1ef0;
  fVar12 = DAT_002f1eec;
  objStack_a8[0] = (uint)(param_1 + 0x387);
  if (param_1[0x2df] == 0) {
    if (bVar2) {
      *(bool *)(param_1 + 0x38b) = (int)uVar11 < 0;
      if ((local_44 < *DAT_002f1ef8) && (iVar3 != 6)) {
        param_1[0x387] = DAT_002f1efc;
        if ((char)param_1[0x38b] == '\0') {
          param_1[0x387] = DAT_002f1f00;
        }
        puVar7 = (uint *)func_002C11E8(aiStack_98,6,0,0);
        func_0016898C(param_1[0x36d],puVar7);
        local_9c = s_SE_MediumGanonFlat_ATTACK_002f1f04;
        local_a0 = fVar13;
        func_0014DBF4(param_1,(int *)&local_a0,objStack_a8[1],0);
      }
    }
    else if ((uint)param_1[0x2c3] < (uint)param_1[0x2c4]) {
      param_1[0x2c3] = param_1[0x2c3] + 1;
    }
    else {
      uVar11 = func_00111A64((uint *)(*DAT_002f1f20 + 0x660));
      iVar10 = (int)((ulonglong)uVar6 * (ulonglong)uVar11 >> 0x20) + 0x5a;
      param_1[0x2c4] = iVar10;
      if (iVar10 == 0) {
        param_1[0x2c5] = (int)ALBW_AS_U32(fparam_2);
      }
      else {
        fVar13 = (float)VectorUnsignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
        param_1[0x2c5] = (int)ALBW_AS_U32((fVar14 / fVar13));
      }
      param_1[0x2c3] = 0;
      *(bool *)(param_1 + 0x38b) = (char)param_1[0x38b] == '\0';
    }
    if ((char)param_1[0x38b] == '\0') {
      fVar15 = -fVar15;
    }
    func_0068C794((float *)objStack_a8[0],fVar15,fVar17,fparam_2,fVar12);
    goto LAB_002f2124;
  }
  if (param_1[0x2df] != 1) goto LAB_002f2124;
  iVar10 = **(int **)(param_1[0x36d] + 0x14);
  fVar14 = DAT_002f1eec;
  fVar15 = DAT_002f1ef0;
  if (((iVar10 == 3) || (iVar10 == 5)) &&
     (iVar10 = *(int *)(param_1[0x36d] + 0x14), *(char *)(iVar10 + 0x1c) == '\0')) {
    if (*(float *)(iVar10 + 0x10) < fparam_2) {
      if (*(float *)(iVar10 + 8) <= fparam_2) goto LAB_002f1f8c;
    }
    else if (*(float *)(iVar10 + 8) == *(float *)(iVar10 + 0x14)) {
LAB_002f1f8c:
      puVar7 = (uint *)func_002C11E8((int *)&local_a0,4,0,0);
      func_0016898C(param_1[0x36d],puVar7);
    }
  }
  puVar8 = (undefined4 *)func_0052FBA0(*DAT_002f2134 + 0x3dbbc,param_1[0x328]);
  piVar9 = func_00687EA0(puVar8);
  if ((uint)param_1[0x2d2] < 0xfb) {
    if (piVar9 != (int *)0x0) {
      fVar12 = ALBW_AS_F32(piVar9[0xf5]) - *(float *)(objStack_a8[1] + 4);
      fVar14 = ALBW_AS_F32(piVar9[0xf6]) - *(float *)(objStack_a8[1] + 8);
      func_0068C794((float *)(param_1 + 0x329),
                    (fVar15 + (SQRT((ALBW_AS_F32(piVar9[0xf4]) - *(float *)objStack_a8[1]) *
                                    (ALBW_AS_F32(piVar9[0xf4]) - *(float *)objStack_a8[1]) +
                                    fVar12 * fVar12 + fVar14 * fVar14) - DAT_002f213c) *
                              DAT_002f2140) * ALBW_AS_F32(param_1[0x387]),ALBW_AS_F32(_DAT_002f2144),fparam_2,
                    ALBW_AS_F32(_DAT_002f2144));
      piVar9[0x146] = param_1[0x329];
      piVar9[0x147] = (int)ALBW_AS_U32(fparam_2);
      local_9c = s__SE_MediumGanonFLAT_GARD_FX_002f2147 + 1;
      objStack_a8[0] = 0;
      local_a0 = fVar13;
      func_00150CD0((int)param_1,(int *)&local_a0,objStack_a8[1],0,0);
    }
  }
  else {
    func_0068C794((float *)objStack_a8[0],fparam_2,DAT_002f2138,fparam_2,fVar14);
    if (piVar9 != (int *)0x0) {
      func_002E8870((int)param_1,piVar9);
    }
  }
  if ((uint)param_1[0x2d2] < (uint)param_1[0x2d3]) {
    param_1[0x2d2] = param_1[0x2d2] + 1;
  }
  else {
    param_1[0x2d3] = 0x104;
    param_1[0x2d4] = iVar16;
    param_1[0x2d2] = 0;
    puVar7 = (uint *)func_002C11E8((int *)objStack_a8,0,0,0);
    func_0016898C(param_1[0x36d],puVar7);
    param_1[0x2df] = 0;
  }
LAB_002f2124:
  param_1[0xf8] = (int)ALBW_AS_U32(fparam_2);
  return;
}

