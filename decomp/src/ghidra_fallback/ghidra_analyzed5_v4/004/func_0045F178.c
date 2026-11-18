#include "ghidra_types.h"

extern int func_00441278(int param_1,undefined4 *param_2);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern undefined4 DAT_0045f1c0;
extern int *DAT_0045f1c4;
extern char s_EventItemGet_0045f1b0[];

// USA 0045F178 <- EU 0045F150 (Ghidra, non-matching)
// GLOBAL DAT_0045f1c0 undefined4
// GLOBAL DAT_0045f1c4 int *
// GLOBAL s_EventItemGet_0045f1b0 string

undefined4 func_0045F178(int param_1,int *param_2)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x14))
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0xffffffff;
  local_c = s_EventItemGet_0045f1b0;
  local_20[4] = DAT_0045f1c0;
  func_005826A4(*DAT_0045f1c4,local_20,local_20 + 4,param_2);
  return func_00441278(param_1,local_20);
}

