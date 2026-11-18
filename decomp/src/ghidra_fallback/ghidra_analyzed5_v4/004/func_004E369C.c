#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004E2030(int param_1);
extern float func_0051CF68(float *param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_0066A794(undefined4 *param_1,undefined1 param_2);
extern float DAT_004e374c;
extern undefined4 DAT_004e3750;
extern float DAT_004e3754;

// USA 004E369C <- EU 004E3674 (Ghidra, non-matching)
// GLOBAL DAT_004e374c float
// GLOBAL DAT_004e3750 undefined4
// GLOBAL DAT_004e3754 float

undefined4 func_004E369C(int param_1)

{
  float *pfVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define fStack_30 (*(float *)(albw_frame + 0x20))
  #define local_2c (*(undefined4 *)(albw_frame + 0x24))
  #define local_24 (*(float *)(albw_frame + 0x2c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x34))
  pfVar1 = *(float **)(param_1 + 0x510);
  fVar2 = func_0051CF68(pfVar1 + 3,*pfVar1,pfVar1[1],pfVar1[2]);
  pfVar1[4] = fVar2;
  func_004D80A4(&fStack_30,*(uint *)(param_1 + 1000),DAT_004e374c);
  local_2c = DAT_004e3750;
  func_00115D70(&local_24,&fStack_30,*(float *)(*(int *)(param_1 + 0x510) + 0x10));
  local_3c = local_24;
  uStack_38 = uStack_20;
  uStack_34 = uStack_1c;
  func_00115D70(&local_24,&local_3c,DAT_004e3754);
  local_48 = local_24;
  uStack_44 = uStack_20;
  uStack_40 = uStack_1c;
  func_00115C54(&local_24,(float *)(param_1 + 0x520),&local_48);
  *(float *)(param_1 + 0x3d0) = local_24;
  *(undefined4 *)(param_1 + 0x3d4) = uStack_20;
  *(undefined4 *)(param_1 + 0x3d8) = uStack_1c;
  if (*(int *)(param_1 + 0x420) == 0x3c) {
    func_0066A794((undefined4 *)(param_1 + 0x420),1);
    *(undefined1 *)(param_1 + 0x4c1) = 1;
    func_00151148(*(int *)(param_1 + 0x458),1);
  }
  return func_004E2030(param_1);
}

