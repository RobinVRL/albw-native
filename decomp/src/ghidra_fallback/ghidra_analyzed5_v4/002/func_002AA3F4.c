#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_004F4A68();
extern int func_0068C690(float *param_1);
extern float DAT_002aa4a0;

// USA 002AA3F4 <- EU 002AA3D0 (Ghidra, non-matching)
// GLOBAL DAT_002aa4a0 float

undefined4 func_002AA3F4(int param_1,int param_2)

{
  int iVar1;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x2c))
  if ((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 0x78U) != 0) {
    fparam_0 = *(float *)(param_1 + 0x3dc) * *(float *)(param_2 + 4) +
               *(float *)(param_1 + 0x3e0) * *(float *)(param_2 + 8) +
               *(float *)(param_1 + 0x3e4) * *(float *)(param_2 + 0xc);
    func_00115D70(&local_2c,(float *)(param_2 + 4),DAT_002aa4a0);
    local_38 = local_2c;
    uStack_34 = uStack_28;
    uStack_30 = uStack_24;
    func_00115D70(&local_2c,&local_38,fparam_0);
    local_44 = local_2c;
    uStack_40 = uStack_28;
    uStack_3c = uStack_24;
    func_00115C70(&local_50,(float *)(param_1 + 0x3dc),&local_44);
    iVar1 = func_0068C690(&local_50);
    *(int *)(param_1 + 0x8f4) = iVar1;
    *(float *)(param_1 + 0x3dc) = local_50;
    *(undefined4 *)(param_1 + 0x3e0) = uStack_4c;
    *(undefined4 *)(param_1 + 0x3e4) = uStack_48;
  }
  return func_004F4A68(param_1,param_2);
}

