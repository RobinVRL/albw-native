#include "ghidra_types.h"

extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_00588BE4(int param_1);
extern int *DAT_00653ab4;
extern int *DAT_00653ab8;

// USA 00653A54 <- EU 00653A2C (Ghidra, non-matching)
// GLOBAL DAT_00653ab4 int *
// GLOBAL DAT_00653ab8 int *

void func_00653A54(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 0x9d3) == '\x01') {
    *(undefined1 *)(param_1 + 0x9d3) = 2;
    if (((0 < *(short *)(param_1 + 0x5e)) &&
        (iVar1 = func_0052FBDC(*DAT_00653ab4 + 0x3dbbc,(int)*(short *)(param_1 + 0x5e),0),
        iVar1 != 0)) && (iVar2 = func_00588BE4(iVar1), iVar2 == *DAT_00653ab8)) {
      uVar3 = *(undefined4 *)(param_1 + 0x9c4);
      uVar4 = *(undefined4 *)(param_1 + 0x9c8);
      *(undefined4 *)(iVar1 + 0x368) = *(undefined4 *)(param_1 + 0x9c0);
      *(undefined4 *)(iVar1 + 0x36c) = uVar3;
      *(undefined4 *)(iVar1 + 0x370) = uVar4;
      uVar3 = *(undefined4 *)(param_1 + 0x9c4);
      uVar4 = *(undefined4 *)(param_1 + 0x9c8);
      *(undefined4 *)(iVar1 + 0x3d0) = *(undefined4 *)(param_1 + 0x9c0);
      *(undefined4 *)(iVar1 + 0x3d4) = uVar3;
      *(undefined4 *)(iVar1 + 0x3d8) = uVar4;
    }
    *(undefined1 *)(param_1 + 0x476) = 1;
  }
  return;
}

