#include "ghidra_types.h"

extern int func_00111EF0(int *param_1,int *param_2);
extern int func_00112364(int *param_1,int param_2,int *param_3);

// USA 0041998C <- EU 0041996C (Ghidra, non-matching)

undefined4 func_0041998C(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  func_00111EF0((int *)(param_1 + 0x10),(int *)(param_2 + 0x58));
  iVar2 = param_1 + 8;
  if (iVar2 != *(int *)(param_1 + 8)) {
    do {
      iVar1 = *(int *)(iVar2 + 4);
      if (*(int *)(iVar1 + -0x18) <= *(int *)(param_2 + 0x40)) break;
      iVar2 = iVar1;
    } while (iVar1 != *(int *)(param_1 + 8));
  }
  return func_00112364((int *)(param_1 + 4),iVar2,(int *)(param_2 + 0x58));
}

