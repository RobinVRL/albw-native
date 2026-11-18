#include "ghidra_types.h"

extern int func_003CD388(undefined4 *param_1);

// USA 003CD3DC <- EU 003CD3B8 (Ghidra, non-matching)

int func_003CD3DC(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_003CD388(param_1);
  *(undefined1 *)(iVar1 + 0x1c) = 5;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 **)(iVar1 + 0x38) = param_1;
  iVar2 = func_003CD388((undefined4 *)(iVar1 + 0x3c));
  *(undefined1 *)(iVar2 + 0x1c) = 0;
  *(int *)(iVar2 + 0x20) = iVar1;
  iVar1 = func_003CD388((undefined4 *)(iVar2 + 0x24));
  *(undefined1 *)(iVar1 + 0x1c) = 0;
  *(undefined1 *)(iVar1 + 0x1d) = 0;
  *(int *)(iVar1 + 0x20) = iVar2 + -0x3c;
  iVar2 = func_003CD388((undefined4 *)(iVar1 + 0x24));
  *(undefined1 *)(iVar2 + 0x1c) = 0;
  *(undefined1 *)(iVar2 + 0x1d) = 0;
  *(int *)(iVar2 + 0x20) = iVar1 + -0x60;
  return iVar2 + -0x84;
}

