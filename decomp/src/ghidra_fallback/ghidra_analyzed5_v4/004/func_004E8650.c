#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern int iRam004e8664;

// USA 004E8650 <- EU 004E8628 (Ghidra, non-matching)
// GLOBAL UNK_004e8664 int

void func_004E8650(int param_1)

{
  *(undefined1 *)(param_1 + 0x427) = 0;
  func_004CF478(*(int *)(param_1 + 0x4d4),1);
  func_00151148(*(int *)(param_1 + 0x4d8),1);
  *(undefined2 *)(iRam004e8664 + param_1) = 0;
  return;
}

