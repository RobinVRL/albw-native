#include "ghidra_types.h"


// USA 003E1634 <- EU 003E1614 (Ghidra, non-matching)

void func_003E1634(int param_1,undefined4 *param_2,float fparam_0)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xc) = *param_2;
  *(undefined4 *)(param_1 + 0x10) = param_2[1];
  *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_2 + 2);
  iVar1 = *(int *)(param_1 + 0x68);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(param_1 + 0x10);
  *(undefined2 *)(iVar1 + 0x1c) = *(undefined2 *)(param_1 + 0x14);
  *(ushort *)(iVar1 + 0x6c) = *(ushort *)(iVar1 + 0x6c) | 0x10;
  return;
}

