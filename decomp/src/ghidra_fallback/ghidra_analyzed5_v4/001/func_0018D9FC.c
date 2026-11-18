#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int DAT_0018da38;
extern int DAT_0018da50;
extern char s_SE_HookShot_GRAB_0018da3c[];

// USA 0018D9FC <- EU 0018D9FC (Ghidra, non-matching)
// GLOBAL DAT_0018da38 int
// GLOBAL DAT_0018da50 int
// GLOBAL s_SE_HookShot_GRAB_0018da3c string

undefined4 func_0018D9FC(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_10 = DAT_0018da50;
  iVar1 = DAT_0018da38;
  param_1[0xf7] = DAT_0018da38;
  param_1[0xf8] = iVar1;
  param_1[0xf9] = iVar1;
  local_c = s_SE_HookShot_GRAB_0018da3c;
  return func_00150A84(param_1,&local_10,0);
}

