#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_00520FC0(void);
extern float DAT_00375f2c;
extern undefined4 DAT_00375f30;
extern int *DAT_00375f34;

// USA 00375EA4 <- EU 00375E80 (Ghidra, non-matching)
// GLOBAL DAT_00375f2c float
// GLOBAL DAT_00375f30 undefined4
// GLOBAL DAT_00375f34 int *

void func_00375EA4(int param_1)

{
  float *pfVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  local_20 = DAT_00375f2c;
  local_1c = DAT_00375f30;
  local_18 = DAT_00375f30;
  fVar2 = DAT_00375f2c;
  func_004D7F70(&local_20,**(uint **)(*DAT_00375f34 + 0x24));
  pfVar1 = (float *)func_00520FC0();
  func_00115C54(&local_20,&local_20,pfVar1);
  *(float *)(param_1 + 0x368) = local_20;
  *(undefined4 *)(param_1 + 0x36c) = local_1c;
  *(undefined4 *)(param_1 + 0x370) = local_18;
  *(float *)(param_1 + 0x3d0) = local_20;
  *(undefined4 *)(param_1 + 0x3d4) = local_1c;
  *(undefined4 *)(param_1 + 0x3d8) = local_18;
  func_004CF478(*(int *)(param_1 + 0x430),1);
  *(undefined4 *)(param_1 + 0x438) = local_1c;
  func_00151148(*(int *)(param_1 + 0x434),1);
  *(float *)(param_1 + 0x3dc) = fVar2;
  *(float *)(param_1 + 0x3e0) = fVar2;
  *(float *)(param_1 + 0x3e4) = fVar2;
  return;
}

