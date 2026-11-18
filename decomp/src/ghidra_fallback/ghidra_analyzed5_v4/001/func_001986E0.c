#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int DAT_0019872c;
extern char s_SE_ZoraFire_DISAPPEAR_00198714[];

// USA 001986E0 <- EU 001986E0 (Ghidra, non-matching)
// GLOBAL DAT_0019872c int
// GLOBAL s_SE_ZoraFire_DISAPPEAR_00198714 string

undefined4 func_001986E0(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  *(undefined1 *)((int)param_1 + 0x2d7) = 1;
  local_c = s_SE_ZoraFire_DISAPPEAR_00198714;
  local_10 = DAT_0019872c;
  return func_00150A84(param_1,&local_10,0);
}

