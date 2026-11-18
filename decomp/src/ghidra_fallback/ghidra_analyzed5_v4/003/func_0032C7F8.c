#include "ghidra_types.h"

extern int func_0036E490(byte *param_1,uint param_2,undefined4 param_3);

// USA 0032C7F8 <- EU 0032C7D4 (Ghidra, non-matching)

byte * func_0032C7F8(undefined4 *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  
  pbVar1 = (byte *)(param_1 + 0xd);
  switch(*pbVar1) {
  case 5:
  case 6:
    *(undefined1 *)((int)param_1 + 0xa1) = 1;
    uVar2 = func_0036E490(pbVar1,7,*param_1);
    return (byte *)uVar2;
  default:
    return pbVar1;
  case 9:
  case 10:
  case 0xb:
    *(undefined1 *)((int)param_1 + 0xa1) = 1;
    uVar2 = func_0036E490(pbVar1,0xb,*param_1);
    return (byte *)uVar2;
  }
}

