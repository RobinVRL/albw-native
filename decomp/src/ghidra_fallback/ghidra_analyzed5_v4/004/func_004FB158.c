#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int DAT_004fb170;
extern char s_SE_EN_BOUND_FLOOR_004fb15c[];

// USA 004FB158 <- EU 004FB130 (Ghidra, non-matching)
// GLOBAL DAT_004fb170 int
// GLOBAL s_SE_EN_BOUND_FLOOR_004fb15c string

undefined4 func_004FB158(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_c = s_SE_EN_BOUND_FLOOR_004fb15c;
  local_10 = DAT_004fb170;
  return func_00150A84(param_1,&local_10,0);
}

