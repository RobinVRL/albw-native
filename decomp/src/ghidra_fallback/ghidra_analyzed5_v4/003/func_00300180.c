#include "ghidra_types.h"


// USA 00300180 <- EU 0030015C (Ghidra, function missing from the decomp table)

undefined8 func_00300180(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_1 >> 2 | param_2 << 0x1e;
  uVar1 = param_1 - uVar3;
  uVar2 = param_2 - ((param_2 >> 2) + (uint)(param_1 < uVar3));
  uVar4 = uVar1 >> 4 | uVar2 * 0x10000000;
  uVar3 = uVar1 + uVar4;
  uVar2 = uVar2 + (uVar2 >> 4) + (uint)CARRY4(uVar1,uVar4);
  uVar4 = uVar3 >> 8 | uVar2 * 0x1000000;
  uVar1 = uVar3 + uVar4;
  uVar3 = uVar2 + (uVar2 >> 8) + (uint)CARRY4(uVar3,uVar4);
  uVar4 = uVar1 >> 0x10 | uVar3 * 0x10000;
  uVar2 = uVar1 + uVar4;
  uVar4 = uVar3 + (uVar3 >> 0x10) + (uint)CARRY4(uVar1,uVar4);
  uVar3 = uVar4 + CARRY4(uVar2,uVar4);
  uVar1 = uVar3 * 0x20000000;
  uVar2 = uVar2 + uVar4 >> 3 | uVar1;
  uVar3 = uVar3 >> 3;
  if (-1 < (int)((param_2 - (param_1 < 10)) -
                (((uVar3 << 2 | uVar1 >> 0x1e) + uVar3 + (uint)CARRY4(uVar2,uVar2 * 4)) * 2 +
                 (uint)CARRY4(uVar2 * 5,uVar2 * 5) + (uint)(param_1 - 10 < uVar2 * 10)))) {
    return CONCAT44(uVar3 + (0xfffffffe < uVar2),uVar2 + 1);
  }
  return CONCAT44(uVar3,uVar2);
}

