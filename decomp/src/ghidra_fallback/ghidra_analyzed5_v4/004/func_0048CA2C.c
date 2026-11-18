#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_0048C7F8(int param_1);
extern int func_0048C91C(int param_1);
extern int func_0049F5FC(undefined4 *param_1);

// USA 0048CA2C <- EU 0048CA04 (Ghidra, non-matching)

undefined4 func_0048CA2C(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float in_s0;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar5 = *(int *)(param_1 + 0x18);
    iVar4 = *(int *)(param_1 + 0x10) - iVar5;
    iVar3 = *(int *)(iVar4 + iVar5 + 4);
    while (iVar4 != (param_1 + 0xc) - *(int *)(param_1 + 0x18)) {
      func_0010F1F8((int *)(*(int *)(param_1 + 0x18) + iVar4),in_s0);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
      func_0048C91C(iVar4);
      iVar1 = func_0048C7F8(iVar4);
      if (iVar1 != 0) {
        piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x14);
        iVar1 = (**(code **)(*piVar2 + 0x24))(piVar2,(int)*(char *)(param_1 + 8),iVar4);
        if (iVar1 == 0) {
          func_0048C91C(iVar4);
        }
        else {
          func_0010F1DC((int *)(param_1 + 0x1c),(int *)(*(int *)(param_1 + 0x28) + iVar4));
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
        }
      }
      iVar4 = iVar3 - iVar5;
      iVar3 = *(int *)(iVar3 + 4);
    }
    return func_0049F5FC((undefined4 *)(param_1 + 0xc));
  }
  return 0;
}

