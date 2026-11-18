#include "ghidra_types.h"

extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_00581D60(int param_1);
extern int DAT_002f8fd8;
extern int *DAT_002f8fdc;
extern int *DAT_002f8fe0;

// USA 002F8F5C <- EU 002F8F38 (Ghidra, non-matching)
// GLOBAL DAT_002f8fd8 int
// GLOBAL DAT_002f8fdc int *
// GLOBAL DAT_002f8fe0 int *

undefined4 func_002F8F5C(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x2e0];
  #define local_2d8 (*(int *)(albw_frame + 0x8))
  #define local_2d4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_2d0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2cc (*(undefined4 *)(albw_frame + 0x14))
  #define local_2bc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2b8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_2b4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_2ae (*(undefined2 *)(albw_frame + 0x32))
  #define local_2ac (*(undefined2 *)(albw_frame + 0x34))
  #define local_2aa (*(undefined2 *)(albw_frame + 0x36))
  #define local_290 (*(undefined4 *)(albw_frame + 0x50))
  #define local_28c (*(undefined4 *)(albw_frame + 0x54))
  #define local_288 (*(undefined2 *)(albw_frame + 0x58))
  #define local_18 (*(undefined4 *)(albw_frame + 0x2c8))
  local_2b8 = 0;
  local_2b4 = 0;
  local_2bc = 0;
  local_290 = 0;
  local_28c = 0;
  local_18 = 0;
  func_002DFF7C(&local_2d8);
  local_2d8 = func_0019B04C(*(uint *)(DAT_002f8fd8 + param_2 * 4));
  uVar1 = func_00581D60(*DAT_002f8fdc);
  local_288 = (undefined2)uVar1;
  local_2b8 = 0;
  local_2d4 = *param_1;
  local_2d0 = param_1[1];
  local_2cc = param_1[2];
  local_2ae = 0xffff;
  local_2ac = 2;
  local_2aa = 1;
  return func_004C43E0(*DAT_002f8fe0,&local_2d8);
}

