#include "ghidra_types.h"


// USA 00691F28 <- EU 00691F00 (Ghidra, non-matching)

uint func_00691F28(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  bVar5 = param_2 != 0;
  if (bVar5) {
    iVar3 = 0x20;
  }
  else {
    iVar3 = 0;
    param_2 = param_1;
  }
  if (bVar5 || param_1 != 0) {
    uVar4 = iVar3 - LZCOUNT(param_2);
    uVar2 = param_2 << LZCOUNT(param_2) | param_1 >> (uVar4 & 0xff);
    bVar5 = (bool)((byte)(uVar2 >> 7) & 1);
    uVar1 = uVar4 * 0x800000 + 0x4e800000 + (uVar2 >> 8) + (uint)bVar5;
    if (param_1 << (0x20 - uVar4 & 0xff) != 0 || (uVar2 & 0x7f) != 0) {
      bVar5 = false;
    }
    if (bVar5) {
      uVar1 = uVar1 & 0xfffffffe;
    }
    return uVar1;
  }
  return param_1;
}

