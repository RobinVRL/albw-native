#include "ghidra_types.h"

extern int func_004FB024(int param_1);
extern int func_004FCD5C(int param_1,int param_2);
extern int func_004FD038(int param_1,undefined1 param_2);
extern undefined4 DAT_0026d070;
extern undefined4 DAT_0026d074;

// USA 0026CFE0 <- EU 0026D008 (Ghidra, non-matching)
// GLOBAL DAT_0026d070 undefined4
// GLOBAL DAT_0026d074 undefined4

undefined4 func_0026CFE0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0026d070;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_0026d070;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffffe;
  func_004FCD5C(param_1 + 0x5a8,0);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffffb;
  func_004FD038(param_1 + 0x5a8,0);
  *(undefined4 *)(param_1 + 0x4f8) = DAT_0026d074;
  return func_004FB024(param_1);
}

