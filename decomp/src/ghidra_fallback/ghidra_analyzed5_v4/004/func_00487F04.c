#include "ghidra_types.h"

extern int func_004B96A0(int param_1,int param_2);

// USA 00487F04 <- EU 00487EDC (Ghidra, non-matching)

void func_00487F04(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  func_004B96A0(param_1,*(int *)(param_1 + 0x14));
  puVar2 = (ushort *)(*(int *)(param_1 + 0x14) + 0x16);
  uVar1 = *puVar2;
  *puVar2 = uVar1 | 1;
  *(ushort *)(*(int *)(param_1 + 0x14) + 0x16) = uVar1 & 0xfffd | 1;
  return;
}

