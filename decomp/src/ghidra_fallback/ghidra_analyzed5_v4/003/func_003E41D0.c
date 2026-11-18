#include "ghidra_types.h"


// USA 003E41D0 <- EU 003E41B0 (Ghidra, non-matching)

uint func_003E41D0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (*(uint *)(param_1 + 0x10) != 0) {
    if (*(uint *)(param_1 + 0x10) < 3) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff;
    }
    return uVar1;
  }
  uVar1 = (uint)*(ushort *)(param_1 + 0x20) * 2 + 5 & 0xfffffffc;
  uVar2 = ((uint)*(ushort *)(param_1 + 0x22) * 0xa6 + 3 & 0xfffffffc) + uVar1;
  if (param_2 != 0) {
    uVar2 = uVar2 + 0x44;
  }
  if (param_3 != 0) {
    uVar2 = uVar2 + 0xa46c;
  }
  if ((*(uint *)(param_1 + 0x1c) & 1) != 0) {
    uVar1 = uVar1 + 0x44;
  }
  if ((*(uint *)(param_1 + 0x1c) & 2) != 0) {
    uVar1 = uVar1 + 0xa46c;
  }
  if (uVar1 <= uVar2) {
    uVar1 = uVar2;
  }
  return uVar1 + 0xfff & 0xfffff000;
}

