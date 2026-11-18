#include "ghidra_types.h"

extern int func_0040FA80(undefined4 *param_1);
extern int func_004195B4(undefined4 *param_1);
extern int DAT_004194d0;

// USA 00419464 <- EU 00419444 (Ghidra, non-matching)
// GLOBAL DAT_004194d0 int

int * func_00419464(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = func_004195B4(param_1);
  iVar1 = DAT_004194d0;
  piVar2[0x12] = 0;
  piVar2[0x13] = 0;
  piVar2[0x15] = 0;
  piVar2[0x11] = iVar1 + 0x30;
  piVar2[0x14] = iVar1 + 0x44;
  *piVar2 = iVar1;
  piVar2[0x16] = 0;
  func_0040FA80(piVar2 + 0x1e);
  *(undefined1 *)(piVar2 + 0x23) = 0;
  *(undefined1 *)((int)piVar2 + 0x8d) = 0;
  *(undefined1 *)((int)piVar2 + 0x8e) = 0;
  *(undefined1 *)((int)piVar2 + 0x8f) = 0;
  *(undefined1 *)(piVar2 + 0x24) = 0;
  *(undefined1 *)((int)piVar2 + 0xa1) = 0;
  *(undefined1 *)((int)piVar2 + 0xa2) = 0;
  piVar2[0x29] = 0;
  piVar2[0x2a] = 0;
  piVar2[0x2b] = 0;
  piVar2[0x2c] = 0;
  piVar2[0x2d] = 0;
  piVar2[0x2e] = -1;
  piVar2[0x2f] = 0;
  piVar2[0x30] = 0;
  return piVar2;
}

