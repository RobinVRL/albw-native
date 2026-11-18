#include "ghidra_types.h"

extern int func_003A2F8C(int param_1,undefined1 param_2);
extern void func_003A2FB0(int param_1,undefined1 param_2);
extern uint DAT_002b8710;

// USA 002B86E4 <- EU 002B86C0 (Ghidra, non-matching)
// GLOBAL DAT_002b8710 uint

void func_002B86E4(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = DAT_002b8710;
  iVar2 = *(int *)(param_1 + 0x8bc);
  *(undefined1 *)(DAT_002b8710 + param_1) = *(undefined1 *)(iVar2 + 0xe);
  *(undefined1 *)((uVar1 | (int)uVar1 >> 0xc) + param_1) = *(undefined1 *)(iVar2 + 0xf);
  func_003A2F8C(param_1 + 0xbc8,*(undefined1 *)(iVar2 + 0xc));
  func_003A2FB0(param_1 + 0xbc8,*(undefined1 *)(*(int *)(param_1 + 0x8bc) + 0xd));
  return;
}

