#include "ghidra_types.h"

extern int func_004F7A60(int param_1,int param_2);

// USA 002FAF84 <- EU 002FAF60 (Ghidra, non-matching)

undefined4 func_002FAF84(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x900) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x904) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x908) = *(undefined4 *)(param_2 + 0xc);
  uVar2 = func_004F7A60(param_1,param_2);
  if (((*(uint *)(param_1 + 0x5a4) & 0x2000000) == 0) &&
     ((*(uint *)(param_1 + 0x5a0) & 0x2000000) != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  *(char *)(param_1 + 0x910) = bVar1 || *(char *)(param_1 + 0x910) != '\0';
  if ((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 0xd80U) != 0) {
    uVar2 = 1;
  }
  return uVar2;
}

