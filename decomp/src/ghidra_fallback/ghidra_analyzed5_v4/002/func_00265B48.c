#include "ghidra_types.h"

extern int func_004F8254();

// USA 00265B48 <- EU 00265B70 (Ghidra, non-matching)

bool func_00265B48(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  
  *(undefined2 *)(*(int *)(param_1 + 0x430) + 0x28) = 0;
  if ((*(int *)(param_1 + 0x910) == *(int *)(param_1 + 0x3a0)) &&
     (cVar1 = *(char *)(*(int *)(param_2 + 0x2c) + 1),
     (cVar1 == '\n' || cVar1 == '\t') || cVar1 == '\a')) {
    *(undefined2 *)(*(int *)(param_1 + 0x430) + 0x28) = 0xa0;
  }
  bVar2 = func_004F8254(param_1,param_2);
  return bVar2;
}

