#include "ghidra_types.h"

extern int func_003DDFC8(int param_1,int param_2,int param_3,undefined4 param_4);
extern int DAT_003dcbc8;

// USA 003DCBD4 <- EU 003DCBB4 (Ghidra, non-matching)
// GLOBAL DAT_003dcbc8 int

undefined4 func_003DCBD4(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = param_1 + param_2 * 4;
  *(int *)(iVar1 + 0x14) = param_3;
  *(undefined4 *)(iVar1 + 0x1c) = param_4;
  return func_003DDFC8(DAT_003dcbc8,param_2,param_3,param_4);
}

