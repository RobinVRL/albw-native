#include "ghidra_types.h"


// USA 00429F14 <- EU 00429EF4 (Ghidra, non-matching)

undefined4 func_00429F14(int *param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(*param_1 + 0x78);
  uVar4 = *(uint *)(*param_1 + 0x7c);
  uVar1 = *(uint *)(*param_2 + 0x78);
  uVar3 = *(uint *)(*param_2 + 0x7c);
  if (uVar3 < uVar4 || uVar4 - uVar3 < (uint)(uVar1 <= uVar5)) {
    if (uVar1 == uVar5 && uVar3 == uVar4) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

