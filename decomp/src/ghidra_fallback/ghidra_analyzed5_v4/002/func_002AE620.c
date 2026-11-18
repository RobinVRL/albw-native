#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_00352128(int param_1,int *param_2,uint *param_3);
extern int func_004904CC(float fparam_0,float fparam_1);
extern float func_0049216C(float *param_1,uint *param_2,float *param_3);
extern int func_004A2D1C(int param_1,float *param_2);
extern int func_0058A378(undefined4 *param_1);
extern int *DAT_002ae6f4;
extern undefined4 DAT_002ae6f8;
extern char s_ReactCut_002ae6fc[];

// USA 002AE620 <- EU 002AE5FC (Ghidra, non-matching)
// GLOBAL DAT_002ae6f4 int *
// GLOBAL DAT_002ae6f8 undefined4
// GLOBAL s_ReactCut_002ae6fc string

void func_002AE620(int param_1,undefined4 *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 (*(int *)(albw_frame + 0x8))
  #define local_74 (*(int *)(albw_frame + 0xc))
  #define local_70 (*(float *)(albw_frame + 0x10))
  #define fStack_6c (*(float *)(albw_frame + 0x14))
  #define local_68 (*(float *)(albw_frame + 0x18))
  #define local_64 (*(float *)(albw_frame + 0x1c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x20))
  #define local_5c (*(float *)(albw_frame + 0x24))
  #define local_58 (*(uint *)(albw_frame + 0x28))
  #define local_54 (*(int *)(albw_frame + 0x2c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x30))
  #define local_4c ((float *)(albw_frame + 0x34))
  #define local_44 (*(float *)(albw_frame + 0x3c))
  #define afStack_40 ((float *)(albw_frame + 0x40))
  local_78 = 0;
  pfVar2 = *(float **)(*DAT_002ae6f4 + 0x1c);
  pfVar1 = (float *)func_0058A378(param_2);
  local_70 = *pfVar1;
  fStack_6c = pfVar1[1];
  local_68 = pfVar1[2];
  if (param_3 != (float *)0x0) {
    local_70 = *param_3;
    local_68 = param_3[2];
  }
  func_00115C70(local_4c,pfVar2,&local_70);
  local_64 = local_4c[0];
  local_5c = local_44;
  local_60 = DAT_002ae6f8;
  func_00115DC8(&local_64);
  func_00352128(param_1 + 0x324,&local_78,(uint *)s_ReactCut_002ae6fc);
  local_54 = func_004904CC(local_64,local_5c);
  local_58 = 0;
  uStack_50 = 0;
  func_0049216C(afStack_40,&local_58,&local_70);
  if ((local_78 != 0) && (*(int *)(local_78 + 0x1c) == local_74)) {
    func_004A2D1C(local_78,afStack_40);
  }
  return;
}

