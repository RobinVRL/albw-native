#include "ghidra_types.h"

extern int func_003F8674(int param_1,int *param_2,int param_3,undefined4 param_4,int param_5, undefined1 *param_6);
extern undefined4 DAT_003f99dc;

// USA 003F99B8 <- EU 003F9998 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 undefined1 *
// GLOBAL DAT_003f99dc undefined4

undefined4 *
func_003F99B8(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4,int param_5,
             undefined1 *param_6)

{
  *param_1 = DAT_003f99dc;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x31) = 0;
  param_1[0xd] = 0;
  func_003F8674((int)param_1,param_2,param_3,param_4,param_5,param_6);
  return param_1;
}

