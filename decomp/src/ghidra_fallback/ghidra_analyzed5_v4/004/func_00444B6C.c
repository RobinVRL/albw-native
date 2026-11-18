#include "ghidra_types.h"

extern int func_001B6CE4(int param_1);

// USA 00444B6C <- EU 00444B4C [EDITED REGION: check by hand] (Ghidra, non-matching)

undefined4 func_00444B6C(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar1 = func_001B6CE4(param_1);
  uVar2 = 0;
  do {
    uVar3 = param_1 + 0xc4;
    if (uVar2 < 0xc) {
      uVar3 = uVar3 + uVar2 * 0x54;
    }
    uVar2 = uVar2 + 1;
    bVar4 = *(char *)(uVar3 + 0xd) == '\0';
    if (bVar4) {
      uVar3 = (uint)*(byte *)(uVar3 + 0xe);
    }
    if (!bVar4 || uVar3 != 0) {
      uVar1 = 0;
    }
  } while ((int)uVar2 < 0xc);
  return uVar1;
}

