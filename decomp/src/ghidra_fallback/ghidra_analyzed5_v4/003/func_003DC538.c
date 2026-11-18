#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);

// USA 003DC538 <- EU 003DC518 (Ghidra, non-matching)

undefined4 func_003DC538(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  func_0010C0C0((int *)(param_1 + 0x10));
  iVar1 = *(int *)(param_2 + 0x24);
  iVar2 = *(int *)(param_2 + 0x28);
  if (iVar1 == 0 && iVar2 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x24) = iVar1, iVar1 == 0)) {
      *(int *)(param_1 + 4) = iVar2;
    }
    if ((iVar1 != 0) &&
       (iVar2 = *(int *)(param_2 + 0x28), *(int *)(iVar1 + 0x28) = iVar2, iVar2 == 0)) {
      *(int *)(param_1 + 8) = iVar1;
    }
  }
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
    *(int *)(param_1 + 4) = param_2;
    *(undefined4 *)(param_2 + 0x28) = 0;
  }
  else {
    do {
      iVar2 = iVar1;
      if (*(int *)(iVar2 + 0x20) <= param_3) {
        iVar1 = *(int *)(iVar2 + 0x24);
        *(int *)(param_2 + 0x24) = iVar1;
        *(int *)(param_2 + 0x28) = iVar2;
        if (iVar1 == 0) {
          *(undefined4 *)(param_2 + 0x24) = 0;
          *(int *)(param_1 + 4) = param_2;
        }
        else {
          *(int *)(iVar1 + 0x28) = param_2;
        }
        *(int *)(iVar2 + 0x24) = param_2;
        goto LAB_003dc5e8;
      }
      iVar1 = *(int *)(iVar2 + 0x28);
    } while (*(int *)(iVar2 + 0x28) != 0);
    *(int *)(iVar2 + 0x28) = param_2;
    *(int *)(param_2 + 0x24) = iVar2;
    *(undefined4 *)(param_2 + 0x28) = 0;
  }
  *(int *)(param_1 + 8) = param_2;
LAB_003dc5e8:
  return func_0010C160((int *)(param_1 + 0x10));
}

