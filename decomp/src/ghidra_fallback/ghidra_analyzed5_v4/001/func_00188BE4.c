#include "ghidra_types.h"

extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_00581D60(int param_1);
extern uint *DAT_00188cbc;
extern int *DAT_00188cc0;
extern int *DAT_00188cc4;
extern uint *DAT_00188cc8;

// USA 00188BE4 <- EU 00188BE4 (Ghidra, non-matching)
// GLOBAL DAT_00188cbc uint *
// GLOBAL DAT_00188cc0 int *
// GLOBAL DAT_00188cc4 int *
// GLOBAL DAT_00188cc8 uint *

undefined4 func_00188BE4(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                  float fparam_0)

{
  undefined4 uVar1;
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
  #define local_2b4 (*(undefined2 *)(albw_frame + 0x2c))
  #define local_29c (*(float *)(albw_frame + 0x44))
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
  if (param_3 == 5) {
    local_2e0 = func_0019B04C(*DAT_00188cc8);
  }
  else {
    local_2e0 = func_0019B04C(*DAT_00188cbc);
  }
  uVar1 = func_00581D60(*DAT_00188cc0);
  local_290 = (undefined2)uVar1;
  local_2b8 = 1;
  local_2b6 = 2;
  local_2b4 = (undefined2)param_3;
  local_2dc = *param_1;
  local_2d8 = param_1[1];
  local_2d4 = param_1[2];
  local_2c0 = param_2;
  local_29c = fparam_0;
  local_294 = param_4;
  return func_004C43E0(*DAT_00188cc4,&local_2e0);
}

