#include "ghidra_types.h"

extern int func_003D2564(undefined1 *param_1);

// USA 003D25A0 <- EU 003D257C (Ghidra, non-matching)

uint func_003D25A0(undefined4 param_1)

{
  uint in_r3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define auStack_8 ((uint *)(albw_frame + 0x8))
  auStack_8[0] = in_r3 & 0xffffff00;
  func_003D2564((undefined1 *)auStack_8);
  return auStack_8[0] & 0xff;
}

