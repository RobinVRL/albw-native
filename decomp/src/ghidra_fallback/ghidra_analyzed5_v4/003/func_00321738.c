#include "ghidra_types.h"

extern int func_0025BCAC(int param_1,int *param_2,int param_3);
extern int DAT_0032175c;
extern int DAT_00321760;
extern int *DAT_00321764;

// USA 00321738 <- EU 00321714 (Ghidra, non-matching)
// GLOBAL DAT_0032175c int
// GLOBAL DAT_00321760 int
// GLOBAL DAT_00321764 int *

undefined4 func_00321738(undefined4 param_1,uint param_2)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  if (0x46 < param_2) {
    return 0;
  }
  local_c = *(undefined4 *)(DAT_0032175c + param_2 * 4);
  local_10 = DAT_00321760;
  return func_0025BCAC(*(int *)(*DAT_00321764 + 0x40),&local_10,0);
}

