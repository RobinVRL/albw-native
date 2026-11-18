#include "ghidra_types.h"

extern int DAT_005ae9e8;
extern int DAT_005ae9ec;
extern int *DAT_005ae9f0;

// USA 005AE9C0 <- EU 005AE998 (Ghidra, non-matching)
// GLOBAL DAT_005ae9e8 int
// GLOBAL DAT_005ae9ec int
// GLOBAL DAT_005ae9f0 int *

void func_005AE9C0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = DAT_005ae9f0;
  iVar2 = DAT_005ae9ec;
  iVar1 = DAT_005ae9e8;
  *DAT_005ae9f0 = DAT_005ae9e8;
  piVar3[1] = iVar2;
  piVar3[2] = iVar1 + 0xd00;
  piVar3[3] = iVar2;
  piVar3[4] = iVar1 + 0x1600;
  piVar3[5] = iVar2;
  piVar3[6] = iVar1 + 0x1f00;
  piVar3[7] = iVar2;
  piVar3[8] = iVar1 + 0x2700;
  piVar3[9] = iVar2;
  piVar3[10] = iVar1 + 0x2f00;
  piVar3[0xb] = iVar2;
  return;
}

