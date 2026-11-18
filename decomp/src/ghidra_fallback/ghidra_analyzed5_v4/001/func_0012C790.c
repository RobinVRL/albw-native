#include "ghidra_types.h"


// USA 0012C790 <- EU 0012C790 (Ghidra, non-matching)

undefined4 func_0012C790(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)*(char *)(param_1 + 0xd);
  if ((uVar2 != 1) && ((uVar2 != 3 || (*(char *)(param_1 + 0xe) != '\x03')))) {
    bVar3 = uVar2 == 0;
    if (bVar3) {
      uVar2 = (uint)*(byte *)(param_1 + 0xe);
    }
    if (bVar3 && uVar2 == 1) {
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    return (undefined4)param_1;
  }
  bVar3 = uVar2 == 3;
  if (bVar3) {
    uVar2 = (uint)*(byte *)(param_1 + 0xe);
  }
  if (bVar3 && uVar2 == 3) {
    uVar1 = 4;
  }
  else {
    uVar1 = 2;
  }
  *(undefined1 *)(param_1 + 0xe) = uVar1;
  return (undefined4)param_1;
}

