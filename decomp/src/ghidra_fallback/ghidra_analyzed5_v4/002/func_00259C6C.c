#include "ghidra_types.h"

extern int func_004EC988(int param_1,int *param_2,int param_3);
extern int DAT_00259cdc;
extern int *DAT_00259ce0;
extern char s_SE_ENV_ZORA_SPRING_00259cc8[];

// USA 00259C6C <- EU 00259C94 (Ghidra, non-matching)
// GLOBAL DAT_00259cdc int
// GLOBAL DAT_00259ce0 int *
// GLOBAL s_SE_ENV_ZORA_SPRING_00259cc8 string

undefined4 func_00259C6C(void)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_c = s_SE_ENV_ZORA_SPRING_00259cc8;
  local_10 = DAT_00259cdc;
  return func_004EC988(*DAT_00259ce0,&local_10,0);
}

