#include "ghidra_types.h"

extern int func_00676500(int param_1,int param_2);

// USA 0049BCB8 <- EU 0049BC90 (Ghidra, non-matching)

void func_0049BCB8(int *param_1)

{
  int iVar1;
  
  while (iVar1 = func_00676500((int)(param_1 + 7),(uint)*(byte *)(param_1 + 0x1b)),
        param_1[0x1c] != iVar1) {
    (**(code **)(*param_1 + 0x3c))(param_1);
  }
  return;
}

