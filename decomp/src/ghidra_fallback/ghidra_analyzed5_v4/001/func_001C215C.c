#include "ghidra_types.h"

extern int func_0014F794(int param_1);
extern int func_004CF478(int param_1,int param_2);

// USA 001C215C <- EU 001C215C (Ghidra, non-matching)

int func_001C215C(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_0014F794(param_1);
  if (*(int *)(param_1 + 0x40c) != 0) {
    if ((iVar1 == 0) || (*(char *)(param_1 + 0x44c) == '\0')) {
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
    func_004CF478(*(int *)(param_1 + 0x40c),iVar2);
  }
  return iVar1;
}

