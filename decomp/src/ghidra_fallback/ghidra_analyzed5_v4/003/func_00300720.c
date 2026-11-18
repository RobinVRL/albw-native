#include "ghidra_types.h"

extern ulonglong func_001146F8(uint param_1,uint param_2,uint param_3,uint param_4);
extern undefined8 func_00114A40(uint param_1,uint param_2,uint param_3,uint param_4);

// USA 00300720 <- EU 003006FC (Ghidra, non-matching)

undefined8 func_00300720(uint *param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_2;
  uVar4 = *(undefined8 *)param_1;
  uVar1 = param_1[2];
  if ((int)(param_1[1] & ~(*param_1 << 1)) < 0 && (int)(param_2[1] & ~(uVar2 << 1)) < 0) {
    uVar3 = func_001146F8(*param_1,param_1[1],uVar1,uVar2);
    uVar4 = func_00114A40((uint)uVar3,(uint)(uVar3 >> 0x20),uVar1,uVar2);
  }
  return uVar4;
}

