#include "ghidra_types.h"

extern int func_001DBE44(int param_1,undefined4 *param_2,undefined4 param_3);
extern undefined4 DAT_0029bfdc;
extern int *DAT_0029bfe0;

// USA 0029BFC8 <- EU 0029BFA4 (Ghidra, non-matching)
// GLOBAL DAT_0029bfdc undefined4
// GLOBAL DAT_0029bfe0 int *

undefined4 func_0029BFC8(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  #define local_8 (*(undefined4 *)(albw_frame + 0x8))
  local_10 = DAT_0029bfdc;
  *(undefined1 *)(param_1 + 0xe9) = 0;
  local_c = local_10;
  local_8 = local_10;
  return func_001DBE44(*DAT_0029bfe0,&local_10,0);
}

