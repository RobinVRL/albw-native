#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);

// USA 004F48F0 <- EU 004F48C8 (Ghidra, non-matching)

void func_004F48F0(int param_1)

{
  float in_s0;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) != '\0') {
    func_00115C54(&local_1c,(float *)(param_1 + 0x7a8),(float *)(*(int *)(param_1 + 0x510) + 0x3c));
    local_28 = local_1c;
    uStack_24 = uStack_18;
    uStack_20 = uStack_14;
    func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),&local_28);
    return;
  }
  func_00115C54(&local_1c,(float *)(param_1 + 0x7a8),(float *)(param_1 + 0x3dc));
  local_28 = local_1c;
  uStack_24 = uStack_18;
  uStack_20 = uStack_14;
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),&local_28);
  *(int *)(param_1 + 1000) = *(int *)(param_1 + 0x4fc) + *(int *)(param_1 + 1000);
  *(int *)(param_1 + 0x500) = *(int *)(param_1 + 0x504) + *(int *)(param_1 + 0x500);
  return;
}

