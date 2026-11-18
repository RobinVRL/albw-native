#include "ghidra_types.h"


// USA 00682718 <- EU 006826F0 (Ghidra, function missing from the decomp table)

/* WARNING: Unknown calling convention */

uint func_00682718(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x88);
  uVar2 = (uint)*(byte *)(param_2 + 0x88);
  bVar4 = uVar1 < uVar2;
  bVar3 = uVar1 == uVar2;
  if (bVar3) {
    uVar1 = 0;
  }
  if (bVar4) {
    uVar1 = 0xffffffff;
  }
  if (!bVar4 && !bVar3) {
    uVar1 = 1;
  }
  return uVar1;
}

