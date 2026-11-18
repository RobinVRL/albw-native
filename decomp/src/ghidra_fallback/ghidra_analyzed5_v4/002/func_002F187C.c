#include "ghidra_types.h"

extern int func_0035E958(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004F9554(int param_1,ushort param_2,ushort param_3,int param_4);
extern float func_004FAD90(int param_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int DAT_002f1990;
extern int DAT_002f1994;
extern float DAT_002f1998;
extern int DAT_002f199c;

// USA 002F187C <- EU 002F1858 (Ghidra, non-matching)
// GLOBAL DAT_002f1990 int
// GLOBAL DAT_002f1994 int
// GLOBAL DAT_002f1998 float
// GLOBAL DAT_002f199c int

void func_002F187C(int *param_1)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 ((int *)(albw_frame + 0xc))
  func_004F9554(param_1[0x10c],7,0,1);
  func_004F9554(param_1[0x10d],7,0,1);
  func_004F88A0(param_1,(undefined2 *)param_1[699]);
  func_004FAD90((int)param_1);
  param_1[0x167] = param_1[0x167] | 0x87;
  *(undefined1 *)((int)param_1 + 0xd47) = 1;
  func_004FC07C((int)param_1,0x1b,0xffffffff,0);
  iVar2 = DAT_002f1990;
  param_1[0x2c4] = 0xb4;
  param_1[0x2c5] = iVar2;
  iVar2 = DAT_002f1994;
  param_1[0x2c3] = 0;
  param_1[0xf7] = iVar2;
  param_1[0xf8] = iVar2;
  param_1[0xf9] = iVar2;
  iVar1 = *(int *)(*(int *)(param_1[0x103] + 0x24) + 0x14) + param_1[0x2e0] * 0x30;
  local_20 = *(undefined4 *)(iVar1 + 0xc);
  local_18 = *(undefined4 *)(iVar1 + 0x2c);
  local_1c = ALBW_AS_F32(param_1[0xf5]) + DAT_002f1998;
  local_14[0] = param_1[0xb3];
  func_0035E958(&local_20,local_14,(uint)*(byte *)(param_1 + 0x352),0);
  *(undefined1 *)(param_1 + 0x327) = 0;
  *(undefined1 *)((int)param_1 + 0xc9d) = 0;
  param_1[0x353] = DAT_002f199c;
  param_1[0x2e6] = iVar2;
  return;
}

