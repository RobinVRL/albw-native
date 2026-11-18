#include "ghidra_types.h"

extern undefined4 *DAT_00180738;

// USA 001806DC <- EU 001806DC (Ghidra, non-matching)
// GLOBAL DAT_00180738 undefined4 *

undefined4 func_001806DC(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = DAT_00180738;
  uVar3 = DAT_00180738[1];
  uVar4 = DAT_00180738[2];
  *(undefined4 *)(param_1 + 0xa58) = *DAT_00180738;
  *(undefined4 *)(param_1 + 0xa5c) = uVar3;
  *(undefined4 *)(param_1 + 0xa60) = uVar4;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  *(undefined4 *)(param_1 + 0xa64) = *puVar1;
  *(undefined4 *)(param_1 + 0xa68) = uVar3;
  *(undefined4 *)(param_1 + 0xa6c) = uVar4;
  iVar2 = *(int *)(param_1 + 0x7a0);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(param_1 + 0xa58);
  *(undefined4 *)(iVar2 + 0x78) = *(undefined4 *)(param_1 + 0xa5c);
  *(undefined4 *)(iVar2 + 0x7c) = *(undefined4 *)(param_1 + 0xa60);
  *(uint *)(param_1 + 0x8ac) = *(uint *)(param_1 + 0x8ac) & 0xffffffbf;
  return (undefined4)param_1;
}

