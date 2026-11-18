#include "ghidra_types.h"

extern int func_0034C57C(int param_1,int param_2);
extern int func_005568D4(int param_1);
extern int *DAT_0046ce20;

// USA 0046CE10 <- EU 0046CDE8 (Ghidra, non-matching)
// GLOBAL DAT_0046ce20 int *

void func_0046CE10(int param_1)

{
  ushort uVar1;
  
  *(undefined4 *)(param_1 + 0xc4) = 0;
  func_0034C57C(*(int *)(param_1 + 0xb4),0);
  uVar1 = func_005568D4(*DAT_0046ce20);
  *(uint *)(param_1 + 200) = (uint)uVar1;
  *(undefined1 *)(*(int *)(param_1 + 0xb4) + 0x58) = 1;
  return;
}

