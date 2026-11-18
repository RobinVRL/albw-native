#include "ghidra_types.h"

extern int func_00108630(undefined4 param_1,int param_2,undefined4 param_3);
extern int func_0010AC24(undefined4 param_1,undefined4 param_2);

// USA 003D252C <- EU 003D2508 (Ghidra, non-matching)

uint func_003D252C(void)

{
  uint uVar1;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define local_c8 ((uint *)(albw_frame + 0x8))
  uVar1 = func_00108630(local_c8,0xc0,0xc0000);
  if ((int)uVar1 < 0) {
    func_0010AC24(uVar1,0x3d2528);
  }
  return (local_c8[0] & 0x20) >> 5;
}

