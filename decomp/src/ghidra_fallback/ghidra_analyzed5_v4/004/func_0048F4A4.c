#include "ghidra_types.h"


// USA 0048F4A4 <- EU 0048F47C (Ghidra, non-matching)

void * func_0048F4A4(int param_1,uint param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0xf8);
  if (0 < iVar1) {
    uVar2 = 0;
    do {
      if ((param_2 & 1 << (uVar2 & 0xff)) != 0) {
        *(undefined1 *)(param_1 + uVar2 + 0xa8) = param_3;
        *(undefined1 *)(param_1 + uVar2 + 200) = param_4;
      }
      iVar1 = iVar1 + -1;
      uVar2 = uVar2 + 1;
    } while (iVar1 != 0);
  }
  return (void *)param_1;
}

