#include "ghidra_types.h"

extern int func_002C00A8(int param_1);

// USA 004727B8 <- EU 00472790 (Ghidra, non-matching)

/* WARNING: Removing unreachable block (ram,0x004727f4) */
/* WARNING: Removing unreachable block (ram,0x00472804) */

void func_004727B8(int param_1,int param_2)

{
  int iVar1;
  ushort *puVar2;
  ushort uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (param_2 == 0) {
    func_002C00A8(iVar1);
    iVar1 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x9c);
    *(int *)(iVar1 + 4) = iVar4;
    puVar2 = (ushort *)(iVar1 + 0x16);
    if (iVar4 != 0) {
      uVar3 = *puVar2 | 0x40;
      goto LAB_004727d4;
    }
  }
  puVar2 = (ushort *)(iVar1 + 0x16);
  uVar3 = *puVar2 & 0xffbf;
LAB_004727d4:
  *puVar2 = uVar3;
  return;
}

