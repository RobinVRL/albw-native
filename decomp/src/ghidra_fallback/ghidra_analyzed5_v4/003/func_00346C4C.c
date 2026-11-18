#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_0028D7A4(int param_1,float fparam_0);
extern int func_004D8054(float *param_1,uint param_2,float fparam_0);
extern float func_0053EE20(int param_1);
extern float DAT_00346de0;
extern float DAT_00346de4;
extern float DAT_00346de8;

// USA 00346C4C <- EU 00346C28 (Ghidra, non-matching)
// GLOBAL DAT_00346de0 float
// GLOBAL DAT_00346de4 float
// GLOBAL DAT_00346de8 float

undefined4 func_00346C4C(int param_1,float *param_2,float fparam_0)

{
  float fVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x28))
  if ((*(int *)(param_1 + 0x144) == 0) && (DAT_00346de0 < fparam_0)) {
    fVar2 = DAT_00346de0;
    func_00115C70(&local_48,*(float **)(param_1 + 0x30),(float *)(param_1 + 0x78));
    if (param_2 == (float *)0x0) {
      if (local_48 == fVar2 && local_40 == fVar2) {
        func_004D8054(*(float **)(param_1 + 0x34),**(int **)(param_1 + 0x3c) + 0x80000000,
                      fparam_0 * DAT_00346de4);
      }
      else {
        fVar1 = SQRT(local_48 * local_48 + fVar2 * fVar2 + local_40 * local_40);
        local_44 = fVar2;
        if (fVar2 < fVar1) {
          fVar1 = (fparam_0 * DAT_00346de4) / fVar1;
          local_48 = local_48 * fVar1;
          local_44 = fVar2 * fVar1;
          local_40 = local_40 * fVar1;
        }
        func_00115C54(*(float **)(param_1 + 0x34),*(float **)(param_1 + 0x34),&local_48);
      }
    }
    else {
      fVar2 = DAT_00346de4;
      func_00115C70(&local_30,*(float **)(param_1 + 0x30),param_2);
      local_3c = local_30;
      uStack_38 = uStack_2c;
      uStack_34 = uStack_28;
      func_00115DC8(&local_3c);
      func_00115D70(&local_3c,&local_3c,fparam_0 * fVar2);
      func_00115C54(*(float **)(param_1 + 0x34),*(float **)(param_1 + 0x34),&local_3c);
    }
    fVar1 = func_0053EE20(*(int *)(param_1 + 0x4c) + 0x3c);
    fVar2 = DAT_00346de8;
    func_0028D7A4(*(int *)(param_1 + 0x4c) + 0x3c,fVar1 * DAT_00346de8);
    fVar1 = func_0053EE20(*(int *)(param_1 + 0x4c) + 0x5c);
    func_0028D7A4(*(int *)(param_1 + 0x4c) + 0x5c,fVar1 * fVar2);
    *(undefined4 *)(param_1 + 0x144) = 0x14;
    *(undefined1 *)(param_1 + 0x13f) = 1;
    *(undefined1 *)(param_1 + 0x13e) = 0;
    *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(*(int *)(param_1 + 0x30) + 4);
    return 1;
  }
  return 0;
}

