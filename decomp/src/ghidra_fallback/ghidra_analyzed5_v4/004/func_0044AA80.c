#include "ghidra_types.h"

extern int func_00231524(int param_1);
extern int func_002C00A8(int param_1);
extern int func_0044AFE8(int param_1);

// USA 0044AA80 <- EU 0044AA58 (Ghidra, non-matching)

/* WARNING: Removing unreachable block (ram,0x0044aa70) */
/* WARNING: Removing unreachable block (ram,0x0044aa80) */

undefined4 func_0044AA80(int param_1)

{
  int iVar1;
  ushort *puVar2;
  
  func_0044AFE8(param_1);
  iVar1 = *(int *)(param_1 + 0x230);
  *(undefined4 *)(iVar1 + 4) = 0;
  puVar2 = (ushort *)(iVar1 + 0x16);
  *puVar2 = *puVar2 & 0xffbf;
  func_002C00A8(*(int *)(param_1 + 0x230));
  *(undefined2 *)(param_1 + 0xec) = 0;
  func_00231524(param_1 + 0xec);
  *(undefined2 *)(param_1 + 0x140) = 0;
  func_00231524(param_1 + 0x140);
  *(undefined2 *)(param_1 + 0x14c) = 0;
  return func_00231524(param_1 + 0x14c);
}

