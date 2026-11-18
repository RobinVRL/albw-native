#include "ghidra_types.h"

extern int func_004F4A68();

// USA 004CBC0C <- EU 004CBBE4 (Ghidra, non-matching)

undefined4 func_004CBC0C(int param_1,int param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  bool bVar3;
  
  uVar2 = *(ushort *)(param_2 + 0x20);
  bVar3 = (uVar2 & 0x1f) == 6;
  if (bVar3) {
    uVar2 = uVar2 & 0x7e0;
  }
  if (!bVar3 || uVar2 != 0x1e0) {
    uVar1 = func_004F4A68(param_1,param_2);
    return uVar1;
  }
  return 0;
}

