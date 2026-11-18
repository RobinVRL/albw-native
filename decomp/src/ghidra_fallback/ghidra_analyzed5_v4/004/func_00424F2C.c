#include "ghidra_types.h"

extern int func_002313DC(int param_1);

// USA 00424F2C <- EU 00424F0C (Ghidra, non-matching)

undefined4 func_00424F2C(int param_1)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)(*(int *)(param_1 + 0x14) + 0x16);
  *puVar1 = *puVar1 | 0x40;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x4a) = 0;
  *(undefined2 *)(param_1 + 0x48) = 0;
  return func_002313DC(param_1 + 0x48);
}

