#include "ghidra_types.h"

extern int func_002A604C(int param_1);
extern int func_002A6B54(int param_1);
extern undefined4 DAT_002a5384;
extern undefined4 DAT_002a5388;

// USA 002A5350 <- EU 002A532C (Ghidra, non-matching)
// GLOBAL DAT_002a5384 undefined4
// GLOBAL DAT_002a5388 undefined4

void func_002A5350(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x3e0) = DAT_002a5384;
  *(undefined1 *)(param_1 + 0xb94) = 0;
  *(undefined1 *)(param_1 + 0xb91) = 0;
  uVar1 = DAT_002a5388;
  *(undefined4 *)(param_1 + 0xb64) = 100;
  *(undefined4 *)(param_1 + 0xb68) = uVar1;
  *(undefined4 *)(param_1 + 0xb60) = 0;
  func_002A604C(param_1);
  func_002A6B54(param_1);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffffe;
  return;
}

