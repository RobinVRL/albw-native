#include "ghidra_types.h"

extern int func_0015EE98();

// USA 00160348 <- EU 0016034C (Ghidra, non-matching)

void func_00160348(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  func_0015EE98(param_1);
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
  *(undefined1 *)(param_1 + 0x37c) = 0;
  return;
}

