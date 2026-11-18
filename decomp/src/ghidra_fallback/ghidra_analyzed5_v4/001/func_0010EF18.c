#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);

// USA 0010EF18 <- EU 0010EF18 (Ghidra, non-matching)

int * func_0010EF18(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar3 = (int *)0x0;
    if ((param_1[0x1c] & 1U) != 0) {
      func_0010C0B8((int)(param_1 + 0x15));
      piVar3 = param_1 + 0x15;
    }
    iVar1 = param_1[0xb];
    iVar4 = param_1[0xd];
    while( true ) {
      piVar2 = (int *)(iVar1 - iVar4);
      if (piVar2 == (int *)((int)param_1 + (0x28 - param_1[0xd]))) {
        if (piVar3 != (int *)0x0) {
          func_0010EEE0((int)piVar3);
        }
        return param_1;
      }
      iVar1 = (**(code **)(*piVar2 + 0x40))(piVar2,param_2);
      if (iVar1 != 0) break;
      iVar1 = *(int *)((int)piVar2 + iVar4 + 4);
    }
    piVar2 = func_0010EF18(piVar2,param_2);
    if (piVar3 != (int *)0x0) {
      func_0010EEE0((int)piVar3);
    }
  }
  return piVar2;
}

