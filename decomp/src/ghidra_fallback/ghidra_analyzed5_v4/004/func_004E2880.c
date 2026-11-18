#include "ghidra_types.h"

extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_00581D60(int param_1);
extern uint *DAT_004e2924;
extern int *DAT_004e2928;
extern int *DAT_004e292c;

// USA 004E2880 <- EU 004E2858 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:2 undefined2
// GLOBAL DAT_004e2924 uint *
// GLOBAL DAT_004e2928 int *
// GLOBAL DAT_004e292c int *

undefined4 func_004E2880(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                  undefined2 param_5,float fparam_0)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x2f0];
  #define local_2e8 (*(int *)(albw_frame + 0x8))
  #define local_2e4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_2e0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2dc (*(undefined4 *)(albw_frame + 0x14))
  #define local_2cc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2c8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_2c4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_2c0 (*(undefined2 *)(albw_frame + 0x30))
  #define local_2be (*(undefined2 *)(albw_frame + 0x32))
  #define local_2a4 (*(float *)(albw_frame + 0x4c))
  #define local_2a0 (*(undefined4 *)(albw_frame + 0x50))
  #define local_29c (*(undefined4 *)(albw_frame + 0x54))
  #define local_298 (*(undefined2 *)(albw_frame + 0x58))
  #define local_28 (*(uint *)(albw_frame + 0x2c8))
  local_2c8 = 0;
  local_2c4 = 0;
  local_2cc = 0;
  local_2a0 = 0;
  local_29c = 0;
  local_28 = 0;
  func_002DFF7C(&local_2e8);
  local_2e8 = func_0019B04C(*DAT_004e2924);
  uVar1 = func_00581D60(*DAT_004e2928);
  local_298 = (undefined2)uVar1;
  if (param_3 == 0) {
    local_298 = 0xffff;
  }
  local_2e4 = *param_1;
  local_2e0 = param_1[1];
  local_2dc = param_1[2];
  local_2c0 = (undefined2)param_3;
  local_2be = param_5;
  if (param_3 == 0) {
    local_28 = local_28 | 1;
  }
  local_2c8 = param_2;
  local_2a4 = fparam_0;
  local_29c = param_4;
  return func_004C43E0(*DAT_004e292c,&local_2e8);
}

