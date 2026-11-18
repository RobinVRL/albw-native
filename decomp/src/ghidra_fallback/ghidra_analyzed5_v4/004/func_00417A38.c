#include "ghidra_types.h"

extern int func_00417200(int param_1);
extern int func_0041CA0C(int param_1);
extern int func_0041CD48(undefined4 *param_1);
extern int func_0041D24C(int param_1);

// USA 00417A38 <- EU 00417A18 (Ghidra, non-matching)

void func_00417A38(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x7a) = 0;
  }
  else if (param_2 == 1) {
    *(undefined1 *)(param_1 + 0x7a) = 1;
  }
  else {
    if (param_2 == 2) {
      func_00417200(param_1);
      for (iVar2 = *(int *)(param_1 + 0x130); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x1a4)) {
        if (*(char *)(iVar2 + 0x131) != '\0') {
          func_0041D24C(iVar2);
        }
      }
      for (iVar2 = *(int *)(param_1 + 0x130); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x1a4)) {
        func_0041CA0C(iVar2);
      }
    }
    else {
      if (param_2 != 3) {
        return;
      }
      for (puVar1 = *(undefined4 **)(param_1 + 0x130); puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)puVar1[0x69]) {
        func_0041CA0C((int)puVar1);
        func_0041CD48(puVar1);
      }
    }
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(undefined1 *)(param_1 + 0x7a) = 1;
  }
  return;
}

