#include "ghidra_types.h"

extern int func_00112364(int *param_1,int param_2,int *param_3);

// USA 003FF898 <- EU 003FF878 (Ghidra, non-matching)

void func_003FF898(int param_1,int param_2)

{
  func_00112364((int *)(param_1 + 0x10),param_1 + 0x14,(int *)(param_2 + 4));
  *(int *)(param_2 + 0xc) = param_1;
  *(byte *)(param_2 + 0x44) = *(byte *)(param_2 + 0x44) & 0xef | 0x10;
  return;
}

