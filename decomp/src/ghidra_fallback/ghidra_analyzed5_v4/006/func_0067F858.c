#include "ghidra_types.h"


// USA 0067F858 <- EU 0067F830 (Ghidra, non-matching)

void func_0067F858(int param_1,uint param_2,undefined *param_3,uint param_4,float fparam_0)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    if (param_2 == 0) {
      return;
    }
    if ((((param_2 & 1) != 0) && (iVar3 < 0x10)) &&
       (iVar1 = *(int *)(param_1 + iVar3 * 4 + 0x90), iVar1 != 0)) {
      pcVar2 = (code *)param_3;
      if ((param_4 & 1) != 0) {
        pcVar2 = *(code **)(param_3 + *(int *)(iVar1 + ((int)param_4 >> 1)));
      }
      (*pcVar2)();
    }
    iVar3 = iVar3 + 1;
    param_2 = param_2 >> 1;
  } while (iVar3 < 0x10);
  return;
}

