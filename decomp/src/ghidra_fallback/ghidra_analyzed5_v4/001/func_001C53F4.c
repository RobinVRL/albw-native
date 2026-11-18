#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_001C51C8(int param_1,uint param_2,undefined4 param_3);
extern int func_001C52B0(int param_1,uint param_2,undefined4 param_3);
extern undefined4 DAT_001c5440;

// USA 001C53F4 <- EU 001C53F4 (Ghidra, non-matching)
// GLOBAL DAT_001c5440 undefined4

undefined4 func_001C53F4(int param_1)

{
  func_001C52B0(param_1,2,0);
  func_001C51C8(param_1,1,0);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x7b8) + 0x14) + 0x10) = DAT_001c5440;
  return func_00168E9C(*(int **)(param_1 + 0x7b8),*(int *)(param_1 + 0x7b0),(int *)0x0);
}

