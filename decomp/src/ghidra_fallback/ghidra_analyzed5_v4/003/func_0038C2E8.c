#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_0028D7A4(int param_1,float fparam_0);
extern float func_0053EE20(int param_1);
extern float DAT_0038c3c8;
extern float DAT_0038c3cc;
extern float DAT_0038c3d0;

// USA 0038C2E8 <- EU 0038C2C4 (Ghidra, non-matching)
// GLOBAL DAT_0038c3c8 float
// GLOBAL DAT_0038c3cc float
// GLOBAL DAT_0038c3d0 float

undefined4 func_0038C2E8(int param_1,float *param_2,float fparam_0)

{
  float fVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define afStack_20 ((float *)(albw_frame + 0x20))
  if (*(int *)(param_1 + 0x170) == 0) {
    if (DAT_0038c3c8 < fparam_0) {
      func_00115C70(afStack_20,*(float **)(param_1 + 0x30),(float *)(param_1 + 0x74));
      func_00115C70(&local_2c,*(float **)(param_1 + 0x30),param_2);
      local_38 = local_2c;
      uStack_34 = uStack_28;
      uStack_30 = uStack_24;
      func_00115DC8(&local_38);
      func_00115D70(&local_38,&local_38,fparam_0 * DAT_0038c3cc);
      func_00115C54(*(float **)(param_1 + 0x34),*(float **)(param_1 + 0x34),&local_38);
      fVar1 = func_0053EE20(*(int *)(param_1 + 0x4c) + 0x3c);
      fVar2 = DAT_0038c3d0;
      func_0028D7A4(*(int *)(param_1 + 0x4c) + 0x3c,fVar1 * DAT_0038c3d0);
      fVar1 = func_0053EE20(*(int *)(param_1 + 0x4c) + 0x5c);
      func_0028D7A4(*(int *)(param_1 + 0x4c) + 0x5c,fVar1 * fVar2);
      *(undefined4 *)(param_1 + 0x170) = 0x14;
      *(undefined1 *)(param_1 + 0x174) = 1;
      *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(*(int *)(param_1 + 0x30) + 4);
      return 1;
    }
  }
  return 0;
}

