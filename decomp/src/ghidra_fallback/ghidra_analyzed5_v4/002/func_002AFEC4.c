#include "ghidra_types.h"


// USA 002AFEC4 <- EU 002AFEA0 (Ghidra, non-matching)

void func_002AFEC4(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x510);
  if (param_2 < 0) {
    param_2 = 0xb4;
  }
  *(short *)(iVar1 + 0x2a4) = (short)param_2;
  if (param_3 < 0) {
    *(undefined2 *)(iVar1 + 0x2a6) = 0x3c;
  }
  else {
    *(short *)(iVar1 + 0x2a6) = (short)param_3;
  }
  return;
}

