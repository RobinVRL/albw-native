#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int DAT_0018e6b0;
extern int DAT_0018e6c8;
extern char s_SE_HookShot_GRAB_0018e6b4[];

// USA 0018E66C <- EU 0018E66C (Ghidra, non-matching)
// GLOBAL DAT_0018e6b0 int
// GLOBAL DAT_0018e6c8 int
// GLOBAL s_SE_HookShot_GRAB_0018e6b4 string

undefined4 func_0018E66C(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  iVar1 = DAT_0018e6b0;
  param_1[0x149] = 0;
  param_1[0xf7] = iVar1;
  param_1[0xf8] = iVar1;
  local_10 = DAT_0018e6c8;
  param_1[0xf9] = iVar1;
  local_c = s_SE_HookShot_GRAB_0018e6b4;
  return func_00150A84(param_1,&local_10,0);
}

