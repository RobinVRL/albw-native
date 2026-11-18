#include "ghidra_types.h"

extern int func_0028C788(int param_1,int param_2);
extern int func_004CF5DC(int param_1,int param_2,int param_3,undefined4 *param_4);

// USA 0028C4F8 <- EU 0028C520 (Ghidra, non-matching)

void func_0028C4F8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0xcc) == '\0') {
    if (param_2 != 0) {
      func_0028C788(param_1,1);
      iVar1 = 0;
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 0x20) + 4);
      if (0 < iVar2) {
        do {
          func_004CF5DC(*(int *)(param_1 + 0x10),iVar1,2,(undefined4 *)(param_1 + 0x110));
          iVar1 = iVar1 + 1;
        } while (iVar1 < iVar2);
      }
      *(undefined4 *)(param_1 + 0xf4) = 0x80000000;
    }
  }
  else if (param_2 == 0) {
    iVar1 = 0;
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 0x20) + 4);
    if (0 < iVar2) {
      do {
        func_004CF5DC(*(int *)(param_1 + 0x10),iVar1,2,(undefined4 *)(param_1 + 0x110));
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar2);
    }
    func_0028C788(param_1,0);
  }
  *(char *)(param_1 + 0xcc) = (char)param_2;
  return;
}

