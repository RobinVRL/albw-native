#include "ghidra_types.h"

extern int func_004A9120(undefined4 param_1,int param_2);
extern int func_004A9948(int param_1,int param_2,uint param_3);
extern int *DAT_0031e8b0;

// USA 0031E87C <- EU 0031E858 (Ghidra, non-matching)
// GLOBAL DAT_0031e8b0 int *

undefined4 func_0031E87C(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *DAT_0031e8b0;
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x154) != '\0') {
      *(undefined1 *)(param_1 + 0x154) = 0;
      return func_004A9120(iVar1,param_1 + 0xe4);
    }
  }
  else if (*(char *)(param_1 + 0x154) == '\0') {
    *(undefined1 *)(param_1 + 0x154) = 1;
    return func_004A9948(iVar1,param_1 + 0xe4,9);
  }
  return 0;
}

