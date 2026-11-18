#include "ghidra_types.h"

extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int DAT_002bd24c;
extern int DAT_002bd250;

// USA 002BD210 <- EU 002BD1EC (Ghidra, non-matching)
// GLOBAL DAT_002bd24c int
// GLOBAL DAT_002bd250 int

void func_002BD210(int *param_1)

{
  int iVar1;
  
  func_004F88A0(param_1,(undefined2 *)param_1[0x247]);
  iVar1 = DAT_002bd24c;
  *(undefined1 *)(param_1 + 599) = 1;
  param_1[0xf7] = iVar1;
  param_1[0xf8] = iVar1;
  param_1[0xf9] = iVar1;
  func_004FC07C((int)param_1,4,0xffffffff,0);
  iVar1 = DAT_002bd250;
  param_1[0x250] = 0x1e;
  param_1[0x251] = iVar1;
  param_1[0x24f] = 0;
  return;
}

