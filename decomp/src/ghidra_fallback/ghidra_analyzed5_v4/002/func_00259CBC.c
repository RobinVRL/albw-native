#include "ghidra_types.h"


// USA 00259CBC <- EU 00259CE4 (Ghidra, non-matching)

void func_00259CBC(int param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if (param_2 == 0xffffffff) {
    *(undefined4 *)(iVar1 + 0x58) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x5c) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x60) = 0xffffffff;
  }
  else if (param_2 < 0x40) {
    puVar2 = (uint *)(iVar1 + 0x58);
    if ((int)param_2 < 0x40) {
      if (0x1f < (int)param_2) {
        param_2 = param_2 - 0x20;
        *puVar2 = *(uint *)(iVar1 + 0x5c);
      }
    }
    else {
      param_2 = param_2 - 0x40;
      *puVar2 = *(uint *)(iVar1 + 0x60);
    }
    *puVar2 = *puVar2 | 1 << (param_2 & 0xff);
    return;
  }
  return;
}

