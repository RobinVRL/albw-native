#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern float DAT_004c105c;

// USA 004C0FF8 <- EU 004C0FD0 (Ghidra, non-matching)
// GLOBAL DAT_004c105c float

undefined4 func_004C0FF8(int param_1,float fparam_0,float fparam_1,float fparam_2)

{
  float *pfVar1;
  int iVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define fStack_20 (*(float *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  pfVar1 = (float *)func_00520FC0();
  local_24 = *pfVar1;
  fStack_20 = pfVar1[1];
  local_1c = pfVar1[2];
  local_30 = DAT_004c105c;
  local_2c = DAT_004c105c;
  local_28 = DAT_004c105c;
  func_00115C70(&local_30,&local_24,(float *)(param_1 + 0x3d0));
  iVar2 = func_004904CC(local_30,local_28);
  uVar3 = func_0051D2F4((int *)(param_1 + 1000),iVar2,(int)fparam_1,(int)fparam_2,fparam_0);
  return uVar3;
}

