#include "ghidra_types.h"

extern int func_004EC988(int param_1,int *param_2,int param_3);
extern int DAT_0025a4d0;
extern int *DAT_0025a4d4;
extern char s_SE_ENV_UNDER_BRIDGE_0025a4bc[];

// USA 0025A460 <- EU 0025A488 (Ghidra, non-matching)
// GLOBAL DAT_0025a4d0 int
// GLOBAL DAT_0025a4d4 int *
// GLOBAL s_SE_ENV_UNDER_BRIDGE_0025a4bc string

undefined4 func_0025A460(void)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_c = s_SE_ENV_UNDER_BRIDGE_0025a4bc;
  local_10 = DAT_0025a4d0;
  return func_004EC988(*DAT_0025a4d4,&local_10,0);
}

