#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_001DC3C4(int param_1,undefined4 param_2,int param_3);
extern undefined4 func_0028D580(uint *param_1,int param_2,undefined1 param_3,undefined1 param_4,uint param_5);
extern int func_002D55D0(int param_1,uint param_2);
extern int func_002DC47C(int param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_0053EDD8(int param_1);
extern int func_0053EE40(int param_1,float fparam_0);
extern float DAT_002dc868;
extern float DAT_002dc86c;
extern float DAT_002dc870;
extern float DAT_002dc874;
extern float DAT_002dc878;
extern float DAT_002dc87c;
extern float DAT_002dc880;
extern float DAT_002dc884;

// USA 002DC598 <- EU 002DC574 (Ghidra, non-matching)
// GLOBAL DAT_002dc868 float
// GLOBAL DAT_002dc86c float
// GLOBAL DAT_002dc870 float
// GLOBAL DAT_002dc874 float
// GLOBAL DAT_002dc878 float
// GLOBAL DAT_002dc87c float
// GLOBAL DAT_002dc880 float
// GLOBAL DAT_002dc884 float

undefined4 func_002DC598(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  float fparam_0;
  float fVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_5c (*(float *)(albw_frame + 0x4))
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define local_4c (*(float *)(albw_frame + 0x14))
  #define fStack_48 (*(float *)(albw_frame + 0x18))
  #define local_44 (*(float *)(albw_frame + 0x1c))
  #define local_40 (*(float *)(albw_frame + 0x20))
  #define fStack_3c (*(float *)(albw_frame + 0x24))
  #define fStack_38 (*(float *)(albw_frame + 0x28))
  #define local_34 (*(float *)(albw_frame + 0x2c))
  #define local_30 (*(float *)(albw_frame + 0x30))
  #define fStack_2c (*(float *)(albw_frame + 0x34))
  #define fStack_28 (*(float *)(albw_frame + 0x38))
  switch(param_2) {
  case 0x6b:
    func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x58),DAT_002dc868);
    iVar1 = func_0053EDD8(*(int *)(param_1 + 0x4c) + 0x5c);
    if (iVar1 == 0) {
      return 0;
    }
    func_002DC47C(param_1);
    if (**(int **)(param_1 + 0x44) != 0) {
      return func_002D55D0(param_1,0x6d);
    }
    return func_002D55D0(param_1,0x6c);
  case 0x6c:
    fVar6 = DAT_002dc87c;
    iVar1 = func_0053EDD8(*(int *)(param_1 + 0x4c) + 0x5c);
    if (iVar1 == 0) {
      return 0;
    }
    if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar6) {
LAB_002dc670:
      uVar2 = 0;
      goto LAB_002dc674;
    }
    break;
  case 0x6d:
    local_58 = DAT_002dc87c;
    local_54 = DAT_002dc87c;
    local_50 = DAT_002dc87c;
    fVar6 = DAT_002dc87c;
    func_004D838C((float *)(param_1 + 0x84),&local_58,DAT_002dc878,DAT_002dc874,DAT_002dc870);
    if (((9 < *(uint *)(*(int *)(param_1 + 0x2c) + 0x44)) &&
        (*(undefined1 *)(*(int *)(param_1 + 0x2c) + 0x20) = 7,
        (**(uint **)(*(int *)(param_1 + 0x48) + 0x14) & 1) != 0)) &&
       (iVar1 = func_002D55D0(param_1,0x6e), iVar1 != 0)) {
      return 0;
    }
    iVar1 = func_0053EDD8(*(int *)(param_1 + 0x4c) + 0x5c);
    if (iVar1 == 0) {
      return 0;
    }
    return func_002D55D0(param_1,(uint)(fVar6 < *(float *)(*(int *)(param_1 + 0x48) + 0x24)));
  case 0x6e:
    fVar6 = DAT_002dc87c;
    iVar1 = func_0053EDD8(*(int *)(param_1 + 0x4c) + 0x5c);
    if (iVar1 == 0) {
      iVar1 = func_0053EE40(*(int *)(param_1 + 0x4c) + 0x5c,DAT_002dc880);
      if (iVar1 == 0) {
        return 0;
      }
      local_5c = fVar6;
      local_58 = fVar6;
      local_54 = fVar6;
      func_004D80A4(&local_5c,**(uint **)(param_1 + 0x3c),DAT_002dc884);
      local_58 = fVar6;
      return func_001DC3C4(*(int *)(param_1 + 0x28),&local_5c,0);
    }
    if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar6) goto LAB_002dc670;
    break;
  case 0x6f:
    fVar6 = DAT_002dc868;
    fVar5 = DAT_002dc87c;
    if (*(char *)(param_1 + 0x9c) != '\0') {
      local_5c = *(float *)(param_1 + 0x78);
      local_58 = *(float *)(param_1 + 0x7c);
      local_54 = *(float *)(param_1 + 0x80);
      pfVar3 = *(float **)(param_1 + 0x30);
      fVar4 = DAT_002dc86c;
      func_00115C70(&local_30,&local_5c,pfVar3);
      local_40 = local_30;
      fStack_3c = fStack_2c;
      fStack_38 = fStack_28;
      func_00115D70(&local_34,&local_40,fVar4);
      local_4c = local_34;
      fStack_48 = local_30;
      local_44 = fStack_2c;
      func_00115C54(pfVar3,pfVar3,&local_4c);
    }
    func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x58),fVar6);
    iVar1 = func_0053EDD8(*(int *)(param_1 + 0x4c) + 0x5c);
    if (iVar1 == 0) {
      return 0;
    }
    if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar5) goto LAB_002dc670;
    break;
  case 0x70:
    fVar6 = DAT_002dc868;
    if (*(char *)(param_1 + 0x9c) != '\0') {
      local_50 = *(float *)(param_1 + 0x78);
      local_4c = *(float *)(param_1 + 0x7c);
      fStack_48 = *(float *)(param_1 + 0x80);
      pfVar3 = *(float **)(param_1 + 0x30);
      fVar5 = DAT_002dc86c;
      func_00115C70(&local_30,&local_50,pfVar3);
      local_44 = local_30;
      local_40 = fStack_2c;
      fStack_3c = fStack_28;
      func_00115D70(&local_34,&local_44,fVar5);
      local_5c = local_34;
      local_58 = local_30;
      local_54 = fStack_2c;
      func_00115C54(pfVar3,pfVar3,&local_5c);
    }
    func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x58),fVar6);
    if (*(uint *)(*(int *)(param_1 + 0x2c) + 0x44) < 0xf) {
      return 0;
    }
    return func_002D55D0(param_1,0x71);
  case 0x71:
    fVar6 = DAT_002dc870;
    fVar5 = DAT_002dc874;
    fVar4 = DAT_002dc87c;
    fparam_0 = DAT_002dc878;
    if (*(int *)(*(int *)(param_1 + 0x2c) + 0x44) == 1) {
      func_002DC47C(param_1);
    }
    if (0x36 < *(uint *)(*(int *)(param_1 + 0x2c) + 0x44)) {
      local_58 = fVar4;
      local_54 = fVar4;
      local_50 = fVar4;
      func_004D838C((float *)(param_1 + 0x84),&local_58,fparam_0,fVar5,fVar6);
    }
    iVar1 = func_0053EDD8(*(int *)(param_1 + 0x4c) + 0x5c);
    if (iVar1 == 0) {
      return 0;
    }
    if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar4) goto LAB_002dc670;
    break;
  case 0x72:
    fVar6 = DAT_002dc87c;
    func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x58),DAT_002dc878);
    if (*(int *)(param_1 + 0xa0) == 0) {
      iVar1 = func_0053EDD8(*(int *)(param_1 + 0x4c) + 0x5c);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = *(int *)(param_1 + 0x4c);
      *(undefined4 *)(param_1 + 0xa0) = 1;
      func_0028D580((uint *)(iVar1 + 0x3c),0x5a,1,1,6);
      return func_0028D580((uint *)(iVar1 + 0x5c),0x5a,1,1,6);
    }
    if (*(int *)(param_1 + 0xa0) != 1) {
      return 0;
    }
    iVar1 = func_0053EDD8(*(int *)(param_1 + 0x4c) + 0x5c);
    if (iVar1 == 0) {
      return 0;
    }
    if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar6) goto LAB_002dc670;
    break;
  default:
    return 0;
  }
  uVar2 = 1;
LAB_002dc674:
  return func_002D55D0(param_1,uVar2);
}

