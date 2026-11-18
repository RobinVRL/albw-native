#include "ghidra_types.h"

extern int func_0066B94C(undefined4 *param_1,undefined1 param_2);

// USA 00513148 <- EU 00513120 (Ghidra, non-matching)

undefined4 func_00513148(int param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 0x490) != '\x01') {
    return 0;
  }
  cVar1 = *(char *)(param_1 + 0x548);
  bVar2 = cVar1 == '\x03';
  bVar3 = cVar1 == '\x06';
  bVar4 = cVar1 != '\a';
  if ((bVar2 || bVar3) || !bVar4) {
    cVar1 = '\x04';
  }
  if ((!bVar2 && !bVar3) && bVar4) {
    if (cVar1 != '\b') {
      return 0;
    }
    cVar1 = '\f';
  }
  return func_0066B94C((undefined4 *)(param_1 + 0x48c),cVar1);
}

