#include "ghidra_types.h"


// USA 0011E7CC <- EU 0011E7CC (Ghidra, non-matching)

undefined4 func_0011E7CC(int param_1,int param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x14) == -1) {
    uVar1 = 0xfffffffb;
  }
  else {
    piVar2 = *(int **)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x14) * 0x10);
    if (param_2 < *piVar2) {
      piVar2 = piVar2 + param_2 + 1;
      *param_3 = (char)*piVar2;
      param_3[1] = *(undefined1 *)((int)piVar2 + 1);
      param_3[2] = *(undefined1 *)((int)piVar2 + 2);
      param_3[3] = *(undefined1 *)((int)piVar2 + 3);
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

