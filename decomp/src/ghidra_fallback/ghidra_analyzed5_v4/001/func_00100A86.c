#include "ghidra_types.h"


// PARAM param_5 Stack[0x0]:4 undefined *
// USA 00100A86 <- EU 00100A86 (Ghidra, function missing from the decomp table)

int func_00100A86(int param_1,int param_2,int param_3,int param_4,undefined *param_5)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = param_1;
  if (param_5 != (undefined *)0x0) {
    while (bVar2 = param_4 != 0, param_4 = param_4 + -1, bVar2) {
      (*(code *)param_5)(iVar1,param_2);
      param_2 = param_2 + param_3;
      iVar1 = iVar1 + param_3;
    }
  }
  return param_1;
}

