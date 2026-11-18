#include "ghidra_types.h"

extern int func_004CF478(int param_1,int param_2);
extern undefined4 uRam00288ecc;
extern undefined4 uRam00288ed0;

// USA 00288E4C <- EU 00288E74 (Ghidra, non-matching)
// GLOBAL UNK_00288ecc undefined4
// GLOBAL UNK_00288ed0 undefined4

void func_00288E4C(int param_1)

{
  undefined4 uVar1;
  
  func_004CF478(*(int *)(param_1 + 0x458),0);
  uVar1 = uRam00288ecc;
  *(undefined1 *)(*(int *)(param_1 + 0x430) + 0x61) = 0;
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  uVar1 = uRam00288ed0;
  *(undefined4 *)(param_1 + 0x470) = 0x78;
  *(undefined4 *)(param_1 + 0x474) = uVar1;
  *(undefined4 *)(param_1 + 0x46c) = 0;
  return;
}

