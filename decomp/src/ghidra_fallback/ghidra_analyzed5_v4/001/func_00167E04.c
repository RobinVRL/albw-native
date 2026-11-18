#include "ghidra_types.h"


// USA 00167E04 <- EU 00167E08 [EDITED REGION: check by hand] (Ghidra, non-matching)

undefined4 func_00167E04(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    bVar1 = *(byte *)(param_2 + 0x44);
    uVar2 = bVar1 & 1;
    if ((bVar1 & 1) != 0) {
      uVar2 = 1;
    }
    if ((uVar2 != param_3) &&
       (*(byte *)(param_2 + 0x44) = bVar1 & 0xfe | (byte)param_3, param_3 != 0)) {
      *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) | 2;
    }
  }
  return (undefined4)param_1;
}

