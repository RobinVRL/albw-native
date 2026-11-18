#include "ghidra_types.h"

extern int func_0056AF9C(int param_1,uint param_2);
extern int func_0056B904(int param_1);

// USA 0056CDA0 <- EU 0056CD78 (Ghidra, non-matching)

uint func_0056CDA0(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = func_0056AF9C(*(int *)(param_1 + 0x3c),param_2);
  if (iVar1 != 0) {
    uVar2 = func_0056B904(iVar1);
    return uVar2;
  }
  return 0;
}

