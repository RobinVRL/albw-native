#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004A6B60(int *param_1,int param_2);
extern int func_004A6B8C(int *param_1);

// USA 004A6568 <- EU 004A6540 (Ghidra, non-matching)

void func_004A6568(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = func_004A6B8C(*(int **)(*(int *)(param_1 + 0xc) + 0xc));
  if (0 < iVar1) {
    uVar2 = func_0010CEE0(iVar1 * 8,param_2,4);
    iVar4 = 0;
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    *(int *)(param_1 + 0x30) = iVar1;
    iVar1 = 0;
    if (0 < *(int *)(**(int **)(*(int *)(param_1 + 0xc) + 0xc) + 0x14)) {
      do {
        pcVar3 = func_004A6B60(*(int **)(*(int *)(param_1 + 0xc) + 0xc),iVar1);
        iVar5 = iVar4;
        if (pcVar3 != (char *)0x0) {
          *(int *)(*(int *)(param_1 + 0x2c) + iVar4 * 8) = iVar1;
          uVar2 = (**(code **)(**(int **)(param_1 + 0x10) + 8))(*(int **)(param_1 + 0x10));
          iVar5 = iVar4 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar4 * 8 + 4) = uVar2;
        }
        iVar1 = iVar1 + 1;
        iVar4 = iVar5;
      } while (iVar1 < *(int *)(**(int **)(*(int *)(param_1 + 0xc) + 0xc) + 0x14));
    }
  }
  uVar2 = func_0010CEE0(*(undefined4 *)(**(int **)(*(int *)(param_1 + 0xc) + 0xc) + 0x18),param_2,4)
  ;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  iVar1 = 0;
  if (0 < *(int *)(**(int **)(*(int *)(param_1 + 0xc) + 0xc) + 0x18)) {
    do {
      *(undefined1 *)(*(int *)(param_1 + 0x34) + iVar1) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(**(int **)(*(int *)(param_1 + 0xc) + 0xc) + 0x18));
  }
  return;
}

