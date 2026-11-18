#include "ghidra_types.h"

extern int func_0012C85C(int *param_1,uint param_2);
extern int func_0051E300(int param_1);

// USA 004B99AC <- EU 004B9984 (Ghidra, non-matching)

undefined4 func_004B99AC(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = param_1[0x13];
  iVar3 = param_1[0x15];
  while( true ) {
    piVar2 = (int *)(iVar1 - iVar3);
    if (piVar2 == (int *)((int)param_1 + (0x48 - param_1[0x15]))) break;
    iVar1 = func_0051E300((int)piVar2);
    if (iVar1 != 0) {
      (**(code **)(*piVar2 + 0xc))(piVar2);
    }
    iVar1 = *(int *)((int)piVar2 + iVar3 + 4);
  }
  return func_0012C85C(param_1,param_1[0x15]);
}

