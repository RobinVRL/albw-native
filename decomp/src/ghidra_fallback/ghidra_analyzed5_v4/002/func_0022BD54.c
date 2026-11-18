#include "ghidra_types.h"

extern int func_0022AA1C(int param_1,int param_2);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern undefined4 DAT_0022bdd0;
extern undefined4 DAT_0022bdd4;

// USA 0022BD54 <- EU 0022BD54 (Ghidra, non-matching)
// GLOBAL DAT_0022bdd0 undefined4
// GLOBAL DAT_0022bdd4 undefined4

undefined4 func_0022BD54(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_0022bdd0;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_0022bdd0;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  func_004FC07C(param_1,0,0xffffffff,0);
  uVar1 = DAT_0022bdd4;
  *(undefined4 *)(param_1 + 0xa74) = 0x79;
  *(undefined4 *)(param_1 + 0xa78) = uVar1;
  *(undefined4 *)(param_1 + 0xa70) = 0;
  iVar2 = *(int *)(param_1 + 0xcb4) / 2 + -1;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (2 < iVar2) {
    iVar2 = 2;
  }
  return func_0022AA1C(param_1,iVar2);
}

