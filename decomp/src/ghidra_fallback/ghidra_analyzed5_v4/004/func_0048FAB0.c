#include "ghidra_types.h"

extern int func_0049BEAC(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4,undefined1 param_5, undefined4 param_6,undefined4 param_7,int param_8);
extern int DAT_0048fac8;

// USA 0048FAB0 <- EU 0048FA88 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// PARAM param_6 Stack[0x4]:1 undefined1
// PARAM param_7 Stack[0x8]:4 undefined4
// PARAM param_8 Stack[0xc]:4 undefined4
// PARAM param_9 Stack[0x10]:4 int
// GLOBAL DAT_0048fac8 int

undefined4 func_0048FAB0(undefined4 *param_1,int param_2,int param_3,int *param_4,undefined4 param_5,
                  undefined1 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = func_0049BEAC(param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar2 = DAT_0048fac8 + 0x4c;
  *piVar1 = DAT_0048fac8;
  piVar1[6] = iVar2;
  piVar1[0x23] = param_3;
  return (undefined4)param_1;
}

