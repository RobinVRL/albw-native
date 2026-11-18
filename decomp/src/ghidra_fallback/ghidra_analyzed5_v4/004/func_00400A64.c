#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_0041E7C4(int param_1,undefined4 *param_2);
extern byte *DAT_00400a90;

// USA 00400A64 <- EU 00400A44 (Ghidra, non-matching)
// GLOBAL DAT_00400a90 byte *

undefined8 func_00400A64(int param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  func_0041E7C4(param_1,param_2);
  *(undefined4 *)(param_1 + 0x61c) = 0;
  *(undefined4 *)(param_1 + 0x620) = 0;
  *(undefined4 *)(param_1 + 0x624) = 0;
  *(undefined1 *)(param_1 + 0x628) = 1;
  *(undefined1 *)(param_1 + 0x629) = 1;
  *(undefined1 *)(param_1 + 0x62a) = 7;
  *(undefined1 *)(param_1 + 0x62b) = 7;
  uVar1 = func_00110D44((undefined4 *)(param_1 + 0x634),DAT_00400a90,0x60);
  return uVar1;
}

