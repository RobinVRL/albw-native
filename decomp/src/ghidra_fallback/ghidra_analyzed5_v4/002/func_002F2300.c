#include "ghidra_types.h"

extern int func_0035EE90(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004F9554(int param_1,ushort param_2,ushort param_3,int param_4);
extern float func_004FAD90(int param_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int DAT_002f243c;
extern int DAT_002f2440;
extern int DAT_002f2444;
extern float DAT_002f2448;
extern int DAT_002f244c;

// USA 002F2300 <- EU 002F22DC (Ghidra, non-matching)
// GLOBAL DAT_002f243c int
// GLOBAL DAT_002f2440 int
// GLOBAL DAT_002f2444 int
// GLOBAL DAT_002f2448 float
// GLOBAL DAT_002f244c int

void func_002F2300(int *param_1)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c ((int *)(albw_frame + 0x14))
  func_004F9554(param_1[0x10c],7,0,1);
  func_004F9554(param_1[0x10d],7,0,1);
  func_004F88A0(param_1,(undefined2 *)param_1[699]);
  func_004FAD90((int)param_1);
  param_1[0x167] = param_1[0x167] | 0x87;
  *(undefined1 *)((int)param_1 + 0xd47) = 1;
  func_004FC07C((int)param_1,0x1e,0xffffffff,0);
  iVar2 = DAT_002f2440;
  param_1[0x2c4] = DAT_002f243c;
  param_1[0x2c5] = iVar2;
  iVar2 = DAT_002f2444;
  param_1[0x2c3] = 0;
  param_1[0xf7] = iVar2;
  param_1[0xf8] = iVar2;
  param_1[0xf9] = iVar2;
  iVar1 = *(int *)(*(int *)(param_1[0x103] + 0x24) + 0x14) + param_1[0x2e0] * 0x30;
  local_28 = *(undefined4 *)(iVar1 + 0xc);
  local_20 = *(undefined4 *)(iVar1 + 0x2c);
  local_24 = ALBW_AS_F32(param_1[0xf5]) + DAT_002f2448;
  local_1c[0] = param_1[0xb3];
  func_0035EE90(&local_28,local_1c,(uint)*(byte *)(param_1 + 0x352),0);
  local_1c[0] = param_1[0xb3];
  func_0035EE90(&local_28,local_1c,(uint)*(byte *)(param_1 + 0x352),1);
  *(undefined1 *)(param_1 + 0x327) = 0;
  *(undefined1 *)((int)param_1 + 0xc9d) = 0;
  param_1[0x353] = DAT_002f244c;
  param_1[0x2e6] = iVar2;
  return;
}

