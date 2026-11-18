#include "ghidra_types.h"


// USA 001138B4 <- EU 001138B4 (Ghidra, function missing from the decomp table)

undefined8 func_001138B4(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = param_1 << 1;
  uVar3 = uVar1 >> 0x14;
  uVar2 = param_2 << 0xb;
  if (uVar1 != 0 || param_2 != 0) {
    uVar3 = uVar3 + 0x7800;
  }
  uVar4 = param_1 << 0xb | param_2 >> 0x15;
  uVar3 = param_1 & 0x80000000 | uVar3 >> 1;
  if (uVar1 != 0 || param_2 != 0) {
    uVar4 = uVar4 | 0x80000000;
  }
  if ((int)uVar1 >> 0x15 != 0) {
    if ((int)uVar1 >> 0x15 == -1) {
      uVar3 = uVar3 | 0x40000000;
    }
    return CONCAT44(uVar4,uVar3);
  }
  if ((uVar4 & 0x80000000) == 0) {
    return CONCAT44(uVar4,uVar3);
  }
  uVar4 = uVar4 & 0x7fffffff;
  if (uVar4 == 0) {
    if (uVar2 >> 0x10 == 0) {
      uVar2 = param_2 << 0x1b;
      iVar5 = 0x10;
    }
    else {
      iVar5 = 0;
    }
    if (uVar2 >> 0x18 == 0) {
      uVar2 = uVar2 << 8;
      iVar5 = iVar5 + 8;
    }
    if (uVar2 >> 0x1c == 0) {
      uVar2 = uVar2 << 4;
      iVar5 = iVar5 + 4;
    }
    if (uVar2 >> 0x1e == 0) {
      uVar2 = uVar2 << 2;
      iVar5 = iVar5 + 2;
    }
    if (-1 < (int)uVar2) {
      uVar2 = uVar2 << 1;
      iVar5 = iVar5 + 1;
    }
    return CONCAT44(uVar2,(uVar3 - 0x1f) - iVar5);
  }
  if (uVar4 >> 0x10 == 0) {
    uVar4 = uVar4 << 0x10;
    iVar5 = 0x10;
  }
  else {
    iVar5 = 0;
  }
  if (uVar4 >> 0x18 == 0) {
    uVar4 = uVar4 << 8;
    iVar5 = iVar5 + 8;
  }
  if (uVar4 >> 0x1c == 0) {
    uVar4 = uVar4 << 4;
    iVar5 = iVar5 + 4;
  }
  if (uVar4 >> 0x1e == 0) {
    uVar4 = uVar4 << 2;
    iVar5 = iVar5 + 2;
  }
  if (-1 < (int)uVar4) {
    iVar5 = iVar5 + 1;
  }
  if (-1 < (int)uVar4) {
    uVar4 = uVar4 << 1;
  }
  return CONCAT44(uVar4 | uVar2 >> (0x20U - iVar5 & 0xff),(uVar3 - iVar5) + 1);
}

