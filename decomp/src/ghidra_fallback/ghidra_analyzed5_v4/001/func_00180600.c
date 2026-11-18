#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00659400(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_001806d4;
extern float DAT_001806d8;

// USA 00180600 <- EU 00180600 (Ghidra, non-matching)
// GLOBAL DAT_001806d4 undefined4
// GLOBAL DAT_001806d8 float

undefined4 func_00180600(int param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_28 (*(float *)(albw_frame + 0x28))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x30))
  #define local_1c (*(float *)(albw_frame + 0x34))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x3c))
  *(undefined4 *)(param_1 + 0x3e0) = DAT_001806d4;
  fVar4 = DAT_001806d8;
  if (*(uint *)(param_1 + 0x9a4) < *(uint *)(param_1 + 0x9a8)) {
    iVar2 = *(uint *)(param_1 + 0x9a4) + 1;
    iVar1 = *(uint *)(param_1 + 0x9a8) - iVar2;
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    *(int *)(param_1 + 0x9a4) = iVar2;
    pfVar3 = (float *)(param_1 + 0x3d0);
    local_20 = *(undefined4 *)(param_1 + 0xa48);
    fVar5 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    local_28 = *(float *)(param_1 + 0xa40);
    uStack_24 = *(undefined4 *)(param_1 + 0xa44);
    fVar4 = fVar4 / fVar5;
    func_00115C70(&local_1c,&local_28,pfVar3);
    local_38 = local_1c;
    uStack_34 = uStack_18;
    uStack_30 = uStack_14;
    func_00115D70(&local_1c,&local_38,fVar4);
    local_44 = local_1c;
    uStack_40 = uStack_18;
    uStack_3c = uStack_14;
    return func_00115C54(pfVar3,pfVar3,&local_44);
  }
  return func_00659400((undefined4 *)(param_1 + 0x960),5);
}

