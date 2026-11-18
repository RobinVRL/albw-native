#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int DAT_00335378;
extern char s_SE_OBJ_FALL_0033536c[];

// USA 00335358 <- EU 00335334 (Ghidra, non-matching)
// GLOBAL DAT_00335378 int
// GLOBAL s_SE_OBJ_FALL_0033536c string

undefined4 func_00335358(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  if (*(char *)((int)param_1 + 0x531) != '\0') {
    return 0;
  }
  local_c = s_SE_OBJ_FALL_0033536c;
  local_10 = DAT_00335378;
  return func_00150A84(param_1,&local_10,0);
}

