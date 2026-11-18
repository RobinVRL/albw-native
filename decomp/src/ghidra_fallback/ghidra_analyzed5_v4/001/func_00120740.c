#include "ghidra_types.h"

extern int func_00588BE4(int param_1);

// USA 00120740 <- EU 00120740 (Ghidra, function missing from the decomp table)

/* WARNING: Unknown calling convention */

void func_00120740(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = func_00588BE4(param_1);
  if (iVar1 == param_2) {
    *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x2e0) & 0xfffffffd;
  }
  return;
}

