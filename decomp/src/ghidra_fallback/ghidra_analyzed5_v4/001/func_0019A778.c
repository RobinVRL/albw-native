#include "ghidra_types.h"

extern int func_001E01A8(int param_1,undefined4 param_2);
extern int func_0052F210(int param_1);
extern int func_0056A120(int param_1);
extern int func_00588224(int param_1,uint param_2,uint param_3);
extern int *DAT_0019a844;

// USA 0019A778 <- EU 0019A778 (Ghidra, non-matching)
// GLOBAL DAT_0019a844 int *

void func_0019A778(int param_1)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = DAT_0019a844;
  if (*(char *)(param_1 + 0x48) == '\0') {
    if (*(int *)(param_1 + 0x30) != 0) {
      iVar6 = *(int *)(param_1 + 0x34);
      for (iVar5 = *(int *)(param_1 + 0x2c) - iVar6; iVar5 != (param_1 + 0x28) - iVar6;
          iVar5 = *(int *)(iVar5 + iVar6 + 4) - iVar6) {
        uVar3 = func_0052F210(iVar5);
        iVar4 = func_00588224(*piVar1,uVar3,0x4000000);
        if (iVar4 == 0) {
          if (*(char *)(iVar5 + 0x10c) == '\0') {
            bVar2 = false;
            if (**(int **)(iVar5 + 0x24) == 0) goto LAB_0019a810;
            bVar2 = func_0056A120(**(int **)(iVar5 + 0x24));
            if (bVar2) goto LAB_0019a824;
          }
          else {
            bVar2 = true;
LAB_0019a810:
            if (bVar2) goto LAB_0019a824;
          }
          func_001E01A8(iVar5,1);
        }
LAB_0019a824:
      }
    }
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  return;
}

