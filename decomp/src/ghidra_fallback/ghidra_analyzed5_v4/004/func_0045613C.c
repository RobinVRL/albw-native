#include "ghidra_types.h"

extern int func_00231524(int param_1);
extern int func_002C00A8(int param_1);

// USA 0045613C <- EU 00456114 (Ghidra, non-matching)

/* WARNING: Removing unreachable block (ram,0x00456138) */
/* WARNING: Removing unreachable block (ram,0x00456144) */

undefined4 func_0045613C(int param_1)

{
  int iVar1;
  ushort *puVar2;
  
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 4;
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 + 4) = 0;
  puVar2 = (ushort *)(iVar1 + 0x16);
  *puVar2 = *puVar2 & 0xffbf;
  func_002C00A8(*(int *)(param_1 + 0x14));
  *(undefined1 *)(param_1 + 0x98) = 1;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x5e) = 5;
  *(undefined2 *)(param_1 + 0x5c) = 0;
  return func_00231524(param_1 + 0x5c);
}

