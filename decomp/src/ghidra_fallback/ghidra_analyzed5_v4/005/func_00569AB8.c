#include "ghidra_types.h"

extern int func_0056D128(int param_1,uint param_2,undefined4 *param_3);

// USA 00569AB8 <- EU 00569A90 (Ghidra, non-matching)

bool func_00569AB8(int param_1,uint param_2,undefined4 *param_3)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = func_0056D128(*(int *)(param_1 + 4),param_2,param_3);
  piVar2 = (int *)0x0;
  if (bVar1) {
    piVar2 = *(int **)(param_1 + 8);
  }
  if (bVar1 && piVar2 != (int *)0x0) {
    if ((char)piVar2[1] != '\0') {
      (**(code **)(*piVar2 + 0x20))(piVar2,param_2,param_3);
    }
    bVar1 = true;
  }
  return bVar1;
}

