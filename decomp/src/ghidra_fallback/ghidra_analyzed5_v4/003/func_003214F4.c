#include "ghidra_types.h"

extern int func_004EA120(int param_1,int *param_2);
extern undefined4 *DAT_0032150c;
extern int DAT_00321510;
extern int *DAT_00321514;

// USA 003214F4 <- EU 003214D0 (Ghidra, non-matching)
// GLOBAL DAT_0032150c undefined4 *
// GLOBAL DAT_00321510 int
// GLOBAL DAT_00321514 int *

undefined4 func_003214F4(undefined4 param_1,int param_2)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  if (param_2 != 0) {
    return 0;
  }
  local_c = *DAT_0032150c;
  local_10 = DAT_00321510;
  return func_004EA120(*DAT_00321514,&local_10);
}

