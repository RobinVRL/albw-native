#include "ghidra_types.h"

extern int func_0056CDC0(int param_1,uint param_2,undefined4 *param_3);

// USA 00569BBC <- EU 00569B94 (Ghidra, non-matching)

int func_00569BBC(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = func_0056CDC0(*(int *)(param_1 + 4),param_2,param_3);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = *(int **)(param_1 + 8);
  }
  if (iVar1 != 0 && piVar2 != (int *)0x0) {
    if ((char)piVar2[1] != '\0') {
      (**(code **)(*piVar2 + 0x3c))(piVar2,param_2,param_3);
    }
    iVar1 = 1;
  }
  return iVar1;
}

