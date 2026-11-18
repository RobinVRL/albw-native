#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern undefined4 DAT_004d9444;
extern undefined4 DAT_004d9448;
extern undefined4 DAT_004d944c;

// USA 004D93F8 <- EU 004D93D0 (Ghidra, non-matching)
// GLOBAL DAT_004d9444 undefined4
// GLOBAL DAT_004d9448 undefined4
// GLOBAL DAT_004d944c undefined4

undefined4 func_004D93F8(int param_1)

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
  local_58 = DAT_004d9448;
  local_54 = DAT_004d9444;
  local_50 = DAT_004d944c;
  local_48 = unaff_r4 | 0xff;
  local_4c = DAT_004d9444;
  return func_0016898C(*(int *)(param_1 + 0x7b4),local_68);
}

