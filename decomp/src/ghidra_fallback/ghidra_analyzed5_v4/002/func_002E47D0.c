#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern float func_004FAD90(int param_1);
extern int DAT_002e4818;
extern int DAT_002e4830;
extern char s_SE_BigIceGimos_MELT_002e481c[];

// USA 002E47D0 <- EU 002E47AC (Ghidra, non-matching)
// GLOBAL DAT_002e4818 int
// GLOBAL DAT_002e4830 int
// GLOBAL s_SE_BigIceGimos_MELT_002e481c string

undefined4 func_002E47D0(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar1 = DAT_002e4818;
  param_1[0xf9] = DAT_002e4818;
  param_1[0xf7] = iVar1;
  *(undefined1 *)(param_1[0x231] + 0x44) = 0;
  func_004FAD90((int)param_1);
  local_18 = DAT_002e4830;
  param_1[0x167] = param_1[0x167] & 0xffffff5fU | 0x4000;
  *(undefined1 *)(param_1 + 0x216) = 0;
  local_14 = s_SE_BigIceGimos_MELT_002e481c;
  return func_00150A84(param_1,&local_18,0);
}

