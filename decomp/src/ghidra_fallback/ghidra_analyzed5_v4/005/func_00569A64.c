#include "ghidra_types.h"

extern int func_0056CEB4(int param_1,uint param_2,undefined2 *param_3);

// USA 00569A64 <- EU 00569A3C (Ghidra, non-matching)

int func_00569A64(int param_1,uint param_2,undefined2 *param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = func_0056CEB4(*(int *)(param_1 + 4),param_2,param_3);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = *(int **)(param_1 + 8);
  }
  if (iVar1 != 0 && piVar2 != (int *)0x0) {
    if ((char)piVar2[1] != '\0') {
      (**(code **)(*piVar2 + 0x34))(piVar2,param_2,param_3);
    }
    iVar1 = 1;
  }
  return iVar1;
}

