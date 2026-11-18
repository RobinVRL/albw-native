#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_002F618C(int param_1,float fparam_0);
extern int func_00352198(int param_1,int *param_2);
extern float func_003E19E8(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4);
extern int func_00437874(float *param_1,float *param_2,float fparam_0);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FB4E0(int param_1,float fparam_0);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern undefined4 func_006640EC(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int func_0068A3EC(float *param_1,float fparam_0);
extern int func_0068A560(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_0068C690(float *param_1);
extern float DAT_002f0584;
extern float DAT_002f0588;
extern float DAT_002f058c;
extern float DAT_002f0590;
extern float DAT_002f0594;
extern undefined4 DAT_002f0598;
extern undefined DAT_002f059c;
extern int DAT_002f05a8;
extern int *DAT_002f05f4;
extern char s_cf_002f05a0[];
extern undefined4 _DAT_002f059c;

// USA 002F026C <- EU 002F0248 (Ghidra, non-matching)
// GLOBAL DAT_002f0584 float
// GLOBAL DAT_002f0588 float
// GLOBAL DAT_002f058c float
// GLOBAL DAT_002f0590 float
// GLOBAL DAT_002f0594 float
// GLOBAL DAT_002f0598 undefined4
// GLOBAL DAT_002f059c undefined
// GLOBAL DAT_002f05a8 int
// GLOBAL DAT_002f05f4 int *

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_002F026C(int param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3,
                  float fparam_4)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  uint *puVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  float fparam_0_00;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define fStack_44 (*(float *)(albw_frame + 0x1c))
  #define local_40 (*(int *)(albw_frame + 0x20))
  #define local_3c (*(char * *)(albw_frame + 0x24))
  #define local_38 (*(float *)(albw_frame + 0x28))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x30))
  fVar13 = DAT_002f0588;
  fVar12 = DAT_002f0584;
  uVar7 = *(uint *)(param_1 + 0xb9c);
  uVar3 = *(uint *)(param_1 + 0xba0);
  if (uVar7 < uVar3) {
    uVar7 = uVar7 + 1;
    *(uint *)(param_1 + 0xb9c) = uVar7;
  }
  if (uVar3 != 0) {
    uVar7 = *(uint *)(param_1 + 0xb9c);
  }
  fVar11 = fVar13;
  if ((uVar3 != 0 && uVar7 != 0) && (fVar11 = fVar12, uVar7 < uVar3)) {
    fVar11 = (float)VectorUnsignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
    fVar11 = fVar11 * *(float *)(param_1 + 0xba4);
  }
  fVar11 = func_003E19E8(fVar13,fVar13,fVar12,fVar13,fVar11);
  pfVar4 = (float *)func_00520FC0();
  pfVar9 = (float *)(param_1 + 0xbb4);
  func_0068A560((float *)(param_1 + 0x3d0),(float *)(param_1 + 0xba8),pfVar9,fVar11);
  local_38 = *(float *)(param_1 + 0xbb4);
  uStack_34 = *(undefined4 *)(param_1 + 3000);
  uStack_30 = *(undefined4 *)(param_1 + 0xbbc);
  pfVar5 = (float *)func_00520FC0();
  fVar11 = DAT_002f058c;
  func_00115C70(&local_58,&local_38,pfVar5);
  uVar7 = in_fpscr & 0xfffffff |
          (uint)(fVar11 <= SQRT(local_58 * local_58 + local_50 * local_50)) << 0x1d;
  fparam_0_00 = DAT_002f0590;
  local_54 = fVar13;
  if (!SUB41(uVar7 >> 0x1d,0)) {
    func_0068A3EC(&local_58,fVar11);
    func_00115C54(&local_38,&local_58,pfVar5);
    func_00437874(&local_38,(float *)(param_1 + 0xe30),DAT_002f0594);
    func_004D838C(pfVar9,&local_38,fparam_0_00,fVar13,fparam_0_00);
  }
  iVar6 = *(int *)(param_1 + 0xb7c);
  puVar10 = (uint *)(param_1 + 0xb0c);
  if (iVar6 == 0) {
    uVar3 = *(uint *)(param_1 + 0xb0c);
    uVar8 = *(uint *)(param_1 + 0xb10);
    if (uVar3 < uVar8) {
      uVar3 = uVar3 + 1;
      *(uint *)(param_1 + 0xb0c) = uVar3;
    }
    if (uVar8 != 0) {
      uVar3 = *puVar10;
    }
    if ((uVar8 != 0 && uVar3 != 0) && (fVar13 = fVar12, uVar3 < uVar8)) {
      fVar13 = (float)VectorUnsignedToFloat(uVar3,(byte)(uVar7 >> 0x15) & 3);
      fVar13 = fVar13 * *(float *)(param_1 + 0xb14);
    }
    func_002F618C(param_1,fVar12 - fVar13);
    uVar1 = DAT_002f0598;
    if (*(uint *)(param_1 + 0xb10) <= *(uint *)(param_1 + 0xb0c)) {
      *(undefined4 *)(param_1 + 0xb10) = 0x28;
      *(undefined4 *)(param_1 + 0xb14) = uVar1;
      *puVar10 = 0;
      *(int *)(param_1 + 0xb7c) = *(int *)(param_1 + 0xb7c) + 1;
      return 0;
    }
  }
  else if (iVar6 == 1) {
    uVar7 = *(uint *)(param_1 + 0xb0c);
    if (uVar7 < *(uint *)(param_1 + 0xb10)) {
      uVar7 = uVar7 + 1;
      *(uint *)(param_1 + 0xb0c) = uVar7;
    }
    uVar1 = _DAT_002f059c;
    if (*(uint *)(param_1 + 0xb10) <= uVar7) {
      *(undefined4 *)(param_1 + 0xb10) = 0x23;
      *(undefined4 *)(param_1 + 0xb14) = uVar1;
      local_40 = DAT_002f05a8;
      *puVar10 = 0;
      local_3c = s_cf_002f05a0;
      func_00352198(param_1 + 0x324,&local_40);
      func_00115C70(&local_38,pfVar4,pfVar9);
      iVar6 = func_0068C690(&local_38);
      *(int *)(param_1 + 0xc88) = iVar6;
      *(int *)(param_1 + 1000) = iVar6;
      func_004FABDC(param_1,10,0,0);
      func_004FB4E0(param_1,fVar13);
      *(int *)(param_1 + 0xb7c) = *(int *)(param_1 + 0xb7c) + 1;
      return 0;
    }
  }
  else if (iVar6 == 2) {
    uVar3 = *(uint *)(param_1 + 0xb0c);
    uVar8 = *(uint *)(param_1 + 0xb10);
    if (uVar3 < uVar8) {
      uVar3 = uVar3 + 1;
      *(uint *)(param_1 + 0xb0c) = uVar3;
    }
    if (uVar8 != 0) {
      uVar3 = *puVar10;
    }
    if ((uVar8 != 0 && uVar3 != 0) && (fVar13 = fVar12, uVar3 < uVar8)) {
      fVar12 = (float)VectorUnsignedToFloat(uVar3,(byte)(uVar7 >> 0x15) & 3);
      fVar13 = fVar12 * *(float *)(param_1 + 0xb14);
    }
    func_002F618C(param_1,fVar13);
    if (*(uint *)(param_1 + 0xb0c) < *(uint *)(param_1 + 0xb10)) {
      func_00115C70(&fStack_44,pfVar4,pfVar9);
      iVar6 = func_0068C690(&fStack_44);
      piVar2 = DAT_002f05f4;
      *(int *)(param_1 + 0xc88) = iVar6;
      return func_0051D2F4((int *)(param_1 + 1000),iVar6,0,*piVar2,fparam_0_00);
    }
    func_006640EC((undefined4 *)(param_1 + 0x8c8),7,fVar13);
  }
  return 0;
}

