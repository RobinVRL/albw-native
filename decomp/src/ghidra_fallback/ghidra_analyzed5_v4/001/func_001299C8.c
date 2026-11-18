#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0051D37C(int *param_1,int param_2,int param_3);
extern int func_00520FC0(void);
extern float *DAT_00129a58;
extern int *DAT_00129a5c;
extern undefined4 DAT_00129a60;

// USA 001299C8 <- EU 001299C8 (Ghidra, non-matching)
// GLOBAL DAT_00129a58 float *
// GLOBAL DAT_00129a5c int *
// GLOBAL DAT_00129a60 undefined4

undefined4 func_001299C8(int param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define fStack_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 ((int *)(albw_frame + 0xc))
  local_20 = *DAT_00129a58;
  fStack_1c = DAT_00129a58[1];
  local_18 = DAT_00129a58[2];
  pfVar2 = (float *)func_00520FC0();
  func_00115C70(&local_20,pfVar2,(float *)(param_1 + 0x3d0));
  local_14[0] = func_004904CC(local_20,local_18);
  local_14[0] = local_14[0] - *(int *)(param_1 + 1000);
  func_0051D37C(local_14,-*DAT_00129a5c,*DAT_00129a5c);
  uVar1 = DAT_00129a60;
  *(int *)(param_1 + 0x930) = local_14[0];
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  return func_004FC07C(param_1,3,0xffffffff,0);
}

