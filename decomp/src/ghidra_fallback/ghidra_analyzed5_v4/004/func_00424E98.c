#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int DAT_00424ecc;
extern char s_SE_S_ITEM_SLIDER_OFF_00424eb4[];

// USA 00424E98 <- EU 00424E78 (Ghidra, non-matching)
// GLOBAL DAT_00424ecc int
// GLOBAL s_SE_S_ITEM_SLIDER_OFF_00424eb4 string

undefined4 func_00424E98(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  func_002313DC(param_1 + 0x48);
  local_c = s_SE_S_ITEM_SLIDER_OFF_00424eb4;
  local_10 = DAT_00424ecc;
  return func_00533078(param_1,&local_10,0);
}

