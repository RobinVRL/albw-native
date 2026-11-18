#include "ghidra_types.h"

extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_00581D60(int param_1);
extern uint *DAT_0024d3dc;
extern int *DAT_0024d3e0;
extern undefined4 DAT_0024d3e4;
extern undefined4 DAT_0024d3e8;
extern int *DAT_0024d3ec;

// USA 0024D32C <- EU 0024D32C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_0024d3dc uint *
// GLOBAL DAT_0024d3e0 int *
// GLOBAL DAT_0024d3e4 undefined4
// GLOBAL DAT_0024d3e8 undefined4
// GLOBAL DAT_0024d3ec int *

undefined4 func_0024D32C(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5
                  )

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x2e0];
  #define local_2e0 ((int *)(albw_frame + 0x0))
  #define local_2c4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_2c0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2bc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2b8 (*(undefined2 *)(albw_frame + 0x28))
  #define local_2b6 (*(undefined2 *)(albw_frame + 0x2a))
  #define local_29c (*(undefined4 *)(albw_frame + 0x44))
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
  func_002DFF7C(local_2e0);
  local_2e0[0] = func_0019B04C(*DAT_0024d3dc);
  uVar1 = func_00581D60(*DAT_0024d3e0);
  local_290 = (undefined2)uVar1;
  local_294 = *param_1;
  local_2b6 = 1;
  local_2b8 = 1;
  if (param_5 == 0) {
    local_2b6 = 0xffff;
  }
  local_29c = DAT_0024d3e4;
  if (param_4 == 0) {
    local_29c = DAT_0024d3e8;
  }
  local_2c4 = param_2;
  local_2bc = param_3;
  return func_004C43E0(*DAT_0024d3ec,local_2e0);
}

