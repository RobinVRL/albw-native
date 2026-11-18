#include "ghidra_types.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);

// USA 00500EA0 <- EU 00500E78 (Ghidra, non-matching)

undefined4 func_00500EA0(int param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  
  uVar1 = param_2 & 0xff;
  bVar3 = 0x1d < uVar1;
  bVar2 = uVar1 != 0x1e;
  if (bVar2) {
    uVar1 = uVar1 - 0xe;
    bVar3 = 2 < uVar1;
  }
  if (bVar3 && (bVar2 && uVar1 != 3)) {
    return 0;
  }
  return func_004FABDC(param_1,1,0xffffffff,0);
}

