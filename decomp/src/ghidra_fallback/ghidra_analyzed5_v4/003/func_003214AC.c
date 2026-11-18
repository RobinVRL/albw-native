#include "ghidra_types.h"

extern int func_002944C4(int param_1,int *param_2);
extern undefined4 *DAT_003214c4;
extern undefined4 DAT_003214c8;
extern int *DAT_003214cc;

// USA 003214AC <- EU 00321488 (Ghidra, non-matching)
// GLOBAL DAT_003214c4 undefined4 *
// GLOBAL DAT_003214c8 undefined4
// GLOBAL DAT_003214cc int *

undefined4 func_003214AC(undefined4 param_1,int param_2)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  if (param_2 != 0) {
    return 0;
  }
  local_c = *DAT_003214c4;
  local_10 = DAT_003214c8;
  return func_002944C4(*DAT_003214cc,&local_10);
}

