#include "ghidra_types.h"

extern int func_0036BE78();
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_0058A8F0(int param_1);
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);
extern float DAT_002079e4;
extern float DAT_002079e8;
extern float DAT_002079ec;

// USA 00207944 <- EU 00207944 (Ghidra, non-matching)
// GLOBAL DAT_002079e4 float
// GLOBAL DAT_002079e8 float
// GLOBAL DAT_002079ec float

undefined4 func_00207944(int param_1)

{
  uint uVar1;
  uint uVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  local_20 = *(float *)(param_1 + 0x3d0);
  uStack_18 = *(undefined4 *)(param_1 + 0x3d8);
  local_1c = *(undefined4 *)(param_1 + 0xb88);
  uVar1 = func_004D838C((float *)(param_1 + 0xb84),&local_20,DAT_002079ec,DAT_002079e8,DAT_002079e4)
  ;
  *(float *)(param_1 + 0xd24) = *(float *)(param_1 + 0xb84);
  *(undefined4 *)(param_1 + 0xd28) = *(undefined4 *)(param_1 + 0xb88);
  *(undefined4 *)(param_1 + 0xd2c) = *(undefined4 *)(param_1 + 0xb8c);
  if ((0x46 < *(int *)(param_1 + 0x8bc)) && (uVar2 = func_0058A8F0(param_1), (uVar2 & uVar1) != 0))
  {
    func_0065D630((undefined4 *)(param_1 + 0x8bc),0xc);
  }
  return func_0036BE78(param_1 + 0xa7c);
}

