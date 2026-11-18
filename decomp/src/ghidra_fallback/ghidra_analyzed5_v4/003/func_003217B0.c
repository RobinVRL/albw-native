#include "ghidra_types.h"

extern int func_0025BDA4(int *param_1,int *param_2);
extern int DAT_003217d0;
extern int DAT_003217d4;
extern int *DAT_003217d8;

// USA 003217B0 <- EU 0032178C (Ghidra, non-matching)
// GLOBAL DAT_003217d0 int
// GLOBAL DAT_003217d4 int
// GLOBAL DAT_003217d8 int *

undefined4 func_003217B0(undefined4 param_1,uint param_2)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  if (0x46 < param_2) {
    return 0;
  }
  local_c = *(undefined4 *)(DAT_003217d0 + param_2 * 4);
  local_10 = DAT_003217d4;
  return func_0025BDA4(*(int **)(*DAT_003217d8 + 0x40),&local_10);
}

