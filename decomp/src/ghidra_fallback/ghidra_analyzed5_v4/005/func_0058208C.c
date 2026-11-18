#include "ghidra_types.h"

extern int func_0052A1D4(int param_1,int *param_2,char *param_3,int param_4);
extern int *DAT_0058209c;

// USA 0058208C <- EU 00582064 (Ghidra, non-matching)
// GLOBAL DAT_0058209c int *

int func_0058208C(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (*(char *)(*DAT_0058209c + 0x61) == '\0') {
    iVar1 = func_0052A1D4(*(int *)(param_1 + 0x40),param_2,(char *)(*DAT_0058209c + 0x18),param_3);
    return iVar1;
  }
  return 0;
}

