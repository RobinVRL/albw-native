#include "ghidra_types.h"

extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern int func_004F68AC();
extern undefined4 *DAT_001a2c74;
extern uint DAT_001a2c78;
extern undefined4 DAT_001a2c7c;
extern int *DAT_001a2c80;

// USA 001A2B84 <- EU 001A2B84 (Ghidra, non-matching)
// GLOBAL DAT_001a2c74 undefined4 *
// GLOBAL DAT_001a2c78 uint
// GLOBAL DAT_001a2c7c undefined4
// GLOBAL DAT_001a2c80 int *

undefined4 func_001A2B84(int param_1,uint param_2,undefined4 param_3,float *param_4)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_5c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0xc))
  #define local_50 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x18))
  #define local_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define pfStack_40 (*(float * *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x24))
  #define local_38 (*(undefined4 * *)(albw_frame + 0x28))
  #define local_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x30))
  #define local_2c (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_28 (*(uint *)(albw_frame + 0x38))
  #define local_24 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x40))
  #define local_1c (*(undefined4 * *)(albw_frame + 0x44))
  #define local_18 (*(undefined4 * *)(albw_frame + 0x48))
  #define local_14 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_10 (*(undefined1 *)(albw_frame + 0x50))
  #define local_f (*(undefined1 *)(albw_frame + 0x51))
  if (*(short *)(param_1 + 0x32) != 0) {
    local_5c = *(undefined4 *)(param_1 + 0x368);
    uStack_58 = *(undefined4 *)(param_1 + 0x36c);
    uStack_54 = *(undefined4 *)(param_1 + 0x370);
    local_50 = *(undefined4 *)(param_1 + 0x3d0);
    uStack_4c = *(undefined4 *)(param_1 + 0x3d4);
    uStack_48 = *(undefined4 *)(param_1 + 0x3d8);
    local_44 = *DAT_001a2c74;
    param_4 = (float *)DAT_001a2c74[1];
    local_3c = DAT_001a2c74[2];
    local_34 = 0;
    uStack_28 = param_2 & 0xffff0000 | DAT_001a2c78;
    local_30 = 0;
    local_2c = 0;
    local_20 = 0;
    local_14 = DAT_001a2c7c;
    local_10 = 0;
    local_18 = &local_5c;
    local_1c = &local_50;
    local_f = 1;
    local_24 = 0x1a;
    local_38 = &local_44;
    param_3 = 3;
    pfStack_40 = param_4;
    iVar1 = func_004A8030(*DAT_001a2c80,(int *)&local_38,3);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x368);
      *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x36c);
      *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x370);
    }
  }
  return func_004F68AC(param_1,param_2,param_3,param_4);
}

