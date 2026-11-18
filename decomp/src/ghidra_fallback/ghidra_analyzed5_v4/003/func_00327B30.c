#include "ghidra_types.h"

extern int func_004E74E8(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4);
extern int *DAT_00327b58;

// USA 00327B30 <- EU 00327B0C (Ghidra, non-matching)
// GLOBAL DAT_00327b58 int *

undefined4 func_00327B30(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c ((undefined4 *)(albw_frame + 0x14))
  local_c[0] = **(undefined4 **)(*DAT_00327b58 + 0x24);
  local_10 = *(undefined4 *)(param_1 + 0x3d8);
  local_18 = *(undefined4 *)(param_1 + 0x3d0);
  uStack_14 = *(undefined4 *)(param_1 + 0x3d4);
  return func_004E74E8(&local_18,local_c,4,-1);
}

