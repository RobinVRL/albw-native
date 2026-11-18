#include "ghidra_types.h"

extern int func_001E01A8(int param_1,undefined4 param_2);
extern int func_0056A120(int param_1);

// USA 00199EC8 <- EU 00199EC8 (Ghidra, non-matching)

void func_00199EC8(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
    if (*(int *)(param_1 + 0x30) != 0) {
      iVar3 = *(int *)(param_1 + 0x34);
      for (iVar2 = *(int *)(param_1 + 0x2c) - iVar3; iVar2 != (param_1 + 0x28) - iVar3;
          iVar2 = *(int *)(iVar2 + iVar3 + 4) - iVar3) {
        if (*(char *)(iVar2 + 0x10c) == '\0') {
          bVar1 = false;
          if (**(int **)(iVar2 + 0x24) != 0) {
            bVar1 = func_0056A120(**(int **)(iVar2 + 0x24));
          }
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) {
          func_001E01A8(iVar2,1);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  return;
}

