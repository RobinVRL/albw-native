#include "ghidra_types.h"

extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_00588BE4(int param_1);
extern int *DAT_006532dc;
extern int *DAT_006532e0;

// USA 0065327C <- EU 00653254 (Ghidra, non-matching)
// GLOBAL DAT_006532dc int *
// GLOBAL DAT_006532e0 int *

void func_0065327C(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 0x9d3) == '\x01') {
    *(undefined1 *)(param_1 + 0x9d3) = 2;
    if (((0 < *(short *)(param_1 + 0x5e)) &&
        (iVar1 = func_0052FBDC(*DAT_006532dc + 0x3dbbc,(int)*(short *)(param_1 + 0x5e),0),
        iVar1 != 0)) && (iVar2 = func_00588BE4(iVar1), iVar2 == *DAT_006532e0)) {
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

