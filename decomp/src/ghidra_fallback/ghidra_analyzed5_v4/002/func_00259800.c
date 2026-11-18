#include "ghidra_types.h"

extern int func_004EC988(int param_1,int *param_2,int param_3);
extern int DAT_00259870;
extern int *DAT_00259874;
extern char s_SE_ENV_HOLY_PLACE_0025985c[];

// USA 00259800 <- EU 00259828 (Ghidra, non-matching)
// GLOBAL DAT_00259870 int
// GLOBAL DAT_00259874 int *
// GLOBAL s_SE_ENV_HOLY_PLACE_0025985c string

undefined4 func_00259800(void)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_c = s_SE_ENV_HOLY_PLACE_0025985c;
  local_10 = DAT_00259870;
  return func_004EC988(*DAT_00259874,&local_10,0);
}

