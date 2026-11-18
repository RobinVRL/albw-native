#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern undefined4 DAT_001c8e34;
extern undefined4 DAT_001c8e38;
extern undefined4 DAT_001c8e3c;

// USA 001C8DB0 <- EU 001C8DB0 (Ghidra, non-matching)
// GLOBAL DAT_001c8e34 undefined4
// GLOBAL DAT_001c8e38 undefined4
// GLOBAL DAT_001c8e3c undefined4

void func_001C8DB0(int param_1)

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
  *(undefined1 *)(param_1 + 0x4a1) = 1;
  if (*(int *)(param_1 + 0x438) != 0) {
    local_68[1] = 3;
    local_60 = &local_5c;
    local_14 = 10;
    local_10 = 0;
    local_5c = 0;
    local_68[0] = 1;
    local_58 = DAT_001c8e38;
    local_54 = DAT_001c8e34;
    local_50 = DAT_001c8e3c;
    local_48 = unaff_r4 | 0xff;
    local_4c = DAT_001c8e34;
    func_0016898C(*(int *)(param_1 + 0x438),local_68);
  }
  return;
}

