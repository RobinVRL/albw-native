#include "ghidra_types.h"

extern int func_00108630(undefined4 param_1,int param_2,undefined4 param_3);
extern int func_0010AC24(undefined4 param_1,undefined4 param_2);
extern uint *DAT_003d2374;

// USA 003D2360 <- EU 003D233C (Ghidra, non-matching)
// GLOBAL DAT_003d2374 uint *

uint func_003D2360(void)

{
  uint uVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_8 ((uint *)(albw_frame + 0x8))
  local_8[0] = *DAT_003d2374;
  uVar1 = func_00108630(local_8,4,0xb0000);
  if ((int)uVar1 < 0) {
    func_0010AC24(uVar1,0x3d2364);
  }
  return local_8[0] >> 0x18;
}

