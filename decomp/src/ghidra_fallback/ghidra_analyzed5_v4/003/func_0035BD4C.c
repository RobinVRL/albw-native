#include "ghidra_types.h"

extern int func_0014F794(int param_1);
extern int func_004CF478(int param_1,int param_2);

// USA 0035BD4C <- EU 0035BD28 (Ghidra, non-matching)

int func_0035BD4C(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_0014F794(param_1);
  if (*(int *)(param_1 + 0x40c) != 0) {
    if ((iVar1 == 0) || (*(char *)(param_1 + 0x448) == '\0')) {
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
    func_004CF478(*(int *)(param_1 + 0x40c),iVar2);
  }
  return iVar1;
}

