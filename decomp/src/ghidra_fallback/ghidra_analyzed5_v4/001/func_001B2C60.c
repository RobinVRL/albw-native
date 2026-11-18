#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);
extern int DAT_001b2d84;
extern float DAT_001b2d88;
extern undefined4 DAT_001b2d8c;
extern int DAT_001b2d90;
extern undefined DAT_001b2d94;
extern int DAT_001b2da8;
extern char s__SE_Stalfos_JUMP_001b2d97[];
extern char s_cf_001b2d97[];
extern undefined4 _DAT_001b2d94;

// USA 001B2C60 <- EU 001B2C60 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_001b2d84 int
// GLOBAL DAT_001b2d88 float
// GLOBAL DAT_001b2d8c undefined4
// GLOBAL DAT_001b2d90 int
// GLOBAL DAT_001b2d94 undefined
// GLOBAL DAT_001b2da8 int
// GLOBAL s_cf_001b2d97 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_001B2C60(int *param_1)

{
  float fparam_0;
  int iVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(undefined4 *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define iStack_38 (*(int *)(albw_frame + 0x18))
  #define iStack_34 (*(int *)(albw_frame + 0x1c))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define iStack_2c (*(int *)(albw_frame + 0x24))
  #define iStack_28 (*(int *)(albw_frame + 0x28))
  #define local_20 (*(int *)(albw_frame + 0x30))
  #define local_1c (*(char * *)(albw_frame + 0x34))
  iVar4 = DAT_001b2d84;
  param_1[0x242] = 0;
  param_1[0xf7] = iVar4;
  param_1[0xf8] = iVar4;
  param_1[0xf9] = iVar4;
  param_1[0x243] = iVar4;
  func_004FC07C((int)param_1,3,0xffffffff,0);
  param_1[0x167] = param_1[0x167] & 0xffffff7f;
  pfVar2 = (float *)func_00520FC0();
  func_00115C70(&local_3c,pfVar2,(float *)(param_1 + 0xf4));
  local_30 = local_3c;
  iStack_2c = iStack_38;
  iStack_28 = iStack_34;
  uVar3 = func_0068C690(&local_30);
  param_1[0xfa] = uVar3;
  fparam_0 = DAT_001b2d88;
  param_1[0x241] = 0;
  func_004D80A4((float *)(param_1 + 0x238),uVar3,fparam_0);
  param_1[0x239] = iVar4;
  local_48 = -ALBW_AS_F32(param_1[0x238]);
  local_40 = -ALBW_AS_F32(param_1[0x23a]);
  local_44 = DAT_001b2d8c;
  func_00115C54(&local_3c,&local_48,(float *)(param_1 + 0xf4));
  iVar1 = _DAT_001b2d94;
  iVar4 = DAT_001b2d90;
  param_1[0x238] = (int)ALBW_AS_U32(local_3c);
  param_1[0x239] = iStack_38;
  param_1[0x23a] = iStack_34;
  local_20 = DAT_001b2da8;
  param_1[0x23b] = iVar4;
  param_1[0x23c] = iVar1;
  param_1[0x23d] = param_1[0xf5];
  param_1[0x245] = param_1[0xf5];
  local_1c = s__SE_Stalfos_JUMP_001b2d97 + 1;
  return func_00150A84(param_1,&local_20,0);
}

