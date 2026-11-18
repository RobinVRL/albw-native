#include "ghidra_types.h"

extern int func_001C4538(int *param_1,int param_2,undefined4 param_3,undefined4 param_4);
extern int DAT_001c4534;

// USA 001C4508 <- EU 001C4508 (Ghidra, non-matching)
// GLOBAL DAT_001c4534 int

void func_001C4508(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  func_001C4538(param_1,param_2,param_3,param_4);
  iVar1 = DAT_001c4534;
  param_1[0x105] = 0xf;
  param_1[0x106] = iVar1;
  param_1[0x104] = 0;
  return;
}

