#include "ghidra_types.h"

extern int func_0015EE98();
extern int DAT_0015d1e8;

// USA 0015D12C <- EU 0015D130 (Ghidra, non-matching)
// GLOBAL DAT_0015d1e8 int

void func_0015D12C(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  *(undefined1 *)((int)param_1 + 0x9ae) = 0;
  func_0015EE98(param_1);
  param_1[0x244] = DAT_0015d1e8;
  uVar1 = *(ushort *)((int)param_1 + 0x2e) & 0xff;
  if ((uVar1 < 4) && (1 < uVar1)) {
    iVar2 = uVar1 - 2;
  }
  else {
    iVar2 = -1;
  }
  if (iVar2 < 0) {
    uVar1 = param_1[0x167] | 7;
  }
  else {
    uVar1 = param_1[0x167] | 5;
  }
  param_1[0x167] = uVar1;
  iVar2 = param_1[900];
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == param_1[0x385])) {
    iVar3 = *(int *)(iVar2 + 0x20);
    if ((iVar3 != 0) &&
       ((*(int *)(iVar2 + 0x24) == *(int *)(iVar3 + 0xc) && (0 < *(int *)(iVar3 + 4))))) {
      *(undefined1 *)(iVar3 + 0x280) = 1;
    }
    *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xfffffffb | 8;
  }
  return;
}

