#include "ghidra_types.h"

extern int func_0024FE90(int param_1);
extern int func_00520770(int param_1,uint param_2);
extern undefined4 DAT_00145b60;

// USA 00145AD4 <- EU 00145AD4 (Ghidra, non-matching)
// GLOBAL DAT_00145b60 undefined4

void func_00145AD4(int param_1)

{
  undefined4 uVar1;
  short sVar2;
  uint uVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  uVar3 = *(uint *)(param_1 + 0x490);
  bVar5 = uVar3 < *(uint *)(param_1 + 0x494);
  if (bVar5) {
    *(uint *)(param_1 + 0x490) = uVar3 + 1;
  }
  uVar1 = DAT_00145b60;
  if ((!bVar5 - 1 & (int)*(short *)(param_1 + 0x49e)) == 0) {
    *(undefined4 *)(param_1 + 0x494) = 0x1e;
    *(undefined4 *)(param_1 + 0x498) = uVar1;
    *(undefined4 *)(param_1 + 0x490) = 0;
    puVar4 = func_00520770(param_1,(int)*(short *)(param_1 + 0x49e));
    if (puVar4 != (undefined4 *)0x0) {
      func_0024FE90((int)puVar4);
    }
    sVar2 = *(short *)(param_1 + 0x49e) + 1;
    *(short *)(param_1 + 0x49e) = sVar2;
    if (*(short *)(param_1 + 0x49c) <= sVar2) {
      *(undefined1 *)(param_1 + 0x2d7) = 1;
    }
  }
  return;
}

