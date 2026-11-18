#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);

// USA 0042AD18 <- EU 0042ACF8 (Ghidra, non-matching)

undefined4 func_0042AD18(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  fVar2 = *(float *)(param_1 + 0x58) -
          ((*(float *)(param_2 + 0x58) * *(float *)(param_1 + 4) +
            *(float *)(param_2 + 0x5c) * *(float *)(param_1 + 8) +
           *(float *)(param_2 + 0x60) * *(float *)(param_1 + 0xc)) - *(float *)(param_2 + 100));
  if (*(float *)(param_1 + 0x58) <= fVar2) {
    uVar1 = 0;
  }
  else {
    if (param_3 != 0) {
      *(float *)(param_3 + 0x1c) = fVar2;
      *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_2 + 0x58);
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 0x5c);
      *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_2 + 0x60);
      func_00115D70(&local_1c,(float *)(param_3 + 4),*(float *)(param_1 + 0x58) - fVar2);
      local_28 = local_1c;
      uStack_24 = uStack_18;
      uStack_20 = uStack_14;
      func_00115C54(&local_1c,(float *)(param_1 + 4),&local_28);
      *(float *)(param_3 + 0x10) = local_1c;
      *(undefined4 *)(param_3 + 0x14) = uStack_18;
      *(undefined4 *)(param_3 + 0x18) = uStack_14;
    }
    uVar1 = 1;
  }
  return uVar1;
}

