// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0036174C(int param_1,int param_2,int param_3);
extern int DAT_001cd1a0;
extern int *DAT_001cd1a4;

// USA 001CD15C <- EU 001CD15C (Ghidra, non-matching)
// GLOBAL DAT_001cd1a0 int
// GLOBAL DAT_001cd1a4 int *

void func_001CD15C(int param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x50c) != '\0') &&
     (iVar1 = func_0036174C(*DAT_001cd1a4,
                            (uint)*(byte *)(DAT_001cd1a0 + (uint)*(byte *)(param_1 + 0x4f9)),
                            param_1 + 0x4fc), iVar1 != 0)) {
    *(undefined1 *)(param_1 + 0x50c) = 0;
  }
  return;
}

