#include "ghidra_types.h"

extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_00581D60(int param_1);
extern uint *DAT_004e74b4;
extern int *DAT_004e74b8;
extern int *DAT_004e74bc;

// USA 004E7460 <- EU 004E7438 (Ghidra, non-matching)
// GLOBAL DAT_004e74b4 uint *
// GLOBAL DAT_004e74b8 int *
// GLOBAL DAT_004e74bc int *

undefined4 func_004E7460(undefined4 *param_1)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x2d0];
  #define local_2d0 ((int *)(albw_frame + 0x0))
  #define local_2b4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_2b0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2ac (*(undefined4 *)(albw_frame + 0x24))
  #define local_2a6 (*(undefined2 *)(albw_frame + 0x2a))
  #define local_2a2 (*(undefined2 *)(albw_frame + 0x2e))
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
  func_002DFF7C(local_2d0);
  local_2d0[0] = func_0019B04C(*DAT_004e74b4);
  uVar1 = func_00581D60(*DAT_004e74b8);
  local_280 = (undefined2)uVar1;
  local_2a6 = 1;
  local_2a2 = 1;
  local_284 = *param_1;
  return func_004C43E0(*DAT_004e74bc,local_2d0);
}

