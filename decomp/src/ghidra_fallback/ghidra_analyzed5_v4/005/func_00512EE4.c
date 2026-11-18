#include "ghidra_types.h"

extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern uint *DAT_00512f50;
extern int *DAT_00512f54;

// USA 00512EE4 <- EU 00512EBC (Ghidra, non-matching)
// GLOBAL DAT_00512f50 uint *
// GLOBAL DAT_00512f54 int *

undefined4 func_00512EE4(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  _Alignas(8) unsigned char albw_frame[0x2e0];
  #define local_2d8 (*(int *)(albw_frame + 0x8))
  #define local_2d4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_2d0 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2cc (*(undefined4 *)(albw_frame + 0x14))
  #define local_2c8 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_2c4 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_2c0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2bc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2b8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_2b4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_2ae (*(undefined2 *)(albw_frame + 0x32))
  #define local_2aa (*(undefined2 *)(albw_frame + 0x36))
  #define local_290 (*(undefined4 *)(albw_frame + 0x50))
  #define local_28c (*(undefined4 *)(albw_frame + 0x54))
  #define local_18 (*(undefined4 *)(albw_frame + 0x2c8))
  local_2b8 = 0;
  local_2b4 = 0;
  local_2bc = 0;
  local_290 = 0;
  local_28c = 0;
  local_18 = 0;
  func_002DFF7C(&local_2d8);
  local_2d8 = func_0019B04C(*DAT_00512f50);
  local_2d4 = *param_1;
  uStack_2cc = param_1[2];
  local_2c8 = *param_2;
  uStack_2c4 = param_2[1];
  uStack_2c0 = param_2[2];
  local_2d0 = param_1[1];
  local_2ae = 9;
  local_2aa = 1;
  local_28c = param_3;
  return func_004C43E0(*DAT_00512f54,&local_2d8);
}

