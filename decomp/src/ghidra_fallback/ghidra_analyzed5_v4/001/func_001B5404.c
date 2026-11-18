#include "ghidra_types.h"

extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern undefined4 DAT_001b5460;
extern undefined4 DAT_001b5464;
extern undefined4 DAT_001b5468;

// USA 001B5404 <- EU 001B5404 (Ghidra, non-matching)
// GLOBAL DAT_001b5460 undefined4
// GLOBAL DAT_001b5464 undefined4
// GLOBAL DAT_001b5468 undefined4

void func_001B5404(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_001b5460;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_001b5460;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(undefined4 *)(param_1 + 0x950) = DAT_001b5464;
  func_004FC07C(param_1,3,0xffffffff,0);
  uVar1 = DAT_001b5468;
  *(undefined4 *)(param_1 + 0x934) = 0xb4;
  *(undefined4 *)(param_1 + 0x938) = uVar1;
  *(undefined4 *)(param_1 + 0x930) = 0;
  *(undefined4 *)(param_1 + 0x944) = 0;
  return;
}

