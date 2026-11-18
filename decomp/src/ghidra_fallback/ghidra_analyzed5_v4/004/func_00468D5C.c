#include "ghidra_types.h"

extern int func_0012C85C(int *param_1,uint param_2);
extern int func_0051E300(int param_1);

// USA 00468D5C <- EU 00468D34 (Ghidra, non-matching)

void func_00468D5C(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  func_0012C85C(param_1,param_2);
  uVar2 = 0;
  do {
    if (uVar2 < (uint)param_1[0x52]) {
      piVar3 = *(int **)(param_1[0x54] + uVar2 * 4);
    }
    else {
      piVar3 = (int *)0x0;
    }
    iVar1 = func_0051E300((int)piVar3);
    if (iVar1 != 0) {
      (**(code **)(*piVar3 + 0xc))(piVar3);
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x21);
  return;
}

