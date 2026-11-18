#include "ghidra_types.h"


// USA 004112FC <- EU 004112DC (Ghidra, non-matching)

void func_004112FC(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x260) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x260) = 1;
  *(undefined1 *)(param_1 + 0x261) = 0;
  iVar1 = 0;
  iVar2 = 9;
  do {
    iVar3 = param_1 + iVar1 * 8;
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar3 + 0x218) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x21c) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}

