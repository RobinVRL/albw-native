#include "ghidra_types.h"

extern int func_002AFEC4(int param_1,int param_2,int param_3);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern undefined4 DAT_002a0944;
extern undefined4 DAT_002a0948;

// USA 002A08F8 <- EU 002A08D4 (Ghidra, non-matching)
// GLOBAL DAT_002a0944 undefined4
// GLOBAL DAT_002a0948 undefined4

undefined4 func_002A08F8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_002a0944;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x85;
  *(undefined4 *)(param_1 + 0x900) = uVar1;
  uVar1 = DAT_002a0948;
  *(undefined4 *)(param_1 + 0x914) = 0x78;
  *(undefined4 *)(param_1 + 0x918) = uVar1;
  *(undefined4 *)(param_1 + 0x910) = 0;
  *(undefined1 *)(param_1 + 0x895) = 0;
  func_002AFEC4(param_1,-1,-1);
  return func_004FC07C(param_1,4,0xffffffff,0);
}

