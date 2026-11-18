#include "ghidra_types.h"

extern ulonglong func_00115F34(uint param_1,uint param_2,uint param_3,uint param_4);

// USA 0011624C <- EU 0011624C (Ghidra, non-matching)

ulonglong func_0011624C(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar2 = (int)param_2 >> 1;
  uVar1 = param_4 >> 1;
  if ((int)uVar2 < 0) {
    bVar3 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(param_2 + bVar3);
  }
  if ((int)param_4 < 0) {
    bVar3 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(param_4 + bVar3);
  }
  uVar4 = func_00115F34(param_1,param_2,param_3,param_4);
  if (((uVar2 ^ uVar1) & 0x40000000) != 0) {
    uVar4 = CONCAT44(-((int)(uVar4 >> 0x20) + (uint)((int)uVar4 != 0)),-(int)uVar4);
  }
  return uVar4;
}

