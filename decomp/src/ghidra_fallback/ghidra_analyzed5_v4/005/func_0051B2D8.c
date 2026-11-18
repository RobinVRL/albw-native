#include "ghidra_types.h"

extern int func_0012C790(int param_1);
extern int func_001B6B38(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);

// USA 0051B2D8 <- EU 0051B2B0 (Ghidra, non-matching)

void func_0051B2D8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  bool bVar4;
  
  if ((*(short *)(param_1 + 0x58) == 3) && (iVar2 = *(int *)(param_1 + 0x54), iVar2 != 0)) {
    cVar1 = *(char *)(iVar2 + 0xd);
    bVar4 = cVar1 == '\0';
    if (bVar4) {
      cVar1 = *(char *)(iVar2 + 0xe);
    }
    if (!bVar4 || cVar1 != '\0') {
      func_0012C790(iVar2);
      func_001B6B38(*(int **)(param_1 + 0x54),extraout_r1,param_3,param_4);
      if (*(int *)(param_1 + 0x54) == 0) goto LAB_0051b324;
    }
    if (*(int **)(param_1 + 0x50) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x50) + 0x28))(*(int **)(param_1 + 0x50));
    }
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0xffff;
  }
LAB_0051b324:
  if ((*(short *)(param_1 + 0x74) == 2) && (iVar2 = *(int *)(param_1 + 0x70), iVar2 != 0)) {
    cVar1 = *(char *)(iVar2 + 0xd);
    bVar4 = cVar1 == '\0';
    if (bVar4) {
      cVar1 = *(char *)(iVar2 + 0xe);
    }
    if (!bVar4 || cVar1 != '\0') {
      func_0012C790(iVar2);
      func_001B6B38(*(int **)(param_1 + 0x70),extraout_r1_00,param_3,param_4);
    }
  }
  piVar3 = *(int **)(param_1 + 0xf8);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x34))(piVar3);
    *(undefined1 *)((int)piVar3 + 0xe) = 0;
    *(undefined1 *)((int)piVar3 + 0xd) = 0;
  }
  return;
}

