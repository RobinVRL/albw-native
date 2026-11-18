#include "ghidra_types.h"

extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_00584C14(int param_1,int *param_2);
extern undefined4 DAT_0022bd3c;
extern undefined DAT_0022bd40;
extern int DAT_0022bd50;
extern char s__Leg_front_0022bd43[];
extern undefined4 _DAT_0022bd40;

// USA 0022BCB8 <- EU 0022BCB8 (Ghidra, non-matching)
// GLOBAL DAT_0022bd3c undefined4
// GLOBAL DAT_0022bd40 undefined
// GLOBAL DAT_0022bd50 int
// GLOBAL s_;Leg_front_0022bd43 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_0022BCB8(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  uVar1 = DAT_0022bd3c;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_0022bd3c;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  func_004FC07C(param_1,0,0xffffffff,0);
  uVar1 = _DAT_0022bd40;
  *(undefined4 *)(param_1 + 0xa74) = 200;
  *(undefined4 *)(param_1 + 0xa78) = uVar1;
  *(undefined4 *)(param_1 + 0xa70) = 0;
  local_14 = s__Leg_front_0022bd43 + 1;
  local_18 = DAT_0022bd50;
  uVar2 = func_00584C14(*(int *)(param_1 + 0x40c),&local_18);
  return func_004CEA18(*(int *)(param_1 + 0x40c),0,uVar2);
}

