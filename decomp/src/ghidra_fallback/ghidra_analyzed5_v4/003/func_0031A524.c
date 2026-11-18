#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern undefined DAT_0031a538;
extern int DAT_0031a554;
extern char s__SE_TurtleBullied_WATER_0031a53b[];
extern undefined4 _DAT_0031a538;

// USA 0031A524 <- EU 0031A500 (Ghidra, non-matching)
// GLOBAL DAT_0031a538 undefined
// GLOBAL DAT_0031a554 int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_0031A524(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  param_1[0x11e] = _DAT_0031a538;
  local_c = s__SE_TurtleBullied_WATER_0031a53b + 1;
  local_10 = DAT_0031a554;
  return func_00150A84(param_1,&local_10,0);
}

