#include "ghidra_types.h"

extern undefined4 DAT_0048d828;

// USA 0048D7DC <- EU 0048D7B4 (Ghidra, non-matching)
// GLOBAL DAT_0048d828 undefined4

undefined4 func_0048D7DC(int *param_1,int *param_2,undefined4 param_3)

{
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_98 (*(undefined4 *)(albw_frame + 0x8))
  #define local_94 (*(undefined1 * *)(albw_frame + 0xc))
  #define uStack_90 (*(undefined4 *)(albw_frame + 0x10))
  #define local_8c ((undefined1 *)(albw_frame + 0x14))
  #define uStack_d (*(undefined1 *)(albw_frame + 0x93))
  local_94 = local_8c;
  uStack_90 = 0x80;
  uStack_d = 0;
  local_8c[0] = 0;
  local_98 = DAT_0048d828;
  (**(code **)(*param_1 + 8))(param_1,&local_98);
  return (**(code **)(*param_2 + 0x38))(param_2,param_3,&local_98);
}

