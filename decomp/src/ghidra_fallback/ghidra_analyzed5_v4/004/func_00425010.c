#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern int func_002C00A8(int param_1);

// USA 00425010 <- EU 00424FF0 (Ghidra, non-matching)

undefined4 func_00425010(int param_1)

{
  ushort *puVar1;
  
  func_002C00A8(*(int *)(param_1 + 0x14));
  puVar1 = (ushort *)(*(int *)(param_1 + 0x14) + 0x16);
  *puVar1 = *puVar1 & 0xffbf;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x4a) = 1;
  *(undefined2 *)(param_1 + 0x48) = 0;
  return func_002313DC(param_1 + 0x48);
}

