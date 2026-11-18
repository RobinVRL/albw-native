#include "ghidra_types.h"

extern ulonglong func_00110710(uint param_1,uint param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern float func_0024C3E0(undefined4 param_1,float *param_2,float *param_3,int param_4,float *param_5);
extern int func_00536CA4(undefined4 param_1,float *param_2,float *param_3,float fparam_0,float fparam_1, float fparam_2,float fparam_3);
extern int func_0054F9B8(int param_1,uint param_2);
extern int func_0054FA98(int param_1,uint param_2);
extern int func_0054FAC0(int param_1,uint param_2);
extern int func_0054FBB0(int param_1,int param_2);
extern int func_0054FC84(int param_1,int param_2);
extern float DAT_0024cc14;
extern float *DAT_0024cc18;
extern float DAT_0024cc1c;
extern float DAT_0024cc20;
extern float DAT_0024cc24;
extern undefined4 DAT_0024cc28;

// USA 0024C740 <- EU 0024C740 (Ghidra, non-matching)
// GLOBAL DAT_0024cc14 float
// GLOBAL DAT_0024cc18 float *
// GLOBAL DAT_0024cc1c float
// GLOBAL DAT_0024cc20 float
// GLOBAL DAT_0024cc24 float
// GLOBAL DAT_0024cc28 undefined4

void func_0024C740(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fparam_3;
  undefined8 uVar13;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_74 (*(float *)(albw_frame + 0xc))
  #define fStack_70 (*(float *)(albw_frame + 0x10))
  #define local_6c (*(float *)(albw_frame + 0x14))
  #define local_68 (*(float *)(albw_frame + 0x18))
  #define fStack_64 (*(float *)(albw_frame + 0x1c))
  #define local_60 (*(float *)(albw_frame + 0x20))
  #define local_5c (*(float *)(albw_frame + 0x24))
  #define fStack_58 (*(float *)(albw_frame + 0x28))
  #define local_54 (*(float *)(albw_frame + 0x2c))
  #define afStack_50 ((float *)(albw_frame + 0x30))
  #define iStack_34 (*(int *)(albw_frame + 0x4c))
  #define iStack_30 (*(int *)(albw_frame + 0x50))
  #define local_2c (*(uint *)(albw_frame + 0x54))
  #define local_28 (*(uint *)(albw_frame + 0x58))
  iStack_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  if (*(char *)(param_1 + 0xa84) == '\0') {
    uVar1 = func_0054FBB0(param_2,param_3);
  }
  else {
    uVar1 = func_0054FC84(param_2,param_3);
  }
  if (*(char *)(param_1 + 0xa85) == '\0') {
    if (*(char *)(param_1 + 0xa84) == '\0') {
      uVar8 = func_0054FC84(param_2,local_28);
    }
    else {
      uVar8 = func_0054FBB0(param_2,local_28);
    }
    goto LAB_0024c80c;
  }
  uVar8 = local_2c + local_28;
  if (*(char *)(param_1 + 0xa84) == '\0') {
    if (local_2c < local_28) goto LAB_0024c7b8;
  }
  else if (local_28 < local_2c) {
LAB_0024c7b8:
    uVar8 = uVar8 + *(uint *)(param_2 + 0xc);
  }
  uVar13 = func_00110710(uVar8 >> 1,*(uint *)(param_2 + 0xc));
  uVar8 = (uint)((ulonglong)uVar13 >> 0x20);
LAB_0024c80c:
  if (*(char *)(param_1 + 0xa84) == '\0') {
    uVar2 = func_0054FBB0(param_2,uVar1);
    uVar10 = uVar2;
  }
  else {
    uVar2 = func_0054FC84(param_2,uVar1);
    uVar10 = uVar2;
  }
  while( true ) {
    iVar3 = func_0054FAC0(param_2,uVar2);
    iVar4 = func_0054FAC0(param_2,uVar1);
    if (iVar3 + 0x20000000U >> 0x1e != iVar4 + 0x20000000U >> 0x1e) break;
    uVar10 = uVar2;
    if (*(char *)(param_1 + 0xa84) == '\0') {
      uVar2 = func_0054FBB0(param_2,uVar2);
    }
    else {
      uVar2 = func_0054FC84(param_2,uVar2);
    }
  }
  if (*(char *)(param_1 + 0xa84) == '\0') {
    pfVar5 = (float *)func_0054F9B8(param_2,uVar1);
  }
  else {
    pfVar5 = (float *)func_0054FA98(param_2,uVar1);
  }
  local_68 = *pfVar5;
  fStack_64 = pfVar5[1];
  local_60 = pfVar5[2];
  if (*(char *)(param_1 + 0xa84) == '\0') {
    pfVar5 = (float *)func_0054FA98(param_2,uVar10);
  }
  else {
    pfVar5 = (float *)func_0054F9B8(param_2,uVar10);
  }
  local_74 = *pfVar5;
  fStack_70 = pfVar5[1];
  local_6c = pfVar5[2];
  local_5c = *DAT_0024cc18;
  fStack_58 = DAT_0024cc18[1];
  local_54 = DAT_0024cc18[2];
  fVar12 = DAT_0024cc14;
  iVar3 = func_0054FAC0(param_2,local_2c);
  iVar4 = func_0054FAC0(param_2,uVar1);
  fVar11 = DAT_0024cc20;
  fparam_3 = DAT_0024cc1c;
  if ((iVar3 + 0x20000000U >> 0x1e != iVar4 + 0x20000000U >> 0x1e) &&
     (iVar3 = func_0054FAC0(param_2,local_2c), fVar11 = fparam_3, iVar3 + 0x20000000U >> 0x1e == 2))
  {
    fVar11 = DAT_0024cc24;
  }
  func_00536CA4(param_1,&local_5c,&local_68,local_74,fStack_70,local_6c,fVar11);
  func_00536CA4(param_1,afStack_50,&local_68,local_74,fStack_70,local_6c,fparam_3);
  uVar13 = CONCAT44(DAT_0024cc28,fparam_3);
  uVar2 = 0;
  do {
    pfVar5 = (float *)(param_1 + 0x630);
    if (uVar2 < 0x20) {
      pfVar5 = (float *)(param_1 + 0x630 + uVar2 * 0xc);
    }
    if (uVar2 == 0) {
      pfVar6 = &local_5c;
    }
    else {
      pfVar6 = afStack_50;
    }
    fVar11 = func_0024C3E0(param_1,pfVar5,&local_68,(int)&local_74,pfVar6);
    puVar9 = (undefined4 *)(param_1 + 0x7b0);
    if (uVar2 < 0x20) {
      puVar9 = puVar9 + uVar2;
    }
    uVar7 = func_0054FAC0(param_2,uVar1);
    *puVar9 = uVar7;
    if (fVar12 < fVar11) {
      if (*(char *)(param_1 + 0xa85) != '\0') {
LAB_0024ca90:
        *(uint *)(param_1 + 0xa88) = uVar2;
        return;
      }
      iVar3 = func_0054FAC0(param_2,uVar1);
      iVar4 = func_0054FAC0(param_2,uVar8);
      if (iVar3 + 0x20000000U >> 0x1e == iVar4 + 0x20000000U >> 0x1e) {
        if (*(char *)(param_1 + 0xa85) == '\0') {
          uVar2 = uVar2 + 1;
        }
        goto LAB_0024ca90;
      }
      if (*(char *)(param_1 + 0xa84) == '\0') {
        uVar1 = func_0054FBB0(param_2,uVar10);
      }
      else {
        uVar1 = func_0054FC84(param_2,uVar10);
      }
      if (*(char *)(param_1 + 0xa84) == '\0') {
        pfVar5 = (float *)func_0054F9B8(param_2,uVar1);
      }
      else {
        pfVar5 = (float *)func_0054FA98(param_2,uVar1);
      }
      local_68 = *pfVar5;
      fStack_64 = pfVar5[1];
      local_60 = pfVar5[2];
      iVar3 = func_0054FAC0(param_2,local_28);
      iVar4 = func_0054FAC0(param_2,uVar1);
      if (iVar3 + 0x20000000U >> 0x1e == iVar4 + 0x20000000U >> 0x1e) {
        if (*(char *)(param_1 + 0xa84) == '\0') goto code_r0x0024cc30;
code_r0x0024cb70:
        pfVar5 = (float *)func_0054F9B8(param_2,uVar8);
      }
      else {
        if (*(char *)(param_1 + 0xa84) == '\0') goto code_r0x0024cb70;
code_r0x0024cc30:
        pfVar5 = (float *)func_0054FA98(param_2,uVar8);
      }
      local_74 = *pfVar5;
      fStack_70 = pfVar5[1];
      local_6c = pfVar5[2];
      func_00536CA4(param_1,&local_5c,&local_68,local_74,fStack_70,local_6c,
                    ALBW_AS_F32(((ulonglong)uVar13 >> 0x20)));
      func_00115C54(&local_68,&local_68,&local_5c);
      pfVar5 = (float *)(param_1 + 0x630);
      puVar9 = (undefined4 *)(param_1 + 0x7b0);
      if (uVar2 < 0x20) {
        pfVar5 = (float *)(param_1 + 0x630 + uVar2 * 0xc);
        puVar9 = (undefined4 *)(param_1 + 0x7b0 + uVar2 * 4);
      }
      *pfVar5 = local_68;
      pfVar5[1] = fStack_64;
      pfVar5[2] = local_60;
      uVar7 = func_0054FAC0(param_2,uVar1);
      *puVar9 = uVar7;
      func_00536CA4(param_1,afStack_50,&local_68,local_74,fStack_70,local_6c,ALBW_AS_F32(uVar13));
    }
    else {
      pfVar5 = (float *)(param_1 + 0x630);
      if (uVar2 < 0x20) {
        pfVar5 = (float *)(param_1 + 0x630 + uVar2 * 0xc);
      }
      local_68 = *pfVar5;
      fStack_64 = pfVar5[1];
      local_60 = pfVar5[2];
    }
    uVar2 = uVar2 + 1;
    if (0x1f < (int)uVar2) {
      return;
    }
  } while( true );
}

