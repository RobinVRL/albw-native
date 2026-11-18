#include "ghidra_types.h"

extern int func_0010DEB0(undefined4 *param_1);

// USA 00103B8C <- EU 00103B8C (Ghidra, non-matching)

void func_00103B8C(int *param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[5] = -1;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  iVar1 = *param_1;
  bVar2 = iVar1 == 0;
  if (bVar2) {
    iVar1 = param_1[1];
  }
  if (bVar2 && iVar1 == 0) {
    func_0010DEB0(param_1 + 3);
    param_1[1] = param_2 + param_3;
    *param_1 = param_2;
  }
  return;
}

