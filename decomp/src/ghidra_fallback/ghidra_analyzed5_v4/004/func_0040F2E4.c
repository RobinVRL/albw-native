#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern uint *DAT_0040f360;
extern int DAT_0040f364;
extern undefined *DAT_0040f368;
extern undefined4 DAT_0040f36c;
extern undefined4 DAT_0040f370;

// USA 0040F2E4 <- EU 0040F2C4 (Ghidra, non-matching)
// GLOBAL DAT_0040f360 uint *
// GLOBAL DAT_0040f364 int
// GLOBAL DAT_0040f368 undefined *
// GLOBAL DAT_0040f36c undefined4
// GLOBAL DAT_0040f370 undefined4

int func_0040F2E4(void)

{
  int iVar1;
  
  if (((*DAT_0040f360 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0040f360), iVar1 != 0)) {
    iVar1 = func_00100118(DAT_0040f364,DAT_0040f368,0xc,3);
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined1 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(undefined2 *)(iVar1 + 0x40) = 0;
    *(undefined4 *)(iVar1 + 0x44) = 0;
    *(undefined2 *)(iVar1 + 0x48) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    *(undefined4 *)(iVar1 + 0x50) = 0;
    *(undefined4 *)(iVar1 + 0x54) = 0xffffffff;
    *(undefined4 *)(iVar1 + 100) = 0;
    *(undefined4 *)(iVar1 + 0x68) = 0;
  }
  return DAT_0040f364;
}

