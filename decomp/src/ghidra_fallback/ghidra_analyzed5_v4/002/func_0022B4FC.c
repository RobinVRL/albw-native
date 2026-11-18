#include "ghidra_types.h"

extern int func_0036C058(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_00584C14(int param_1,int *param_2);
extern int DAT_0022b614;
extern undefined4 DAT_0022b618;
extern undefined4 *DAT_0022b61c;
extern undefined4 DAT_0022b620;
extern char s_Leg_front_0022b608[];

// USA 0022B4FC <- EU 0022B4FC (Ghidra, non-matching)
// GLOBAL DAT_0022b614 int
// GLOBAL DAT_0022b618 undefined4
// GLOBAL DAT_0022b61c undefined4 *
// GLOBAL DAT_0022b620 undefined4
// GLOBAL s_Leg_front_0022b608 string

void func_0022B4FC(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  *(undefined1 *)(param_1 + 0xa5c) = 2;
  *(int *)(param_1 + 0x990) = param_1 + 0xcdc;
  func_0036C058(param_1 + 0x968,0xffffffff,0xffffffff,0);
  local_14 = s_Leg_front_0022b608;
  local_18 = DAT_0022b614;
  uVar3 = func_00584C14(*(int *)(param_1 + 0x40c),&local_18);
  func_004CEA18(*(int *)(param_1 + 0x40c),1,uVar3);
  uVar1 = DAT_0022b618;
  *(undefined1 *)(param_1 + 0xd06) = 1;
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  func_004FC07C(param_1,0,0xffffffff,0);
  uVar1 = DAT_0022b620;
  puVar2 = DAT_0022b61c;
  *(undefined4 *)(param_1 + 0xcb8) = *DAT_0022b61c;
  *(undefined4 *)(param_1 + 0xcbc) = puVar2[1];
  *(undefined4 *)(param_1 + 0xcc0) = puVar2[2];
  *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_1 + 0xcb8);
  *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(param_1 + 0xcbc);
  *(undefined4 *)(param_1 + 0x578) = *(undefined4 *)(param_1 + 0xcc0);
  *(undefined1 *)(param_1 + 0xd05) = 0;
  *(uint *)(*(int *)(param_1 + 0x424) + 0x2c) =
       *(uint *)(*(int *)(param_1 + 0x424) + 0x2c) & 0xffefffff;
  *(undefined1 *)(param_1 + 0xd08) = 0;
  *(undefined4 *)(param_1 + 0xa74) = 0x14;
  *(undefined4 *)(param_1 + 0xa78) = uVar1;
  *(undefined4 *)(param_1 + 0xa70) = 0;
  *(undefined1 *)(param_1 + 0xd0b) = 0;
  return;
}

