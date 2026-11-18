#include "ghidra_types.h"

extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern uint *DAT_001d9d30;
extern undefined4 DAT_001d9d34;
extern undefined4 DAT_001d9d38;
extern int *DAT_001d9d3c;

// USA 001D9CA8 <- EU 001D9CA8 (Ghidra, non-matching)
// GLOBAL DAT_001d9d30 uint *
// GLOBAL DAT_001d9d34 undefined4
// GLOBAL DAT_001d9d38 undefined4
// GLOBAL DAT_001d9d3c int *

undefined4 func_001D9CA8(undefined4 *param_1,undefined4 param_2,int param_3)

{
  _Alignas(8) unsigned char albw_frame[0x2e0];
  #define local_2d8 (*(int *)(albw_frame + 0x8))
  #define local_2d4 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_2d0 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2cc (*(undefined4 *)(albw_frame + 0x14))
  #define local_2bc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2b8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_2b4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_294 (*(undefined4 *)(albw_frame + 0x4c))
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
  local_2d8 = func_0019B04C(*DAT_001d9d30);
  local_2d4 = *param_1;
  uStack_2d0 = param_1[1];
  uStack_2cc = param_1[2];
  local_28c = 0;
  local_294 = DAT_001d9d34;
  if (param_3 == 0) {
    local_294 = DAT_001d9d38;
  }
  local_2b8 = param_2;
  return func_004C4AF4(*DAT_001d9d3c,&local_2d8,0);
}

