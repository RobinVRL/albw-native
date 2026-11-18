#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001D9D40(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4);
extern int func_004ED46C(int param_1,int param_2);
extern undefined4 DAT_002a123c;
extern int DAT_002a1240;
extern int *DAT_002a1244;
extern int DAT_002a1248;

// USA 002A11DC <- EU 002A11B8 (Ghidra, non-matching)
// GLOBAL DAT_002a123c undefined4
// GLOBAL DAT_002a1240 int
// GLOBAL DAT_002a1244 int *
// GLOBAL DAT_002a1248 int

void func_002A11DC(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  local_c = DAT_002a123c;
  local_10 = DAT_002a1240;
  func_00150A84(param_1,&local_10,0);
  func_004ED46C(*DAT_002a1244,7);
  func_001D9D40(param_1 + 0xf4,param_1[0xfa],0,param_1[0xb3]);
  iVar1 = DAT_002a1248;
  param_1[0x230] = 10;
  param_1[0x231] = iVar1;
  param_1[0x22f] = 0;
  *(undefined1 *)(param_1[0x235] + 0x61) = 1;
  return;
}

