#include "ghidra_types.h"

extern int func_001006FC(int param_1,uint param_2,undefined4 param_3,uint *param_4);

// USA 00499548 <- EU 00499520 (Ghidra, function missing from the decomp table)

uint func_00499548(int param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  uVar2 = *(uint *)(param_1 + 8);
  uVar1 = func_001006FC(iVar3,uVar2,param_2,param_3);
  if (((int)uVar1 < 0) || ((int)uVar2 <= (int)uVar1)) {
    uVar1 = uVar2 - 1;
    *(undefined2 *)(iVar3 + uVar2 * 2 + -2) = 0;
  }
  return uVar1;
}

