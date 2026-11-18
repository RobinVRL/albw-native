#include "ghidra_types.h"


// USA 00165D88 <- EU 00165D8C (Ghidra, non-matching)

undefined4 func_00165D88(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(param_1 + 0xb4) = *param_2;
  *(undefined4 *)(param_1 + 0xb8) = uVar1;
  *(undefined4 *)(param_1 + 0xbc) = uVar2;
  *(undefined4 *)(param_1 + 0xc0) = *param_3;
  *(undefined4 *)(param_1 + 0xc4) = param_3[1];
  *(undefined4 *)(param_1 + 200) = param_3[2];
  *(undefined4 *)(param_1 + 0xcc) = param_3[3];
  uVar1 = param_3[5];
  uVar2 = param_3[6];
  *(undefined4 *)(param_1 + 0xd0) = param_3[4];
  *(undefined4 *)(param_1 + 0xd4) = uVar1;
  *(undefined4 *)(param_1 + 0xd8) = uVar2;
  *(undefined4 *)(param_1 + 0xdc) = param_3[7];
  *(undefined4 *)(param_1 + 0xe0) = param_3[8];
  *(undefined4 *)(param_1 + 0xe4) = param_3[9];
  *(undefined2 *)(param_1 + 0xe8) = *(undefined2 *)(param_3 + 10);
  *(undefined2 *)(param_1 + 0xea) = *(undefined2 *)((int)param_3 + 0x2a);
  *(undefined2 *)(param_1 + 0xec) = *(undefined2 *)(param_3 + 10);
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined4 *)(param_1 + 0xfc) = *param_4;
  *(undefined4 *)(param_1 + 0x100) = param_4[1];
  *(undefined4 *)(param_1 + 0x104) = param_4[2];
  return (undefined4)param_1;
}

