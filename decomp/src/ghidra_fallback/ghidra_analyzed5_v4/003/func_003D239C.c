#include "ghidra_types.h"

extern int func_00108630(undefined4 param_1,int param_2,undefined4 param_3);
extern int func_0010AC24(undefined4 param_1,undefined4 param_2);
extern undefined1 *DAT_003d23ac;
extern undefined4 DAT_003d23b0;

// USA 003D239C <- EU 003D2378 (Ghidra, non-matching)
// GLOBAL DAT_003d23ac undefined1 *
// GLOBAL DAT_003d23b0 undefined4

uint func_003D239C(void)

{
  uint uVar1;
  undefined4 in_r3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_8 ((uint *)(albw_frame + 0x8))
  local_8[0] = CONCAT31((int3)((uint)in_r3 >> 8),*DAT_003d23ac);
  uVar1 = func_00108630(local_8,1,DAT_003d23b0);
  if ((int)uVar1 < 0) {
    func_0010AC24(uVar1,0x3d23a0);
  }
  return local_8[0] & 0xff;
}

