#include "ghidra_types.h"

extern int func_004BE2E8(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);

// USA 004BDCE8 <- EU 004BDCC0 (Ghidra, non-matching)

undefined4 func_004BDCE8(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  iVar2 = *(int *)(param_1 + 0x798);
  if (iVar2 == 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x2d0) + 0x1c8);
    *(int *)(param_1 + 0x798) = iVar2;
  }
  iVar2 = *(int *)(iVar2 + 0xd4);
  iVar4 = 0;
  iVar3 = 0;
  uVar6 = 0;
  if (0 < iVar2) {
    do {
      if ((uVar6 < *(uint *)(*(int *)(param_1 + 0x798) + 0xd4)) &&
         (piVar5 = *(int **)(*(int *)(*(int *)(param_1 + 0x798) + 0xdc) + uVar6 * 4),
         piVar5 != (int *)0x0)) {
        cVar1 = *(char *)(*piVar5 + 5);
        if (cVar1 == '\0') {
          iVar3 = iVar3 + 1;
        }
        else if (cVar1 == '\x01') {
          iVar4 = iVar4 + 1;
        }
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar2);
  }
  if ((*(int *)(param_1 + 0x7b4) != 0) &&
     (iVar4 = iVar4 - *(int *)(*(int *)(param_1 + 0x7b4) + 4), iVar4 < 1)) {
    iVar4 = 0;
  }
  if (*(int *)(param_1 + 0x794) == 0) {
    *(undefined4 *)(param_1 + 0x790) = param_4;
  }
  return func_004BE2E8(param_1,iVar2,iVar3,iVar4,param_2,param_3);
}

