#include "ghidra_types.h"

extern int func_0049DE34(int param_1);

// USA 004A1270 <- EU 004A1248 (Ghidra, non-matching)

void func_004A1270(int param_1,undefined4 param_2,undefined *param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 4) != '\0') {
    uVar4 = *(undefined4 *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0x14);
    while (iVar3 = *(int *)(iVar2 + 4), iVar2 != param_1 + 0x10) {
      puVar1 = *(undefined4 **)(*(int *)(iVar2 + 8) + 0x20);
      iVar2 = iVar3;
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(puVar1,uVar4);
      }
    }
    func_0049DE34(*(int *)(param_1 + 0x1c));
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

