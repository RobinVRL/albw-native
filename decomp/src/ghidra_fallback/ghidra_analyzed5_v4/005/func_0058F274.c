#include "ghidra_types.h"

extern int DAT_0058f260;

// USA 0058F274 <- EU 0058F24C (Ghidra, non-matching)
// GLOBAL DAT_0058f260 int

int func_0058F274(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0058f260;
  if (*(int *)(param_1 + -0x50) != 0) {
    iVar1 = *(int *)(param_1 + -0x50) + 0xc;
  }
  return iVar1;
}

