// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_001512B4(int param_1,float *param_2);
extern int func_00151328(int param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_00556E64(int param_1);
extern float fRam00354964;
extern int iRam00354970;
extern undefined4 uRam00354968;
extern undefined4 uRam0035496c;
extern undefined4 DAT_00354934;
extern float DAT_00354938;
extern undefined4 DAT_0035493c;
extern int *DAT_00354940;
extern float DAT_00354944;
extern float DAT_00354948;
extern float DAT_0035494c;
extern float *DAT_00354950;
extern float DAT_00354954;
extern int DAT_00354958;
extern int DAT_0035495c;
extern float DAT_00354960;

// USA 003545FC <- EU 003545D8 (Ghidra, non-matching)
// GLOBAL DAT_00354934 undefined4
// GLOBAL DAT_00354938 float
// GLOBAL DAT_0035493c undefined4
// GLOBAL DAT_00354940 int *
// GLOBAL DAT_00354944 float
// GLOBAL DAT_00354948 float
// GLOBAL DAT_0035494c float
// GLOBAL DAT_00354950 float *
// GLOBAL DAT_00354954 float
// GLOBAL DAT_00354958 int
// GLOBAL DAT_0035495c int
// GLOBAL DAT_00354960 float
// GLOBAL UNK_00354964 float
// GLOBAL UNK_00354968 undefined4
// GLOBAL UNK_0035496c undefined4
// GLOBAL UNK_00354970 int

undefined4 func_003545FC(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  bool bVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_6c (*(float *)(albw_frame + 0x4))
  #define local_68 (*(float *)(albw_frame + 0x8))
  #define local_64 (*(float *)(albw_frame + 0xc))
  #define fStack_60 (*(float *)(albw_frame + 0x10))
  #define afStack_5c ((float *)(albw_frame + 0x14))
  #define local_50 (*(float *)(albw_frame + 0x20))
  #define local_4c (*(float *)(albw_frame + 0x24))
  #define local_48 (*(float *)(albw_frame + 0x28))
  #define afStack_44 ((float *)(albw_frame + 0x2c))
  #define fStack_38 (*(float *)(albw_frame + 0x38))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x3c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x40))
  *(undefined4 *)(param_1 + 0x58c) = DAT_00354934;
  fVar7 = DAT_00354938;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff7f | 0x35;
  *(float *)(*(int *)(param_1 + 0x40c) + 0x158) = fVar7;
  func_004FC07C(param_1,0,0xffffffff,0);
  uVar1 = DAT_0035493c;
  uVar8 = CONCAT44(DAT_0035493c,fVar7);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 2;
  *(undefined4 *)(param_1 + 0x9d4) = uVar1;
  *(float *)(param_1 + 0x9d8) = fVar7;
  *(undefined4 *)(param_1 + 0x9dc) = uVar1;
  piVar2 = DAT_00354940;
  *(float *)(param_1 + 0x3dc) = fVar7;
  *(float *)(param_1 + 0x3e0) = fVar7;
  *(float *)(param_1 + 0x3e4) = fVar7;
  iVar5 = *piVar2;
  if (iVar5 == 0) {
    fVar10 = *(float *)(param_1 + 8);
    fVar9 = *(float *)(param_1 + 0xc);
    fVar11 = *(float *)(param_1 + 0x10);
    local_50 = fVar7;
    local_4c = fVar7;
    local_48 = fVar7;
  }
  else {
    pfVar4 = *(float **)(iVar5 + 0x1c);
    fVar10 = *pfVar4;
    fVar9 = pfVar4[1];
    fVar11 = pfVar4[2];
    bVar3 = func_00556E64(iVar5);
    if (bVar3) {
      iVar5 = *(int *)(iVar5 + 0x28);
      local_48 = *(float *)(iVar5 + 0x10);
      local_50 = *(float *)(iVar5 + 8);
      local_4c = *(float *)(iVar5 + 0xc);
      func_00115D70(&local_50,&local_50,DAT_00354944);
    }
    else {
      func_004D80A4(&local_50,**(uint **)(iVar5 + 0x24),DAT_00354948);
    }
  }
  *(undefined4 *)(param_1 + 0x9d0) = *(undefined4 *)(param_1 + 0x3d4);
  pfVar6 = (float *)(param_1 + 0xa8c);
  *(undefined4 *)(param_1 + 1000) = 0x80000000;
  *(undefined4 *)(param_1 + 0xa58) = 0x80000000;
  *pfVar6 = fVar10;
  *(float *)(param_1 + 0xa90) = fVar9;
  *(float *)(param_1 + 0xa94) = fVar11;
  *(float *)(param_1 + 0xa90) = *(float *)(param_1 + 0xa90) + DAT_0035494c;
  func_00115C54(pfVar6,pfVar6,&local_50);
  pfVar4 = DAT_00354950;
  *(float *)(param_1 + 0x3d0) = *pfVar6;
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0xa90);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0xa94);
  func_00115C54(afStack_44,(float *)(param_1 + 8),pfVar4);
  func_00115C70(&local_6c,(float *)(param_1 + 0x3d0),afStack_44);
  if (ALBW_AS_F32(uVar8) <= local_64) {
    if ((int)ALBW_AS_U32(local_6c) <= DAT_00354958) goto LAB_00354808;
    local_6c = DAT_00354954;
  }
  else {
    if ((int)ALBW_AS_U32(SQRT(local_6c * local_6c + local_64 * local_64)) <= DAT_00354958) goto LAB_00354808;
    fVar7 = SQRT(local_6c * local_6c + local_68 * local_68 + local_64 * local_64);
    if (ALBW_AS_F32(uVar8) < fVar7) {
      fVar7 = DAT_00354954 / fVar7;
      local_6c = local_6c * fVar7;
      local_68 = local_68 * fVar7;
      local_64 = local_64 * fVar7;
    }
  }
  func_00115C54((float *)(param_1 + 0x3d0),&local_6c,afStack_44);
LAB_00354808:
  if (DAT_0035495c < (int)ALBW_AS_U32(local_64)) {
    local_64 = DAT_00354960;
    func_00115C54((float *)(param_1 + 0x3d0),&local_6c,afStack_44);
  }
  func_00151148(*(int *)(param_1 + 0xa88),1);
  fStack_38 = *(float *)(param_1 + 0xa8c);
  uStack_34 = *(undefined4 *)(param_1 + 0xa90);
  uStack_30 = *(undefined4 *)(param_1 + 0xa94);
  func_001512B4(*(int *)(param_1 + 0xa88),&fStack_38);
  pfVar4 = (float *)func_00151328(*(int *)(param_1 + 0xa88));
  func_00115154(afStack_5c,&fStack_60,*(uint *)(param_1 + 1000));
  pfVar4[4] = fRam00354964;
  fVar7 = ALBW_AS_F32(uVar8);
  pfVar4[7] = fVar7;
  pfVar4[3] = fVar7;
  pfVar4[5] = fVar7;
  pfVar4[1] = fVar7;
  *pfVar4 = fStack_60;
  pfVar4[2] = afStack_5c[0];
  pfVar4[6] = -afStack_5c[0];
  pfVar4[8] = fStack_60;
  uVar1 = uRam00354968;
  *(undefined4 *)(param_1 + 0x9fc) = 0x5a;
  *(undefined4 *)(param_1 + 0xa00) = uVar1;
  uVar1 = uRam0035496c;
  *(undefined4 *)(param_1 + 0x9f8) = 0;
  *(undefined4 *)(param_1 + 0xa14) = 0x50;
  *(undefined4 *)(param_1 + 0xa18) = uVar1;
  *(undefined4 *)(param_1 + 0xa10) = 0;
  *(undefined2 *)(iRam00354970 + param_1) = 0;
  *(undefined4 *)(param_1 + 0xa08) = 0x14;
  *(int *)(param_1 + 0xa0c) = (int)((ulonglong)uVar8 >> 0x20);
  *(undefined4 *)(param_1 + 0xa04) = 0;
  return func_004FC07C(param_1,0,0xffffffff,0);
}

