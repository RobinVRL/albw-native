#include "ghidra_types.h"

extern int func_00451050(int param_1);
extern int func_004A58B0(int param_1,int param_2);

// USA 00451158 <- EU 00451130 (Ghidra, non-matching)

void func_00451158(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    if (uVar3 < *(uint *)(param_1 + 0x108)) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x110) + uVar3 * 4);
    }
    else {
      iVar1 = 0;
    }
    func_004A58B0(iVar1,0);
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 3);
  uVar2 = func_00451050(param_1);
  *(undefined4 *)(param_1 + 0x138) = uVar2;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  return;
}

