#include "ghidra_types.h"

extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern uint *DAT_005120c4;
extern undefined4 DAT_005120c8;
extern undefined4 DAT_005120cc;
extern int *DAT_005120d0;

// USA 00512030 <- EU 00512008 (Ghidra, non-matching)
// GLOBAL DAT_005120c4 uint *
// GLOBAL DAT_005120c8 undefined4
// GLOBAL DAT_005120cc undefined4
// GLOBAL DAT_005120d0 int *

int func_00512030(undefined4 param_1,undefined4 *param_2,int param_3,float fparam_0,float fparam_1,
                 float fparam_2)

{
  int *piVar1;
  _Alignas(8) unsigned char albw_frame[0x2f0];
  #define local_2e8 (*(int *)(albw_frame + 0x8))
  #define local_2e4 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_2e0 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2dc (*(undefined4 *)(albw_frame + 0x14))
  #define local_2d8 (*(float *)(albw_frame + 0x18))
  #define fStack_2d4 (*(float *)(albw_frame + 0x1c))
  #define fStack_2d0 (*(float *)(albw_frame + 0x20))
  #define local_2cc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2c8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_2c4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_2a4 (*(undefined4 *)(albw_frame + 0x4c))
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
  local_2e8 = func_0019B04C(*DAT_005120c4);
  local_2e4 = *param_2;
  uStack_2e0 = param_2[1];
  uStack_2dc = param_2[2];
  local_2c8 = 0;
  local_2a4 = DAT_005120c8;
  if (param_3 == 0) {
    local_2a4 = DAT_005120cc;
  }
  local_298 = 0xffff;
  local_28 = local_28 | 1;
  local_2d8 = fparam_0;
  fStack_2d4 = fparam_2;
  fStack_2d0 = fparam_1;
  local_29c = param_1;
  piVar1 = func_004C4AF4(*DAT_005120d0,&local_2e8,0);
  return piVar1[0xb3];
}

