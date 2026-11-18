#include "ghidra_types.h"

extern int func_00108630(undefined4 param_1,int param_2,undefined4 param_3);
extern int func_0010AC24(undefined4 param_1,undefined4 param_2);

// USA 003D23D8 <- EU 003D23B4 (Ghidra, non-matching)

void func_003D23D8(undefined4 *param_1)

{
  uint uVar1;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  uVar1 = func_00108630(&local_28,0x1c,0xa0000);
  if ((int)uVar1 < 0) {
    func_0010AC24(uVar1,0x3d23d8);
  }
  *param_1 = local_28;
  param_1[1] = uStack_24;
  param_1[2] = uStack_20;
  param_1[3] = uStack_1c;
  param_1[4] = uStack_18;
  param_1[5] = uStack_14;
  return;
}

