#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern undefined4 DAT_004e70f8;
extern undefined4 DAT_004e70fc;
extern undefined4 DAT_004e7100;

// USA 004E70AC <- EU 004E7084 (Ghidra, non-matching)
// GLOBAL DAT_004e70f8 undefined4
// GLOBAL DAT_004e70fc undefined4
// GLOBAL DAT_004e7100 undefined4

undefined4 func_004E70AC(int param_1)

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
  local_1c = 10;
  local_18 = 0;
  local_70[0] = 1;
  local_64 = 1;
  local_60 = DAT_004e70fc;
  local_5c = DAT_004e70f8;
  local_58 = DAT_004e7100;
  local_50 = in_r12 | 0xff;
  local_54 = DAT_004e70f8;
  return func_0016898C(*(int *)(param_1 + 0x4d8),local_70);
}

