#include "ghidra_types.h"

extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern undefined4 DAT_0012a120;

// USA 0012A0EC <- EU 0012A0EC (Ghidra, non-matching)
// GLOBAL DAT_0012a120 undefined4

undefined4 func_0012A0EC(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0012a120;
  *(undefined4 *)(param_1 + 0x96c) = 300;
  *(undefined4 *)(param_1 + 0x970) = uVar1;
  *(undefined4 *)(param_1 + 0x968) = 0;
  *(undefined1 *)(param_1 + 0x975) = 0;
  return func_004FC07C(param_1,5,0xffffffff,0);
}

