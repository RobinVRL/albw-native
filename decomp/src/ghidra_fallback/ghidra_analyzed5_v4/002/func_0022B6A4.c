#include "ghidra_types.h"

extern int func_0036BFD0(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_0036C2B8(undefined4 param_1,undefined4 param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_0022b730;
extern undefined4 *DAT_0022b734;
extern undefined4 *DAT_0022b738;
extern undefined4 DAT_0022b73c;

// USA 0022B6A4 <- EU 0022B6A4 (Ghidra, non-matching)
// GLOBAL DAT_0022b730 int *
// GLOBAL DAT_0022b734 undefined4 *
// GLOBAL DAT_0022b738 undefined4 *
// GLOBAL DAT_0022b73c undefined4

void func_0022B6A4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0xa5c) = 2;
  iVar2 = param_1 + 0x968;
  *(int *)(param_1 + 0x990) = param_1 + 0xcd0;
  func_0036BFD0(iVar2,0xffffffff,0xffffffff);
  iVar3 = func_00588BE4(param_1);
  if (iVar3 == *DAT_0022b730) {
    func_0036C2B8(iVar2,*DAT_0022b734);
  }
  else {
    func_0036C2B8(iVar2,*DAT_0022b738);
  }
  uVar1 = DAT_0022b73c;
  *(undefined4 *)(param_1 + 0xa74) = 0x78;
  *(undefined4 *)(param_1 + 0xa78) = uVar1;
  *(undefined4 *)(param_1 + 0xa70) = 0;
  return;
}

