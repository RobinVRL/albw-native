#include "ghidra_types.h"

extern undefined4 DAT_002709f0;

// USA 00270954 <- EU 0027097C (Ghidra, non-matching)
// GLOBAL DAT_002709f0 undefined4

void func_00270954(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if ((*(char *)(iVar2 + 0x35) != '\0') && (*(uint *)(iVar2 + 0x1c) <= *(uint *)(iVar2 + 0x18))) {
    *(undefined1 *)(iVar2 + 0x13) = 0;
    uVar1 = DAT_002709f0;
    *(undefined4 *)(iVar2 + 0x1c) = 0x1e;
    *(undefined4 *)(iVar2 + 0x20) = uVar1;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined1 *)(iVar2 + 0x34) = 1;
    iVar2 = *(int *)(param_1 + 0x1c);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x1c) = 0x1e;
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar2 + 0x14);
      *(undefined4 *)(iVar2 + 0x20) = uVar1;
      *(undefined4 *)(iVar2 + 0x18) = 0;
      *(undefined1 *)(iVar2 + 0x34) = 1;
    }
  }
  return;
}

