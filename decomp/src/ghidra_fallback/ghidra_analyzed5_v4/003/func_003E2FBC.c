#include "ghidra_types.h"


// USA 003E2FBC <- EU 003E2F9C (Ghidra, non-matching)

void * func_003E2FBC(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  do {
    iVar3 = 4;
    uVar1 = uVar2;
    do {
      if ((uVar1 & 0x80) == 0) {
        uVar1 = uVar1 << 1;
      }
      else {
        uVar1 = uVar1 << 1 ^ 7;
      }
      if ((uVar1 & 0x80) == 0) {
        uVar1 = uVar1 << 1;
      }
      else {
        uVar1 = uVar1 << 1 ^ 7;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(char *)(param_1 + 1 + uVar2) = (char)uVar1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x100);
  return (void *)param_1;
}

