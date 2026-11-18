#include "ghidra_types.h"

extern int func_00232468(int param_1);
extern int func_004B9620();

// USA 0045036C <- EU 00450344 (Ghidra, non-matching)

void func_0045036C(int param_1)

{
  int iVar1;
  int iVar2;
  
  func_00232468(param_1);
  func_004B9620(param_1);
  iVar2 = *(int *)(param_1 + 0x54);
  for (iVar1 = *(int *)(param_1 + 0x4c) - iVar2;
      iVar1 != (param_1 + 0x48) - *(int *)(param_1 + 0x54);
      iVar1 = *(int *)(iVar1 + iVar2 + 4) - iVar2) {
    *(undefined1 *)(iVar1 + 0xe) = 3;
  }
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x80;
  return;
}

