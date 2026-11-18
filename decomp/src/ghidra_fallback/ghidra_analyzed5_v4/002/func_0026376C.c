#include "ghidra_types.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0054DDF4(int param_1,uint param_2);
extern undefined4 uRam002637ec;

// USA 0026376C <- EU 00263794 (Ghidra, non-matching)
// GLOBAL UNK_002637ec undefined4

void func_0026376C(int param_1)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  
  *(undefined1 *)(*(int *)(param_1 + 0x420) + 0x22) = 0;
  puVar2 = (undefined2 *)func_0054DDF4(param_1,0);
  *(undefined2 *)(*(int *)(param_1 + 0x420) + 0x30) = *puVar2;
  func_004FABDC(param_1,7,0xffffffff,0);
  uVar1 = uRam002637ec;
  *(undefined4 *)(param_1 + 0x3dc) = uRam002637ec;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(undefined1 *)(param_1 + 0xa58) = 0;
  return;
}

