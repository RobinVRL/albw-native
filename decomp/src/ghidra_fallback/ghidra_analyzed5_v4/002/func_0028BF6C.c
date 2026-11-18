#include "ghidra_types.h"


// USA 0028BF6C <- EU 0028BF94 (Ghidra, non-matching)

void func_0028BF6C(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  *(int *)(param_1 + 0x58) = param_2;
  *(int *)(param_1 + 0x78) = param_2;
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x10);
  *(int *)(param_3 + 8) = *(int *)(param_1 + 0x10) + 0xb0;
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  *(int *)(param_3 + 0x10) = iVar1 + 0x74;
  return;
}

