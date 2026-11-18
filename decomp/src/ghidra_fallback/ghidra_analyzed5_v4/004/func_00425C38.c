#include "ghidra_types.h"


// USA 00425C38 <- EU 00425C18 (Ghidra, non-matching)

void func_00425C38(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x74) != 0 && param_2 != (int *)0x0) {
    *(int **)(*(int *)(param_1 + 0x74) + 0x128) = param_2;
    iVar2 = *(int *)(param_1 + 0x74);
    *param_2 = iVar2 + 0x114;
    *(int **)(iVar2 + 0x128) = param_2;
    piVar3 = *(int **)(param_1 + 0x74);
    *(undefined2 *)((int)param_2 + 0x32) = 0;
    *(undefined1 *)((int)param_2 + 0x3d) = 0;
    (**(code **)(*piVar3 + 0x60))(piVar3,param_2[2],0,*(ushort *)(param_2 + 8) >> 1);
    if ((*(char *)((int)param_2 + 0x2e) == '\0') || (cVar1 = '\0', (char)param_2[0x10] != '\0')) {
      cVar1 = '\x01';
    }
    *(char *)(param_1 + 0x78) = cVar1;
    if (cVar1 == '\0') {
      uVar4 = 3;
    }
    else {
      uVar4 = 1;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc) = uVar4;
  }
  return;
}

