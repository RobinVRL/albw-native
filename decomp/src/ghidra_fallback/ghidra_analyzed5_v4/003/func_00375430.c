#include "ghidra_types.h"

extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern uint *DAT_003754a8;
extern float DAT_003754ac;
extern int *DAT_003754b0;

// USA 00375430 <- EU 0037540C (Ghidra, non-matching)
// GLOBAL DAT_003754a8 uint *
// GLOBAL DAT_003754ac float
// GLOBAL DAT_003754b0 int *

undefined4 func_00375430(undefined2 param_1,int param_2,ushort param_3,undefined2 param_4)

{
  _Alignas(8) unsigned char albw_frame[0x2e0];
  #define local_2d8 (*(int *)(albw_frame + 0x8))
  #define local_2d4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_2d0 (*(float *)(albw_frame + 0x10))
  #define uStack_2cc (*(undefined4 *)(albw_frame + 0x14))
  #define local_2bc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2b8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_2b4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_2ae (*(undefined2 *)(albw_frame + 0x32))
  #define local_2ac (*(ushort *)(albw_frame + 0x34))
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
  local_2d8 = func_0019B04C(*DAT_003754a8);
  local_28c = *(undefined4 *)(param_2 + 0x2cc);
  local_2ac = param_3 ^ 1;
  local_2d4 = *(undefined4 *)(param_2 + 0x3d0);
  uStack_2cc = *(undefined4 *)(param_2 + 0x3d8);
  local_2d0 = *(float *)(param_2 + 0xc) + DAT_003754ac;
  local_2ae = param_1;
  local_2aa = param_4;
  return func_004C43E0(*DAT_003754b0,&local_2d8);
}

