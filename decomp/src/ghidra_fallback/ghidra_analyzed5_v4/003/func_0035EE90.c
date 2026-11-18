#include "ghidra_types.h"

extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_00581D60(int param_1);
extern uint *DAT_0035ef14;
extern int *DAT_0035ef18;
extern int *DAT_0035ef1c;

// USA 0035EE90 <- EU 0035EE6C (Ghidra, non-matching)
// GLOBAL DAT_0035ef14 uint *
// GLOBAL DAT_0035ef18 int *
// GLOBAL DAT_0035ef1c int *

undefined4 func_0035EE90(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

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
  local_2e0 = func_0019B04C(*DAT_0035ef14);
  uVar1 = func_00581D60(*DAT_0035ef18);
  local_290 = (undefined2)uVar1;
  local_2dc = *param_1;
  local_2d8 = param_1[1];
  local_2d4 = param_1[2];
  local_2c0 = 0;
  local_2b4 = 1;
  local_294 = *param_2;
  local_2b8 = (undefined2)param_3;
  local_2b6 = (undefined2)param_4;
  return func_004C43E0(*DAT_0035ef1c,&local_2e0);
}

