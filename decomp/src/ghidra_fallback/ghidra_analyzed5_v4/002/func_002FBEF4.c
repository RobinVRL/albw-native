#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_002FB984(int param_1);
extern int func_002FC1A8(int *param_1);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_00520FC0(void);
extern int iRam002fbf9c;
extern float *DAT_002fbf80;
extern undefined DAT_002fbf84;
extern char s__SE_Wizrobe_APEAR_002fbf87[];
extern undefined4 _DAT_002fbf84;

// USA 002FBEF4 <- EU 002FBED0 (Ghidra, non-matching)
// GLOBAL DAT_002fbf80 float *
// GLOBAL DAT_002fbf84 undefined
// GLOBAL UNK_002fbf9c int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_002FBEF4(int *param_1)

{
  float *pfVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define fStack_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define iStack_18 (*(int *)(albw_frame + 0x18))
  #define pcStack_14 (*(char * *)(albw_frame + 0x1c))
  local_28 = *DAT_002fbf80;
  fStack_24 = DAT_002fbf80[1];
  local_20 = DAT_002fbf80[2];
  pfVar1 = (float *)func_00520FC0();
  func_00115C70(&local_28,pfVar1,(float *)(param_1 + 0xf4));
  iVar2 = func_004904CC(local_28,local_20);
  param_1[0xfa] = iVar2;
  func_002FC1A8(param_1);
  func_002FB984((int)param_1);
  iVar2 = _DAT_002fbf84;
  param_1[0x239] = _DAT_002fbf84;
  param_1[0x139] = iVar2;
  param_1[0x13a] = iVar2;
  param_1[0x13b] = iVar2;
  func_004FABDC((int)param_1,0,0xffffffff,0);
  pcStack_14 = s__SE_Wizrobe_APEAR_002fbf87 + 1;
  iStack_18 = iRam002fbf9c;
  return func_00150A84(param_1,&iStack_18,0);
}

