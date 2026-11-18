#include "ghidra_types.h"

extern int func_00111EE4(int param_1,int param_2);
extern int func_00414FF0(void);
extern int func_004176AC(int param_1);

// USA 0041B8B4 <- EU 0041B894 (Ghidra, non-matching)

void func_0041B8B4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x166) != '\0') {
    puVar1 = func_00414FF0();
    func_00111EE4((int)puVar1,param_1 + 0x50);
    *(undefined1 *)(param_1 + 0x166) = 0;
  }
  iVar2 = 0;
  if (*(char *)(param_1 + 0xd) != '\0') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  do {
    if (iVar2 < 0x10) {
      iVar3 = param_1 + iVar2 * 4;
      if (*(int *)(iVar3 + 0x90) != 0) {
        func_004176AC(*(int *)(iVar3 + 0x90));
        (**(code **)(**(int **)(param_1 + 0x84) + 0xc))
                  (*(int **)(param_1 + 0x84),*(undefined4 *)(iVar3 + 0x90));
        *(undefined4 *)(iVar3 + 0x90) = 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  return;
}

