#include "ghidra_types.h"


// USA 00100118 <- EU 00100118 (Ghidra, function missing from the decomp table)

int func_00100118(int param_1,undefined *param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = param_1;
  if (param_2 != (undefined *)0x0) {
    while (bVar2 = param_4 != 0, param_4 = param_4 + -1, bVar2) {
      (*(code *)param_2)(iVar1);
      iVar1 = iVar1 + param_3;
    }
  }
  return param_1;
}

