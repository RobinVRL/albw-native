#include "ghidra_types.h"


// USA 0058E4BC <- EU 0058E494 (Ghidra, non-matching)

undefined4 func_0058E4BC(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1 + -0xc;
  iVar1 = 0;
  do {
    if (*(int *)(iVar3 + iVar1 * 8 + 0x218) == param_2) {
      iVar3 = iVar3 + iVar1 * 8;
      uVar2 = *(undefined4 *)(iVar3 + 0x21c);
      *(undefined4 *)(iVar3 + 0x21c) = param_3;
      return uVar2;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 9);
  iVar1 = 0;
  do {
    if (*(int *)(iVar3 + iVar1 * 8 + 0x218) == -1) {
      iVar3 = iVar3 + iVar1 * 8;
      *(int *)(iVar3 + 0x218) = param_2;
      *(undefined4 *)(iVar3 + 0x21c) = param_3;
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 9);
  return 0;
}

