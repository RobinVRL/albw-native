#include "ghidra_types.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern undefined4 DAT_00157b50;

// USA 00157AF0 <- EU 00157AF4 (Ghidra, non-matching)
// GLOBAL DAT_00157b50 undefined4

void func_00157AF0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00157b50;
  *(undefined1 *)(*(int *)(param_1 + 0x420) + 0x22) = 1;
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  if (*(uint *)(param_1 + 1000) < 0x80000000) {
    func_004FABDC(param_1,7,0,0);
  }
  else {
    func_004FABDC(param_1,4,0,0);
  }
  *(undefined4 *)(param_1 + 0xa34) = 0;
  return;
}

