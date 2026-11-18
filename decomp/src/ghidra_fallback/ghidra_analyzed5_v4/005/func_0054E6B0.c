#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);
extern float DAT_0054e730;
extern undefined4 DAT_0054e734;

// USA 0054E6B0 <- EU 0054E688 (Ghidra, non-matching)
// GLOBAL DAT_0054e730 float
// GLOBAL DAT_0054e734 undefined4

void func_0054E6B0(int *param_1,float *param_2,int *param_3)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define fStack_3c (*(float *)(albw_frame + 0x4))
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x24))
  pfVar2 = (float *)func_00520FC0();
  pfVar3 = (float *)(**(code **)(*param_1 + 0x78))(param_1);
  func_00115C70(&local_24,pfVar2,pfVar3);
  local_30 = local_24;
  uStack_2c = uStack_20;
  uStack_28 = uStack_1c;
  iVar4 = func_0068C690(&local_30);
  uVar1 = iVar4 + 0x20000000U & 0xc0000000;
  func_004D80A4(&fStack_3c,uVar1,DAT_0054e730);
  local_38 = DAT_0054e734;
  pfVar2 = (float *)(**(code **)(*param_1 + 0x78))(param_1);
  func_00115C54(param_2,pfVar2,&fStack_3c);
  *param_3 = uVar1 + 0x80000000;
  return;
}

