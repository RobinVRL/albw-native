#include "ghidra_types.h"

extern int func_004A8BFC(int param_1,int param_2,uint param_3);
extern int func_004A9120(undefined4 param_1,int param_2);
extern int *DAT_0024f17c;

// USA 0024F10C <- EU 0024F10C (Ghidra, non-matching)
// GLOBAL DAT_0024f17c int *

void func_0024F10C(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  *(undefined1 *)(param_1 + 0x4b8) = 3;
  piVar1 = DAT_0024f17c;
  if (*(char *)(param_1 + 0x4d9) != '\0') {
    func_004A9120(*DAT_0024f17c,param_1 + 0x41c);
    func_004A8BFC(*piVar1,param_1 + 0x41c,(uint)*(byte *)(param_1 + 0x4b8));
  }
  *(undefined2 *)(param_1 + 0x44e) = 0x1f00;
  uVar2 = *(uint *)(*(int *)(param_1 + 0x42c) + 0x2c);
  *(uint *)(*(int *)(param_1 + 0x42c) + 0x2c) = uVar2 | 0x40000;
  *(uint *)(*(int *)(param_1 + 0x42c) + 0x2c) = uVar2 | 0x60000;
  return;
}

