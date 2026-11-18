#include "ghidra_types.h"

extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_00581D60(int param_1);
extern uint *DAT_004e0518;
extern uint *DAT_004e051c;
extern int *DAT_004e0520;
extern int *DAT_004e0524;

// USA 004E0490 <- EU 004E0468 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_004e0518 uint *
// GLOBAL DAT_004e051c uint *
// GLOBAL DAT_004e0520 int *
// GLOBAL DAT_004e0524 int *

undefined4 func_004E0490(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                  int param_5)

{
  uint *puVar1;
  undefined4 uVar2;
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
  puVar1 = DAT_004e0518;
  if (param_5 != 0) {
    puVar1 = DAT_004e051c;
  }
  local_2e0 = func_0019B04C(*puVar1);
  uVar2 = func_00581D60(*DAT_004e0520);
  local_290 = (undefined2)uVar2;
  local_294 = *param_2;
  local_2dc = *param_1;
  local_2d8 = param_1[1];
  local_2d4 = param_1[2];
  local_2b8 = 0;
  local_2c0 = 0;
  local_2b6 = (undefined2)param_3;
  local_2b4 = (undefined2)param_4;
  return func_004C43E0(*DAT_004e0524,&local_2e0);
}

