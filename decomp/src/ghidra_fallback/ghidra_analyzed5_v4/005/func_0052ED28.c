#include "ghidra_types.h"

extern int func_0052EBA0(int param_1,float *param_2);
extern int DAT_0052ed28;

// USA 0052ED28 <- EU 0052ED00 (Ghidra, non-matching)
// GLOBAL DAT_0052ed28 int

bool func_0052ED28(int param_1,float *param_2)

{
  bool bVar1;
  
  if (DAT_0052ed28 < *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 0x5fc) + 0x24)) {
    bVar1 = func_0052EBA0(*(int *)(param_1 + 0x10),param_2);
    return bVar1;
  }
  return false;
}

