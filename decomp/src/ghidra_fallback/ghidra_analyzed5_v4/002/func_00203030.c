#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern float func_004FAD90(int param_1);
extern int DAT_00203088;
extern char s_SE_BombZako_APPEAR_00203074[];

// USA 00203030 <- EU 00203030 (Ghidra, non-matching)
// GLOBAL DAT_00203088 int
// GLOBAL s_SE_BombZako_APPEAR_00203074 string

undefined4 func_00203030(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  func_004FAD90((int)param_1);
  local_10 = DAT_00203088;
  param_1[0x167] = param_1[0x167] & 0xffffff7f;
  local_c = s_SE_BombZako_APPEAR_00203074;
  return func_00150A84(param_1,&local_10,0);
}

