#include "ghidra_types.h"

extern undefined8 func_00114A40(uint param_1,uint param_2,uint param_3,uint param_4);
extern ulonglong func_00114B1C(uint param_1,uint param_2,uint param_3,uint param_4);

// USA 00300750 <- EU 0030072C (Ghidra, non-matching)

undefined8 func_00300750(uint *param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_2;
  uVar4 = *(undefined8 *)param_1;
  uVar1 = param_1[2];
  if ((*param_1 & 0x40000000) == 0 && (uVar2 & 0x40000000) == 0) {
    uVar3 = func_00114B1C(*param_1,param_1[1],uVar1,uVar2);
    uVar4 = func_00114A40((uint)uVar3,(uint)(uVar3 >> 0x20),uVar1,uVar2);
  }
  return uVar4;
}

