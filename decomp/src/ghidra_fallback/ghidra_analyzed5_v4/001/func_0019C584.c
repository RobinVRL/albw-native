#include "ghidra_types.h"

extern int func_001692F8(int param_1,uint *param_2);
extern undefined4 DAT_0019c5fc;
extern undefined4 DAT_0019c600;
extern undefined4 DAT_0019c604;

// USA 0019C584 <- EU 0019C584 (Ghidra, non-matching)
// GLOBAL DAT_0019c5fc undefined4
// GLOBAL DAT_0019c600 undefined4
// GLOBAL DAT_0019c604 undefined4

undefined4 func_0019C584(int param_1)

{
  uint in_r12;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 ((uint *)(albw_frame + 0x0))
  #define local_68 (*(undefined4 * *)(albw_frame + 0x8))
  #define local_64 (*(undefined4 *)(albw_frame + 0xc))
  #define local_60 (*(undefined4 *)(albw_frame + 0x10))
  #define local_5c (*(undefined4 *)(albw_frame + 0x14))
  #define local_58 (*(undefined4 *)(albw_frame + 0x18))
  #define local_54 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_50 (*(uint *)(albw_frame + 0x20))
  #define local_1c (*(undefined4 *)(albw_frame + 0x54))
  #define local_18 (*(undefined1 *)(albw_frame + 0x58))
  local_70[1] = 3;
  local_68 = &local_64;
  local_64 = 0xffffffff;
  local_1c = 10;
  local_18 = 0;
  local_70[0] = 1;
  local_60 = DAT_0019c600;
  local_5c = DAT_0019c5fc;
  local_58 = DAT_0019c604;
  local_50 = in_r12 | 0xff;
  local_54 = DAT_0019c5fc;
  return func_001692F8(*(int *)(param_1 + 0x414),local_70);
}

