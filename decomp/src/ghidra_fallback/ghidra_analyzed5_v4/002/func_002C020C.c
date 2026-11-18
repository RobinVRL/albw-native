#include "ghidra_types.h"


// USA 002C020C <- EU 002C01E8 (Ghidra, non-matching)

undefined4 func_002C020C(int param_1,uint *param_2)

{
  uint uVar1;
  ushort uVar2;
  
  uVar2 = *(ushort *)(param_1 + 0x16);
  *(ushort *)(param_1 + 0x16) = uVar2 & 0xff7b;
  if (*(uint *)(param_1 + 0x10) != 0) {
    uVar2 = uVar2 & 0xff7b;
    if ((*(uint *)(param_1 + 0x10) & param_2[0x43]) != 0) {
      uVar2 = uVar2 | 0x80;
    }
    *(ushort *)(param_1 + 0x16) = uVar2;
    if ((*(ushort *)(param_1 + 0x16) & 0x100) == 0) {
      uVar1 = *param_2;
    }
    else {
      uVar1 = param_2[2] | *param_2;
    }
    if ((uVar1 & *(uint *)(param_1 + 0x10)) != 0) {
      *(ushort *)(param_1 + 0x16) = *(ushort *)(param_1 + 0x16) | 0x84;
      return 1;
    }
  }
  return 0;
}

