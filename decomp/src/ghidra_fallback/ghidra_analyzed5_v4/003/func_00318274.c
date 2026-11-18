#include "ghidra_types.h"

extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_00581D60(int param_1);
extern uint *DAT_00318310;
extern int *DAT_00318314;
extern float DAT_00318318;
extern float DAT_0031831c;
extern int *DAT_00318320;

// USA 00318274 <- EU 00318250 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_00318310 uint *
// GLOBAL DAT_00318314 int *
// GLOBAL DAT_00318318 float
// GLOBAL DAT_0031831c float
// GLOBAL DAT_00318320 int *

undefined4 func_00318274(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                  int param_5)

{
  undefined4 uVar1;
  float in_s0;
  _Alignas(8) unsigned char albw_frame[0x2e0];
  #define local_2e0 (*(int *)(albw_frame + 0x0))
  #define local_2dc (*(undefined4 *)(albw_frame + 0x4))
  #define local_2d8 (*(undefined4 *)(albw_frame + 0x8))
  #define local_2d4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_2c4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_2c0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2bc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2b8 (*(undefined2 *)(albw_frame + 0x28))
  #define local_2b6 (*(undefined2 *)(albw_frame + 0x2a))
  #define local_298 (*(undefined4 *)(albw_frame + 0x48))
  #define local_294 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_290 (*(undefined2 *)(albw_frame + 0x50))
  #define local_20 (*(undefined4 *)(albw_frame + 0x2c0))
  local_2c0 = 0;
  local_2bc = 0;
  local_2c4 = 0;
  local_298 = 0;
  local_294 = 0;
  local_20 = 0;
  func_002DFF7C(&local_2e0);
  local_2e0 = func_0019B04C(*DAT_00318310);
  uVar1 = func_00581D60(*DAT_00318314);
  local_290 = (undefined2)uVar1;
  local_2dc = *param_1;
  if (param_5 != 0) {
    in_s0 = DAT_00318318;
  }
  local_2d8 = param_1[1];
  if (param_5 == 0) {
    in_s0 = DAT_0031831c;
  }
  local_2d4 = param_1[2];
  local_2c0 = *param_2;
  local_294 = *param_3;
  local_2b6 = (undefined2)(int)in_s0;
  local_2b8 = (undefined2)param_4;
  return func_004C43E0(*DAT_00318320,&local_2e0);
}

