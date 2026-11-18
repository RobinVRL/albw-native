#include "ghidra_types.h"

extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern uint *DAT_002863a0;
extern uint *DAT_002863a4;
extern float DAT_002863a8;
extern int *DAT_002863ac;

// USA 002862E4 <- EU 0028630C (Ghidra, non-matching)
// GLOBAL DAT_002863a0 uint *
// GLOBAL DAT_002863a4 uint *
// GLOBAL DAT_002863a8 float
// GLOBAL DAT_002863ac int *

undefined4 func_002862E4(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  _Alignas(8) unsigned char albw_frame[0x2e0];
  #define local_2d8 (*(int *)(albw_frame + 0x8))
  #define local_2d4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_2d0 (*(float *)(albw_frame + 0x10))
  #define uStack_2cc (*(undefined4 *)(albw_frame + 0x14))
  #define local_2bc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2b8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_2b4 (*(undefined4 *)(albw_frame + 0x2c))
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
  puVar1 = DAT_002863a0;
  if (param_4 == 0) {
    puVar1 = DAT_002863a4;
  }
  local_2d8 = func_0019B04C(*puVar1);
  local_2d4 = *param_1;
  uStack_2cc = param_1[2];
  local_2d0 = ALBW_AS_F32(param_1[1]) - DAT_002863a8;
  local_2b8 = *param_2;
  local_28c = param_3;
  return func_004C43E0(*DAT_002863ac,&local_2d8);
}

