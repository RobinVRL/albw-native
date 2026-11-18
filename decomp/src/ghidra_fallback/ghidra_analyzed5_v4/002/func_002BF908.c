#include "ghidra_types.h"

extern int func_001B6D40(int param_1);

// USA 002BF908 <- EU 002BF8E4 (Ghidra, non-matching)

/* WARNING: Removing unreachable block (ram,0x002bf8f4) */
/* WARNING: Removing unreachable block (ram,0x002bf900) */

undefined4 func_002BF908(int param_1)

{
  int iVar1;
  ushort *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 + 4) = 0;
  puVar2 = (ushort *)(iVar1 + 0x16);
  *puVar2 = *puVar2 & 0xffbf;
  puVar2 = (ushort *)(*(int *)(param_1 + 0x14) + 0x16);
  *puVar2 = *puVar2 & 0xffbf;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  return func_001B6D40(param_1);
}

