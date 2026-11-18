#include "ghidra_types.h"


// USA 00276950 <- EU 00276978 (Ghidra, non-matching)

void func_00276950(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0xe3c + param_2 * 0x28);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  puVar1[3] = param_3[3];
  puVar1[4] = param_3[4];
  puVar1[5] = param_3[5];
  puVar1[6] = param_3[6];
  *(undefined2 *)(puVar1 + 7) = *(undefined2 *)(param_3 + 7);
  *(undefined2 *)((int)puVar1 + 0x1e) = *(undefined2 *)((int)param_3 + 0x1e);
  *(undefined2 *)(puVar1 + 8) = *(undefined2 *)(param_3 + 8);
  *(undefined2 *)((int)puVar1 + 0x22) = *(undefined2 *)((int)param_3 + 0x22);
  puVar1[9] = param_3[9];
  puVar1[3] = *param_3;
  puVar1[4] = param_3[1];
  puVar1[5] = param_3[2];
  return;
}

