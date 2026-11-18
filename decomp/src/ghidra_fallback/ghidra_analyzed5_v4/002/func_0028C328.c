#include "ghidra_types.h"

extern int func_0028C788(int param_1,int param_2);
extern int func_004CF5DC(int param_1,int param_2,int param_3,undefined4 *param_4);

// USA 0028C328 <- EU 0028C350 (Ghidra, non-matching)

void func_0028C328(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 0x20) + 4);
  if (0 < iVar2) {
    do {
      func_004CF5DC(*(int *)(param_1 + 0x10),iVar1,2,(undefined4 *)(param_1 + 0x110));
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  func_0028C788(param_1,0);
  *(undefined4 *)(param_1 + 0xf8) = 0xffffffff;
  return;
}

