#include "ghidra_types.h"

extern int func_00115224(undefined4 *param_1,undefined4 *param_2);

// USA 0013080C <- EU 0013080C (Ghidra, non-matching)

void func_0013080C(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28d0);
  *(undefined1 *)(iVar1 + 0x6c) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)(iVar1 + 0x6d) = *(undefined1 *)(param_2 + 5);
  func_00115224((undefined4 *)(iVar1 + 0x70),(undefined4 *)(param_2 + 8));
  func_00115224((undefined4 *)(iVar1 + 0xb0),(undefined4 *)(param_2 + 0x48));
  *(undefined1 *)(iVar1 + 0xf0) = *(undefined1 *)(param_2 + 0x88);
  *(undefined4 *)(iVar1 + 0xf4) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(iVar1 + 0xf8) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(iVar1 + 0xfc) = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(iVar1 + 0x100) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(iVar1 + 0x104) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(iVar1 + 0x108) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(iVar1 + 0x10c) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(iVar1 + 0x110) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(iVar1 + 0x114) = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(iVar1 + 0x118) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(iVar1 + 0x11c) = *(undefined4 *)(param_2 + 0xb4);
  *(uint *)(iVar1 + 0x2c8) = *(uint *)(iVar1 + 0x2c8) & 0xfffffffd;
  return;
}

