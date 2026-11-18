#include "ghidra_types.h"


// USA 0048A08C <- EU 0048A064 (Ghidra, non-matching)

int func_0048A08C(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if ((char)param_1[0x13] != '\0') {
    if (param_2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar2 = (**(code **)(*param_1 + 0x20))(param_1);
      iVar1 = 0;
      if ((iVar2 != 0) && (iVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2), iVar1 != 0)) {
        *(undefined4 *)(param_2 + 0x10) = 0;
        *(undefined4 *)(param_2 + 0x14) = 0;
      }
    }
  }
  return iVar1;
}

