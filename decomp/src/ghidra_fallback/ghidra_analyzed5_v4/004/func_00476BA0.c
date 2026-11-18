#include "ghidra_types.h"

extern int func_0066E7A0(undefined4 *param_1,char param_2);

// USA 00476BA0 <- EU 00476B78 (Ghidra, non-matching)

undefined4 func_00476BA0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  
  iVar1 = *(int *)(param_1 + 0x158);
  if (*(char *)(iVar1 + 0xd0) == '\x02') {
    cVar3 = '\v';
    puVar2 = (undefined4 *)(iVar1 + 0xf0);
  }
  else {
    if ((4 < (int)*(char *)(*(int *)(iVar1 + 500) + 0x3c) - 1U) &&
       (4 < (int)*(char *)(*(int *)(iVar1 + 0x1f8) + 0x3c) - 1U)) {
      return 0;
    }
    func_0066E7A0((undefined4 *)(iVar1 + 0xf0),'\v');
    cVar3 = '\x02';
    puVar2 = (undefined4 *)(iVar1 + 0xcc);
  }
  return func_0066E7A0(puVar2,cVar3);
}

