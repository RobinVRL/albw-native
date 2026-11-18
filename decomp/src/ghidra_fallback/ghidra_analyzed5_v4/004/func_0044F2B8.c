#include "ghidra_types.h"


// USA 0044F2B8 <- EU 0044F290 (Ghidra, non-matching)

void * func_0012C718(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  
  cVar1 = *(char *)(param_1 + 0xd);
  bVar3 = cVar1 == '\x03';
  if (bVar3) {
    cVar1 = *(char *)(param_1 + 0xe);
  }
  if (bVar3 && cVar1 == '\x03') {
    uVar2 = 4;
  }
  else {
    uVar2 = 2;
  }
  *(undefined1 *)(param_1 + 0xe) = uVar2;
  return (void *)param_1;
}

