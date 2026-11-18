#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);

// USA 00214750 <- EU 00214750 (Ghidra, non-matching)

undefined4 func_00214750(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define fStack_20 (*(float *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define local_18 (*(float *)(albw_frame + 0x18))
  #define fStack_14 (*(float *)(albw_frame + 0x1c))
  func_00115C70(&local_1c,(float *)(param_2 + 0x10),(float *)(param_1 + 0xa2c));
  func_00115C70(&local_28,(float *)(param_1 + 0xa20),(float *)(param_1 + 0xa2c));
  if (local_1c * local_1c + local_18 * local_18 + fStack_14 * fStack_14 <=
      local_28 * local_28 + local_24 * local_24 + fStack_20 * fStack_20) {
    uVar1 = *(undefined4 *)(param_2 + 0x14);
    uVar2 = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0xa20) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0xa24) = uVar1;
    *(undefined4 *)(param_1 + 0xa28) = uVar2;
  }
  return 1;
}

