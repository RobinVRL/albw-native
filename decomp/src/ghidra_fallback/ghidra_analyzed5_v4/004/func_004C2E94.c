#include "ghidra_types.h"

extern int func_001507A8(int param_1,int param_2);

// USA 004C2E94 <- EU 004C2E70 (Ghidra, function missing from the decomp table)

undefined4 func_004C2E94(int param_1,int param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  bool bVar3;
  
  uVar2 = *(ushort *)(param_2 + 0x20);
  bVar3 = (uVar2 & 0x7e0) == 0xc0;
  if (bVar3) {
    uVar2 = uVar2 & 0x1f;
  }
  if (bVar3 && uVar2 == 7) {
    *(undefined1 *)(param_1 + 0x56c) = 1;
    uVar1 = 0;
  }
  else {
    bVar3 = func_001507A8(param_1,param_2);
    if ((bVar3) && ((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 0x60U) == 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

