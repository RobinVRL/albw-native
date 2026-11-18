#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0024C3A8(void);
extern int func_002EC700(int param_1);
extern int func_002F061C(int param_1,float *param_2);
extern int func_002F618C(int param_1,float fparam_0);
extern int func_00352198(int param_1,int *param_2);
extern float func_003E19E8(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4);
extern int func_004FACD4(int param_1,int *param_2,undefined4 param_3,int *param_4);
extern int func_004FBFBC(int param_1,int param_2,int param_3);
extern int func_00520FC0(void);
extern int func_0052FBA0(int param_1,uint param_2);
extern float func_0054F764(undefined4 *param_1,uint param_2,uint *param_3);
extern undefined4 func_006640EC(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int func_0068A560(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_0068C690(float *param_1);
extern int *DAT_002ed76c;
extern float DAT_002ed770;
extern float DAT_002ed774;
extern undefined4 DAT_002ed778;
extern undefined4 DAT_002ed77c;
extern float DAT_002ed780;
extern undefined4 DAT_002ed784;
extern undefined4 DAT_002ed788;
extern undefined DAT_002ed78c;
extern int *DAT_002ed798;
extern int DAT_002ed8b8;
extern char s_cf_002ed790[];
extern undefined4 _DAT_002ed78c;

// USA 002ED420 <- EU 002ED3FC (Ghidra, non-matching)
// GLOBAL DAT_002ed76c int *
// GLOBAL DAT_002ed770 float
// GLOBAL DAT_002ed774 float
// GLOBAL DAT_002ed778 undefined4
// GLOBAL DAT_002ed77c undefined4
// GLOBAL DAT_002ed780 float
// GLOBAL DAT_002ed784 undefined4
// GLOBAL DAT_002ed788 undefined4
// GLOBAL DAT_002ed78c undefined
// GLOBAL DAT_002ed798 int *
// GLOBAL DAT_002ed8b8 int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_002ED420(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  uint *puVar8;
  int *piVar9;
  float *pfVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fparam_2;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_5c (*(uint *)(albw_frame + 0x4))
  #define afStack_58 ((float *)(albw_frame + 0x8))
  #define local_50 (*(int * *)(albw_frame + 0x10))
  #define local_4c (*(char * *)(albw_frame + 0x14))
  #define local_44 (*(float * *)(albw_frame + 0x1c))
  #define afStack_40 ((float *)(albw_frame + 0x20))
  local_44 = (float *)func_00520FC0();
  func_0052FBA0(*DAT_002ed76c + 0x3dbbc,*(uint *)(param_1 + 0xc90));
  uVar6 = _DAT_002ed78c;
  fparam_2 = DAT_002ed774;
  fVar12 = DAT_002ed770;
  piVar9 = (int *)(param_1 + 0xb7c);
  pfVar10 = (float *)(param_1 + 0xbb4);
  puVar8 = (uint *)(param_1 + 0xb0c);
  switch(*(undefined4 *)(param_1 + 0xb7c)) {
  case 0:
    uVar5 = *(uint *)(param_1 + 0xb0c);
    uVar4 = *(uint *)(param_1 + 0xb10);
    if (uVar5 < uVar4) {
      uVar5 = uVar5 + 1;
      *(uint *)(param_1 + 0xb0c) = uVar5;
    }
    if (uVar4 != 0) {
      uVar5 = *puVar8;
    }
    if ((uVar4 != 0 && uVar5 != 0) && (fVar12 = fparam_2, uVar5 < uVar4)) {
      fVar12 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      fVar12 = fVar12 * *(float *)(param_1 + 0xb14);
    }
    func_002F618C(param_1,fparam_2 - fVar12);
    uVar6 = DAT_002ed778;
    if (*(uint *)(param_1 + 0xb0c) < *(uint *)(param_1 + 0xb10)) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0xb10) = 0x2d;
    break;
  case 1:
    uVar5 = *(uint *)(param_1 + 0xb0c);
    if (*(uint *)(param_1 + 0xb10) <= uVar5) {
      *(undefined4 *)(param_1 + 0xd58) = 0;
      *(float *)(param_1 + 0xd5c) = fVar12;
      *(undefined4 *)(param_1 + 0xd54) = 0;
      *(undefined4 *)(param_1 + 0xd64) = 0;
      *(undefined1 *)(param_1 + 0xd68) = 1;
      *(undefined4 *)(param_1 + 0xd70) = 0;
      if (*(char *)(param_1 + 0xd48) == '\0') {
        *(undefined4 *)(param_1 + 0xd6c) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0xd6c) = 3;
      }
      func_00115C70(afStack_58,(float *)(param_1 + 0xe30),(float *)(param_1 + 0x3d0));
      iVar3 = func_0068C690(afStack_58);
      func_0054F764((undefined4 *)(param_1 + 0xe30),iVar3 + -0x80000000,&local_5c);
      *(uint *)(param_1 + 0xd60) = local_5c;
      *(undefined4 *)(param_1 + 0xbe4) = *(undefined4 *)(param_1 + 0x3d0);
      *(undefined4 *)(param_1 + 0xbe8) = *(undefined4 *)(param_1 + 0x3d4);
      *(undefined4 *)(param_1 + 0xbec) = *(undefined4 *)(param_1 + 0x3d8);
      *piVar9 = *(int *)(param_1 + 0xb7c) + 1;
      return 0;
    }
    goto LAB_002ed534;
  case 2:
    bVar1 = func_002EC700(param_1);
    uVar6 = DAT_002ed77c;
    if (!bVar1) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0xb10) = 0x3c;
    break;
  case 3:
    bVar1 = func_0024C3A8();
    if (bVar1) {
      return 0;
    }
    uVar5 = *(uint *)(param_1 + 0xb0c);
    if (*(uint *)(param_1 + 0xb10) <= uVar5) {
      iVar3 = func_002F061C(param_1,pfVar10);
      if (iVar3 != 0) {
        func_0068A560((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),pfVar10,DAT_002ed780);
        *(float *)(param_1 + 0xba8) = *(float *)(param_1 + 0x3d0);
        *(undefined4 *)(param_1 + 0xbac) = *(undefined4 *)(param_1 + 0x3d4);
        *(undefined4 *)(param_1 + 0xbb0) = *(undefined4 *)(param_1 + 0x3d8);
      }
      uVar6 = DAT_002ed784;
      *(undefined4 *)(param_1 + 0xb10) = 0x28;
      *(undefined4 *)(param_1 + 0xb14) = uVar6;
      uVar6 = DAT_002ed788;
      *puVar8 = 0;
      *(undefined4 *)(param_1 + 0xba0) = 0x4b;
      *(undefined4 *)(param_1 + 0xba4) = uVar6;
      *(uint *)(param_1 + 0xb9c) = 0;
      *piVar9 = *(int *)(param_1 + 0xb7c) + 1;
      return 0;
    }
LAB_002ed534:
    *(uint *)(param_1 + 0xb0c) = uVar5 + 1;
    return 0;
  case 4:
    if (*(uint *)(param_1 + 0xb0c) < *(uint *)(param_1 + 0xb10)) {
      *(uint *)(param_1 + 0xb0c) = *(uint *)(param_1 + 0xb0c) + 1;
    }
    else {
      *(undefined4 *)(param_1 + 0xb10) = 0x23;
      *(undefined4 *)(param_1 + 0xb14) = uVar6;
      piVar7 = DAT_002ed798;
      *puVar8 = 0;
      local_4c = s_cf_002ed790;
      local_50 = piVar7;
      func_00352198(param_1 + 0x324,(int *)&local_50);
      func_00115C70(afStack_40,local_44,pfVar10);
      iVar3 = func_0068C690(afStack_40);
      *(int *)(param_1 + 0xc88) = iVar3;
      *(int *)(param_1 + 1000) = iVar3;
      uVar6 = 0;
      func_004FBFBC(param_1,2,0);
      func_004FACD4(param_1,(int *)0x1,uVar6,piVar7);
      *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x200;
      *piVar9 = *(int *)(param_1 + 0xb7c) + 1;
    }
    goto LAB_002ed844;
  case 5:
    uVar4 = *(uint *)(param_1 + 0xb10);
    uVar5 = *(uint *)(param_1 + 0xb0c);
    if (uVar5 < uVar4) {
      uVar5 = uVar5 + 1;
      *(uint *)(param_1 + 0xb0c) = uVar5;
    }
    if (uVar4 != 0) {
      uVar5 = *puVar8;
    }
    fVar11 = fVar12;
    if ((uVar4 != 0 && uVar5 != 0) && (fVar11 = fparam_2, uVar5 < uVar4)) {
      fVar11 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      fVar11 = fVar11 * *(float *)(param_1 + 0xb14);
    }
    func_002F618C(param_1,fVar11);
    if (*(uint *)(param_1 + 0xb10) <= *(uint *)(param_1 + 0xb0c)) {
      if (*(short *)(DAT_002ed8b8 + param_1) < 0xc1) {
        if (*(short *)(DAT_002ed8b8 + param_1) < 0x61) {
          uVar2 = 2;
        }
        else {
          uVar2 = 1;
        }
        *(undefined1 *)(param_1 + 0xd48) = uVar2;
      }
      else {
        *(undefined1 *)(param_1 + 0xd48) = 0;
      }
      return func_006640EC((undefined4 *)(param_1 + 0x8c8),0xd,fVar11);
    }
LAB_002ed844:
    uVar4 = *(uint *)(param_1 + 0xba0);
    uVar5 = *(uint *)(param_1 + 0xb9c);
    if (uVar5 < uVar4) {
      uVar5 = uVar5 + 1;
      *(uint *)(param_1 + 0xb9c) = uVar5;
    }
    if (uVar4 != 0) {
      uVar5 = *(uint *)(param_1 + 0xb9c);
    }
    fVar11 = fVar12;
    if ((uVar4 != 0 && uVar5 != 0) && (fVar11 = fparam_2, uVar5 < uVar4)) {
      fVar11 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      fVar11 = fVar11 * *(float *)(param_1 + 0xba4);
    }
    fVar12 = func_003E19E8(fVar12,fVar12,fparam_2,fVar12,fVar11);
    return func_0068A560((float *)(param_1 + 0x3d0),(float *)(param_1 + 0xba8),pfVar10,fVar12);
  default:
    goto LAB_002ed514;
  }
  *(undefined4 *)(param_1 + 0xb14) = uVar6;
  *puVar8 = 0;
  *piVar9 = *(int *)(param_1 + 0xb7c) + 1;
LAB_002ed514:
  return 0;
}

