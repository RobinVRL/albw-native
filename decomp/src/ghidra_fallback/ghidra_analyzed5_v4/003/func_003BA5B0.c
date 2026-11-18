#include "ghidra_types.h"

extern int func_0038428C(int param_1,undefined2 param_2,int param_3);
extern int func_003842C0(int param_1,int param_2,int param_3,int param_4);
extern int DAT_003ba604;

// USA 003BA5B0 <- EU 003BA58C (Ghidra, non-matching)
// GLOBAL DAT_003ba604 int

void func_003BA5B0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x48) + 0xbcc);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x14))(piVar2);
  }
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  iVar1 = DAT_003ba604;
  *(undefined1 *)(*(int *)(param_1 + 0x48) + 0x936) = 1;
  *(undefined2 *)(param_1 + 0x90) = 0;
  iVar3 = *(int *)(param_1 + 0x48);
  *(undefined2 *)(iVar1 + iVar3) = 0;
  func_0038428C(iVar3 + 0x8c0,0,1);
  func_003842C0(*(int *)(param_1 + 0x48) + 0x8c0,0x44,10,1);
  *(undefined1 *)(param_1 + 0x9c) = 1;
  return;
}

