#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0021319C(int param_1,int param_2);
extern int func_003C2464(int param_1,int param_2,float fparam_0);
extern int func_003C2680(int param_1);
extern int func_004FAB60(int param_1,undefined4 param_2,int param_3);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);
extern int DAT_0021352c;
extern int DAT_00213530;
extern undefined DAT_00213534;
extern int DAT_0021354c;
extern char s__SE_GueldMan_APPEAR_00213537[];
extern undefined4 _DAT_00213534;

// USA 00213404 <- EU 00213404 (Ghidra, non-matching)
// GLOBAL DAT_0021352c int
// GLOBAL DAT_00213530 int
// GLOBAL DAT_00213534 undefined
// GLOBAL DAT_0021354c int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_00213404(int *param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define fStack_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(int *)(albw_frame + 0x4))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  iVar1 = DAT_00213530;
  iVar3 = DAT_0021352c;
  param_1[0x167] = param_1[0x167] & 0xffffff7b;
  param_1[0x25d] = iVar3;
  param_1[0xf7] = iVar3;
  param_1[0xf8] = iVar3;
  param_1[0xf9] = iVar3;
  param_1[600] = 0x1e;
  param_1[0x259] = iVar1;
  param_1[599] = 0;
  fparam_0 = ALBW_AS_F32(_DAT_00213534);
  param_1[0x167] = param_1[0x167] | 3;
  func_004FC07C((int)param_1,0,0xffffffff,0);
  func_004FAB60((int)param_1,0,0);
  func_003C2680((int)(param_1 + 0x238));
  func_003C2464((int)(param_1 + 0x238),0x1e,fparam_0);
  pfVar2 = (float *)func_00520FC0();
  func_00115C70(&fStack_30,pfVar2,(float *)(param_1 + 0xf4));
  local_2c = iVar3;
  func_00115DC8(&fStack_30);
  iVar3 = func_0068C690(&fStack_30);
  param_1[0x25e] = iVar3;
  func_0021319C((int)param_1,1);
  local_1c = s__SE_GueldMan_APPEAR_00213537 + 1;
  local_20 = DAT_0021354c;
  func_00150A84(param_1,&local_20,0);
  param_1[0x262] = param_1[0xf4];
  param_1[0x263] = param_1[0xf5];
  param_1[0x264] = param_1[0xf6];
  return;
}

