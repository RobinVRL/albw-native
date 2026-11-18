#include "ghidra_types.h"

extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_00581D60(int param_1);
extern uint *DAT_003ad164;
extern int *DAT_003ad168;
extern float DAT_003ad16c;
extern int *DAT_003ad170;

// USA 003AD0E4 <- EU 003AD0C0 (Ghidra, non-matching)
// GLOBAL DAT_003ad164 uint *
// GLOBAL DAT_003ad168 int *
// GLOBAL DAT_003ad16c float
// GLOBAL DAT_003ad170 int *

undefined4 func_003AD0E4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x2d0];
  #define local_2d0 (*(int *)(albw_frame + 0x0))
  #define local_2cc (*(float *)(albw_frame + 0x4))
  #define local_2c8 (*(undefined4 *)(albw_frame + 0x8))
  #define local_2c4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_2b4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_2b0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2ac (*(undefined4 *)(albw_frame + 0x24))
  #define local_288 (*(undefined4 *)(albw_frame + 0x48))
  #define local_284 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_280 (*(undefined2 *)(albw_frame + 0x50))
  #define local_10 (*(undefined4 *)(albw_frame + 0x2c0))
  local_2b0 = 0;
  local_2ac = 0;
  local_2b4 = 0;
  local_288 = 0;
  local_284 = 0;
  local_10 = 0;
  func_002DFF7C(&local_2d0);
  local_2d0 = func_0019B04C(*DAT_003ad164);
  uVar1 = func_00581D60(*DAT_003ad168);
  local_280 = (undefined2)uVar1;
  local_2cc = *(float *)(param_1 + 0x3d0);
  local_2c8 = *(undefined4 *)(param_1 + 0x3d4);
  local_2c4 = *(undefined4 *)(param_1 + 0x3d8);
  func_00115DAC(&local_2cc,(float *)(param_1 + 0x3dc),&local_2cc,DAT_003ad16c);
  local_284 = *(undefined4 *)(param_1 + 0x2cc);
  local_2b0 = param_2;
  return func_004C43E0(*DAT_003ad170,&local_2d0);
}

