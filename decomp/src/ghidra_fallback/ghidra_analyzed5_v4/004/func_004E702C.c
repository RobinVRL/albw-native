#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern undefined4 DAT_004e7078;
extern undefined4 DAT_004e707c;
extern undefined4 DAT_004e7080;

// USA 004E702C <- EU 004E7004 (Ghidra, non-matching)
// GLOBAL DAT_004e7078 undefined4
// GLOBAL DAT_004e707c undefined4
// GLOBAL DAT_004e7080 undefined4

undefined4 func_004E702C(int param_1)

{
  uint unaff_r4;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 ((uint *)(albw_frame + 0x8))
  #define local_60 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_5c (*(undefined4 *)(albw_frame + 0x14))
  #define local_58 (*(undefined4 *)(albw_frame + 0x18))
  #define local_54 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x20))
  #define local_4c (*(undefined4 *)(albw_frame + 0x24))
  #define local_48 (*(uint *)(albw_frame + 0x28))
  #define local_14 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_10 (*(undefined1 *)(albw_frame + 0x60))
  local_68[1] = 3;
  local_60 = &local_5c;
  local_14 = 10;
  local_10 = 0;
  local_5c = 0;
  local_68[0] = 1;
  local_58 = DAT_004e707c;
  local_54 = DAT_004e7078;
  local_50 = DAT_004e7080;
  local_48 = unaff_r4 | 0xff;
  local_4c = DAT_004e7078;
  return func_0016898C(*(int *)(param_1 + 0x4d8),local_68);
}

