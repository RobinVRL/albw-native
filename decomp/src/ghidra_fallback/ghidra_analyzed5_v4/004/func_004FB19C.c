#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int DAT_004fb1cc;
extern char s_SE_EN_FALL_WATER_004fb1b8[];

// USA 004FB19C <- EU 004FB174 (Ghidra, non-matching)
// GLOBAL DAT_004fb1cc int
// GLOBAL s_SE_EN_FALL_WATER_004fb1b8 string

undefined4 func_004FB19C(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_10 = DAT_004fb1cc;
  local_c = s_SE_EN_FALL_WATER_004fb1b8;
  func_00150A84(param_1,&local_10,0);
  return (**(code **)(param_1[200] + 0x38))(param_1 + 200);
}

