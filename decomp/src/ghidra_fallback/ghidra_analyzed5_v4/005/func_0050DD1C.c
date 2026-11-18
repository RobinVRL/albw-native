#include "ghidra_types.h"

extern int func_00564A78(int param_1,int *param_2);
extern int DAT_0050dd3c;
extern char s_skl_root_0050dd30[];

// USA 0050DD1C <- EU 0050DCF4 (Ghidra, non-matching)
// GLOBAL DAT_0050dd3c int
// GLOBAL s_skl_root_0050dd30 string

void func_0050DD1C(int param_1)

{
  uint uVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_c = s_skl_root_0050dd30;
  local_10 = DAT_0050dd3c;
  uVar1 = func_00564A78(*(int *)(param_1 + 0x7a0),&local_10);
  *(uint *)(param_1 + 0x840) = uVar1;
  *(undefined4 *)(param_1 + 0x844) = 1;
  return;
}

