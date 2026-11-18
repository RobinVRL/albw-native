#include "ghidra_types.h"

extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern uint *DAT_00512bd0;
extern int *DAT_00512bd4;

// USA 00512B7C <- EU 00512B54 (Ghidra, non-matching)
// GLOBAL DAT_00512bd0 uint *
// GLOBAL DAT_00512bd4 int *

undefined4 func_00512B7C(undefined4 *param_1,undefined4 param_2)

{
  _Alignas(8) unsigned char albw_frame[0x2d0];
  #define local_2d0 (*(int *)(albw_frame + 0x0))
  #define local_2cc (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_2c8 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_2c4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_2b4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_2b0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2ac (*(undefined4 *)(albw_frame + 0x24))
  #define local_2a6 (*(undefined2 *)(albw_frame + 0x2a))
  #define local_2a2 (*(undefined2 *)(albw_frame + 0x2e))
  #define local_288 (*(undefined4 *)(albw_frame + 0x48))
  #define local_284 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_10 (*(undefined4 *)(albw_frame + 0x2c0))
  local_2b0 = 0;
  local_2ac = 0;
  local_2b4 = 0;
  local_288 = 0;
  local_284 = 0;
  local_10 = 0;
  func_002DFF7C(&local_2d0);
  local_2d0 = func_0019B04C(*DAT_00512bd0);
  local_2cc = *param_1;
  uStack_2c8 = param_1[1];
  uStack_2c4 = param_1[2];
  local_2a6 = 9;
  local_2a2 = 2;
  local_284 = param_2;
  return func_004C43E0(*DAT_00512bd4,&local_2d0);
}

