#include "ghidra_types.h"

extern int func_004A9120(undefined4 param_1,int param_2);
extern undefined4 *DAT_003861fc;

// USA 0038611C <- EU 003860F8 (Ghidra, non-matching)
// GLOBAL DAT_003861fc undefined4 *

void func_0038611C(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xfffffffe;
  iVar2 = *(int *)(param_1 + 0x1d4);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x1d8))) {
    iVar3 = *(int *)(iVar2 + 0x20);
    if ((iVar3 != 0) &&
       ((*(int *)(iVar2 + 0x24) == *(int *)(iVar3 + 0xc) && (0 < *(int *)(iVar3 + 4))))) {
      *(undefined1 *)(iVar3 + 0x280) = 1;
    }
    *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xfffffffb | 8;
  }
  iVar2 = *(int *)(param_1 + 0x1dc);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x1e0))) {
    iVar3 = *(int *)(iVar2 + 0x20);
    if ((iVar3 != 0) &&
       ((*(int *)(iVar2 + 0x24) == *(int *)(iVar3 + 0xc) && (0 < *(int *)(iVar3 + 4))))) {
      *(undefined1 *)(iVar3 + 0x280) = 1;
    }
    *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xfffffffb | 8;
  }
  *(undefined1 *)(param_1 + 0x3a) = 0xff;
  puVar1 = DAT_003861fc;
  if (*(char *)(param_1 + 0x34) != '\0') {
    *(undefined1 *)(param_1 + 0x34) = 0;
    func_004A9120(*puVar1,param_1 + 0xb4);
  }
  *(undefined2 *)(param_1 + 0x70) = 0;
  return;
}

