#include "ghidra_types.h"

extern int func_0056D38C(int param_1,uint *param_2);

// USA 00569C64 <- EU 00569C3C (Ghidra, non-matching)

bool func_00569C64(int param_1,uint *param_2)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = func_0056D38C(*(int *)(param_1 + 4),param_2);
  piVar2 = (int *)0x0;
  if (bVar1) {
    piVar2 = *(int **)(param_1 + 8);
  }
  if (bVar1 && piVar2 != (int *)0x0) {
    if ((char)piVar2[1] != '\0') {
      (**(code **)(*piVar2 + 0x28))(piVar2,param_2);
    }
    bVar1 = true;
  }
  return bVar1;
}

