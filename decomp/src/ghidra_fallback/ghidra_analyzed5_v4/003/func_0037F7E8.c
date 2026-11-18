#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0051D37C(int *param_1,int param_2,int param_3);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);
extern float *DAT_0037f854;
extern undefined4 DAT_0037f858;

// USA 0037F7E8 <- EU 0037F7C4 (Ghidra, non-matching)
// GLOBAL DAT_0037f854 float *
// GLOBAL DAT_0037f858 undefined4

undefined4 func_0037F7E8(int param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define fStack_1c (*(float *)(albw_frame + 0x4))
  #define fStack_18 (*(float *)(albw_frame + 0x8))
  #define local_14 ((int *)(albw_frame + 0xc))
  local_20 = *DAT_0037f854;
  fStack_1c = DAT_0037f854[1];
  fStack_18 = DAT_0037f854[2];
  pfVar2 = (float *)func_00520FC0();
  func_00115C70(&local_20,pfVar2,(float *)(param_1 + 0x3d0));
  local_14[0] = func_0068C690(&local_20);
  local_14[0] = local_14[0] - *(int *)(param_1 + 1000);
  func_0051D37C(local_14,-0x20000000,0x20000000);
  uVar1 = DAT_0037f858;
  *(int *)(param_1 + 0xad8) = local_14[0];
  *(undefined1 *)(param_1 + 0xb2c) = 0;
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  return func_004FC07C(param_1,5,0xffffffff,0);
}

