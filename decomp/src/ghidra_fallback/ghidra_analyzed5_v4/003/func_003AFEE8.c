#include "ghidra_types.h"

extern int func_001692F8(int param_1,uint *param_2);
extern int func_004A9120(undefined4 param_1,int param_2);
extern int func_00566750(int param_1,int param_2);
extern undefined4 DAT_003aff60;
extern undefined4 DAT_003aff64;
extern undefined4 DAT_003aff68;
extern undefined4 *DAT_003aff6c;

// USA 003AFEE8 <- EU 003AFEC4 (Ghidra, non-matching)
// GLOBAL DAT_003aff60 undefined4
// GLOBAL DAT_003aff64 undefined4
// GLOBAL DAT_003aff68 undefined4
// GLOBAL DAT_003aff6c undefined4 *

undefined4 func_003AFEE8(int param_1)

{
  uint in_r12;
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
  local_5c = 0xffffffff;
  local_10 = 0;
  local_68[0] = 1;
  local_58 = DAT_003aff64;
  local_54 = DAT_003aff60;
  local_50 = DAT_003aff68;
  local_4c = DAT_003aff60;
  local_48 = in_r12 | 0xff;
  local_14 = 0;
  func_001692F8(*(int *)(param_1 + 0x44),local_68);
  func_00566750(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x50) + 8),
                *(int *)(*(int *)(param_1 + 0x40) + 0x24));
  return func_004A9120(*DAT_003aff6c,param_1 + 0xd8);
}

