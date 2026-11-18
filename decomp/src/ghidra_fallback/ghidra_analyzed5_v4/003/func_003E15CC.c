#include "ghidra_types.h"


// USA 003E15CC <- EU 003E15AC (Ghidra, non-matching)

void func_003E15CC(int param_1,undefined1 param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 5) = param_2;
  iVar1 = *(int *)(param_1 + 0x68);
  *(undefined1 *)(iVar1 + 0xe) = param_2;
  *(ushort *)(iVar1 + 0x6c) = *(ushort *)(iVar1 + 0x6c) | 0x20;
  return;
}

