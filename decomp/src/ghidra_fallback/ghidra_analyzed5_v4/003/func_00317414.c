#include "ghidra_types.h"

extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern uint *DAT_003175a0;
extern uint *DAT_003175a4;
extern uint *DAT_003175a8;
extern uint *DAT_003175ac;
extern uint *DAT_003175b0;
extern uint *DAT_003175b4;
extern uint *DAT_003175b8;
extern uint *DAT_003175bc;
extern uint *DAT_003175c0;
extern uint *DAT_003175c4;
extern int *DAT_003175c8;

// USA 00317414 <- EU 003173F0 (Ghidra, non-matching)
// GLOBAL DAT_003175a0 uint *
// GLOBAL DAT_003175a4 uint *
// GLOBAL DAT_003175a8 uint *
// GLOBAL DAT_003175ac uint *
// GLOBAL DAT_003175b0 uint *
// GLOBAL DAT_003175b4 uint *
// GLOBAL DAT_003175b8 uint *
// GLOBAL DAT_003175bc uint *
// GLOBAL DAT_003175c0 uint *
// GLOBAL DAT_003175c4 uint *
// GLOBAL DAT_003175c8 int *

void func_00317414(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x2d0];
  #define local_2d0 (*(int *)(albw_frame + 0x0))
  #define local_2cc (*(undefined4 *)(albw_frame + 0x4))
  #define local_2c8 (*(undefined4 *)(albw_frame + 0x8))
  #define local_2c4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_2b4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_2b0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2ac (*(undefined4 *)(albw_frame + 0x24))
  #define local_2a6 (*(undefined2 *)(albw_frame + 0x2a))
  #define local_2a4 (*(undefined2 *)(albw_frame + 0x2c))
  #define local_2a2 (*(undefined2 *)(albw_frame + 0x2e))
  #define local_288 (*(undefined4 *)(albw_frame + 0x48))
  #define local_284 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_280 (*(undefined2 *)(albw_frame + 0x50))
  #define local_27c (*(undefined2 *)(albw_frame + 0x54))
  #define local_10 (*(undefined4 *)(albw_frame + 0x2c0))
  local_2b0 = 0;
  local_2ac = 0;
  local_2b4 = 0;
  local_288 = 0;
  local_284 = 0;
  local_10 = 0;
  func_002DFF7C(&local_2d0);
  switch(*(undefined4 *)(param_1 + 0x438)) {
  case 0:
    local_2d0 = func_0019B04C(*DAT_003175a0);
    break;
  case 1:
    local_2d0 = func_0019B04C(*DAT_003175a4);
    break;
  case 2:
    local_2d0 = func_0019B04C(*DAT_003175a8);
    break;
  case 3:
    local_2d0 = func_0019B04C(*DAT_003175ac);
    break;
  case 4:
    local_2d0 = func_0019B04C(*DAT_003175b0);
    break;
  case 5:
    local_2d0 = func_0019B04C(*DAT_003175b4);
    break;
  case 6:
    local_2d0 = func_0019B04C(*DAT_003175b8);
    break;
  case 7:
    local_2d0 = func_0019B04C(*DAT_003175bc);
    break;
  case 8:
    local_2d0 = func_0019B04C(*DAT_003175c0);
    break;
  case 9:
    local_2d0 = func_0019B04C(*DAT_003175c4);
    break;
  default:
    goto switchD_00317428_default;
  }
  local_27c = 0xffff;
  local_280 = *(undefined2 *)(param_1 + 0x54);
  local_2cc = *(undefined4 *)(param_1 + 0x3d0);
  local_2c8 = *(undefined4 *)(param_1 + 0x3d4);
  local_2c4 = *(undefined4 *)(param_1 + 0x3d8);
  local_2b0 = *(undefined4 *)(param_1 + 1000);
  local_2a6 = 0xffff;
  local_2a4 = 1;
  local_2a2 = 1;
  local_284 = *(undefined4 *)(param_1 + 0x50);
  func_004C43E0(*DAT_003175c8,&local_2d0);
switchD_00317428_default:
  return;
}

