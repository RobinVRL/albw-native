#include "ghidra_types.h"

extern int func_0036BE78();
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_004ED46C(int param_1,int param_2);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0020a1e0;
extern undefined4 DAT_0020a1e4;
extern int *DAT_0020a1e8;
extern int DAT_0020a1ec;
extern float DAT_0020a1f0;
extern float *DAT_0020a1f4;
extern float DAT_0020a1f8;
extern float DAT_0020a1fc;
extern float DAT_0020a200;

// USA 0020A0F0 <- EU 0020A0F0 (Ghidra, non-matching)
// GLOBAL DAT_0020a1e0 undefined4
// GLOBAL DAT_0020a1e4 undefined4
// GLOBAL DAT_0020a1e8 int *
// GLOBAL DAT_0020a1ec int
// GLOBAL DAT_0020a1f0 float
// GLOBAL DAT_0020a1f4 float *
// GLOBAL DAT_0020a1f8 float
// GLOBAL DAT_0020a1fc float
// GLOBAL DAT_0020a200 float

void func_0020A0F0(int param_1)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  uVar1 = DAT_0020a1e4;
  *(undefined4 *)(param_1 + 0x574) = DAT_0020a1e0;
  *(undefined4 *)(param_1 + 0x3d4) = uVar1;
  if (*(int *)(param_1 + 0x8bc) == 0x18) {
    func_004ED46C(*DAT_0020a1e8,1);
  }
  if (0x20 < *(int *)(param_1 + 0x8bc)) {
    func_0051D2CC((int *)(param_1 + 0xd70),DAT_0020a1ec,DAT_0020a1f0);
    local_20 = *(float *)(param_1 + 0x3d0) + *DAT_0020a1f4;
    local_1c = *(float *)(param_1 + 0xd34) + DAT_0020a1f4[1];
    local_18 = *(float *)(param_1 + 0x3d8) + DAT_0020a1f4[2];
    func_004D838C((float *)(param_1 + 0xb84),&local_20,DAT_0020a200,DAT_0020a1fc,DAT_0020a1f8);
  }
  *(undefined4 *)(param_1 + 0xd24) = *(undefined4 *)(param_1 + 0xb84);
  *(undefined4 *)(param_1 + 0xd28) = *(undefined4 *)(param_1 + 0xb88);
  *(undefined4 *)(param_1 + 0xd2c) = *(undefined4 *)(param_1 + 0xb8c);
  func_0036BE78(param_1 + 0xa7c);
  if (0xa0 < *(int *)(param_1 + 0x8bc)) {
    func_0065D630((undefined4 *)(param_1 + 0x8bc),6);
  }
  return;
}

