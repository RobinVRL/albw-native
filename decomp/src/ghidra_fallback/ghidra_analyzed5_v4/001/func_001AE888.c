#include "ghidra_types.h"

extern int func_002F8DE4(int *param_1,int param_2,uint param_3,int param_4);
extern int DAT_001ae8b8;

// USA 001AE888 <- EU 001AE888 (Ghidra, non-matching)
// GLOBAL DAT_001ae8b8 int

void func_001AE888(int *param_1)

{
  int iVar1;
  
  func_002F8DE4(param_1,0xc,0xffffffff,0);
  iVar1 = DAT_001ae8b8;
  *(undefined1 *)((int)param_1 + 0x909) = 0;
  param_1[0xf7] = iVar1;
  param_1[0xf9] = iVar1;
  return;
}

