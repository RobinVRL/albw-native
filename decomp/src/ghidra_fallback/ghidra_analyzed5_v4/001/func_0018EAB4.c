#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0029205C(int param_1,undefined4 param_2);
extern int *DAT_0018eb6c;
extern float DAT_0018eb70;
extern float DAT_0018eb74;
extern int DAT_0018eb78;
extern int DAT_0018eb90;
extern char s_SE_HookShot_GRAB_0018eb7c[];

// USA 0018EAB4 <- EU 0018EAB4 (Ghidra, non-matching)
// GLOBAL DAT_0018eb6c int *
// GLOBAL DAT_0018eb70 float
// GLOBAL DAT_0018eb74 float
// GLOBAL DAT_0018eb78 int
// GLOBAL DAT_0018eb90 int
// GLOBAL s_SE_HookShot_GRAB_0018eb7c string

undefined4 func_0018EAB4(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define fStack_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 ((undefined4 *)(albw_frame + 0xc))
  #define local_18 (*(int *)(albw_frame + 0x18))
  #define local_14 (*(char * *)(albw_frame + 0x1c))
  func_0029205C(*DAT_0018eb6c,param_1[0x13f]);
  local_24[0] = 0;
  (**(code **)(*(int *)param_1[0x13f] + 0x5c))((int *)param_1[0x13f],&fStack_30,local_24);
  local_2c = local_2c + DAT_0018eb70;
  local_28 = local_28 + DAT_0018eb74;
  func_00115C70((float *)(param_1 + 0x143),&fStack_30,(float *)(param_1 + 0x133));
  iVar1 = DAT_0018eb78;
  param_1[0x146] = 0;
  param_1[0xf7] = iVar1;
  param_1[0xf8] = iVar1;
  local_18 = DAT_0018eb90;
  param_1[0xf9] = iVar1;
  local_14 = s_SE_HookShot_GRAB_0018eb7c;
  return func_00150A84(param_1,&local_18,0);
}

