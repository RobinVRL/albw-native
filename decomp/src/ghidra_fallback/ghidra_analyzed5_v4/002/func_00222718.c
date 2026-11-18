#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_0058A870(int param_1,uint param_2);
extern undefined4 DAT_002227b0;
extern undefined4 DAT_002227b4;
extern undefined4 DAT_002227b8;

// USA 00222718 <- EU 00222718 (Ghidra, non-matching)
// GLOBAL DAT_002227b0 undefined4
// GLOBAL DAT_002227b4 undefined4
// GLOBAL DAT_002227b8 undefined4

void func_00222718(int param_1,undefined4 param_2,uint param_3)

{
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 ((uint *)(albw_frame + 0x0))
  #define local_68 (*(undefined4 * *)(albw_frame + 0x8))
  #define local_64 (*(undefined4 *)(albw_frame + 0xc))
  #define local_60 (*(undefined4 *)(albw_frame + 0x10))
  #define local_5c (*(undefined4 *)(albw_frame + 0x14))
  #define local_58 (*(undefined4 *)(albw_frame + 0x18))
  #define local_54 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_50 (*(uint *)(albw_frame + 0x20))
  #define local_1c (*(uint *)(albw_frame + 0x54))
  #define local_18 (*(undefined1 *)(albw_frame + 0x58))
  if (*(int *)(param_1 + 0x20) != 0) {
    local_1c = func_0058A870(*(int *)(param_1 + 0x10),param_3);
    local_70[1] = 3;
    local_68 = &local_64;
    local_70[0] = 1;
    local_18 = 0;
    local_60 = DAT_002227b4;
    local_5c = DAT_002227b0;
    local_58 = DAT_002227b8;
    local_50 = param_3 | 0xff;
    local_54 = DAT_002227b0;
    local_64 = param_2;
    func_0016898C(*(int *)(param_1 + 0x20),local_70);
  }
  return;
}

