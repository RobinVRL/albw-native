// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_00521184();
extern undefined4 DAT_00163a1c;

// USA 001639D4 <- EU 001639D8 (Ghidra, non-matching)
// GLOBAL DAT_00163a1c undefined4

undefined4 func_001639D4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = func_00521184(param_1);
  uVar1 = DAT_00163a1c;
  *(undefined4 *)(param_1 + 1000) = uVar2;
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff7f | 0x4000;
  return func_004FABDC(param_1,0xf,0xffffffff,0);
}

